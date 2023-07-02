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
  YYSYMBOL_simpara = 129,                  /* simpara  */
  YYSYMBOL_130_15 = 130,                   /* $@15  */
  YYSYMBOL_131_16 = 131,                   /* $@16  */
  YYSYMBOL_emphasis = 132,                 /* emphasis  */
  YYSYMBOL_133_17 = 133,                   /* $@17  */
  YYSYMBOL_comment = 134,                  /* comment  */
  YYSYMBOL_135_18 = 135,                   /* $@18  */
  YYSYMBOL_link = 136,                     /* link  */
  YYSYMBOL_137_19 = 137,                   /* $@19  */
  YYSYMBOL_138_20 = 138,                   /* $@20  */
  YYSYMBOL_139_21 = 139,                   /* $@21  */
  YYSYMBOL_paracontent = 140,              /* paracontent  */
  YYSYMBOL_para = 141,                     /* para  */
  YYSYMBOL_142_22 = 142,                   /* $@22  */
  YYSYMBOL_143_23 = 143,                   /* $@23  */
  YYSYMBOL_important = 144,                /* important  */
  YYSYMBOL_145_24 = 145,                   /* $@24  */
  YYSYMBOL_sharedcontent = 146,            /* sharedcontent  */
  YYSYMBOL_147_25 = 147,                   /* $@25  */
  YYSYMBOL_personame = 148,                /* personame  */
  YYSYMBOL_149_26 = 149,                   /* $@26  */
  YYSYMBOL_firstname = 150,                /* firstname  */
  YYSYMBOL_151_27 = 151,                   /* $@27  */
  YYSYMBOL_surname = 152,                  /* surname  */
  YYSYMBOL_153_28 = 153,                   /* $@28  */
  YYSYMBOL_street = 154,                   /* street  */
  YYSYMBOL_155_29 = 155,                   /* $@29  */
  YYSYMBOL_postcode = 156,                 /* postcode  */
  YYSYMBOL_157_30 = 157,                   /* $@30  */
  YYSYMBOL_158_31 = 158,                   /* $@31  */
  YYSYMBOL_city = 159,                     /* city  */
  YYSYMBOL_160_32 = 160,                   /* $@32  */
  YYSYMBOL_phone = 161,                    /* phone  */
  YYSYMBOL_162_33 = 162,                   /* $@33  */
  YYSYMBOL_email = 163,                    /* email  */
  YYSYMBOL_164_34 = 164,                   /* $@34  */
  YYSYMBOL_date = 165,                     /* date  */
  YYSYMBOL_166_35 = 166,                   /* $@35  */
  YYSYMBOL_year = 167,                     /* year  */
  YYSYMBOL_168_36 = 168,                   /* $@36  */
  YYSYMBOL_holder = 169,                   /* holder  */
  YYSYMBOL_170_37 = 170,                   /* $@37  */
  YYSYMBOL_state = 171,                    /* state  */
  YYSYMBOL_172_38 = 172,                   /* $@38  */
  YYSYMBOL_mediaobjectcontent = 173,       /* mediaobjectcontent  */
  YYSYMBOL_mediaobject = 174,              /* mediaobject  */
  YYSYMBOL_imageobject = 175,              /* imageobject  */
  YYSYMBOL_176_39 = 176,                   /* $@39  */
  YYSYMBOL_videoobject = 177,              /* videoobject  */
  YYSYMBOL_178_40 = 178,                   /* $@40  */
  YYSYMBOL_videodata = 179,                /* videodata  */
  YYSYMBOL_180_41 = 180,                   /* $@41  */
  YYSYMBOL_181_42 = 181,                   /* $@42  */
  YYSYMBOL_imagedata = 182,                /* imagedata  */
  YYSYMBOL_183_43 = 183,                   /* $@43  */
  YYSYMBOL_184_44 = 184,                   /* $@44  */
  YYSYMBOL_informaltablecontent = 185,     /* informaltablecontent  */
  YYSYMBOL_informaltable = 186,            /* informaltable  */
  YYSYMBOL_tgroup = 187,                   /* tgroup  */
  YYSYMBOL_table = 188,                    /* table  */
  YYSYMBOL_tablecontent = 189,             /* tablecontent  */
  YYSYMBOL_thead = 190,                    /* thead  */
  YYSYMBOL_tbody = 191,                    /* tbody  */
  YYSYMBOL_tfoot = 192,                    /* tfoot  */
  YYSYMBOL_rowcontent = 193,               /* rowcontent  */
  YYSYMBOL_row = 194,                      /* row  */
  YYSYMBOL_entrycontent = 195,             /* entrycontent  */
  YYSYMBOL_196_47 = 196,                   /* $@47  */
  YYSYMBOL_entry = 197,                    /* entry  */
  YYSYMBOL_entrytbl = 198,                 /* entrytbl  */
  YYSYMBOL_xlink = 199,                    /* xlink  */
  YYSYMBOL_200_48 = 200                    /* $@48  */
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
#define YYLAST   439

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  108
/* YYNRULES -- Number of rules.  */
#define YYNRULES  227
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  352

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
       0,    64,    64,    64,    68,    68,    72,    73,    74,    79,
      79,    80,    80,    81,    81,    82,    82,    83,    83,    84,
      84,    85,    85,    86,    86,    87,    87,    91,    91,    95,
      95,    99,    99,   100,   100,   101,   101,   102,   102,   103,
     103,   104,   104,   108,   109,   109,   113,   113,   114,   114,
     118,   122,   122,   122,   123,   123,   124,   124,   125,   125,
     126,   126,   127,   127,   128,   128,   132,   132,   136,   137,
     138,   139,   140,   144,   144,   148,   149,   150,   154,   154,
     158,   158,   159,   159,   159,   163,   163,   164,   164,   165,
     165,   166,   166,   166,   170,   171,   171,   175,   176,   176,
     180,   180,   180,   181,   181,   182,   182,   186,   186,   187,
     187,   191,   191,   195,   195,   199,   199,   200,   200,   201,
     201,   205,   205,   205,   205,   206,   206,   206,   207,   207,
     207,   211,   211,   212,   212,   216,   216,   220,   220,   221,
     221,   222,   222,   223,   223,   223,   227,   227,   231,   231,
     235,   235,   239,   239,   243,   243,   243,   247,   247,   251,
     251,   255,   255,   259,   259,   263,   263,   267,   267,   271,
     271,   275,   276,   277,   281,   282,   286,   286,   290,   290,
     294,   294,   295,   295,   299,   299,   300,   300,   314,   314,
     315,   315,   319,   323,   324,   325,   326,   330,   334,   334,
     338,   342,   346,   350,   350,   351,   351,   355,   359,   359,
     359,   361,   361,   362,   362,   363,   363,   364,   364,   365,
     365,   366,   366,   370,   374,   375,   379,   379
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
  "simparacontent", "simpara", "$@15", "$@16", "emphasis", "$@17",
  "comment", "$@18", "link", "$@19", "$@20", "$@21", "paracontent", "para",
  "$@22", "$@23", "important", "$@24", "sharedcontent", "$@25",
  "personame", "$@26", "firstname", "$@27", "surname", "$@28", "street",
  "$@29", "postcode", "$@30", "$@31", "city", "$@32", "phone", "$@33",
  "email", "$@34", "date", "$@35", "year", "$@36", "holder", "$@37",
  "state", "$@38", "mediaobjectcontent", "mediaobject", "imageobject",
  "$@39", "videoobject", "$@40", "videodata", "$@41", "$@42", "imagedata",
  "$@43", "$@44", "informaltablecontent", "informaltable", "tgroup",
  "table", "tablecontent", "thead", "tbody", "tfoot", "rowcontent", "row",
  "entrycontent", "$@47", "entry", "entrytbl", "xlink", "$@48", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-150)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-211)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      20,  -150,    40,    -2,  -150,  -150,  -150,    33,  -150,    54,
      61,  -150,   299,  -150,   130,    65,    61,    68,  -150,    50,
    -150,  -150,    33,     2,    38,    67,   299,   299,   299,   299,
     299,   299,   299,   299,   299,    65,  -150,  -150,    89,   126,
     130,   130,   130,   130,   130,   130,   128,  -150,  -150,     0,
     137,    65,    65,    65,     7,   138,   300,   343,   104,   285,
     285,    61,    58,    75,     2,   100,     2,    79,    82,    38,
    -150,  -150,   175,    67,    67,  -150,  -150,  -150,  -150,  -150,
    -150,  -150,  -150,  -150,   203,   268,   116,   154,   237,  -150,
    -150,  -150,  -150,  -150,  -150,  -150,    65,   116,   285,   183,
     285,   246,  -150,  -150,  -150,  -150,   239,     7,     7,   300,
    -150,  -150,  -150,  -150,  -150,  -150,   247,  -150,  -150,  -150,
    -150,   227,  -150,  -150,  -150,  -150,  -150,   228,   343,   343,
     343,   343,   343,   343,   285,  -150,  -150,  -150,   210,  -150,
    -150,  -150,  -150,  -150,   195,   299,  -150,  -150,    58,    58,
      38,    38,    38,    88,   186,   197,  -150,  -150,  -150,   -42,
     199,   204,    79,    79,  -150,  -150,    33,    33,  -150,  -150,
    -150,  -150,  -150,  -150,   270,   268,   268,   268,   326,   116,
     116,   116,   277,  -150,   263,    13,  -150,  -150,   252,   259,
     285,   251,  -150,   255,  -150,  -150,  -150,   307,  -150,   343,
     116,   116,   317,   116,   116,  -150,  -150,  -150,  -150,  -150,
    -150,  -150,   273,   303,  -150,  -150,   272,    33,    33,   264,
      58,    58,   274,   258,   253,   261,   186,   275,   278,  -150,
     279,   260,   265,   199,   199,   199,   199,   199,   199,   267,
    -150,  -150,  -150,    61,    61,   116,   116,  -150,  -150,  -150,
    -150,   116,  -150,  -150,  -150,  -150,   116,  -150,  -150,  -150,
    -150,   294,   325,  -150,  -150,   302,  -150,   367,  -150,  -150,
    -150,   332,   331,  -150,   330,   327,  -150,   356,  -150,   378,
     379,  -150,  -150,  -150,  -150,  -150,  -150,  -150,   313,  -150,
    -150,   310,  -150,   199,  -150,  -150,  -150,  -150,  -150,  -150,
    -150,   299,   299,   375,   374,  -150,   341,   116,  -150,  -150,
    -150,   394,  -150,  -150,   361,  -150,  -150,   382,   402,   336,
     404,   337,  -150,  -150,  -150,    67,   376,  -150,  -150,  -150,
     355,  -150,  -150,  -150,   408,   409,  -150,   411,   412,  -150,
     386,  -150,  -150,   410,   413,   414,   415,  -150,  -150,  -150,
    -150,  -150
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     2,     0,     0,     1,     4,     3,    43,    44,    94,
      97,    95,     0,    98,     0,     0,    97,   133,    66,   109,
     113,   135,    43,     0,     0,     6,    26,    16,    14,    24,
      12,    10,    18,    20,    22,     0,    73,   163,    80,     0,
      34,    36,    38,    42,    40,    32,    91,   161,   111,   117,
       0,    86,    88,    90,     0,     0,     0,     0,     0,     0,
       0,    97,     0,     0,   189,     0,   191,     0,     0,   199,
      27,    29,     0,     6,     6,    25,    15,    13,    23,    11,
       9,    17,    19,    21,     0,     0,     0,     0,     0,    45,
      33,    35,    37,    41,    39,    31,     0,     0,     0,     0,
       0,     0,    96,    85,    87,    89,     0,    49,    47,     0,
     130,   127,   124,   121,   125,   122,     0,   126,   123,   128,
     129,    51,   157,   169,   154,   152,   159,     0,    55,    65,
      57,    61,    63,    59,     0,   101,   146,   105,     0,   100,
     106,   103,   102,   104,     0,     0,   178,   176,   171,   171,
       0,     0,     0,     0,     0,     0,   188,   192,   190,     0,
       0,     0,   204,   206,   197,   198,    43,    43,     5,     7,
       8,    99,   148,   150,     0,    71,     0,    72,   145,   140,
     138,   142,     0,   165,     0,    77,    83,    92,     0,     0,
       0,     0,   226,     0,    50,    48,    46,     0,   134,     0,
       0,     0,     0,     0,     0,    67,    54,    64,    56,    60,
      62,    58,     0,     0,   110,   114,     0,    43,    43,     0,
     171,   171,     0,     0,     0,     0,     0,     0,     0,   196,
       0,     0,   208,   222,   216,   220,   214,   212,   218,     0,
     207,   203,   205,    97,    97,     0,     0,    74,    70,    68,
      69,     0,   139,   137,   141,   164,     0,    81,   167,    75,
      76,    79,     0,   162,   112,     0,   118,     0,   120,   132,
      52,     0,     0,   155,     0,     0,   108,     0,   136,     0,
       0,   175,   173,   172,   174,   200,   202,   201,     0,   194,
     195,     0,   225,     0,   221,   215,   219,   213,   211,   217,
     223,     0,     0,     0,     0,   144,     0,     0,    78,    84,
     116,     0,   158,   170,     0,   153,   160,     0,   180,     0,
     184,     0,   193,   224,   209,     6,     0,   149,   151,   166,
       0,   227,   156,   147,     0,     0,   179,     0,     0,   177,
       0,    30,   168,     0,     0,     0,     0,    28,   181,   183,
     185,   187
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -150,  -150,  -150,  -150,  -150,   -72,    29,  -150,  -150,  -150,
    -150,   354,   -17,  -150,    27,    -6,    -5,  -150,   269,  -150,
      21,    43,  -150,   234,   160,  -150,  -150,  -150,  -150,   221,
    -150,  -150,  -150,    11,  -150,   -18,   -30,  -150,  -150,   226,
    -150,   -12,  -150,    86,  -150,  -150,  -150,   318,   -24,  -150,
    -150,   -45,  -150,   -90,  -150,   -82,  -150,   209,  -150,   149,
    -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,
     245,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,
    -116,     9,   366,  -150,   368,  -150,  -150,  -150,  -150,  -150,
    -150,  -150,   185,   -13,  -150,  -150,   -44,   280,  -149,  -141,
      18,  -150,     1,  -150,  -150,  -150,  -150,  -150
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     3,     6,     7,    72,    25,    73,   166,    74,
     167,    39,     9,    10,   106,    26,   127,   199,    27,    57,
     174,    42,    85,   184,   260,    43,    87,    88,   262,    50,
      96,    12,    15,    14,    35,   138,    28,    58,    59,   179,
      98,   180,    60,   181,    99,   100,   101,   116,    30,    55,
      56,    31,    61,   182,   251,   142,   213,   176,   245,   177,
     246,   128,   203,   129,   202,   314,   130,   200,   131,   204,
     132,    97,    44,    86,   185,   256,   261,   307,   133,   201,
     219,    32,   220,   218,   221,   217,   319,   334,   335,   321,
     337,   338,    65,    33,    66,    34,    68,   153,   154,   155,
     161,    69,   239,   293,   162,   163,   193,   267
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      29,   169,   170,   175,   226,    62,  -119,   188,    40,     5,
     231,   117,   227,   228,    29,    29,    29,    29,    29,    29,
      29,    29,    29,    45,   107,   165,    17,    54,   134,     1,
     108,   109,    64,   222,    40,    40,    40,    40,    40,    40,
       4,   150,   144,   120,   114,   152,     8,   140,   140,    45,
      45,    45,    45,    45,    45,    75,    76,    77,    78,    79,
      80,    81,    82,    83,   117,   119,    19,  -115,    46,    11,
     258,    22,   145,    64,   183,    64,    13,   107,   107,    63,
     189,   291,   191,   108,   108,   288,   140,  -131,   140,   252,
     253,   254,   -82,   175,   175,   175,   120,   114,    70,   112,
      71,    52,   137,   137,   282,   283,   223,   224,   225,  -107,
     271,   272,    47,   274,   275,   237,   212,    67,   119,   178,
      48,    52,   140,   206,   207,   208,   209,   210,   211,   146,
     234,   147,    49,    29,   195,   196,   236,    52,    52,    52,
      89,   137,   115,   137,   -93,   141,   141,    16,   235,   243,
     244,    36,   112,   102,   233,   303,   304,    17,   150,    37,
     151,   305,   152,    19,   164,    38,   306,    18,   159,   238,
     160,    48,   265,   151,   216,   152,   157,   137,   140,    20,
     241,   242,    52,    49,   141,   190,   141,   168,   237,   237,
     237,   237,   237,   237,   270,   115,   248,   249,   250,    22,
     279,   280,   232,   234,   234,   234,   234,   234,   234,   236,
     236,   236,   236,   236,   236,   183,    16,   330,    17,   171,
     141,   235,   235,   235,   235,   235,   235,   233,   233,   233,
     233,   233,   233,   137,   294,   295,   296,   297,   298,   299,
     186,    51,   238,   238,   238,   238,   238,   238,   237,   156,
      49,   158,   192,   340,   301,   302,    84,   194,    19,   215,
      53,    51,    20,   234,    21,   -53,   205,   198,    22,   236,
     214,   151,   103,   104,   105,   229,   141,    51,    51,    51,
      53,   235,   113,    41,   240,   139,   139,   233,   135,    29,
      29,   136,   247,   172,   324,   173,    53,    53,    53,   257,
     263,   118,   238,   110,   143,   143,    36,   255,   136,    41,
      41,    41,    41,    41,    41,   264,    16,   187,    17,   266,
     273,    36,    51,   268,   139,   111,   139,   269,   172,  -143,
     325,   326,    47,   276,   281,   113,    18,    18,   278,   286,
      48,    53,   285,   143,   284,   143,   121,    47,    20,   287,
     292,   258,    49,   289,   118,    48,   290,  -210,    19,   300,
     139,   309,    20,    20,    21,    21,   152,    49,    22,    22,
     310,   311,   312,   313,    23,    23,   315,   316,   111,   143,
      24,  -143,   122,   173,   123,   318,   124,   320,   125,  -143,
      47,   322,   126,  -143,    90,    91,    92,    93,    94,    95,
     323,   327,   328,   329,   331,   332,   333,  -182,   336,  -186,
     341,   339,   343,   342,   344,   345,   139,   346,   347,   259,
     348,   308,   277,   349,   350,   351,   317,   197,   148,     0,
     149,     0,     0,     0,     0,   143,     0,     0,     0,   230
};

