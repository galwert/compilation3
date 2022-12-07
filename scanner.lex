
%{
#include <stdio.h>
#include "parser.tab.hpp"
#include "hw3_output.h"

#include "declarations.h"
%}

%option yylineno
%option noyywrap

id [A-Za-z][A-Za-z0-9]*
number (0|([1-9][0-9]*))
%%


void {return VOID;}
int {return INT;}
byte {return BYTE;}
b {return B;}
bool {return BOOL;}
and {return AND;}
or {return OR;}
not {return NOT;}
true {return TRUE;}
false {return FALSE;}
return {return RETURN;}
if {return IF;}
else {return ELSE;}
while {return WHILE;}
break {return BREAK;}
continue {return CONTINUE;}
; {return SC;}
, {return COMMA;}
\( {return LPAREN;}
\) {return RPAREN;}
\{ {return LBRACE;}
\} {return RBRACE;}
= {return ASSIGN;}
[<>][=]? { yylval.type = TOKEN_UNDIF;
        yylval.name = new std::string(yytext);
        return RELOP;}
[!=][=] {
        yylval.type = TOKEN_UNDIF;
        yylval.name = new std::string(yytext);
        return RELOP;}
[\*\/] {
        yylval.type = TOKEN_UNDIF;
        yylval.name = new std::string(yytext);
        return MULTI;}
[\-\+] {
        yylval.type = TOKEN_UNDIF;
        yylval.name = new std::string(yytext);
        return PLUS;}

{id} {
        yylval.type = TOKEN_ID;
        yylval.name = new std::string(yytext);
        return ID;}
{number} {
        yylval.type = TOKEN_INT;
        yylval.value = std::atoi(yytext);
        return NUM;}
\"([^\n\r\"\\]|\\[rnt\"\\])+\" {
        yylval.type = TOKEN_STRING;
        yylval.name = new std::string(yytext);
        return STRING;}

\/\/[^\r\n]*[\r|\n|\r\n]? {;}
[\t \n\r] {;}
. {output::errorLex(yylineno); exit(1);}

%%

