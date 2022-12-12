//
// Created by galwe on 12/12/2022.
//

#include "Node.h"

// Node
Node::Node(TokenType type,std::string name,int value) {
    this->type=type;
    this->name=name;
    this->value=value;
}


// Exp
Exp::Exp(TokenType type,std::string name,int value): Node( type, name, value){}
Exp::Exp(const Node &exp): Node( exp.type, exp.name, exp.value){}
