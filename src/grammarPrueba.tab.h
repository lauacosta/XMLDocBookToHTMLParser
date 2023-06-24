/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_GRAMMARPRUEBA_TAB_H_INCLUDED
# define YY_YY_GRAMMARPRUEBA_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    TEXTO = 258,                   /* TEXTO  */
    RUTA = 259,                    /* RUTA  */
    URL = 260,                     /* URL  */
    XLINK = 261,                   /* XLINK  */
    VIDEODATA = 262,               /* VIDEODATA  */
    IMAGEDATA = 263,               /* IMAGEDATA  */
    DOCTYPE = 264,                 /* DOCTYPE  */
    C_REF = 265,                   /* C_REF  */
    A_ARTICLE = 266,               /* A_ARTICLE  */
    C_ARTICLE = 267,               /* C_ARTICLE  */
    A_INFO = 268,                  /* A_INFO  */
    C_INFO = 269,                  /* C_INFO  */
    A_TITLE = 270,                 /* A_TITLE  */
    C_TITLE = 271,                 /* C_TITLE  */
    A_ABSTRACT = 272,              /* A_ABSTRACT  */
    C_ABSTRACT = 273,              /* C_ABSTRACT  */
    A_PARA = 274,                  /* A_PARA  */
    C_PARA = 275,                  /* C_PARA  */
    A_AUTHOR = 276,                /* A_AUTHOR  */
    C_AUTHOR = 277,                /* C_AUTHOR  */
    A_PERSONNAME = 278,            /* A_PERSONNAME  */
    C_PERSONNAME = 279,            /* C_PERSONNAME  */
    A_FIRSTNAME = 280,             /* A_FIRSTNAME  */
    C_FIRSTNAME = 281,             /* C_FIRSTNAME  */
    A_SURNAME = 282,               /* A_SURNAME  */
    C_SURNAME = 283,               /* C_SURNAME  */
    A_DATE = 284,                  /* A_DATE  */
    C_DATE = 285,                  /* C_DATE  */
    A_SECTION = 286,               /* A_SECTION  */
    C_SECTION = 287,               /* C_SECTION  */
    A_SIMSECTION = 288,            /* A_SIMSECTION  */
    C_SIMSECTION = 289,            /* C_SIMSECTION  */
    A_COPYRIGHT = 290,             /* A_COPYRIGHT  */
    C_COPYRIGHT = 291,             /* C_COPYRIGHT  */
    A_ADDRESS = 292,               /* A_ADDRESS  */
    C_ADDRESS = 293,               /* C_ADDRESS  */
    A_CITY = 294,                  /* A_CITY  */
    C_CITY = 295,                  /* C_CITY  */
    A_STATE = 296,                 /* A_STATE  */
    C_STATE = 297,                 /* C_STATE  */
    A_POSTCODE = 298,              /* A_POSTCODE  */
    C_POSTCODE = 299,              /* C_POSTCODE  */
    A_STREET = 300,                /* A_STREET  */
    C_STREET = 301,                /* C_STREET  */
    A_EMAIL = 302,                 /* A_EMAIL  */
    C_EMAIL = 303,                 /* C_EMAIL  */
    A_PHONE = 304,                 /* A_PHONE  */
    C_PHONE = 305,                 /* C_PHONE  */
    A_ITEMIZEDLIST = 306,          /* A_ITEMIZEDLIST  */
    C_ITEMIZEDLIST = 307,          /* C_ITEMIZEDLIST  */
    A_LISTITEM = 308,              /* A_LISTITEM  */
    C_LISTITEM = 309,              /* C_LISTITEM  */
    A_EMPHASIS = 310,              /* A_EMPHASIS  */
    C_EMPHASIS = 311,              /* C_EMPHASIS  */
    A_HOLDER = 312,                /* A_HOLDER  */
    C_HOLDER = 313,                /* C_HOLDER  */
    A_SIMPARA = 314,               /* A_SIMPARA  */
    C_SIMPARA = 315,               /* C_SIMPARA  */
    A_YEAR = 316,                  /* A_YEAR  */
    C_YEAR = 317,                  /* C_YEAR  */
    A_COMMENT = 318,               /* A_COMMENT  */
    C_COMMENT = 319,               /* C_COMMENT  */
    A_IMPORTANT = 320,             /* A_IMPORTANT  */
    C_IMPORTANT = 321,             /* C_IMPORTANT  */
    A_LINK = 322,                  /* A_LINK  */
    C_LINK = 323,                  /* C_LINK  */
    A_MEDIAOBJECT = 324,           /* A_MEDIAOBJECT  */
    C_MEDIAOBJECT = 325,           /* C_MEDIAOBJECT  */
    A_VIDEOOBJECT = 326,           /* A_VIDEOOBJECT  */
    C_VIDEOOBJECT = 327,           /* C_VIDEOOBJECT  */
    A_IMAGEOBJECT = 328,           /* A_IMAGEOBJECT  */
    C_IMAGEOBJECT = 329,           /* C_IMAGEOBJECT  */
    A_INFORMALTABLE = 330,         /* A_INFORMALTABLE  */
    C_INFORMALTABLE = 331,         /* C_INFORMALTABLE  */
    A_TGROUP = 332,                /* A_TGROUP  */
    C_TGROUP = 333,                /* C_TGROUP  */
    A_ROW = 334,                   /* A_ROW  */
    C_ROW = 335,                   /* C_ROW  */
    A_TABLE = 336,                 /* A_TABLE  */
    C_TABLE = 337,                 /* C_TABLE  */
    A_THEAD = 338,                 /* A_THEAD  */
    C_THEAD = 339,                 /* C_THEAD  */
    A_TFOOT = 340,                 /* A_TFOOT  */
    C_TFOOT = 341,                 /* C_TFOOT  */
    A_TBODY = 342,                 /* A_TBODY  */
    C_TBODY = 343,                 /* C_TBODY  */
    A_ENTRYTBL = 344,              /* A_ENTRYTBL  */
    C_ENTRYTBL = 345,              /* C_ENTRYTBL  */
    A_ENTRY = 346,                 /* A_ENTRY  */
    C_ENTRY = 347                  /* C_ENTRY  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 9 "grammarPrueba.y"
char* text;

#line 159 "grammarPrueba.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_GRAMMARPRUEBA_TAB_H_INCLUDED  */
