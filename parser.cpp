//
// Created by galwe on 12/4/2022.
//

#include "parser.hpp"

// Node
Node::Node(TokenType type,std::string name,int value) {
    this->type=type;
    this->name=name;
    this->value=value;
}

// Exp
Exp::Exp(TokenType type,std::string name,int value): Node( type, name, value){}

// Table entry
table_entry::table_entry(std::string name,TokenType type,int offset,bool is_func, vector<TokenType>* arguments){
    this->type=type;
    this->name=name;
    this->offset=offset;
    this->arguments=arguments;
    this->is_func=is_func;
}

// Stacks
Stacks::Stacks(){
    tables_stack=new vector<vector<table_entry*>*>;
    offsets_stack= new stack<int>();
    whilecounter=0;
    tables_stack->push_back(new vector<table_entry*>());
    vector<TokenType>* args= new vector<TokenType> ();
    args->push_back(TOKEN_STRING);
    tables_stack->at(0)->push_back(new table_entry("print",TOKEN_UNDIF,0,true,args));
    args= new vector<TokenType> ();
    args->push_back(TOKEN_INT);
    tables_stack->at(0)->push_back(new table_entry("printi",TOKEN_UNDIF,0,true,args));
}
void Stacks::new_scope(){
    tables_stack->push_back(new vector<table_entry*>());
    if(offsets_stack->empty())
        offsets_stack->push(0);
    else
        offsets_stack->push(offsets_stack->top());
}
void Stacks::exit_scope(){
    tables_stack->pop_back();
    offsets_stack->pop();
}
void Stacks::new_entry(string name, TokenType type){
    int off=offsets_stack->top();
    offsets_stack->pop();
    tables_stack->back()->push_back(new table_entry(name,type,off));
    offsets_stack->push(off+1);
}
void Stacks::new_func(string name, TokenType type,vector<TokenType>* arguments){
    tables_stack->back()->push_back(new table_entry(name,type,0,true,arguments));
    new_scope();
    for(int i=0; i<arguments->size();i++)
        tables_stack->back()->push_back(new table_entry(name,type,-i-1));
}
bool Stacks::is_exsists(string name){
    for(int i=0; i<tables_stack->size();i++)
    {
        int size=tables_stack->at(i)->size();
        for(int j=0;j<size;j++)
            if(tables_stack->at(i)->at(j)->name==name)
                return true;
    }
    return false;
}
bool Stacks::is_func(string name){
    for(int i=0; i<tables_stack->size();i++)
    {
        int size=tables_stack->at(i)->size();
        for(int j=0;j<size;j++)
            if(tables_stack->at(i)->at(j)->name==name)
                return tables_stack->at(i)->at(j)->is_func;
    }
    return false;
}
TokenType Stacks::get_func_type(string name){
    for(int j=0;j<tables_stack->at(0)->size();j++)
        if(tables_stack->at(0)->at(j)->name==name)
            return tables_stack->at(j)->at(j)->type;
    return TOKEN_UNDIF;
}
TokenType Stacks::get_func_type()
{
    return tables_stack->at(0)->back()->type;
}
TokenType Stacks::get_type(string name)
{
    for(int i=0; i<tables_stack->size();i++)
    {
        int size=tables_stack->at(i)->size();
        for(int j=0;j<size;j++)
            if(tables_stack->at(i)->at(j)->name==name)
                return tables_stack->at(i)->at(j)->type;
    }
    return TOKEN_UNDIF;
}
vector<TokenType> Stacks::get_args(string name){
    for(int i=0; i<tables_stack->size();i++)
    {
        int size=tables_stack->at(i)->size();
        for(int j=0;j<size;j++)
            if(tables_stack->at(i)->at(j)->name==name)
                return *(tables_stack->at(i)->at(j)->arguments);
    }
    return {};
}

// FormalList
FormalList::FormalList(): Node( TOKEN_UNDIF, "", 0){
    this->args=new vector<pair<TokenType,string>>();
}

// Call
Call::Call(TokenType type,std::string name,int value): Node( type, name, value){
    this->args=new vector<pair<TokenType,string>>();
}

// ExpList
 ExpList::ExpList(): Node( TOKEN_UNDIF, "", 0){
    this->vars=new vector<Exp*>();
}
vector<string> ExpList::to_string_vector(){
    vector<string> new_vars= vector<string>();
    for(int i=0; i<this->vars->size();i++)
    {
        new_vars.push_back(vars->at(i)->name);
    }
    return  new_vars;
}