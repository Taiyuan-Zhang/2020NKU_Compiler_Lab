/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_MAIN_TAB_H_INCLUDED
# define YY_YY_MAIN_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ID = 258,
    INTEGER = 259,
    CONSTSTRING = 260,
    IF = 261,
    ELSE = 262,
    WHILE = 263,
    FOR = 264,
    INT = 265,
    VOID = 266,
    CHAR = 267,
    LPAREN = 268,
    RPAREN = 269,
    LBRACE = 270,
    RBRACE = 271,
    SEMICOLON = 272,
    LBRACKET = 273,
    RBRACKET = 274,
    TRUE = 275,
    FALSE = 276,
    ADD = 277,
    ASSIGN = 278,
    EQUAL = 279,
    NOT = 280,
    MINUS = 281,
    MUL = 282,
    DIV = 283,
    MOD = 284,
    AND = 285,
    OR = 286,
    NOTEQUAL = 287,
    LESS = 288,
    GREATER = 289,
    LESSEQUAL = 290,
    GREATEREQUAL = 291,
    PRINTF = 292,
    SCANF = 293,
    MAIN = 294,
    RETURN = 295,
    COMMA = 296,
    AASIGN = 297,
    ADDASSIGN = 298,
    MINUSASSIGN = 299,
    MULASSIGN = 300,
    DIVASSIGN = 301,
    MODASSIGN = 302,
    BANDASSIGN = 303,
    BEORASSIGN = 304,
    BORASSIGN = 305,
    BOR = 306,
    BAND = 307,
    BEOR = 308,
    BNEGATION = 309,
    UMINUS = 310,
    ADDRESS_OF = 311,
    ADDONE = 312,
    SL = 313,
    SR = 314,
    LOWER_THEN_ELSE = 315
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MAIN_TAB_H_INCLUDED  */
