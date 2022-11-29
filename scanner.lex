
%{
#include <stdio.h>
#include "parser.tab.hpp"
#include "output.hpp"
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
[<>][=]? {return RELOP;}
[!=][=] {return RELOP;}
[\*\/] {return MULTI;}
[\-\+] {return PLUS;}
{id} {return ID;}
{number} {return NUM;}
\"([^\n\r\"\\]|\\[rnt\"\\])+\" {return STRING;}

\/\/[^\r\n]*[\r|\n|\r\n]? {;}
[\t \n\r] {;}
. {output::errorLex(yylineno); exit(1);}

%%

