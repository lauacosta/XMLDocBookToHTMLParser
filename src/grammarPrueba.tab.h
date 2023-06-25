
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TEXTO = 258,
     RUTA = 259,
     URL = 260,
     XLINK = 261,
     VIDEODATA = 262,
     IMAGEDATA = 263,
     DOCTYPE = 264,
     C_REF = 265,
     A_ARTICLE = 266,
     C_ARTICLE = 267,
     A_INFO = 268,
     C_INFO = 269,
     A_TITLE = 270,
     C_TITLE = 271,
     A_ABSTRACT = 272,
     C_ABSTRACT = 273,
     A_PARA = 274,
     C_PARA = 275,
     A_AUTHOR = 276,
     C_AUTHOR = 277,
     A_PERSONNAME = 278,
     C_PERSONNAME = 279,
     A_FIRSTNAME = 280,
     C_FIRSTNAME = 281,
     A_SURNAME = 282,
     C_SURNAME = 283,
     A_DATE = 284,
     C_DATE = 285,
     A_SECTION = 286,
     C_SECTION = 287,
     A_SIMSECTION = 288,
     C_SIMSECTION = 289,
     A_COPYRIGHT = 290,
     C_COPYRIGHT = 291,
     A_ADDRESS = 292,
     C_ADDRESS = 293,
     A_CITY = 294,
     C_CITY = 295,
     A_STATE = 296,
     C_STATE = 297,
     A_POSTCODE = 298,
     C_POSTCODE = 299,
     A_STREET = 300,
     C_STREET = 301,
     A_EMAIL = 302,
     C_EMAIL = 303,
     A_PHONE = 304,
     C_PHONE = 305,
     A_ITEMIZEDLIST = 306,
     C_ITEMIZEDLIST = 307,
     A_LISTITEM = 308,
     C_LISTITEM = 309,
     A_EMPHASIS = 310,
     C_EMPHASIS = 311,
     A_HOLDER = 312,
     C_HOLDER = 313,
     A_SIMPARA = 314,
     C_SIMPARA = 315,
     A_YEAR = 316,
     C_YEAR = 317,
     A_COMMENT = 318,
     C_COMMENT = 319,
     A_IMPORTANT = 320,
     C_IMPORTANT = 321,
     A_LINK = 322,
     C_LINK = 323,
     A_MEDIAOBJECT = 324,
     C_MEDIAOBJECT = 325,
     A_VIDEOOBJECT = 326,
     C_VIDEOOBJECT = 327,
     A_IMAGEOBJECT = 328,
     C_IMAGEOBJECT = 329,
     A_INFORMALTABLE = 330,
     C_INFORMALTABLE = 331,
     A_TGROUP = 332,
     C_TGROUP = 333,
     A_ROW = 334,
     C_ROW = 335,
     A_TABLE = 336,
     C_TABLE = 337,
     A_THEAD = 338,
     C_THEAD = 339,
     A_TFOOT = 340,
     C_TFOOT = 341,
     A_TBODY = 342,
     C_TBODY = 343,
     A_ENTRYTBL = 344,
     C_ENTRYTBL = 345,
     A_ENTRY = 346,
     C_ENTRY = 347
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 13 "grammarPrueba.y"
char* text;


/* Line 1676 of yacc.c  */
#line 148 "grammarPrueba.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


