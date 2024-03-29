/* -*- c -*- This FLex file was machine-generated by the BNF converter */
%option noyywrap
%{
#define yylval Dogelval
#define YY_BUFFER_APPEND Doge_BUFFER_APPEND
#define YY_BUFFER_RESET Doge_BUFFER_RESET
#define initialize_lexer Doge_initialize_lexer
#include <string.h>
#include "Parser.h"
#define YY_BUFFER_LENGTH 4096
extern int yy_mylinenumber ;
char YY_PARSED_STRING[YY_BUFFER_LENGTH];
void YY_BUFFER_APPEND(char *s)
{
  strcat(YY_PARSED_STRING, s); //Do something better here!
}
void YY_BUFFER_RESET(void)
{
  int x;
  for(x = 0; x < YY_BUFFER_LENGTH; x++)
    YY_PARSED_STRING[x] = 0;
}

%}

LETTER [a-zA-Z]
CAPITAL [A-Z]
SMALL [a-z]
DIGIT [0-9]
IDENT [a-zA-Z0-9'_]
%START YYINITIAL COMMENT CHAR CHARESC CHAREND STRING ESCAPED
%%

<YYINITIAL>"{"      	 return _SYMB_0;
<YYINITIAL>"}"      	 return _SYMB_1;
<YYINITIAL>"::"      	 return _SYMB_2;
<YYINITIAL>";"      	 return _SYMB_3;
<YYINITIAL>"such void"      	 return _SYMB_4;
<YYINITIAL>"such char"      	 return _SYMB_5;
<YYINITIAL>"such short"      	 return _SYMB_6;
<YYINITIAL>"such int"      	 return _SYMB_7;
<YYINITIAL>"such long"      	 return _SYMB_8;
<YYINITIAL>"such float"      	 return _SYMB_9;
<YYINITIAL>"such double"      	 return _SYMB_10;
<YYINITIAL>"such signed"      	 return _SYMB_11;
<YYINITIAL>"such unsigned"      	 return _SYMB_12;
<YYINITIAL>"such typedef"      	 return _SYMB_13;
<YYINITIAL>"such const"      	 return _SYMB_14;
<YYINITIAL>","      	 return _SYMB_15;
<YYINITIAL>":"      	 return _SYMB_16;
<YYINITIAL>"("      	 return _SYMB_17;
<YYINITIAL>")"      	 return _SYMB_18;
<YYINITIAL>"["      	 return _SYMB_19;
<YYINITIAL>"]"      	 return _SYMB_20;
<YYINITIAL>"*"      	 return _SYMB_21;
<YYINITIAL>"..."      	 return _SYMB_22;
<YYINITIAL>"?"      	 return _SYMB_23;
<YYINITIAL>"||"      	 return _SYMB_24;
<YYINITIAL>"&&"      	 return _SYMB_25;
<YYINITIAL>"|"      	 return _SYMB_26;
<YYINITIAL>"^"      	 return _SYMB_27;
<YYINITIAL>"&"      	 return _SYMB_28;
<YYINITIAL>"=="      	 return _SYMB_29;
<YYINITIAL>"!="      	 return _SYMB_30;
<YYINITIAL>"<"      	 return _SYMB_31;
<YYINITIAL>">"      	 return _SYMB_32;
<YYINITIAL>"<="      	 return _SYMB_33;
<YYINITIAL>">="      	 return _SYMB_34;
<YYINITIAL>"<<"      	 return _SYMB_35;
<YYINITIAL>">>"      	 return _SYMB_36;
<YYINITIAL>"+"      	 return _SYMB_37;
<YYINITIAL>"-"      	 return _SYMB_38;
<YYINITIAL>"/"      	 return _SYMB_39;
<YYINITIAL>"%"      	 return _SYMB_40;
<YYINITIAL>"++"      	 return _SYMB_41;
<YYINITIAL>"--"      	 return _SYMB_42;
<YYINITIAL>"."      	 return _SYMB_43;
<YYINITIAL>"->"      	 return _SYMB_44;
<YYINITIAL>"~"      	 return _SYMB_45;
<YYINITIAL>"*="      	 return _SYMB_46;
<YYINITIAL>"/="      	 return _SYMB_47;
<YYINITIAL>"%="      	 return _SYMB_48;
<YYINITIAL>"+="      	 return _SYMB_49;
<YYINITIAL>"-="      	 return _SYMB_50;
<YYINITIAL>"<<="      	 return _SYMB_51;
<YYINITIAL>">>="      	 return _SYMB_52;
<YYINITIAL>"&="      	 return _SYMB_53;
<YYINITIAL>"^="      	 return _SYMB_54;
<YYINITIAL>"|="      	 return _SYMB_55;
<YYINITIAL>"Typedef_name"      	 return _SYMB_56;
<YYINITIAL>"amaze"      	 return _SYMB_57;
<YYINITIAL>"auto"      	 return _SYMB_58;
<YYINITIAL>"break"      	 return _SYMB_59;
<YYINITIAL>"case"      	 return _SYMB_60;
<YYINITIAL>"continue"      	 return _SYMB_61;
<YYINITIAL>"default"      	 return _SYMB_62;
<YYINITIAL>"do"      	 return _SYMB_63;
<YYINITIAL>"doge"      	 return _SYMB_64;
<YYINITIAL>"else"      	 return _SYMB_65;
<YYINITIAL>"enum"      	 return _SYMB_66;
<YYINITIAL>"extern"      	 return _SYMB_67;
<YYINITIAL>"for"      	 return _SYMB_68;
<YYINITIAL>"goto"      	 return _SYMB_69;
<YYINITIAL>"if"      	 return _SYMB_70;
<YYINITIAL>"iz"      	 return _SYMB_71;
<YYINITIAL>"new"      	 return _SYMB_72;
<YYINITIAL>"not"      	 return _SYMB_73;
<YYINITIAL>"register"      	 return _SYMB_74;
<YYINITIAL>"sizeof"      	 return _SYMB_75;
<YYINITIAL>"stahp"      	 return _SYMB_76;
<YYINITIAL>"static"      	 return _SYMB_77;
<YYINITIAL>"struct"      	 return _SYMB_78;
<YYINITIAL>"such"      	 return _SYMB_79;
<YYINITIAL>"switch"      	 return _SYMB_80;
<YYINITIAL>"union"      	 return _SYMB_81;
<YYINITIAL>"very"      	 return _SYMB_82;
<YYINITIAL>"volatile"      	 return _SYMB_83;
<YYINITIAL>"while"      	 return _SYMB_84;
<YYINITIAL>"wow"      	 return _SYMB_85;

<YYINITIAL>"//"[^\n]*\n     ++yy_mylinenumber; 	 /* BNFC single-line comment */;
<YYINITIAL>"#"[^\n]*\n     ++yy_mylinenumber; 	 /* BNFC single-line comment */;
<YYINITIAL>"/*"      	 BEGIN COMMENT;
<COMMENT>"*/"      	 BEGIN YYINITIAL;
<COMMENT>.      	 /* BNFC multi-line comment */;
<COMMENT>[\n]    ++yy_mylinenumber ; 	 /* BNFC multi-line comment */;

<YYINITIAL>[123456789]{DIGIT}*(u|U)     	 yylval.string_ = strdup(yytext); return _SYMB_86;
<YYINITIAL>[123456789]{DIGIT}*(l|L)     	 yylval.string_ = strdup(yytext); return _SYMB_87;
<YYINITIAL>[123456789]{DIGIT}*(ul|UL)     	 yylval.string_ = strdup(yytext); return _SYMB_88;
<YYINITIAL>0(x|X)({DIGIT}|[abcdef]|[ABCDEF])+     	 yylval.string_ = strdup(yytext); return _SYMB_89;
<YYINITIAL>0(x|X)({DIGIT}|[abcdef]|[ABCDEF])+(u|U)     	 yylval.string_ = strdup(yytext); return _SYMB_90;
<YYINITIAL>0(x|X)({DIGIT}|[abcdef]|[ABCDEF])+(l|L)     	 yylval.string_ = strdup(yytext); return _SYMB_91;
<YYINITIAL>0(x|X)({DIGIT}|[abcdef]|[ABCDEF])+(ul|UL)     	 yylval.string_ = strdup(yytext); return _SYMB_92;
<YYINITIAL>0[01234567]*     	 yylval.string_ = strdup(yytext); return _SYMB_93;
<YYINITIAL>0[01234567]*(u|U)     	 yylval.string_ = strdup(yytext); return _SYMB_94;
<YYINITIAL>0[01234567]*(l|L)     	 yylval.string_ = strdup(yytext); return _SYMB_95;
<YYINITIAL>0[01234567]*(ul|UL)     	 yylval.string_ = strdup(yytext); return _SYMB_96;
<YYINITIAL>({DIGIT}+\.|\.{DIGIT}+)((e|E)\-?{DIGIT}+)?|{DIGIT}+(e|E)\-?{DIGIT}+|{DIGIT}+\.{DIGIT}+E\-?{DIGIT}+     	 yylval.string_ = strdup(yytext); return _SYMB_97;
<YYINITIAL>({DIGIT}+\.{DIGIT}+|{DIGIT}+\.|\.{DIGIT}+)((e|E)\-?{DIGIT}+)?(f|F)|{DIGIT}+(e|E)\-?{DIGIT}+(f|F)     	 yylval.string_ = strdup(yytext); return _SYMB_98;
<YYINITIAL>({DIGIT}+\.{DIGIT}+|{DIGIT}+\.|\.{DIGIT}+)((e|E)\-?{DIGIT}+)?(l|L)|{DIGIT}+(e|E)\-?{DIGIT}+(l|L)     	 yylval.string_ = strdup(yytext); return _SYMB_99;
<YYINITIAL>"\""      	 BEGIN STRING;
<STRING>\\      	 BEGIN ESCAPED;
<STRING>\"      	 yylval.string_ = strdup(YY_PARSED_STRING); YY_BUFFER_RESET(); BEGIN YYINITIAL; return _STRING_;
<STRING>.      	 YY_BUFFER_APPEND(yytext);
<ESCAPED>n      	 YY_BUFFER_APPEND("\n"); BEGIN STRING;
<ESCAPED>\"      	 YY_BUFFER_APPEND("\""); BEGIN STRING ;
<ESCAPED>\\      	 YY_BUFFER_APPEND("\\"); BEGIN STRING;
<ESCAPED>t       	 YY_BUFFER_APPEND("\t"); BEGIN STRING;
<ESCAPED>.       	 YY_BUFFER_APPEND(yytext); BEGIN STRING;
<YYINITIAL>"'" 	BEGIN CHAR;
<CHAR>\\      	 BEGIN CHARESC;
<CHAR>[^']      	 BEGIN CHAREND; yylval.char_ = yytext[0]; return _CHAR_;
<CHARESC>n      	 BEGIN CHAREND; yylval.char_ = '\n'; return _CHAR_;
<CHARESC>t      	 BEGIN CHAREND; yylval.char_ = '\t'; return _CHAR_;
<CHARESC>.      	 BEGIN CHAREND; yylval.char_ = yytext[0]; return _CHAR_;
<CHAREND>"'"      	 BEGIN YYINITIAL;
<YYINITIAL>{DIGIT}+"."{DIGIT}+("e"(\-)?{DIGIT}+)?      	 yylval.double_ = atof(yytext); return _DOUBLE_;
<YYINITIAL>{DIGIT}+      	 yylval.int_ = atoi(yytext); return _INTEGER_;
<YYINITIAL>{LETTER}{IDENT}*      	 yylval.string_ = strdup(yytext); return _IDENT_;
\n ++yy_mylinenumber ;
<YYINITIAL>[ \t\r\n\f]      	 /* ignore white space. */;
<YYINITIAL>.      	 return _ERROR_;
%%
void initialize_lexer(FILE *inp) { yyrestart(inp); BEGIN YYINITIAL; }
