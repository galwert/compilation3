//
// Created by galwe on 12/4/2022.
//

#ifndef HW3_DECLARATIONS_H
#define HW3_DECLARATIONS_H
#define YYSTYPE *Node
#include <string>
typedef enum
{
    TOKEN_UNDIF,
    TOKEN_INT,
    TOKEN_B,
    TOKEN_BOOL,
    TOKEN_STRING,
    TOKEN_ID
}TokenType;
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

};


public Number: class Node
{

};
#endif //HW3_DECLARATIONS_H
