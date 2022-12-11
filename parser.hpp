//
// Created by galwe on 12/4/2022.
//
#ifndef PARSER_H
#define PARSER_H
#define YYSTYPE Node*
#include <string>
#include <vector>
#include <stack>

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
                /*TOKEN_UNDIF*/TOKEN_UNDIF,
                /*TOKEN_INT*/TOKEN_UNDIF,
                /*TOKEN_B*/TOKEN_UNDIF,
                /*TOKEN_BOOL*/TOKEN_UNDIF,
                /*TOKEN_STRING*/TOKEN_UNDIF
        },
        {/*INT TO*/
                /*TOKEN_UNDIF*/TOKEN_UNDIF,
                /*TOKEN_INT*/TOKEN_INT,
                /*TOKEN_B*/TOKEN_INT,
                /*TOKEN_BOOL*/TOKEN_UNDIF,/*not sure*/
                /*TOKEN_STRING*/TOKEN_UNDIF
        },
        {/*B TO*/
                /*TOKEN_UNDIF*/TOKEN_UNDIF,
                /*TOKEN_INT*/TOKEN_B,
                /*TOKEN_B*/TOKEN_B,
                /*TOKEN_BOOL*/TOKEN_UNDIF,
                /*TOKEN_STRING*/TOKEN_UNDIF
        },
        {/*BOOL TO*/
                /*TOKEN_UNDIF*/TOKEN_UNDIF,
                /*TOKEN_INT*/TOKEN_UNDIF,
                /*TOKEN_B*/TOKEN_UNDIF,
                /*TOKEN_BOOL*/TOKEN_BOOL,
                /*TOKEN_STRING*/TOKEN_UNDIF
        },
        {/*STRING TO*/
                /*TOKEN_UNDIF*/TOKEN_UNDIF,
                /*TOKEN_INT*/TOKEN_UNDIF,
                /*TOKEN_B*/TOKEN_UNDIF,
                /*TOKEN_BOOL*/TOKEN_UNDIF,
                /*TOKEN_STRING*/TOKEN_STRING
        }
};

class Exp;

class Node
{
public:
    TokenType type;
    std::string name;
    int value;
    Node(TokenType type,std::string name,int value);
    virtual vector<pair<TokenType,string>>* get_args(){};
    virtual void set_args(vector<pair<TokenType,string>>* args){};
    virtual  vector<Exp>* get_vars(){};
    virtual void set_vars( vector<Exp*>* vars){};
    virtual vector<string>* to_string_vector(){};
};

class Exp : public Node
{
public:
    Exp(TokenType type,std::string name,int value);
    Exp(const Node &exp);
};

class table_entry
{
public:
    string name;
    TokenType type;
    int offset;
    vector<pair<TokenType,string>>* arguments;
    bool is_func;

    table_entry(std::string name,TokenType type,int offset=0, bool is_func=false, vector<pair<TokenType,string>>* arguments = new vector<pair<TokenType,string>>());
};

class Stacks
{
public:
    vector<vector<table_entry*>*> *tables_stack;
    stack<int> *offsets_stack;
    int whilecounter;
    Stacks();
    void new_scope();
    void exit_scope();
    void new_entry(string name, TokenType type);
    void new_func(string name, TokenType type,vector<pair<TokenType,string>>* arguments);
    bool is_exsists(string name);
    bool is_func(string name);
    TokenType get_func_type(string name);
    TokenType get_func_type();
    TokenType get_type(string name);
    vector<pair<TokenType,string>>* get_args(string name);
    vector<string>* get_string_args(string name);
};

class FormalList: public Node
{
public:
    vector<pair<TokenType,string>>* args;
    FormalList();
    vector<pair<TokenType,string>>* get_args();
    void set_args(vector<pair<TokenType,string>>* args);
};

class Call: public Node
{
public:
    vector<pair<TokenType,string>>* args;
    Call(TokenType type,std::string name,int value);
    vector<pair<TokenType,string>>* get_args();
    void set_args(vector<pair<TokenType,string>>* args);
};

class ExpList: public Node
{
public:
    vector<Exp>* vars;
    ExpList();
    vector<Exp>* get_vars();
    void set_vars( vector<Exp>* vars);
    vector<string>* to_string_vector();
};

#endif
