//
// Created by galwe on 12/4/2022.
//

#ifndef HW3_DECLARATIONS_H
#define HW3_DECLARATIONS_H
#define YYSTYPE *Node
#include <string>
#include <vecotr>
using namespace std;
typedef enum
{
    TOKEN_UNDIF=0,
    TOKEN_INT=1,
    TOKEN_B=2,
    TOKEN_BOOL=3,
    TOKEN_STRING=4,
    TOKEN_ID
}TokenType;


TokenType convert_table[5][5]={
    {/*UNDIF TO*/
        /*TOKEN_UNDIF*/,TOKEN_UNDIF,
        /*TOKEN_INT*/,TOKEN_UNDIF,
        /*TOKEN_B*/,TOKEN_UNDIF,
        /*TOKEN_BOOL*/,TOKEN_UNDIF,
        /*TOKEN_STRING*/,TOKEN_UNDIF
    },
    {/*INT TO*/
        /*TOKEN_UNDIF*/,TOKEN_UNDIF,
        /*TOKEN_INT*/,TOKEN_INT,
        /*TOKEN_B*/,TOKEN_INT,
        /*TOKEN_BOOL*/,TOKEN_UNDIF,/*not sure*/
        /*TOKEN_STRING*/,TOKEN_UNDIF
    },
    {/*B TO*/
        /*TOKEN_UNDIF*/,TOKEN_UNDIF,
        /*TOKEN_INT*/,TOKEN_B,
        /*TOKEN_B*/,TOKEN_B,
        /*TOKEN_BOOL*/,TOKEN_UNDIF,
        /*TOKEN_STRING*/,TOKEN_UNDIF
    },
    {/*BOOL TO*/
        /*TOKEN_UNDIF*/,TOKEN_UNDIF,
        /*TOKEN_INT*/,TOKEN_UNDIF,
        /*TOKEN_B*/,TOKEN_UNDIF,
        /*TOKEN_BOOL*/,TOKEN_BOOL,
        /*TOKEN_STRING*/,TOKEN_UNDIF
    },
    {/*STRING TO*/
        /*TOKEN_UNDIF*/,TOKEN_UNDIF,
        /*TOKEN_INT*/,TOKEN_UNDIF,
        /*TOKEN_B*/,TOKEN_UNDIF,
        /*TOKEN_BOOL*/,TOKEN_UNDIF,
        /*TOKEN_STRING*/,TOKEN_STRING
    }
};
class Node
{
public:
    TokenType type;
    std::string name;
    int VALUE;
    Node(TokenType type,std::string name,int VALUE)=default;
};

class Exp : class Node
{
    Exp(TokenType type,std::string name,int VALUE)=default;
};

class table_entry
{
    string name;
    TokenType type;
    int offset;
    vector<TokenType> arguments;
    bool is_func;
    table_entry(std::string name,TokenType type,int offset=0,
                bool is_func=false, vector<TokenType> arguments=new vector<TokenType>())=default;
};

class stacks
{
    vector<vector<table_entry>> tables_stack;
    stack<int> offsets_stack;
    int scopecounter;
    stacks()
    {
        tables_stack=new vector<vector<table_entry>>();
        offsets_stack= new stack<int>();
        scopecounter=0;
        tables_stack.push_back(new vector<table_entry>());
        vector<TokenType> args= new vector<TokenType> ();
        args.push_back(TOKEN_STRING);
        tables_stack.at(0).pushback(new table_entry("print",TOKEN_UNDIF,0,true,args))
        args= new vector<TokenType> ();
        args.push_back(TOKEN_INT);
        tables_stack.at(0).pushback(new table_entry("printi",TOKEN_UNDIF,0,true,args))
    }

    void new_scope()
    {
        scopecounter++;
        tables_stack.push_back(new vector<table_entry>());
        if(offsets_stack.empty())
        {
            offsets_stack.push(0);
        }
        else
        {
            offsets_stack.push(offsets_stack.top());
        }
    }
    void exit_scope()
    {scopecounter--;
        tables_stack.pop_back();

        offsets_stack.pop();
    }

    void new_entry(string name, TokenType type)
    {
        int off=offsets_stack.pop();
        tables_stack.back().push_back(new table_entry(name,type,off));
        offsets_stack.push(off+1);
    }
    void new_func(string name, TokenType type,vector<TokenType> arguments)
    {
        tables_stack.back().push_back(new table_entry(name,type,0,true,arguments));
        new_scope();
        for(int i=0; i<arguments.size;i++)
        {
            tables_stack.back().push_back(new table_entry(name,type,-i-1));
        }
    }
    bool is_exsists(string name)
    {
        for(int i=0; i<tables_stack.size;i++)
        {
            int size=tables_stack.at(i).size();
            for(int j=0;j<size;j++)
            {
                if(tables_stack.at(i).at(j).name==name)
                    return true;
            }
        }
        return false;
    }
    bool is_func(string name)
    {
        for(int i=0; i<tables_stack.size;i++)
        {
            int size=tables_stack.at(i).size();
            for(int j=0;j<size;j++)
            {
                if(tables_stack.at(i).at(j).name==name)
                   return tables_stack.at(i).at(j).is_func;
            }
        }
        return false;
    }

    TokenType get_func_type()
    {
            for(int j=0;j<tables_stack.at(0).size();j++)
            {
                if(tables_stack.at(0).at(j).name==name)
                    return tables_stack.at(i).at(j).type;
            }
        return false;
    }
    TokenType get_type(string name)
    {
        for(int i=0; i<tables_stack.size;i++)
        {
            int size=tables_stack.at(i).size();
            for(int j=0;j<size;j++)
            {
                if(tables_stack.at(i).at(j).name==name)
                    return tables_stack.at(i).at(j).type;
            }
        }
        return false;
    }

    vector<TokenType> get_args(string name)
    {
        for(int i=0; i<tables_stack.size;i++)
        {
            int size=tables_stack.at(i).size();
            for(int j=0;j<size;j++)
            {
                if(tables_stack.at(i).at(j).name==name)
                    return tables_stack.at(i).at(j).arguments;
            }
        }
        return false;
    }
}
class Number: public Node
{

};

class FormalList: public Node
{
    vector<pair<TokenType,string>> args;
    FormalList()=default;
};
class Call: public Node
{
    vector<pair<TokenType,string>> args;
};
class ExpList: public Node
{
    vector<Exp> vars;
    ExpList()=default;
};
class FuncDecl: public Node
{
    FormalList formals;
};
#endif //HW3_DECLARATIONS_H
