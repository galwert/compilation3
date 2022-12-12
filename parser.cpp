//
// Created by galwe on 12/4/2022.
//

#include "parser.hpp"



// Table entry
table_entry::table_entry(std::string name,TokenType type,int offset,bool is_func, vector<pair<TokenType,string>>* arguments){
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
    vector<pair<TokenType,string>>* args= new vector<pair<TokenType,string>> ();
args->push_back(pair<TokenType,string>(TOKEN_STRING,""));
    tables_stack->at(0)->push_back(new table_entry("print",TOKEN_UNDIF,0,true,args));
    args= new vector<pair<TokenType,string>> ();
    args->push_back(pair<TokenType,string>(TOKEN_INT,""));
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
void Stacks::new_func(string name, TokenType type,vector<pair<TokenType,string>>* arguments){
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
vector<pair<TokenType,string>>* Stacks::get_args(string name){
    for(int i=0; i<tables_stack->size();i++)
    {
        int size=tables_stack->at(i)->size();
        for(int j=0;j<size;j++)
            if(tables_stack->at(i)->at(j)->name==name)
                return tables_stack->at(i)->at(j)->arguments;
    }
    return {};
}
vector<string>* Stacks::get_string_args(string name){
    for(int i=0; i<tables_stack->size();i++)
    {
        int size=tables_stack->at(i)->size();
        for(int j=0;j<size;j++)
        {
            if(tables_stack->at(i)->at(j)->name==name)
            {
                vector<string>* string_args = new vector<string>();
                vector<pair<TokenType,string>>* arguments = tables_stack->at(i)->at(j)->arguments;
                for(int k = 0;k<arguments->size();k++)
                    string_args->push_back(arguments->at(k).second);
                return string_args;
            }
        }
    }
    return nullptr;
}

// FormalList
FormalList::FormalList(): Node( TOKEN_UNDIF, "", 0){
    this->args=new vector<pair<TokenType,string>>();
}
vector<pair<TokenType,string>>* FormalList::get_args()
{
    return this->args;
}
void FormalList::set_args(vector<pair<TokenType,string>>* args)
{
    this->args = args;
}

// Call
Call::Call(TokenType type,std::string name,int value): Node( type, name, value){
    this->args=new vector<pair<TokenType,string>>();
}
vector<pair<TokenType,string>>* Call::get_args()
{
    return this->args;
}
void Call::set_args(vector<pair<TokenType,string>>* args)
{
    this->args = args;
}

// ExpList
 ExpList::ExpList(): Node( TOKEN_UNDIF, "", 0){
    this->vars = new vector<Exp>();
}
vector<string>* ExpList::to_string_vector(){
    vector<string>* new_vars = new vector<string>();
    for(int i=0; i<this->vars->size();i++)
    {
        new_vars->push_back(vars->at(i).name);
    }
    return  new_vars;
}
void ExpList::set_vars( vector<Exp>* vars)
{
    this->vars = vars;
}
vector<Exp>* ExpList::get_vars()
{
    return this->vars;
}