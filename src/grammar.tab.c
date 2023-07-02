/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "grammar.y"
   
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #define YYDEBUG 1
    void yyerror(const char *str);
    extern int yylex();
    FILE *salida;

#line 81 "grammar.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "grammar.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TEXTO = 3,                      /* TEXTO  */
  YYSYMBOL_URL = 4,                        /* URL  */
  YYSYMBOL_RUTA = 5,                       /* RUTA  */
  YYSYMBOL_XLINK = 6,                      /* XLINK  */
  YYSYMBOL_VIDEODATA = 7,                  /* VIDEODATA  */
  YYSYMBOL_IMAGEDATA = 8,                  /* IMAGEDATA  */
  YYSYMBOL_DOCTYPE = 9,                    /* DOCTYPE  */
  YYSYMBOL_C_REF = 10,                     /* C_REF  */
  YYSYMBOL_A_ARTICLE = 11,                 /* A_ARTICLE  */
  YYSYMBOL_C_ARTICLE = 12,                 /* C_ARTICLE  */
  YYSYMBOL_A_INFO = 13,                    /* A_INFO  */
  YYSYMBOL_C_INFO = 14,                    /* C_INFO  */
  YYSYMBOL_A_TITLE = 15,                   /* A_TITLE  */
  YYSYMBOL_C_TITLE = 16,                   /* C_TITLE  */
  YYSYMBOL_A_ABSTRACT = 17,                /* A_ABSTRACT  */
  YYSYMBOL_C_ABSTRACT = 18,                /* C_ABSTRACT  */
  YYSYMBOL_A_PARA = 19,                    /* A_PARA  */
  YYSYMBOL_C_PARA = 20,                    /* C_PARA  */
  YYSYMBOL_A_AUTHOR = 21,                  /* A_AUTHOR  */
  YYSYMBOL_C_AUTHOR = 22,                  /* C_AUTHOR  */
  YYSYMBOL_A_PERSONNAME = 23,              /* A_PERSONNAME  */
  YYSYMBOL_C_PERSONNAME = 24,              /* C_PERSONNAME  */
  YYSYMBOL_A_FIRSTNAME = 25,               /* A_FIRSTNAME  */
  YYSYMBOL_C_FIRSTNAME = 26,               /* C_FIRSTNAME  */
  YYSYMBOL_A_SURNAME = 27,                 /* A_SURNAME  */
  YYSYMBOL_C_SURNAME = 28,                 /* C_SURNAME  */
  YYSYMBOL_A_DATE = 29,                    /* A_DATE  */
  YYSYMBOL_C_DATE = 30,                    /* C_DATE  */
  YYSYMBOL_A_SECTION = 31,                 /* A_SECTION  */
  YYSYMBOL_C_SECTION = 32,                 /* C_SECTION  */
  YYSYMBOL_A_SIMSECTION = 33,              /* A_SIMSECTION  */
  YYSYMBOL_C_SIMSECTION = 34,              /* C_SIMSECTION  */
  YYSYMBOL_A_COPYRIGHT = 35,               /* A_COPYRIGHT  */
  YYSYMBOL_C_COPYRIGHT = 36,               /* C_COPYRIGHT  */
  YYSYMBOL_A_ADDRESS = 37,                 /* A_ADDRESS  */
  YYSYMBOL_C_ADDRESS = 38,                 /* C_ADDRESS  */
  YYSYMBOL_A_CITY = 39,                    /* A_CITY  */
  YYSYMBOL_C_CITY = 40,                    /* C_CITY  */
  YYSYMBOL_A_STATE = 41,                   /* A_STATE  */
  YYSYMBOL_C_STATE = 42,                   /* C_STATE  */
  YYSYMBOL_A_POSTCODE = 43,                /* A_POSTCODE  */
  YYSYMBOL_C_POSTCODE = 44,                /* C_POSTCODE  */
  YYSYMBOL_A_STREET = 45,                  /* A_STREET  */
  YYSYMBOL_C_STREET = 46,                  /* C_STREET  */
  YYSYMBOL_A_EMAIL = 47,                   /* A_EMAIL  */
  YYSYMBOL_C_EMAIL = 48,                   /* C_EMAIL  */
  YYSYMBOL_A_PHONE = 49,                   /* A_PHONE  */
  YYSYMBOL_C_PHONE = 50,                   /* C_PHONE  */
  YYSYMBOL_A_ITEMIZEDLIST = 51,            /* A_ITEMIZEDLIST  */
  YYSYMBOL_C_ITEMIZEDLIST = 52,            /* C_ITEMIZEDLIST  */
  YYSYMBOL_A_LISTITEM = 53,                /* A_LISTITEM  */
  YYSYMBOL_C_LISTITEM = 54,                /* C_LISTITEM  */
  YYSYMBOL_A_EMPHASIS = 55,                /* A_EMPHASIS  */
  YYSYMBOL_C_EMPHASIS = 56,                /* C_EMPHASIS  */
  YYSYMBOL_A_HOLDER = 57,                  /* A_HOLDER  */
  YYSYMBOL_C_HOLDER = 58,                  /* C_HOLDER  */
  YYSYMBOL_A_SIMPARA = 59,                 /* A_SIMPARA  */
  YYSYMBOL_C_SIMPARA = 60,                 /* C_SIMPARA  */
  YYSYMBOL_A_YEAR = 61,                    /* A_YEAR  */
  YYSYMBOL_C_YEAR = 62,                    /* C_YEAR  */
  YYSYMBOL_A_COMMENT = 63,                 /* A_COMMENT  */
  YYSYMBOL_C_COMMENT = 64,                 /* C_COMMENT  */
  YYSYMBOL_A_IMPORTANT = 65,               /* A_IMPORTANT  */
  YYSYMBOL_C_IMPORTANT = 66,               /* C_IMPORTANT  */
  YYSYMBOL_A_LINK = 67,                    /* A_LINK  */
  YYSYMBOL_C_LINK = 68,                    /* C_LINK  */
  YYSYMBOL_A_MEDIAOBJECT = 69,             /* A_MEDIAOBJECT  */
  YYSYMBOL_C_MEDIAOBJECT = 70,             /* C_MEDIAOBJECT  */
  YYSYMBOL_A_VIDEOOBJECT = 71,             /* A_VIDEOOBJECT  */
  YYSYMBOL_C_VIDEOOBJECT = 72,             /* C_VIDEOOBJECT  */
  YYSYMBOL_A_IMAGEOBJECT = 73,             /* A_IMAGEOBJECT  */
  YYSYMBOL_C_IMAGEOBJECT = 74,             /* C_IMAGEOBJECT  */
  YYSYMBOL_A_INFORMALTABLE = 75,           /* A_INFORMALTABLE  */
  YYSYMBOL_C_INFORMALTABLE = 76,           /* C_INFORMALTABLE  */
  YYSYMBOL_A_TGROUP = 77,                  /* A_TGROUP  */
  YYSYMBOL_C_TGROUP = 78,                  /* C_TGROUP  */
  YYSYMBOL_A_ROW = 79,                     /* A_ROW  */
  YYSYMBOL_C_ROW = 80,                     /* C_ROW  */
  YYSYMBOL_A_TABLE = 81,                   /* A_TABLE  */
  YYSYMBOL_C_TABLE = 82,                   /* C_TABLE  */
  YYSYMBOL_A_THEAD = 83,                   /* A_THEAD  */
  YYSYMBOL_C_THEAD = 84,                   /* C_THEAD  */
  YYSYMBOL_A_TFOOT = 85,                   /* A_TFOOT  */
  YYSYMBOL_C_TFOOT = 86,                   /* C_TFOOT  */
  YYSYMBOL_A_TBODY = 87,                   /* A_TBODY  */
  YYSYMBOL_C_TBODY = 88,                   /* C_TBODY  */
  YYSYMBOL_A_ENTRYTBL = 89,                /* A_ENTRYTBL  */
  YYSYMBOL_C_ENTRYTBL = 90,                /* C_ENTRYTBL  */
  YYSYMBOL_A_ENTRY = 91,                   /* A_ENTRY  */
  YYSYMBOL_C_ENTRY = 92,                   /* C_ENTRY  */
  YYSYMBOL_YYACCEPT = 93,                  /* $accept  */
  YYSYMBOL_sigma = 94,                     /* sigma  */
  YYSYMBOL_95_1 = 95,                      /* $@1  */
  YYSYMBOL_article = 96,                   /* article  */
  YYSYMBOL_97_2 = 97,                      /* $@2  */
  YYSYMBOL_recusection = 98,               /* recusection  */
  YYSYMBOL_content = 99,                   /* content  */
  YYSYMBOL_section = 100,                  /* section  */
  YYSYMBOL_101_3 = 101,                    /* $@3  */
  YYSYMBOL_simsection = 102,               /* simsection  */
  YYSYMBOL_103_4 = 103,                    /* $@4  */
  YYSYMBOL_infocontent = 104,              /* infocontent  */
  YYSYMBOL_info = 105,                     /* info  */
  YYSYMBOL_106_5 = 106,                    /* $@5  */
  YYSYMBOL_abstractcontent = 107,          /* abstractcontent  */
  YYSYMBOL_abstract = 108,                 /* abstract  */
  YYSYMBOL_addresscontent = 109,           /* addresscontent  */
  YYSYMBOL_110_6 = 110,                    /* $@6  */
  YYSYMBOL_address = 111,                  /* address  */
  YYSYMBOL_112_7 = 112,                    /* $@7  */
  YYSYMBOL_authorcontent = 113,            /* authorcontent  */
  YYSYMBOL_author = 114,                   /* author  */
  YYSYMBOL_115_8 = 115,                    /* $@8  */
  YYSYMBOL_copyrightyearcontent = 116,     /* copyrightyearcontent  */
  YYSYMBOL_copyrightholdercontent = 117,   /* copyrightholdercontent  */
  YYSYMBOL_copyright = 118,                /* copyright  */
  YYSYMBOL_119_9 = 119,                    /* $@9  */
  YYSYMBOL_120_10 = 120,                   /* $@10  */
  YYSYMBOL_121_11 = 121,                   /* $@11  */
  YYSYMBOL_titlecontent = 122,             /* titlecontent  */
  YYSYMBOL_123_12 = 123,                   /* $@12  */
  YYSYMBOL_titledoc = 124,                 /* titledoc  */
  YYSYMBOL_125_13 = 125,                   /* $@13  */
  YYSYMBOL_titlesec = 126,                 /* titlesec  */
  YYSYMBOL_127_14 = 127,                   /* $@14  */
  YYSYMBOL_simparacontent = 128,           /* simparacontent  */
  YYSYMBOL_129_15 = 129,                   /* $@15  */
  YYSYMBOL_simpara = 130,                  /* simpara  */
  YYSYMBOL_131_16 = 131,                   /* $@16  */
  YYSYMBOL_emphasis = 132,                 /* emphasis  */
  YYSYMBOL_133_17 = 133,                   /* $@17  */
  YYSYMBOL_comment = 134,                  /* comment  */
  YYSYMBOL_135_18 = 135,                   /* $@18  */
  YYSYMBOL_link = 136,                     /* link  */
  YYSYMBOL_137_19 = 137,                   /* $@19  */
  YYSYMBOL_paracontent = 138,              /* paracontent  */
  YYSYMBOL_139_20 = 139,                   /* $@20  */
  YYSYMBOL_para = 140,                     /* para  */
  YYSYMBOL_141_21 = 141,                   /* $@21  */
  YYSYMBOL_important = 142,                /* important  */
  YYSYMBOL_143_22 = 143,                   /* $@22  */
  YYSYMBOL_sharedcontent = 144,            /* sharedcontent  */
  YYSYMBOL_145_23 = 145,                   /* $@23  */
  YYSYMBOL_personame = 146,                /* personame  */
  YYSYMBOL_147_24 = 147,                   /* $@24  */
  YYSYMBOL_firstname = 148,                /* firstname  */
  YYSYMBOL_149_25 = 149,                   /* $@25  */
  YYSYMBOL_surname = 150,                  /* surname  */
  YYSYMBOL_151_26 = 151,                   /* $@26  */
  YYSYMBOL_street = 152,                   /* street  */
  YYSYMBOL_153_27 = 153,                   /* $@27  */
  YYSYMBOL_postcode = 154,                 /* postcode  */
  YYSYMBOL_155_28 = 155,                   /* $@28  */
  YYSYMBOL_156_29 = 156,                   /* $@29  */
  YYSYMBOL_city = 157,                     /* city  */
  YYSYMBOL_158_30 = 158,                   /* $@30  */
  YYSYMBOL_phone = 159,                    /* phone  */
  YYSYMBOL_160_31 = 160,                   /* $@31  */
  YYSYMBOL_email = 161,                    /* email  */
  YYSYMBOL_162_32 = 162,                   /* $@32  */
  YYSYMBOL_date = 163,                     /* date  */
  YYSYMBOL_164_33 = 164,                   /* $@33  */
  YYSYMBOL_year = 165,                     /* year  */
  YYSYMBOL_166_34 = 166,                   /* $@34  */
  YYSYMBOL_holder = 167,                   /* holder  */
  YYSYMBOL_168_35 = 168,                   /* $@35  */
  YYSYMBOL_state = 169,                    /* state  */
  YYSYMBOL_170_36 = 170,                   /* $@36  */
  YYSYMBOL_mediaobjectcontent = 171,       /* mediaobjectcontent  */
  YYSYMBOL_mediaobject = 172,              /* mediaobject  */
  YYSYMBOL_imageobject = 173,              /* imageobject  */
  YYSYMBOL_174_37 = 174,                   /* $@37  */
  YYSYMBOL_videoobject = 175,              /* videoobject  */
  YYSYMBOL_176_38 = 176,                   /* $@38  */
  YYSYMBOL_videodata = 177,                /* videodata  */
  YYSYMBOL_178_39 = 178,                   /* $@39  */
  YYSYMBOL_179_40 = 179,                   /* $@40  */
  YYSYMBOL_imagedata = 180,                /* imagedata  */
  YYSYMBOL_181_41 = 181,                   /* $@41  */
  YYSYMBOL_182_42 = 182,                   /* $@42  */
  YYSYMBOL_itemizedlist = 183,             /* itemizedlist  */
  YYSYMBOL_184_43 = 184,                   /* $@43  */
  YYSYMBOL_listitemrecu = 185,             /* listitemrecu  */
  YYSYMBOL_listitem = 186,                 /* listitem  */
  YYSYMBOL_187_44 = 187,                   /* $@44  */
  YYSYMBOL_informaltablecontent = 188,     /* informaltablecontent  */
  YYSYMBOL_informaltable = 189,            /* informaltable  */
  YYSYMBOL_tgroup = 190,                   /* tgroup  */
  YYSYMBOL_table = 191,                    /* table  */
  YYSYMBOL_tablecontent = 192,             /* tablecontent  */
  YYSYMBOL_thead = 193,                    /* thead  */
  YYSYMBOL_tbody = 194,                    /* tbody  */
  YYSYMBOL_tfoot = 195,                    /* tfoot  */
  YYSYMBOL_rowcontent = 196,               /* rowcontent  */
  YYSYMBOL_row = 197,                      /* row  */
  YYSYMBOL_entrycontent = 198,             /* entrycontent  */
  YYSYMBOL_199_45 = 199,                   /* $@45  */
  YYSYMBOL_entry = 200,                    /* entry  */
  YYSYMBOL_entrytbl = 201,                 /* entrytbl  */
  YYSYMBOL_xlink = 202,                    /* xlink  */
  YYSYMBOL_203_46 = 203                    /* $@46  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   832

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  111
/* YYNRULES -- Number of rules.  */
#define YYNRULES  259
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  381

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   347


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    63,    63,    63,    67,    67,    71,    72,    73,    77,
      77,    78,    78,    79,    79,    80,    80,    81,    81,    82,
      82,    83,    83,    84,    84,    85,    85,    86,    86,    90,
      90,    94,    94,    98,    98,    99,    99,   100,   100,   101,
     101,   102,   102,   103,   103,   107,   108,   108,   112,   112,
     113,   113,   117,   121,   121,   121,   122,   122,   123,   123,
     124,   124,   125,   125,   126,   126,   127,   127,   131,   131,
     135,   136,   137,   138,   139,   140,   144,   144,   148,   149,
     150,   154,   154,   158,   158,   159,   159,   159,   163,   163,
     164,   164,   165,   165,   166,   166,   167,   167,   167,   171,
     172,   172,   176,   177,   177,   181,   181,   182,   182,   182,
     183,   183,   184,   184,   185,   185,   186,   186,   187,   187,
     188,   188,   192,   192,   196,   196,   200,   200,   204,   204,
     208,   208,   209,   209,   210,   210,   211,   211,   212,   212,
     213,   213,   214,   214,   215,   215,   216,   216,   217,   217,
     218,   218,   219,   219,   219,   223,   223,   227,   227,   231,
     231,   232,   232,   233,   233,   234,   234,   235,   235,   235,
     239,   239,   243,   243,   247,   247,   251,   251,   255,   255,
     255,   259,   259,   263,   263,   267,   267,   271,   271,   275,
     275,   279,   279,   283,   283,   287,   288,   289,   293,   294,
     298,   298,   302,   302,   306,   306,   307,   307,   311,   311,
     312,   312,   316,   316,   320,   321,   325,   325,   329,   329,
     330,   330,   334,   338,   339,   340,   341,   345,   349,   349,
     353,   357,   361,   365,   365,   366,   366,   370,   374,   374,
     374,   375,   375,   376,   376,   377,   377,   378,   378,   379,
     379,   380,   380,   381,   381,   385,   389,   390,   394,   394
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "TEXTO", "URL", "RUTA",
  "XLINK", "VIDEODATA", "IMAGEDATA", "DOCTYPE", "C_REF", "A_ARTICLE",
  "C_ARTICLE", "A_INFO", "C_INFO", "A_TITLE", "C_TITLE", "A_ABSTRACT",
  "C_ABSTRACT", "A_PARA", "C_PARA", "A_AUTHOR", "C_AUTHOR", "A_PERSONNAME",
  "C_PERSONNAME", "A_FIRSTNAME", "C_FIRSTNAME", "A_SURNAME", "C_SURNAME",
  "A_DATE", "C_DATE", "A_SECTION", "C_SECTION", "A_SIMSECTION",
  "C_SIMSECTION", "A_COPYRIGHT", "C_COPYRIGHT", "A_ADDRESS", "C_ADDRESS",
  "A_CITY", "C_CITY", "A_STATE", "C_STATE", "A_POSTCODE", "C_POSTCODE",
  "A_STREET", "C_STREET", "A_EMAIL", "C_EMAIL", "A_PHONE", "C_PHONE",
  "A_ITEMIZEDLIST", "C_ITEMIZEDLIST", "A_LISTITEM", "C_LISTITEM",
  "A_EMPHASIS", "C_EMPHASIS", "A_HOLDER", "C_HOLDER", "A_SIMPARA",
  "C_SIMPARA", "A_YEAR", "C_YEAR", "A_COMMENT", "C_COMMENT", "A_IMPORTANT",
  "C_IMPORTANT", "A_LINK", "C_LINK", "A_MEDIAOBJECT", "C_MEDIAOBJECT",
  "A_VIDEOOBJECT", "C_VIDEOOBJECT", "A_IMAGEOBJECT", "C_IMAGEOBJECT",
  "A_INFORMALTABLE", "C_INFORMALTABLE", "A_TGROUP", "C_TGROUP", "A_ROW",
  "C_ROW", "A_TABLE", "C_TABLE", "A_THEAD", "C_THEAD", "A_TFOOT",
  "C_TFOOT", "A_TBODY", "C_TBODY", "A_ENTRYTBL", "C_ENTRYTBL", "A_ENTRY",
  "C_ENTRY", "$accept", "sigma", "$@1", "article", "$@2", "recusection",
  "content", "section", "$@3", "simsection", "$@4", "infocontent", "info",
  "$@5", "abstractcontent", "abstract", "addresscontent", "$@6", "address",
  "$@7", "authorcontent", "author", "$@8", "copyrightyearcontent",
  "copyrightholdercontent", "copyright", "$@9", "$@10", "$@11",
  "titlecontent", "$@12", "titledoc", "$@13", "titlesec", "$@14",
  "simparacontent", "$@15", "simpara", "$@16", "emphasis", "$@17",
  "comment", "$@18", "link", "$@19", "paracontent", "$@20", "para", "$@21",
  "important", "$@22", "sharedcontent", "$@23", "personame", "$@24",
  "firstname", "$@25", "surname", "$@26", "street", "$@27", "postcode",
  "$@28", "$@29", "city", "$@30", "phone", "$@31", "email", "$@32", "date",
  "$@33", "year", "$@34", "holder", "$@35", "state", "$@36",
  "mediaobjectcontent", "mediaobject", "imageobject", "$@37",
  "videoobject", "$@38", "videodata", "$@39", "$@40", "imagedata", "$@41",
  "$@42", "itemizedlist", "$@43", "listitemrecu", "listitem", "$@44",
  "informaltablecontent", "informaltable", "tgroup", "table",
  "tablecontent", "thead", "tbody", "tfoot", "rowcontent", "row",
  "entrycontent", "$@45", "entry", "entrytbl", "xlink", "$@46", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-156)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-241)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -1,  -156,    27,    36,  -156,  -156,  -156,    39,  -156,    48,
      90,  -156,   704,  -156,   148,   115,    90,  -156,  -156,  -156,
    -156,  -156,  -156,    39,   -43,    12,    44,   704,   704,   704,
     704,   704,   704,   704,   704,   704,   704,   115,  -156,  -156,
     110,   100,   148,   148,   148,   148,   148,   148,   109,  -156,
    -156,  -156,  -156,   116,   115,   115,   115,   115,    -8,   583,
     353,    80,   707,   707,    90,    26,   101,   -43,    60,   -43,
      55,    63,    12,  -156,  -156,   152,    44,    44,  -156,  -156,
    -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,   151,   193,
     232,   107,   168,  -156,  -156,  -156,  -156,  -156,  -156,  -156,
     115,   191,   232,   707,   707,  -156,  -156,  -156,  -156,  -156,
     154,    -8,    -8,   183,   583,   583,   583,   583,   583,   192,
     583,   583,   583,   583,   583,   583,   177,  -156,  -156,  -156,
    -156,  -156,   196,   353,   353,   353,   353,   353,   353,  -156,
      80,   352,  -156,   707,   176,   707,   707,   707,   707,   707,
     707,   175,   704,  -156,  -156,    26,    26,    12,    12,    12,
     117,   156,   164,  -156,  -156,  -156,   -37,   471,   180,    55,
      55,  -156,  -156,    39,    39,  -156,  -156,  -156,  -156,  -156,
    -156,   245,   193,   193,   193,   299,   232,   232,   232,   231,
     232,  -156,   233,    19,  -156,  -156,   266,   240,   235,   221,
    -156,  -156,  -156,   583,  -156,  -156,  -156,  -156,  -156,  -156,
    -156,  -156,  -156,  -156,  -156,  -156,   353,   232,   232,   289,
     232,   232,  -156,  -156,  -156,  -156,  -156,  -156,  -156,   704,
     246,    80,   707,   275,  -156,  -156,  -156,  -156,  -156,  -156,
    -156,  -156,  -156,   237,    39,    39,   234,    26,    26,   236,
     217,   224,   219,   156,   241,   247,  -156,   225,   242,   222,
     471,   471,   471,   471,   471,   471,   471,   243,  -156,  -156,
    -156,    90,    90,   232,   232,  -156,  -156,  -156,  -156,   232,
    -156,  -156,  -156,  -156,  -156,   232,  -156,  -156,  -156,  -156,
     276,   298,  -156,  -156,  -156,  -156,  -156,  -156,   271,   309,
    -156,   311,   308,   305,  -156,  -156,  -156,   333,  -156,   358,
     359,  -156,  -156,  -156,  -156,  -156,  -156,  -156,   310,  -156,
    -156,   296,  -156,   471,  -156,  -156,  -156,  -156,  -156,  -156,
    -156,  -156,   704,   704,   361,   362,  -156,   327,   232,  -156,
    -156,  -156,  -156,   347,  -156,  -156,  -156,   371,   396,   331,
     401,   336,  -156,  -156,  -156,    44,   373,  -156,  -156,  -156,
     355,  -156,  -156,   407,   412,  -156,   414,   424,  -156,   387,
    -156,  -156,   420,   421,   426,   428,  -156,  -156,  -156,  -156,
    -156
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,     2,     0,     0,     1,     4,     3,    45,    46,    99,
     102,   100,     0,   103,     0,     0,   102,   155,    68,   212,
     122,   126,   157,    45,     0,     0,     6,    28,    18,    16,
      26,    14,    12,    20,    10,    22,    24,     0,    76,   187,
      83,     0,    36,    38,    40,    44,    42,    34,    96,   258,
     185,   124,   128,     0,    89,    91,    95,    93,     0,     0,
       0,     0,     0,     0,   102,     0,     0,   219,     0,   221,
       0,     0,   229,    29,    31,     0,     6,     6,    27,    17,
      15,    25,    13,    11,    19,     9,    21,    23,     0,     0,
       0,     0,     0,    47,    35,    37,    39,    43,    41,    33,
       0,     0,     0,     0,     0,   101,    88,    90,    94,    92,
       0,    51,    49,   153,   144,   136,   130,   138,   132,     0,
     142,   134,   146,   140,   148,   150,    53,   181,   193,   178,
     176,   183,     0,    57,    67,    59,    63,    65,    61,   216,
     214,   108,   170,   118,     0,   105,   120,   112,   110,   116,
     114,     0,     0,   202,   200,   195,   195,     0,     0,     0,
       0,     0,     0,   218,   222,   220,     0,     0,     0,   234,
     236,   227,   228,    45,    45,     5,     7,     8,   104,   172,
     174,     0,    73,    75,    74,   169,   162,   160,   164,     0,
     166,   189,     0,    80,    86,    97,     0,     0,     0,     0,
      52,    50,    48,     0,   145,   137,   131,   139,   133,   156,
     143,   135,   147,   141,   149,   151,     0,     0,     0,     0,
       0,     0,    69,    56,    66,    58,    62,    64,    60,     0,
       0,   214,     0,     0,   119,   123,   106,   121,   113,   111,
     117,   115,   127,     0,    45,    45,     0,   195,   195,     0,
       0,     0,     0,     0,     0,     0,   226,     0,     0,   238,
     254,   248,   252,   246,   244,   250,   242,     0,   237,   233,
     235,   102,   102,     0,     0,    77,    72,    70,    71,     0,
     161,   159,   163,   188,   165,     0,    84,   191,    78,    79,
      82,     0,   259,   186,   125,   129,   154,    54,     0,     0,
     179,     0,     0,     0,   213,   215,   109,     0,   158,     0,
       0,   199,   197,   196,   198,   230,   232,   231,     0,   224,
     225,     0,   257,     0,   253,   247,   251,   245,   243,   249,
     241,   255,     0,     0,     0,     0,   168,     0,     0,    81,
      87,   182,   194,     0,   177,   184,   217,     0,   204,     0,
     208,     0,   223,   256,   239,     6,     0,   173,   175,   190,
       0,   180,   171,     0,     0,   203,     0,     0,   201,     0,
      32,   192,     0,     0,     0,     0,    30,   205,   207,   209,
     211
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -156,  -156,  -156,  -156,  -156,   -75,   -15,  -156,  -156,  -156,
    -156,   239,     0,  -156,   -70,    -7,   137,  -156,   338,  -156,
    -101,   301,  -156,   249,   149,  -156,  -156,  -156,  -156,    17,
    -156,  -156,  -156,     6,  -156,   -19,  -156,   -55,  -156,   378,
    -156,    76,  -156,   450,  -156,   -56,  -156,   -33,  -156,   206,
    -156,   -98,  -156,   -41,  -156,   210,  -156,   138,  -156,  -156,
    -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,   600,  -156,
    -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -132,   -14,
     399,  -156,   408,  -156,  -156,  -156,  -156,  -156,  -156,  -156,
     254,  -156,   244,   415,  -156,    94,    34,  -156,  -156,   -63,
     313,  -117,  -155,   -83,  -156,   162,  -156,  -156,  -156,   569,
    -156
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     3,     6,     7,    75,    26,    76,   173,    77,
     174,    41,     9,    10,   110,    27,   132,   216,    28,    60,
     181,   115,    89,   192,   289,    45,    91,    92,   291,    53,
     100,    12,    15,    14,    37,   144,   232,    29,    62,   186,
     103,    30,    63,   188,   104,   119,   203,    31,    59,    32,
      64,   189,   279,   148,   233,   183,   273,   184,   274,   133,
     220,   134,   219,   343,   135,   217,   136,   221,   121,   102,
      46,    90,   193,   285,   290,   338,   138,   218,   246,    33,
     247,   245,   248,   244,   349,   363,   364,   351,   366,   367,
      34,    61,   230,   231,   229,    68,    35,    69,    36,    71,
     160,   161,   162,   168,    72,   267,   323,   169,   170,   190,
     101
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      47,   176,   177,   111,   197,   254,   255,    42,     1,   172,
      67,    17,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    58,    65,   249,   112,    23,     4,    47,    47,
      47,    47,    47,    47,    66,    42,    42,    42,    42,    42,
      42,   201,   202,   253,   151,   122,   157,     5,   182,   258,
     159,    20,     8,    67,    88,    67,   111,   111,   204,   205,
     206,   207,   208,    11,   210,   211,   212,   213,   214,   215,
     152,   106,   107,   108,   109,    73,   287,    74,   112,   112,
     191,   276,   277,   278,   198,   199,   269,   270,   280,   281,
     282,    70,   284,   124,   250,   251,   252,   153,   318,   154,
     122,   122,   122,   122,   122,    13,   122,   122,   122,   122,
     122,   122,   261,   -85,    93,   312,   313,   195,    48,   298,
     299,    49,   301,   302,   234,   -98,   236,   237,   238,   239,
     240,   241,   105,   139,   263,   117,   164,   243,   146,   146,
     321,   182,   182,   182,   166,   171,   167,   296,   124,   124,
     124,   124,   124,   265,   124,   124,   124,   124,   124,   124,
     260,   163,    50,   165,   175,    16,   187,   178,   191,    38,
      51,   194,   200,   271,   272,   334,   335,    39,   187,   146,
     146,   336,    52,    40,   157,    18,   158,   337,   159,   122,
     117,   117,   117,   117,   117,   196,   117,   117,   117,   117,
     117,   117,   158,  -152,   159,   261,   261,   261,   261,   261,
     261,   261,   209,   306,   303,   -55,   142,    23,   179,   146,
     180,   146,   146,   146,   146,   146,   146,   263,   263,   263,
     263,   263,   263,   263,   222,   185,   235,   124,    49,   242,
     360,   158,   256,   262,   309,   310,   265,   265,   265,   265,
     265,   265,   265,   260,   260,   260,   260,   260,   260,   260,
     268,   283,   187,   187,   187,   120,   187,   275,   261,   286,
     223,   224,   225,   226,   227,   228,   292,   332,   333,   117,
     369,    94,    95,    96,    97,    98,    99,    51,   293,   295,
     263,   294,   300,   187,   187,    21,   187,   187,   304,    52,
     179,   315,  -167,   308,   311,  -167,   314,   317,   146,   265,
     316,   341,   159,   123,  -240,    44,   260,   355,   356,   319,
     120,   120,   120,   120,   120,   320,   120,   120,   120,   120,
     120,   120,   322,   287,   340,   331,   262,   262,   262,   262,
     262,   262,   262,    44,    44,    44,    44,    44,    44,   187,
     187,   342,    43,   297,  -167,   187,   126,   344,   345,   346,
     180,   187,  -167,   143,   143,   348,  -167,   350,   123,   123,
     123,   123,   123,   264,   123,   123,   123,   123,   123,   123,
      43,    43,    43,    43,    43,    43,   353,   357,   352,   359,
     358,   361,   127,    54,   128,   362,   129,   114,   130,   262,
      50,  -206,   131,   365,   143,   143,  -210,   370,  -107,   120,
     368,   372,  -107,   371,   187,    54,  -107,   373,   374,   376,
    -107,   266,   324,   325,   326,   327,   328,   329,   330,   375,
     377,   378,    54,    54,    54,    54,   379,   116,   380,   339,
     145,   145,   288,   307,   143,   347,   143,   143,   143,   143,
     143,   143,   114,   114,   114,   114,   114,   123,   114,   114,
     114,   114,   114,   114,   155,    55,   264,   264,   264,   264,
     264,   264,   264,   156,   259,   305,   140,     0,    54,   257,
       0,   145,   145,     0,     0,   354,     0,    55,    16,     0,
      17,     0,   116,   116,   116,   116,   116,     0,   116,   116,
     116,   116,   116,   116,    55,    55,    55,    55,     0,   118,
       0,     0,   147,   147,   266,   266,   266,   266,   266,   266,
     266,   145,    19,   145,   145,   145,   145,   145,   145,   264,
      20,     0,     0,   143,    21,     0,    22,     0,     0,     0,
      23,   114,     0,     0,     0,     0,     0,     0,     0,     0,
      55,     0,     0,   147,   147,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   118,   118,   118,   118,   118,     0,
     118,   118,   118,   118,   118,   118,     0,   266,     0,     0,
       0,   116,     0,     0,    57,     0,   113,     0,     0,    49,
       0,     0,     0,   147,     0,   147,   147,   147,   147,   147,
     147,     0,     0,     0,    38,     0,    57,     0,     0,     0,
     145,     0,     0,     0,     0,    56,     0,     0,     0,     0,
      18,     0,     0,    57,    57,    57,    57,     0,   125,     0,
      50,   150,   150,     0,    19,     0,     0,    56,    51,     0,
       0,     0,     0,     0,     0,     0,    21,     0,    22,     0,
      52,     0,    23,   118,    56,    56,    56,    56,    24,     0,
     137,     0,   149,   149,     0,     0,     0,     0,     0,    57,
       0,     0,   150,   150,     0,     0,     0,     0,     0,     0,
       0,     0,   147,   125,   125,   125,   125,   125,     0,   125,
     125,   125,   125,   125,   125,     0,     0,     0,     0,     0,
      56,     0,     0,   149,   149,     0,     0,     0,     0,     0,
     141,     0,   150,    49,   150,   150,   150,   150,   150,   150,
       0,    16,     0,    17,     0,     0,     0,     0,    38,     0,
     142,     0,     0,   137,   137,   137,   137,   137,   137,     0,
       0,    18,     0,   149,     0,   149,   149,   149,   149,   149,
     149,     0,     0,     0,    50,    19,     0,     0,     0,     0,
       0,     0,    51,    20,     0,     0,     0,    21,     0,    22,
      21,     0,   125,    23,    52,     0,     0,     0,     0,    24,
       0,     0,     0,     0,     0,    25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   150,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   137,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   149
};