static const yytype_int16 yycheck[] =
{
      12,    73,    74,    85,   153,    22,     6,    97,    14,    11,
     159,    56,   153,   154,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    14,    54,    69,    19,    16,    58,     9,
      54,    55,    23,   149,    40,    41,    42,    43,    44,    45,
       0,    83,    60,    56,    56,    87,    13,    59,    60,    40,
      41,    42,    43,    44,    45,    26,    27,    28,    29,    30,
      31,    32,    33,    34,   109,    56,    59,    67,     3,    15,
      57,    69,    61,    64,    61,    66,    15,   107,   108,    77,
      98,   230,   100,   107,   108,   226,    98,    19,   100,   179,
     180,   181,     3,   175,   176,   177,   109,   109,    31,    56,
      33,    15,    59,    60,   220,   221,   150,   151,   152,    59,
     200,   201,    47,   203,   204,   160,   134,    79,   109,     3,
      55,    35,   134,   128,   129,   130,   131,   132,   133,    71,
     160,    73,    67,   145,   107,   108,   160,    51,    52,    53,
      14,    98,    56,   100,    16,    59,    60,    17,   160,   166,
     167,    21,   109,    16,   160,   245,   246,    19,    83,    29,
      85,   251,    87,    59,    82,    35,   256,    37,    89,   160,
      91,    55,   190,    85,   145,    87,    76,   134,   190,    63,
     162,   163,    96,    67,    98,    99,   100,    12,   233,   234,
     235,   236,   237,   238,   199,   109,   175,   176,   177,    69,
     217,   218,     3,   233,   234,   235,   236,   237,   238,   233,
     234,   235,   236,   237,   238,    61,    17,   307,    19,    16,
     134,   233,   234,   235,   236,   237,   238,   233,   234,   235,
     236,   237,   238,   190,   233,   234,   235,   236,   237,   238,
       3,    15,   233,   234,   235,   236,   237,   238,   293,    64,
      67,    66,     6,   325,   243,   244,    35,    18,    59,    64,
      15,    35,    63,   293,    65,    38,    38,    20,    69,   293,
      60,    85,    51,    52,    53,    78,   190,    51,    52,    53,
      35,   293,    56,    14,    80,    59,    60,   293,     3,   301,
     302,    23,    22,    25,   293,    27,    51,    52,    53,    36,
      48,    56,   293,     3,    59,    60,    21,    30,    23,    40,
      41,    42,    43,    44,    45,    56,    17,    96,    19,    68,
       3,    21,    96,    68,    98,    56,   100,    20,    25,     3,
     301,   302,    47,    60,    70,   109,    37,    37,    66,    86,
      55,    96,    84,    98,    70,   100,     3,    47,    63,    88,
      90,    57,    67,    78,   109,    55,    78,    92,    59,    92,
     134,    36,    63,    63,    65,    65,    87,    67,    69,    69,
      68,     4,    40,    42,    75,    75,    46,    50,   109,   134,
      81,    55,    39,    27,    41,     7,    43,     8,    45,    63,
      47,    78,    49,    67,    40,    41,    42,    43,    44,    45,
      90,    26,    28,    62,    10,    44,    24,     5,    72,     5,
      34,    74,     4,    58,     5,     4,   190,     5,    32,   185,
      10,   261,   213,    10,    10,    10,   277,   109,    62,    -1,
      62,    -1,    -1,    -1,    -1,   190,    -1,    -1,    -1,   159
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    94,    95,     0,    11,    96,    97,    13,   105,
     106,    15,   124,    15,   126,   125,    17,    19,    37,    59,
      63,    65,    69,    75,    81,    99,   108,   111,   129,   134,
     141,   144,   174,   186,   188,   127,    21,    29,    35,   104,
     108,   111,   114,   118,   165,   174,     3,    47,    55,    67,
     122,   132,   136,   163,   126,   142,   143,   112,   130,   131,
     135,   145,   105,    77,   174,   185,   187,    79,   189,   194,
      31,    33,    98,   100,   102,    99,    99,    99,    99,    99,
      99,    99,    99,    99,   122,   115,   166,   119,   120,    14,
     104,   104,   104,   104,   104,   104,   123,   164,   133,   137,
     138,   139,    16,   122,   122,   122,   107,   129,   141,   141,
       3,   111,   114,   132,   134,   136,   140,   144,   163,   174,
     186,     3,    39,    41,    43,    45,    49,   109,   154,   156,
     159,   161,   163,   171,   129,     3,    23,   114,   128,   132,
     134,   136,   148,   163,   128,   126,    71,    73,   175,   177,
      83,    85,    87,   190,   191,   192,   185,    76,   185,    89,
      91,   193,   197,   198,    82,   189,   101,   103,    12,    98,
      98,    16,    25,    27,   113,   148,   150,   152,     3,   132,
     134,   136,   146,    61,   116,   167,     3,   122,   146,   128,
     136,   128,     6,   199,    18,   107,   107,   140,    20,   110,
     160,   172,   157,   155,   162,    38,   109,   109,   109,   109,
     109,   109,   128,   149,    60,    64,    99,   178,   176,   173,
     175,   177,   173,   189,   189,   189,   191,   192,   192,    78,
     190,   191,     3,   108,   129,   134,   141,   144,   174,   195,
      80,   193,   193,   105,   105,   151,   153,    22,   113,   113,
     113,   147,   146,   146,   146,    30,   168,    36,    57,   116,
     117,   169,   121,    48,    56,   128,    68,   200,    68,    20,
     109,   146,   146,     3,   146,   146,    60,   150,    66,   105,
     105,    70,   173,   173,    70,    84,    86,    88,   192,    78,
      78,   191,    90,   196,   195,   195,   195,   195,   195,   195,
      92,   126,   126,   146,   146,   146,   146,   170,   117,    36,
      68,     4,    40,    42,   158,    46,    50,   152,     7,   179,
       8,   182,    78,    90,   195,    99,    99,    26,    28,    62,
     146,    10,    44,    24,   180,   181,    72,   183,   184,    74,
      98,    34,    58,     4,     5,     4,     5,    32,    10,    10,
      10,    10
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    95,    94,    97,    96,    98,    98,    98,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,   101,   100,   103,
     102,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   105,   106,   105,   107,   107,   107,   107,
     108,   110,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   112,   111,   113,   113,
     113,   113,   113,   115,   114,   116,   116,   116,   117,   117,
     119,   118,   120,   121,   118,   122,   122,   122,   122,   122,
     122,   123,   122,   122,   124,   125,   124,   126,   127,   126,
     128,   128,   128,   128,   128,   128,   128,   130,   129,   131,
     129,   133,   132,   135,   134,   137,   136,   138,   136,   139,
     136,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   142,   141,   143,   141,   145,   144,   146,   146,   146,
     146,   146,   146,   147,   146,   146,   149,   148,   151,   150,
     153,   152,   155,   154,   157,   158,   156,   160,   159,   162,
     161,   164,   163,   166,   165,   168,   167,   170,   169,   172,
     171,   173,   173,   173,   174,   174,   176,   175,   178,   177,
     180,   179,   181,   179,   183,   182,   184,   182,   185,   185,
     185,   185,   186,   187,   187,   187,   187,   188,   189,   189,
     190,   191,   192,   193,   193,   193,   193,   194,   196,   195,
     195,   195,   195,   195,   195,   195,   195,   195,   195,   195,
     195,   195,   195,   197,   198,   198,   200,   199
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     3,     0,     7,     0,     2,     2,     2,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     0,     7,     0,
       6,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     0,     0,     5,     2,     1,     2,     1,
       4,     0,     3,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     0,     4,     2,     2,
       2,     1,     1,     0,     4,     2,     2,     1,     2,     1,
       0,     4,     0,     0,     5,     2,     1,     2,     1,     2,
       1,     0,     3,     1,     0,     0,     4,     0,     0,     4,
       1,     1,     1,     1,     1,     1,     1,     0,     5,     0,
       4,     0,     4,     0,     4,     0,     5,     0,     4,     0,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     5,     0,     4,     0,     5,     2,     1,     2,
       1,     2,     1,     0,     3,     1,     0,     5,     0,     4,
       0,     4,     0,     4,     0,     0,     5,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     2,     2,     5,     5,     0,     5,     0,     5,
       0,     4,     0,     4,     0,     4,     0,     4,     2,     1,
       2,     1,     3,     5,     4,     4,     3,     3,     2,     1,
       3,     3,     3,     2,     1,     2,     1,     3,     0,     3,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     3,     4,     3,     0,     4
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
#line 64 "grammar.y"
            {fprintf(salida,"<!DOCTYPE html>\n<html lang=\"en\">\n<body>\n\t");}
#line 1572 "grammar.tab.c"
    break;

  case 3: /* sigma: DOCTYPE $@1 article  */
#line 64 "grammar.y"
                                                                                         {fprintf(salida,"</body>\n</html>\n");}
#line 1578 "grammar.tab.c"
    break;

  case 4: /* $@2: %empty  */
#line 68 "grammar.y"
              {fprintf(salida,"<article>\n");}
#line 1584 "grammar.tab.c"
    break;

  case 5: /* article: A_ARTICLE $@2 info titledoc content recusection C_ARTICLE  */
#line 68 "grammar.y"
                                                                                          {fprintf(salida,"</article>\n");}
#line 1590 "grammar.tab.c"
    break;

  case 27: /* $@3: %empty  */
#line 91 "grammar.y"
              {fprintf(salida,"<section>\n");}
#line 1596 "grammar.tab.c"
    break;

  case 28: /* section: A_SECTION $@3 info titlesec content recusection C_SECTION  */
#line 91 "grammar.y"
                                                                                           {fprintf(salida,"</section>\n");}
#line 1602 "grammar.tab.c"
    break;

  case 29: /* $@4: %empty  */
#line 95 "grammar.y"
                 {fprintf(salida,"<section>\n");}
#line 1608 "grammar.tab.c"
    break;

  case 30: /* simsection: A_SIMSECTION $@4 info titlesec content C_SIMSECTION  */
#line 95 "grammar.y"
                                                                                     {fprintf(salida,"</section>\n");}
#line 1614 "grammar.tab.c"
    break;

  case 44: /* $@5: %empty  */
#line 109 "grammar.y"
             {fprintf(salida,"<div> \n <p style=\"background-color: green; color: white; font-size: 8pt;\">\n");}
#line 1620 "grammar.tab.c"
    break;

  case 45: /* info: A_INFO $@5 titlesec infocontent C_INFO  */
#line 109 "grammar.y"
                                                                                                                                              {fprintf(salida,"</p>\n</div>\n");}
#line 1626 "grammar.tab.c"
    break;

  case 51: /* $@6: %empty  */
#line 122 "grammar.y"
          {fprintf(salida, "%s",(yyvsp[0].text));}
#line 1632 "grammar.tab.c"
    break;

  case 53: /* addresscontent: TEXTO  */
#line 122 "grammar.y"
                                                                 {fprintf(salida, "%s",(yyvsp[0].text));}
#line 1638 "grammar.tab.c"
    break;

  case 66: /* $@7: %empty  */
#line 132 "grammar.y"
              {fprintf(salida,"<address>\n");}
#line 1644 "grammar.tab.c"
    break;

  case 67: /* address: A_ADDRESS $@7 addresscontent C_ADDRESS  */
#line 132 "grammar.y"
                                                                        {fprintf(salida,"</address>\n");}
#line 1650 "grammar.tab.c"
    break;

  case 73: /* $@8: %empty  */
#line 144 "grammar.y"
             {fprintf(salida,"<address>\n");}
#line 1656 "grammar.tab.c"
    break;

  case 74: /* author: A_AUTHOR $@8 authorcontent C_AUTHOR  */
#line 144 "grammar.y"
                                                                     {fprintf(salida,"</address>\n");}
#line 1662 "grammar.tab.c"
    break;

  case 80: /* $@9: %empty  */
#line 158 "grammar.y"
                {fprintf(salida,"<div>\n");}
#line 1668 "grammar.tab.c"
    break;

  case 81: /* copyright: A_COPYRIGHT $@9 copyrightyearcontent C_COPYRIGHT  */
#line 158 "grammar.y"
                                                                              {fprintf(salida,"</div>\n");}
#line 1674 "grammar.tab.c"
    break;

  case 82: /* $@10: %empty  */
#line 159 "grammar.y"
                {fprintf(salida,"<div>\n");}
#line 1680 "grammar.tab.c"
    break;

  case 83: /* $@11: %empty  */
#line 159 "grammar.y"
                                                   {fprintf(salida, "%s", (yyvsp[0].text));}
#line 1686 "grammar.tab.c"
    break;

  case 84: /* copyright: A_COPYRIGHT $@10 TEXTO $@11 C_COPYRIGHT  */
#line 159 "grammar.y"
                                                                                            {fprintf(salida,"</div>\n");}
#line 1692 "grammar.tab.c"
    break;

  case 91: /* $@12: %empty  */
#line 166 "grammar.y"
          {fprintf(salida, "%s",(yyvsp[0].text));}
#line 1698 "grammar.tab.c"
    break;

  case 93: /* titlecontent: TEXTO  */
#line 166 "grammar.y"
                                                                {fprintf(salida, "%s",(yyvsp[0].text));}
#line 1704 "grammar.tab.c"
    break;

  case 95: /* $@13: %empty  */
#line 171 "grammar.y"
              {fprintf(salida,"<h1>\n");}
#line 1710 "grammar.tab.c"
    break;

  case 96: /* titledoc: A_TITLE $@13 titlecontent C_TITLE  */
#line 171 "grammar.y"
                                                               {fprintf(salida,"</h1>\n");}
#line 1716 "grammar.tab.c"
    break;

  case 98: /* $@14: %empty  */
#line 176 "grammar.y"
              {fprintf(salida,"<h2>");}
#line 1722 "grammar.tab.c"
    break;

  case 99: /* titlesec: A_TITLE $@14 titlecontent C_TITLE  */
#line 176 "grammar.y"
                                                             {fprintf(salida,"</h2>\n");}
#line 1728 "grammar.tab.c"
    break;

  case 101: /* simparacontent: TEXTO  */
#line 180 "grammar.y"
                     {fprintf(salida, "%s", (yyvsp[0].text));}
#line 1734 "grammar.tab.c"
    break;

  case 107: /* $@15: %empty  */
#line 186 "grammar.y"
              {fprintf(salida,"<p>");}
#line 1740 "grammar.tab.c"
    break;

  case 108: /* simpara: A_SIMPARA $@15 simpara simparacontent C_SIMPARA  */
#line 186 "grammar.y"
                                                                        {fprintf(salida,"</p>\n");}
#line 1746 "grammar.tab.c"
    break;

  case 109: /* $@16: %empty  */
#line 187 "grammar.y"
              {fprintf(salida,"<p>");}
#line 1752 "grammar.tab.c"
    break;

  case 110: /* simpara: A_SIMPARA $@16 simparacontent C_SIMPARA  */
#line 187 "grammar.y"
                                                                {fprintf(salida,"</p>\n");}
#line 1758 "grammar.tab.c"
    break;

  case 111: /* $@17: %empty  */
#line 191 "grammar.y"
               {fprintf(salida,"<div>\n<p><i>\n");}
#line 1764 "grammar.tab.c"
    break;

  case 112: /* emphasis: A_EMPHASIS $@17 simparacontent C_EMPHASIS  */
#line 191 "grammar.y"
                                                                              {fprintf(salida,"</i></p>\n</div>\n");}
#line 1770 "grammar.tab.c"
    break;

  case 113: /* $@18: %empty  */
#line 195 "grammar.y"
             {fprintf(salida, "<div>\n");}
#line 1776 "grammar.tab.c"
    break;

  case 114: /* comment: A_COMMENT $@18 simparacontent C_COMMENT  */
#line 195 "grammar.y"
                                                                    {fprintf(salida, "</div>\n");}
#line 1782 "grammar.tab.c"
    break;

  case 115: /* $@19: %empty  */
#line 199 "grammar.y"
           {fprintf(salida, "<a>");}
#line 1788 "grammar.tab.c"
    break;

  case 116: /* link: A_LINK $@19 link simparacontent C_LINK  */
#line 199 "grammar.y"
                                                                {fprintf(salida, "</a>");}
#line 1794 "grammar.tab.c"
    break;

  case 117: /* $@20: %empty  */
#line 200 "grammar.y"
           {fprintf(salida, "<a>");}
#line 1800 "grammar.tab.c"
    break;

  case 118: /* link: A_LINK $@20 simparacontent C_LINK  */
#line 200 "grammar.y"
                                                           {fprintf(salida, "</a>");}
#line 1806 "grammar.tab.c"
    break;

  case 119: /* $@21: %empty  */
#line 201 "grammar.y"
           {fprintf(salida, "<a>");}
#line 1812 "grammar.tab.c"
    break;

  case 120: /* link: A_LINK $@21 xlink C_LINK  */
#line 201 "grammar.y"
                                                  {fprintf(salida, "</a>");}
#line 1818 "grammar.tab.c"
    break;

  case 130: /* paracontent: TEXTO  */
#line 207 "grammar.y"
                                        {fprintf(salida, "%s\n",(yyvsp[0].text));}
#line 1824 "grammar.tab.c"
    break;

  case 131: /* $@22: %empty  */
#line 211 "grammar.y"
           {fprintf(salida,"<p>");}
#line 1830 "grammar.tab.c"
    break;

  case 132: /* para: A_PARA $@22 para paracontent C_PARA  */
#line 211 "grammar.y"
                                                            {fprintf(salida,"</p>\n");}
#line 1836 "grammar.tab.c"
    break;

  case 133: /* $@23: %empty  */
#line 212 "grammar.y"
           {fprintf(salida,"<p>");}
#line 1842 "grammar.tab.c"
    break;

  case 134: /* para: A_PARA $@23 paracontent C_PARA  */
#line 212 "grammar.y"
                                                        {fprintf(salida,"</p>\n");}
#line 1848 "grammar.tab.c"
    break;

  case 135: /* $@24: %empty  */
#line 216 "grammar.y"
                {fprintf(salida,"<div>\n<p><b>");}
#line 1854 "grammar.tab.c"
    break;

  case 136: /* important: A_IMPORTANT $@24 titlesec content C_IMPORTANT  */
#line 216 "grammar.y"
                                                                                {fprintf(salida,"</b></p>\n</div>\n");}
#line 1860 "grammar.tab.c"
    break;

  case 143: /* $@25: %empty  */
#line 223 "grammar.y"
          {fprintf(salida, "%s",(yyvsp[0].text));}
#line 1866 "grammar.tab.c"
    break;

  case 145: /* sharedcontent: TEXTO  */
#line 223 "grammar.y"
                                                                     {fprintf(salida, "%s",(yyvsp[0].text));}
#line 1872 "grammar.tab.c"
    break;

  case 146: /* $@26: %empty  */
#line 227 "grammar.y"
                 {fprintf(salida,"<p>");}
#line 1878 "grammar.tab.c"
    break;

  case 147: /* personame: A_PERSONNAME $@26 firstname surname C_PERSONNAME  */
#line 227 "grammar.y"
                                                                         {fprintf(salida,"</p>");}
#line 1884 "grammar.tab.c"
    break;

  case 148: /* $@27: %empty  */
#line 231 "grammar.y"
                {fprintf(salida,"<p>");}
#line 1890 "grammar.tab.c"
    break;

  case 149: /* firstname: A_FIRSTNAME $@27 sharedcontent C_FIRSTNAME  */
#line 231 "grammar.y"
                                                                   {fprintf(salida,"</p>\n");}
#line 1896 "grammar.tab.c"
    break;

  case 150: /* $@28: %empty  */
#line 235 "grammar.y"
              {fprintf(salida,"<p>");}
#line 1902 "grammar.tab.c"
    break;

  case 151: /* surname: A_SURNAME $@28 sharedcontent C_SURNAME  */
#line 235 "grammar.y"
                                                               {fprintf(salida,"</p>\n");}
#line 1908 "grammar.tab.c"
    break;

  case 152: /* $@29: %empty  */
#line 239 "grammar.y"
             {fprintf(salida,"<p>");}
#line 1914 "grammar.tab.c"
    break;

  case 153: /* street: A_STREET $@29 sharedcontent C_STREET  */
#line 239 "grammar.y"
                                                           {fprintf(salida,"</p>\n");}
#line 1920 "grammar.tab.c"
    break;

  case 154: /* $@30: %empty  */
#line 243 "grammar.y"
               {fprintf(salida,"<p>");}
#line 1926 "grammar.tab.c"
    break;

  case 155: /* $@31: %empty  */
#line 243 "grammar.y"
                                              {fprintf(salida, "%s",(yyvsp[0].text));}
#line 1932 "grammar.tab.c"
    break;

  case 156: /* postcode: A_POSTCODE $@30 TEXTO $@31 C_POSTCODE  */
#line 243 "grammar.y"
                                                                                      {fprintf(salida,"</p>\n");}
#line 1938 "grammar.tab.c"
    break;

  case 157: /* $@32: %empty  */
#line 247 "grammar.y"
           {fprintf(salida,"<p>");}
#line 1944 "grammar.tab.c"
    break;

  case 158: /* city: A_CITY $@32 sharedcontent C_CITY  */
#line 247 "grammar.y"
                                                         {fprintf(salida,"</p>\n");}
#line 1950 "grammar.tab.c"
    break;

  case 159: /* $@33: %empty  */
#line 251 "grammar.y"
            {fprintf(salida,"<p>");}
#line 1956 "grammar.tab.c"
    break;

  case 160: /* phone: A_PHONE $@33 sharedcontent C_PHONE  */
#line 251 "grammar.y"
                                                           {fprintf(salida,"</p>\n");}
#line 1962 "grammar.tab.c"
    break;

  case 161: /* $@34: %empty  */
#line 255 "grammar.y"
            {fprintf(salida,"</p>");}
#line 1968 "grammar.tab.c"
    break;

  case 162: /* email: A_EMAIL $@34 sharedcontent C_EMAIL  */
#line 255 "grammar.y"
                                                           {fprintf(salida,"</p>\n");}
#line 1974 "grammar.tab.c"
    break;

  case 163: /* $@35: %empty  */
#line 259 "grammar.y"
           {fprintf(salida,"<p>");}
#line 1980 "grammar.tab.c"
    break;

  case 164: /* date: A_DATE $@35 sharedcontent C_DATE  */
#line 259 "grammar.y"
                                                        {fprintf(salida,"</p>\n");}
#line 1986 "grammar.tab.c"
    break;

  case 165: /* $@36: %empty  */
#line 263 "grammar.y"
           {fprintf(salida,"<p>");}
#line 1992 "grammar.tab.c"
    break;

  case 166: /* year: A_YEAR $@36 sharedcontent C_YEAR  */
#line 263 "grammar.y"
                                                         {fprintf(salida,"</p>\n");}
#line 1998 "grammar.tab.c"
    break;

  case 167: /* $@37: %empty  */
#line 267 "grammar.y"
             {fprintf(salida,"<p>");}
#line 2004 "grammar.tab.c"
    break;

  case 168: /* holder: A_HOLDER $@37 sharedcontent C_HOLDER  */
#line 267 "grammar.y"
                                                             {fprintf(salida,"</p>\n");}
#line 2010 "grammar.tab.c"
    break;

  case 169: /* $@38: %empty  */
#line 271 "grammar.y"
            {fprintf(salida,"<p>");}
#line 2016 "grammar.tab.c"
    break;

  case 170: /* state: A_STATE $@38 sharedcontent C_STATE  */
#line 271 "grammar.y"
                                                           {fprintf(salida,"</p>\n");}
#line 2022 "grammar.tab.c"
    break;

  case 176: /* $@39: %empty  */
#line 286 "grammar.y"
                  {fprintf(salida, "<div>\n");}
#line 2028 "grammar.tab.c"
    break;

  case 177: /* imageobject: A_IMAGEOBJECT $@39 info imagedata C_IMAGEOBJECT  */
#line 286 "grammar.y"
                                                                                    {fprintf(salida, "</div>\n");}
#line 2034 "grammar.tab.c"
    break;

  case 178: /* $@40: %empty  */
#line 290 "grammar.y"
                  {fprintf(salida, "<div>\n");}
#line 2040 "grammar.tab.c"
    break;

  case 179: /* videoobject: A_VIDEOOBJECT $@40 info videodata C_VIDEOOBJECT  */
#line 290 "grammar.y"
                                                                                   {fprintf(salida, "</div>\n");}
#line 2046 "grammar.tab.c"
    break;

  case 180: /* $@41: %empty  */
#line 294 "grammar.y"
             {fprintf(salida,"html:a href=\"");}
#line 2052 "grammar.tab.c"
    break;

  case 181: /* videodata: VIDEODATA $@41 URL C_REF  */
#line 294 "grammar.y"
                                                           {fprintf(salida,"\">");}
#line 2058 "grammar.tab.c"
    break;

  case 182: /* $@42: %empty  */
#line 295 "grammar.y"
             {fprintf(salida,"html:a href=\"");}
#line 2064 "grammar.tab.c"
    break;

  case 183: /* videodata: VIDEODATA $@42 RUTA C_REF  */
#line 295 "grammar.y"
                                                            {fprintf(salida,"\">");}
#line 2070 "grammar.tab.c"
    break;

  case 184: /* $@43: %empty  */
#line 299 "grammar.y"
             {fprintf(salida,"html:a href=\"");}
#line 2076 "grammar.tab.c"
    break;

  case 185: /* imagedata: IMAGEDATA $@43 URL C_REF  */
#line 299 "grammar.y"
                                                            {fprintf(salida,"\">");}
#line 2082 "grammar.tab.c"
    break;

  case 186: /* $@44: %empty  */
#line 300 "grammar.y"
             {fprintf(salida,"html:a href=\"");}
#line 2088 "grammar.tab.c"
    break;

  case 187: /* imagedata: IMAGEDATA $@44 RUTA C_REF  */
#line 300 "grammar.y"
                                                            {fprintf(salida,"\">");}
#line 2094 "grammar.tab.c"
    break;

  case 208: /* $@47: %empty  */
#line 359 "grammar.y"
          {fprintf(salida, "%s\n",(yyvsp[0].text));}
#line 2100 "grammar.tab.c"
    break;

  case 210: /* entrycontent: TEXTO  */
#line 359 "grammar.y"
                                                             {fprintf(salida, "%s\n",(yyvsp[0].text));}
#line 2106 "grammar.tab.c"
    break;

  case 226: /* $@48: %empty  */
#line 379 "grammar.y"
          {fprintf(salida, "<a href=");}
#line 2112 "grammar.tab.c"
    break;

  case 227: /* xlink: XLINK $@48 URL C_REF  */
#line 379 "grammar.y"
                                                   {fprintf(salida, "</a>\n");}
#line 2118 "grammar.tab.c"
    break;


#line 2122 "grammar.tab.c"

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

#line 381 "grammar.y"