static const yytype_int16 yycheck[] =
{
      14,    76,    77,    58,   102,   160,   161,    14,     9,    72,
      24,    19,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    16,    23,   156,    58,    69,     0,    42,    43,
      44,    45,    46,    47,    77,    42,    43,    44,    45,    46,
      47,   111,   112,   160,    63,    59,    83,    11,    89,   166,
      87,    59,    13,    67,    37,    69,   111,   112,   114,   115,
     116,   117,   118,    15,   120,   121,   122,   123,   124,   125,
      64,    54,    55,    56,    57,    31,    57,    33,   111,   112,
      61,   182,   183,   184,   103,   104,   169,   170,   186,   187,
     188,    79,   190,    59,   157,   158,   159,    71,   253,    73,
     114,   115,   116,   117,   118,    15,   120,   121,   122,   123,
     124,   125,   167,     3,    14,   247,   248,   100,     3,   217,
     218,     6,   220,   221,   143,    16,   145,   146,   147,   148,
     149,   150,    16,    53,   167,    59,    76,   152,    62,    63,
     257,   182,   183,   184,    89,    82,    91,   203,   114,   115,
     116,   117,   118,   167,   120,   121,   122,   123,   124,   125,
     167,    67,    47,    69,    12,    17,    90,    16,    61,    21,
      55,     3,    18,   173,   174,   273,   274,    29,   102,   103,
     104,   279,    67,    35,    83,    37,    85,   285,    87,   203,
     114,   115,   116,   117,   118,     4,   120,   121,   122,   123,
     124,   125,    85,    20,    87,   260,   261,   262,   263,   264,
     265,   266,    20,   232,   229,    38,    23,    69,    25,   143,
      27,   145,   146,   147,   148,   149,   150,   260,   261,   262,
     263,   264,   265,   266,    38,     3,    60,   203,     6,    64,
     338,    85,    78,   167,   244,   245,   260,   261,   262,   263,
     264,   265,   266,   260,   261,   262,   263,   264,   265,   266,
      80,    30,   186,   187,   188,    59,   190,    22,   323,    36,
     133,   134,   135,   136,   137,   138,    10,   271,   272,   203,
     355,    42,    43,    44,    45,    46,    47,    55,    48,    68,
     323,    56,     3,   217,   218,    63,   220,   221,    52,    67,
      25,    84,     3,    66,    70,     6,    70,    88,   232,   323,
      86,    40,    87,    59,    92,    14,   323,   332,   333,    78,
     114,   115,   116,   117,   118,    78,   120,   121,   122,   123,
     124,   125,    90,    57,    36,    92,   260,   261,   262,   263,
     264,   265,   266,    42,    43,    44,    45,    46,    47,   273,
     274,    42,    14,   216,    55,   279,     3,    46,    50,    54,
      27,   285,    63,    62,    63,     7,    67,     8,   114,   115,
     116,   117,   118,   167,   120,   121,   122,   123,   124,   125,
      42,    43,    44,    45,    46,    47,    90,    26,    78,    62,
      28,    44,    39,    15,    41,    24,    43,    59,    45,   323,
      47,     5,    49,    72,   103,   104,     5,    34,    56,   203,
      74,     4,    60,    58,   338,    37,    64,     5,     4,    32,
      68,   167,   260,   261,   262,   263,   264,   265,   266,     5,
      10,    10,    54,    55,    56,    57,    10,    59,    10,   290,
      62,    63,   193,   233,   143,   307,   145,   146,   147,   148,
     149,   150,   114,   115,   116,   117,   118,   203,   120,   121,
     122,   123,   124,   125,    65,    15,   260,   261,   262,   263,
     264,   265,   266,    65,     3,   231,    61,    -1,   100,   166,
      -1,   103,   104,    -1,    -1,   323,    -1,    37,    17,    -1,
      19,    -1,   114,   115,   116,   117,   118,    -1,   120,   121,
     122,   123,   124,   125,    54,    55,    56,    57,    -1,    59,
      -1,    -1,    62,    63,   260,   261,   262,   263,   264,   265,
     266,   143,    51,   145,   146,   147,   148,   149,   150,   323,
      59,    -1,    -1,   232,    63,    -1,    65,    -1,    -1,    -1,
      69,   203,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     100,    -1,    -1,   103,   104,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   114,   115,   116,   117,   118,    -1,
     120,   121,   122,   123,   124,   125,    -1,   323,    -1,    -1,
      -1,   203,    -1,    -1,    15,    -1,     3,    -1,    -1,     6,
      -1,    -1,    -1,   143,    -1,   145,   146,   147,   148,   149,
     150,    -1,    -1,    -1,    21,    -1,    37,    -1,    -1,    -1,
     232,    -1,    -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,
      37,    -1,    -1,    54,    55,    56,    57,    -1,    59,    -1,
      47,    62,    63,    -1,    51,    -1,    -1,    37,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    65,    -1,
      67,    -1,    69,   203,    54,    55,    56,    57,    75,    -1,
      60,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,   100,
      -1,    -1,   103,   104,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   232,   114,   115,   116,   117,   118,    -1,   120,
     121,   122,   123,   124,   125,    -1,    -1,    -1,    -1,    -1,
     100,    -1,    -1,   103,   104,    -1,    -1,    -1,    -1,    -1,
       3,    -1,   143,     6,   145,   146,   147,   148,   149,   150,
      -1,    17,    -1,    19,    -1,    -1,    -1,    -1,    21,    -1,
      23,    -1,    -1,   133,   134,   135,   136,   137,   138,    -1,
      -1,    37,    -1,   143,    -1,   145,   146,   147,   148,   149,
     150,    -1,    -1,    -1,    47,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    59,    -1,    -1,    -1,    63,    -1,    65,
      63,    -1,   203,    69,    67,    -1,    -1,    -1,    -1,    75,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   232,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   216,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   232
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    94,    95,     0,    11,    96,    97,    13,   105,
     106,    15,   124,    15,   126,   125,    17,    19,    37,    51,
      59,    63,    65,    69,    75,    81,    99,   108,   111,   130,
     134,   140,   142,   172,   183,   189,   191,   127,    21,    29,
      35,   104,   108,   111,   114,   118,   163,   172,     3,     6,
      47,    55,    67,   122,   132,   136,   161,   202,   126,   141,
     112,   184,   131,   135,   143,   105,    77,   172,   188,   190,
      79,   192,   197,    31,    33,    98,   100,   102,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,   122,   115,
     164,   119,   120,    14,   104,   104,   104,   104,   104,   104,
     123,   203,   162,   133,   137,    16,   122,   122,   122,   122,
     107,   130,   140,     3,   111,   114,   132,   134,   136,   138,
     142,   161,   172,   183,   189,   202,     3,    39,    41,    43,
      45,    49,   109,   152,   154,   157,   159,   161,   169,    53,
     186,     3,    23,   114,   128,   132,   134,   136,   146,   161,
     202,   128,   126,    71,    73,   173,   175,    83,    85,    87,
     193,   194,   195,   188,    76,   188,    89,    91,   196,   200,
     201,    82,   192,   101,   103,    12,    98,    98,    16,    25,
      27,   113,   146,   148,   150,     3,   132,   134,   136,   144,
     202,    61,   116,   165,     3,   122,     4,   144,   128,   128,
      18,   107,   107,   139,   138,   138,   138,   138,   138,    20,
     138,   138,   138,   138,   138,   138,   110,   158,   170,   155,
     153,   160,    38,   109,   109,   109,   109,   109,   109,   187,
     185,   186,   129,   147,   128,    60,   128,   128,   128,   128,
     128,   128,    64,    99,   176,   174,   171,   173,   175,   171,
     192,   192,   192,   194,   195,   195,    78,   193,   194,     3,
     108,   130,   134,   140,   142,   172,   183,   198,    80,   196,
     196,   105,   105,   149,   151,    22,   113,   113,   113,   145,
     144,   144,   144,    30,   144,   166,    36,    57,   116,   117,
     167,   121,    10,    48,    56,    68,   138,   109,   144,   144,
       3,   144,   144,    99,    52,   185,   128,   148,    66,   105,
     105,    70,   171,   171,    70,    84,    86,    88,   195,    78,
      78,   194,    90,   199,   198,   198,   198,   198,   198,   198,
     198,    92,   126,   126,   144,   144,   144,   144,   168,   117,
      36,    40,    42,   156,    46,    50,    54,   150,     7,   177,
       8,   180,    78,    90,   198,    99,    99,    26,    28,    62,
     144,    44,    24,   178,   179,    72,   181,   182,    74,    98,
      34,    58,     4,     5,     4,     5,    32,    10,    10,    10,
      10
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    95,    94,    97,    96,    98,    98,    98,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,   101,
     100,   103,   102,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   105,   106,   105,   107,   107,
     107,   107,   108,   110,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   112,   111,
     113,   113,   113,   113,   113,   113,   115,   114,   116,   116,
     116,   117,   117,   119,   118,   120,   121,   118,   122,   122,
     122,   122,   122,   122,   122,   122,   123,   122,   122,   124,
     125,   124,   126,   127,   126,   128,   128,   128,   129,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   131,   130,   133,   132,   135,   134,   137,   136,
     138,   138,   138,   138,   138,   138,   138,   138,   138,   138,
     138,   138,   138,   138,   138,   138,   138,   138,   138,   138,
     138,   138,   138,   139,   138,   141,   140,   143,   142,   144,
     144,   144,   144,   144,   144,   144,   144,   145,   144,   144,
     147,   146,   149,   148,   151,   150,   153,   152,   155,   156,
     154,   158,   157,   160,   159,   162,   161,   164,   163,   166,
     165,   168,   167,   170,   169,   171,   171,   171,   172,   172,
     174,   173,   176,   175,   178,   177,   179,   177,   181,   180,
     182,   180,   184,   183,   185,   185,   187,   186,   188,   188,
     188,   188,   189,   190,   190,   190,   190,   191,   192,   192,
     193,   194,   195,   196,   196,   196,   196,   197,   199,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   198,   198,   200,   201,   201,   203,   202
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     3,     0,     7,     0,     2,     2,     2,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     0,
       7,     0,     6,     2,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     0,     0,     5,     2,     1,
       2,     1,     4,     0,     3,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     0,     4,
       2,     2,     2,     1,     1,     1,     0,     4,     2,     2,
       1,     2,     1,     0,     4,     0,     0,     5,     2,     1,
       2,     1,     2,     1,     2,     1,     0,     3,     1,     0,
       0,     4,     0,     0,     4,     1,     2,     1,     0,     3,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     2,     0,     4,     0,     4,     0,     4,     0,     4,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     0,     3,     0,     4,     0,     5,     2,
       1,     2,     1,     2,     1,     2,     1,     0,     3,     1,
       0,     5,     0,     4,     0,     4,     0,     4,     0,     0,
       5,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     2,     2,     5,     5,
       0,     5,     0,     5,     0,     4,     0,     4,     0,     4,
       0,     4,     0,     5,     0,     2,     0,     4,     2,     1,
       2,     1,     3,     5,     4,     4,     3,     3,     2,     1,
       3,     3,     3,     2,     1,     2,     1,     3,     0,     3,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     3,     4,     3,     0,     4
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* $@1: %empty  */
#line 63 "grammar.y"
            {fprintf(salida,"<!DOCTYPE html>\n<html lang=\"en\">\n<body>\n\t");}
#line 1676 "grammar.tab.c"
    break;

  case 3: /* sigma: DOCTYPE $@1 article  */
#line 63 "grammar.y"
                                                                                         {fprintf(salida,"</body>\n</html>\n");}
#line 1682 "grammar.tab.c"
    break;

  case 4: /* $@2: %empty  */
#line 67 "grammar.y"
              {fprintf(salida,"<article>\n");}
#line 1688 "grammar.tab.c"
    break;

  case 5: /* article: A_ARTICLE $@2 info titledoc content recusection C_ARTICLE  */
#line 67 "grammar.y"
                                                                                          {fprintf(salida,"</article>\n");}
#line 1694 "grammar.tab.c"
    break;

  case 29: /* $@3: %empty  */
#line 90 "grammar.y"
              {fprintf(salida,"<section>\n");}
#line 1700 "grammar.tab.c"
    break;

  case 30: /* section: A_SECTION $@3 info titlesec content recusection C_SECTION  */
#line 90 "grammar.y"
                                                                                           {fprintf(salida,"</section>\n");}
#line 1706 "grammar.tab.c"
    break;

  case 31: /* $@4: %empty  */
#line 94 "grammar.y"
                 {fprintf(salida,"<section>\n");}
#line 1712 "grammar.tab.c"
    break;

  case 32: /* simsection: A_SIMSECTION $@4 info titlesec content C_SIMSECTION  */
#line 94 "grammar.y"
                                                                                     {fprintf(salida,"</section>\n");}
#line 1718 "grammar.tab.c"
    break;

  case 46: /* $@5: %empty  */
#line 108 "grammar.y"
             {fprintf(salida,"<div> \n <p style=\"background-color: green; color: white; font-size: 8pt;\">\n");}
#line 1724 "grammar.tab.c"
    break;

  case 47: /* info: A_INFO $@5 titlesec infocontent C_INFO  */
#line 108 "grammar.y"
                                                                                                                                              {fprintf(salida,"</p>\n</div>\n");}
#line 1730 "grammar.tab.c"
    break;

  case 53: /* $@6: %empty  */
#line 121 "grammar.y"
          {fprintf(salida, "%s",(yyvsp[0].text));}
#line 1736 "grammar.tab.c"
    break;

  case 55: /* addresscontent: TEXTO  */
#line 121 "grammar.y"
                                                                 {fprintf(salida, "%s",(yyvsp[0].text));}
#line 1742 "grammar.tab.c"
    break;

  case 68: /* $@7: %empty  */
#line 131 "grammar.y"
              {fprintf(salida,"<address>\n");}
#line 1748 "grammar.tab.c"
    break;

  case 69: /* address: A_ADDRESS $@7 addresscontent C_ADDRESS  */
#line 131 "grammar.y"
                                                                        {fprintf(salida,"</address>\n");}
#line 1754 "grammar.tab.c"
    break;

  case 76: /* $@8: %empty  */
#line 144 "grammar.y"
             {fprintf(salida,"<address>\n");}
#line 1760 "grammar.tab.c"
    break;

  case 77: /* author: A_AUTHOR $@8 authorcontent C_AUTHOR  */
#line 144 "grammar.y"
                                                                     {fprintf(salida,"</address>\n");}
#line 1766 "grammar.tab.c"
    break;

  case 83: /* $@9: %empty  */
#line 158 "grammar.y"
                {fprintf(salida,"<div>\n");}
#line 1772 "grammar.tab.c"
    break;

  case 84: /* copyright: A_COPYRIGHT $@9 copyrightyearcontent C_COPYRIGHT  */
#line 158 "grammar.y"
                                                                              {fprintf(salida,"</div>\n");}
#line 1778 "grammar.tab.c"
    break;

  case 85: /* $@10: %empty  */
#line 159 "grammar.y"
                {fprintf(salida,"<div>\n");}
#line 1784 "grammar.tab.c"
    break;

  case 86: /* $@11: %empty  */
#line 159 "grammar.y"
                                                   {fprintf(salida, "%s", (yyvsp[0].text));}
#line 1790 "grammar.tab.c"
    break;

  case 87: /* copyright: A_COPYRIGHT $@10 TEXTO $@11 C_COPYRIGHT  */
#line 159 "grammar.y"
                                                                                            {fprintf(salida,"</div>\n");}
#line 1796 "grammar.tab.c"
    break;

  case 96: /* $@12: %empty  */
#line 167 "grammar.y"
          {fprintf(salida, "%s",(yyvsp[0].text));}
#line 1802 "grammar.tab.c"
    break;

  case 98: /* titlecontent: TEXTO  */
#line 167 "grammar.y"
                                                                {fprintf(salida, "%s",(yyvsp[0].text));}
#line 1808 "grammar.tab.c"
    break;

  case 100: /* $@13: %empty  */
#line 172 "grammar.y"
              {fprintf(salida,"<h1>\n");}
#line 1814 "grammar.tab.c"
    break;

  case 101: /* titledoc: A_TITLE $@13 titlecontent C_TITLE  */
#line 172 "grammar.y"
                                                               {fprintf(salida,"</h1>\n");}
#line 1820 "grammar.tab.c"
    break;

  case 103: /* $@14: %empty  */
#line 177 "grammar.y"
              {fprintf(salida,"<h2>");}
#line 1826 "grammar.tab.c"
    break;

  case 104: /* titlesec: A_TITLE $@14 titlecontent C_TITLE  */
#line 177 "grammar.y"
                                                             {fprintf(salida,"</h2>\n");}
#line 1832 "grammar.tab.c"
    break;

  case 107: /* simparacontent: TEXTO  */
#line 182 "grammar.y"
          {fprintf(salida, "%s", (yyvsp[0].text));}
#line 1838 "grammar.tab.c"
    break;

  case 108: /* $@15: %empty  */
#line 182 "grammar.y"
                                                 {fprintf(salida, "%s", (yyvsp[0].text));}
#line 1844 "grammar.tab.c"
    break;

  case 122: /* $@16: %empty  */
#line 192 "grammar.y"
              {fprintf(salida,"<p>");}
#line 1850 "grammar.tab.c"
    break;

  case 123: /* simpara: A_SIMPARA $@16 simparacontent C_SIMPARA  */
#line 192 "grammar.y"
                                                                {fprintf(salida,"</p>\n");}
#line 1856 "grammar.tab.c"
    break;

  case 124: /* $@17: %empty  */
#line 196 "grammar.y"
               {fprintf(salida,"<div>\n<p><i>\n");}
#line 1862 "grammar.tab.c"
    break;

  case 125: /* emphasis: A_EMPHASIS $@17 simparacontent C_EMPHASIS  */
#line 196 "grammar.y"
                                                                              {fprintf(salida,"</i></p>\n</div>\n");}
#line 1868 "grammar.tab.c"
    break;

  case 126: /* $@18: %empty  */
#line 200 "grammar.y"
             {fprintf(salida, "<div>\n");}
#line 1874 "grammar.tab.c"
    break;

  case 127: /* comment: A_COMMENT $@18 simparacontent C_COMMENT  */
#line 200 "grammar.y"
                                                                    {fprintf(salida, "</div>\n");}
#line 1880 "grammar.tab.c"
    break;

  case 128: /* $@19: %empty  */
#line 204 "grammar.y"
           {fprintf(salida, "<a>");}
#line 1886 "grammar.tab.c"
    break;

  case 129: /* link: A_LINK $@19 simparacontent C_LINK  */
#line 204 "grammar.y"
                                                           {fprintf(salida, "</a>");}
#line 1892 "grammar.tab.c"
    break;

  case 152: /* paracontent: TEXTO  */
#line 219 "grammar.y"
        {fprintf(salida, "%s\n",(yyvsp[0].text));}
#line 1898 "grammar.tab.c"
    break;

  case 153: /* $@20: %empty  */
#line 219 "grammar.y"
                                                {fprintf(salida, "%s\n",(yyvsp[0].text));}
#line 1904 "grammar.tab.c"
    break;

  case 155: /* $@21: %empty  */
#line 223 "grammar.y"
          {fprintf(salida,"<p>");}
#line 1910 "grammar.tab.c"
    break;

  case 156: /* para: A_PARA $@21 paracontent C_PARA  */
#line 223 "grammar.y"
                                                       {fprintf(salida,"</p>\n");}
#line 1916 "grammar.tab.c"
    break;

  case 157: /* $@22: %empty  */
#line 227 "grammar.y"
                {fprintf(salida,"<div>\n<p><b>");}
#line 1922 "grammar.tab.c"
    break;

  case 158: /* important: A_IMPORTANT $@22 titlesec content C_IMPORTANT  */
#line 227 "grammar.y"
                                                                                {fprintf(salida,"</b></p>\n</div>\n");}
#line 1928 "grammar.tab.c"
    break;

  case 167: /* $@23: %empty  */
#line 235 "grammar.y"
          {fprintf(salida, "%s",(yyvsp[0].text));}
#line 1934 "grammar.tab.c"
    break;

  case 169: /* sharedcontent: TEXTO  */
#line 235 "grammar.y"
                                                                     {fprintf(salida, "%s",(yyvsp[0].text));}
#line 1940 "grammar.tab.c"
    break;

  case 170: /* $@24: %empty  */
#line 239 "grammar.y"
                 {fprintf(salida,"<p>");}
#line 1946 "grammar.tab.c"
    break;

  case 171: /* personame: A_PERSONNAME $@24 firstname surname C_PERSONNAME  */
#line 239 "grammar.y"
                                                                         {fprintf(salida,"</p>");}
#line 1952 "grammar.tab.c"
    break;

  case 172: /* $@25: %empty  */
#line 243 "grammar.y"
                {fprintf(salida,"<p>");}
#line 1958 "grammar.tab.c"
    break;

  case 173: /* firstname: A_FIRSTNAME $@25 sharedcontent C_FIRSTNAME  */
#line 243 "grammar.y"
                                                                   {fprintf(salida,"</p>\n");}
#line 1964 "grammar.tab.c"
    break;

  case 174: /* $@26: %empty  */
#line 247 "grammar.y"
              {fprintf(salida,"<p>");}
#line 1970 "grammar.tab.c"
    break;

  case 175: /* surname: A_SURNAME $@26 sharedcontent C_SURNAME  */
#line 247 "grammar.y"
                                                               {fprintf(salida,"</p>\n");}
#line 1976 "grammar.tab.c"
    break;

  case 176: /* $@27: %empty  */
#line 251 "grammar.y"
             {fprintf(salida,"<p>");}
#line 1982 "grammar.tab.c"
    break;

  case 177: /* street: A_STREET $@27 sharedcontent C_STREET  */
#line 251 "grammar.y"
                                                           {fprintf(salida,"</p>\n");}
#line 1988 "grammar.tab.c"
    break;

  case 178: /* $@28: %empty  */
#line 255 "grammar.y"
               {fprintf(salida,"<p>");}
#line 1994 "grammar.tab.c"
    break;

  case 179: /* $@29: %empty  */
#line 255 "grammar.y"
                                              {fprintf(salida, "%s",(yyvsp[0].text));}
#line 2000 "grammar.tab.c"
    break;

  case 180: /* postcode: A_POSTCODE $@28 TEXTO $@29 C_POSTCODE  */
#line 255 "grammar.y"
                                                                                      {fprintf(salida,"</p>\n");}
#line 2006 "grammar.tab.c"
    break;

  case 181: /* $@30: %empty  */
#line 259 "grammar.y"
           {fprintf(salida,"<p>");}
#line 2012 "grammar.tab.c"
    break;

  case 182: /* city: A_CITY $@30 sharedcontent C_CITY  */
#line 259 "grammar.y"
                                                         {fprintf(salida,"</p>\n");}
#line 2018 "grammar.tab.c"
    break;

  case 183: /* $@31: %empty  */
#line 263 "grammar.y"
            {fprintf(salida,"<p>");}
#line 2024 "grammar.tab.c"
    break;

  case 184: /* phone: A_PHONE $@31 sharedcontent C_PHONE  */
#line 263 "grammar.y"
                                                           {fprintf(salida,"</p>\n");}
#line 2030 "grammar.tab.c"
    break;

  case 185: /* $@32: %empty  */
#line 267 "grammar.y"
            {fprintf(salida,"</p>");}
#line 2036 "grammar.tab.c"
    break;

  case 186: /* email: A_EMAIL $@32 sharedcontent C_EMAIL  */
#line 267 "grammar.y"
                                                           {fprintf(salida,"</p>\n");}
#line 2042 "grammar.tab.c"
    break;

  case 187: /* $@33: %empty  */
#line 271 "grammar.y"
           {fprintf(salida,"<p>");}
#line 2048 "grammar.tab.c"
    break;

  case 188: /* date: A_DATE $@33 sharedcontent C_DATE  */
#line 271 "grammar.y"
                                                        {fprintf(salida,"</p>\n");}
#line 2054 "grammar.tab.c"
    break;

  case 189: /* $@34: %empty  */
#line 275 "grammar.y"
           {fprintf(salida,"<p>");}
#line 2060 "grammar.tab.c"
    break;

  case 190: /* year: A_YEAR $@34 sharedcontent C_YEAR  */
#line 275 "grammar.y"
                                                         {fprintf(salida,"</p>\n");}
#line 2066 "grammar.tab.c"
    break;

  case 191: /* $@35: %empty  */
#line 279 "grammar.y"
             {fprintf(salida,"<p>");}
#line 2072 "grammar.tab.c"
    break;

  case 192: /* holder: A_HOLDER $@35 sharedcontent C_HOLDER  */
#line 279 "grammar.y"
                                                             {fprintf(salida,"</p>\n");}
#line 2078 "grammar.tab.c"
    break;

  case 193: /* $@36: %empty  */
#line 283 "grammar.y"
            {fprintf(salida,"<p>");}
#line 2084 "grammar.tab.c"
    break;

  case 194: /* state: A_STATE $@36 sharedcontent C_STATE  */
#line 283 "grammar.y"
                                                           {fprintf(salida,"</p>\n");}
#line 2090 "grammar.tab.c"
    break;

  case 200: /* $@37: %empty  */
#line 298 "grammar.y"
                  {fprintf(salida, "<div>\n");}
#line 2096 "grammar.tab.c"
    break;

  case 201: /* imageobject: A_IMAGEOBJECT $@37 info imagedata C_IMAGEOBJECT  */
#line 298 "grammar.y"
                                                                                    {fprintf(salida, "</div>\n");}
#line 2102 "grammar.tab.c"
    break;

  case 202: /* $@38: %empty  */
#line 302 "grammar.y"
                  {fprintf(salida, "<div>\n");}
#line 2108 "grammar.tab.c"
    break;

  case 203: /* videoobject: A_VIDEOOBJECT $@38 info videodata C_VIDEOOBJECT  */
#line 302 "grammar.y"
                                                                                   {fprintf(salida, "</div>\n");}
#line 2114 "grammar.tab.c"
    break;

  case 204: /* $@39: %empty  */
#line 306 "grammar.y"
             {fprintf(salida,"html:a href=\"");}
#line 2120 "grammar.tab.c"
    break;

  case 205: /* videodata: VIDEODATA $@39 URL C_REF  */
#line 306 "grammar.y"
                                                           {fprintf(salida,"\">");}
#line 2126 "grammar.tab.c"
    break;

  case 206: /* $@40: %empty  */
#line 307 "grammar.y"
             {fprintf(salida,"html:a href=\"");}
#line 2132 "grammar.tab.c"
    break;

  case 207: /* videodata: VIDEODATA $@40 RUTA C_REF  */
#line 307 "grammar.y"
                                                            {fprintf(salida,"\">");}
#line 2138 "grammar.tab.c"
    break;

  case 208: /* $@41: %empty  */
#line 311 "grammar.y"
             {fprintf(salida,"html:a href=\"");}
#line 2144 "grammar.tab.c"
    break;

  case 209: /* imagedata: IMAGEDATA $@41 URL C_REF  */
#line 311 "grammar.y"
                                                            {fprintf(salida,"\">");}
#line 2150 "grammar.tab.c"
    break;

  case 210: /* $@42: %empty  */
#line 312 "grammar.y"
             {fprintf(salida,"html:a href=\"");}
#line 2156 "grammar.tab.c"
    break;

  case 211: /* imagedata: IMAGEDATA $@42 RUTA C_REF  */
#line 312 "grammar.y"
                                                            {fprintf(salida,"\">");}
#line 2162 "grammar.tab.c"
    break;

  case 212: /* $@43: %empty  */
#line 316 "grammar.y"
                  {fprintf(salida, "<ul>\n");}
#line 2168 "grammar.tab.c"
    break;

  case 213: /* itemizedlist: A_ITEMIZEDLIST $@43 listitem listitemrecu C_ITEMIZEDLIST  */
#line 316 "grammar.y"
                                                                                    {fprintf(salida, "</ul>\n");}
#line 2174 "grammar.tab.c"
    break;

  case 216: /* $@44: %empty  */
#line 325 "grammar.y"
                {fprintf(salida, "<li>");}
#line 2180 "grammar.tab.c"
    break;

  case 217: /* listitem: A_LISTITEM $@44 content C_LISTITEM  */
#line 325 "grammar.y"
                                                              {fprintf(salida, "</li>\n");}
#line 2186 "grammar.tab.c"
    break;

  case 238: /* $@45: %empty  */
#line 374 "grammar.y"
          {fprintf(salida, "%s\n",(yyvsp[0].text));}
#line 2192 "grammar.tab.c"
    break;

  case 240: /* entrycontent: TEXTO  */
#line 374 "grammar.y"
                                                             {fprintf(salida, "%s\n",(yyvsp[0].text));}
#line 2198 "grammar.tab.c"
    break;

  case 258: /* $@46: %empty  */
#line 394 "grammar.y"
          {fprintf(salida, "<a href=");}
#line 2204 "grammar.tab.c"
    break;

  case 259: /* xlink: XLINK $@46 URL C_REF  */
#line 394 "grammar.y"
                                                   {fprintf(salida, "</a>\n");}
#line 2210 "grammar.tab.c"
    break;


#line 2214 "grammar.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 396 "grammar.y"

