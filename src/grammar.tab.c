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
  YYSYMBOL_paracontent = 137,              /* paracontent  */
  YYSYMBOL_para = 138,                     /* para  */
  YYSYMBOL_139_19 = 139,                   /* $@19  */
  YYSYMBOL_140_20 = 140,                   /* $@20  */
  YYSYMBOL_important = 141,                /* important  */
  YYSYMBOL_sharedcontent = 142,            /* sharedcontent  */
  YYSYMBOL_143_21 = 143,                   /* $@21  */
  YYSYMBOL_personame = 144,                /* personame  */
  YYSYMBOL_firstname = 145,                /* firstname  */
  YYSYMBOL_146_22 = 146,                   /* $@22  */
  YYSYMBOL_surname = 147,                  /* surname  */
  YYSYMBOL_148_23 = 148,                   /* $@23  */
  YYSYMBOL_street = 149,                   /* street  */
  YYSYMBOL_150_24 = 150,                   /* $@24  */
  YYSYMBOL_postcode = 151,                 /* postcode  */
  YYSYMBOL_152_25 = 152,                   /* $@25  */
  YYSYMBOL_153_26 = 153,                   /* $@26  */
  YYSYMBOL_city = 154,                     /* city  */
  YYSYMBOL_155_27 = 155,                   /* $@27  */
  YYSYMBOL_phone = 156,                    /* phone  */
  YYSYMBOL_157_28 = 157,                   /* $@28  */
  YYSYMBOL_email = 158,                    /* email  */
  YYSYMBOL_159_29 = 159,                   /* $@29  */
  YYSYMBOL_date = 160,                     /* date  */
  YYSYMBOL_161_30 = 161,                   /* $@30  */
  YYSYMBOL_year = 162,                     /* year  */
  YYSYMBOL_163_31 = 163,                   /* $@31  */
  YYSYMBOL_holder = 164,                   /* holder  */
  YYSYMBOL_165_32 = 165,                   /* $@32  */
  YYSYMBOL_state = 166,                    /* state  */
  YYSYMBOL_167_33 = 167,                   /* $@33  */
  YYSYMBOL_mediaobjectcontent = 168,       /* mediaobjectcontent  */
  YYSYMBOL_mediaobject = 169,              /* mediaobject  */
  YYSYMBOL_imageobject = 170,              /* imageobject  */
  YYSYMBOL_videoobject = 171,              /* videoobject  */
  YYSYMBOL_videodata = 172,                /* videodata  */
  YYSYMBOL_imagedata = 173,                /* imagedata  */
  YYSYMBOL_itemizedlist = 174,             /* itemizedlist  */
  YYSYMBOL_listitem = 175,                 /* listitem  */
  YYSYMBOL_informaltablecontent = 176,     /* informaltablecontent  */
  YYSYMBOL_informaltable = 177,            /* informaltable  */
  YYSYMBOL_tgroup = 178,                   /* tgroup  */
  YYSYMBOL_table = 179,                    /* table  */
  YYSYMBOL_tablecontent = 180,             /* tablecontent  */
  YYSYMBOL_thead = 181,                    /* thead  */
  YYSYMBOL_tbody = 182,                    /* tbody  */
  YYSYMBOL_tfoot = 183,                    /* tfoot  */
  YYSYMBOL_rowcontent = 184,               /* rowcontent  */
  YYSYMBOL_row = 185,                      /* row  */
  YYSYMBOL_entrycontent = 186,             /* entrycontent  */
  YYSYMBOL_187_34 = 187,                   /* $@34  */
  YYSYMBOL_entry = 188,                    /* entry  */
  YYSYMBOL_entrytbl = 189,                 /* entrytbl  */
  YYSYMBOL_xlink = 190                     /* xlink  */
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
#define YYLAST   534

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  98
/* YYNRULES -- Number of rules.  */
#define YYNRULES  223
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  356

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
       0,    64,    64,    64,    68,    68,    72,    73,    74,    78,
      78,    79,    79,    80,    80,    81,    81,    82,    82,    83,
      83,    84,    84,    85,    85,    86,    86,    87,    87,    91,
      91,    95,    95,    99,    99,   100,   100,   101,   101,   102,
     102,   103,   103,   104,   104,   108,   109,   109,   113,   113,
     114,   114,   118,   122,   122,   122,   123,   123,   124,   124,
     125,   125,   126,   126,   127,   127,   128,   128,   132,   132,
     136,   137,   138,   139,   140,   144,   144,   148,   149,   150,
     154,   154,   158,   158,   159,   159,   159,   163,   163,   164,
     164,   165,   165,   166,   166,   166,   170,   171,   171,   175,
     176,   176,   180,   180,   180,   181,   181,   182,   182,   186,
     186,   187,   187,   191,   191,   195,   195,   199,   200,   201,
     205,   205,   205,   205,   206,   206,   206,   206,   207,   207,
     207,   211,   211,   212,   212,   216,   220,   220,   221,   221,
     222,   222,   223,   223,   223,   227,   232,   232,   236,   236,
     240,   240,   244,   244,   244,   248,   248,   252,   252,   256,
     256,   260,   260,   264,   264,   268,   268,   272,   272,   276,
     277,   278,   282,   283,   291,   296,   301,   306,   307,   311,
     312,   316,   317,   321,   321,   322,   322,   326,   330,   331,
     332,   333,   337,   341,   341,   345,   349,   353,   357,   357,
     358,   358,   362,   366,   366,   366,   367,   367,   368,   368,
     369,   369,   370,   370,   371,   371,   372,   372,   373,   373,
     377,   381,   382,   386
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
  "comment", "$@18", "link", "paracontent", "para", "$@19", "$@20",
  "important", "sharedcontent", "$@21", "personame", "firstname", "$@22",
  "surname", "$@23", "street", "$@24", "postcode", "$@25", "$@26", "city",
  "$@27", "phone", "$@28", "email", "$@29", "date", "$@30", "year", "$@31",
  "holder", "$@32", "state", "$@33", "mediaobjectcontent", "mediaobject",
  "imageobject", "videoobject", "videodata", "imagedata", "itemizedlist",
  "listitem", "informaltablecontent", "informaltable", "tgroup", "table",
  "tablecontent", "thead", "tbody", "tfoot", "rowcontent", "row",
  "entrycontent", "$@34", "entry", "entrytbl", "xlink", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-154)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-206)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -1,  -154,    11,    13,  -154,  -154,  -154,    14,  -154,    40,
      45,  -154,   390,  -154,   148,   107,    45,    24,  -154,    46,
       7,  -154,    45,    14,   -28,    26,    73,   390,   390,   390,
     390,   390,   390,   390,   390,   390,   390,   107,  -154,  -154,
      87,    95,   148,   148,   148,   148,   148,   148,    99,  -154,
    -154,   391,   130,   107,   107,   107,     3,   136,   368,   442,
     390,    31,   100,   405,   405,   390,    56,    62,   -28,    91,
     -28,    51,    93,    26,  -154,  -154,   188,    73,    73,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,   171,
     161,    76,   143,   207,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,   107,    76,   405,  -154,   212,   195,  -154,   163,  -154,
    -154,   405,  -154,  -154,   187,  -154,  -154,  -154,  -154,   243,
       3,     3,   368,  -154,  -154,  -154,  -154,  -154,  -154,   242,
    -154,  -154,  -154,  -154,  -154,   226,  -154,  -154,  -154,  -154,
    -154,   229,   442,   442,   442,   442,   442,   442,   154,  -154,
     216,   405,   209,  -154,   208,   205,    14,    14,    56,    56,
      26,    26,    26,   116,   189,   197,  -154,  -154,  -154,   -26,
     113,   193,    51,    51,  -154,  -154,    14,    14,  -154,  -154,
    -154,  -154,  -154,  -154,   254,   161,   161,   161,    81,    76,
      76,    76,   262,  -154,   260,     8,  -154,  -154,   249,   247,
     288,   272,  -154,   236,  -154,  -154,  -154,  -154,   285,  -154,
     442,    76,    76,   315,    76,    76,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,   265,  -154,   261,  -154,  -154,  -154,
     313,   316,   253,    56,    56,   255,   244,   240,   239,   189,
     264,   267,  -154,   256,   257,   259,   113,   113,   113,   113,
     113,   113,   113,   263,  -154,  -154,  -154,    45,    45,    76,
      76,  -154,  -154,  -154,  -154,    76,  -154,  -154,  -154,  -154,
      76,  -154,  -154,  -154,  -154,   291,   320,  -154,  -154,  -154,
     325,  -154,  -154,  -154,   318,   317,  -154,   314,   311,  -154,
    -154,   360,   293,   175,   294,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,   289,  -154,  -154,   279,  -154,   113,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,   390,   390,   344,   345,
    -154,   310,    76,  -154,  -154,  -154,  -154,  -154,   330,  -154,
    -154,   365,  -154,   367,   369,  -154,  -154,  -154,  -154,    73,
     347,  -154,  -154,  -154,   337,  -154,   371,  -154,  -154,   356,
    -154,  -154,   393,  -154,   389,  -154
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     2,     0,     0,     1,     4,     3,    45,    46,    96,
      99,    97,     0,   100,     0,     0,    99,   133,    68,     0,
     111,   115,    99,    45,     0,     0,     6,    28,    18,    16,
      26,    14,    12,    20,    10,    22,    24,     0,    75,   161,
      82,     0,    36,    38,    40,    44,    42,    34,    93,   159,
     113,     0,     0,    88,    90,    92,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   184,     0,
     186,     0,     0,   194,    29,    31,     0,     6,     6,    27,
      17,    15,    25,    13,    11,    19,     9,    21,    23,     0,
       0,     0,     0,     0,    47,    35,    37,    39,    43,    41,
      33,     0,     0,     0,   103,     0,     0,   107,     0,   102,
     108,   105,   104,   106,     0,    98,    87,    89,    91,     0,
      51,    49,     0,   130,   127,   123,   120,   124,   121,     0,
     126,   122,   128,   125,   129,    53,   155,   167,   152,   150,
     157,     0,    57,    67,    59,    63,    65,    61,     0,   180,
       0,     0,     0,   105,     0,     0,    45,    45,   169,   169,
       0,     0,     0,     0,     0,     0,   183,   187,   185,     0,
       0,     0,   199,   201,   192,   193,    45,    45,     5,     7,
       8,   101,   146,   148,     0,    73,     0,    74,   144,   139,
     137,   141,     0,   163,     0,    79,    85,    94,     0,     0,
       0,     0,   118,     0,   119,    52,    50,    48,     0,   134,
       0,     0,     0,     0,     0,     0,    69,    56,    66,    58,
      62,    64,    60,   182,     0,   179,     0,   112,   116,   135,
       0,     0,     0,   169,   169,     0,     0,     0,     0,     0,
       0,     0,   191,     0,     0,   203,   219,   213,   217,   211,
     209,   215,   207,     0,   202,   198,   200,    99,    99,     0,
       0,    76,    72,    70,    71,     0,   138,   136,   140,   162,
       0,    83,   165,    77,    78,    81,     0,   160,   114,   223,
       0,   117,   132,    54,     0,     0,   153,     0,     0,   181,
     110,     0,     0,     0,     0,   173,   171,   170,   172,   195,
     197,   196,     0,   189,   190,     0,   222,     0,   218,   212,
     216,   210,   208,   214,   206,   220,     0,     0,     0,     0,
     143,     0,     0,    80,    86,   145,   156,   168,     0,   151,
     158,     0,   175,     0,     0,   174,   188,   221,   204,     6,
       0,   147,   149,   164,     0,   154,     0,   177,   178,     0,
      32,   166,     0,    30,     0,   176
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -154,  -154,  -154,  -154,  -154,   -76,   -15,  -154,  -154,  -154,
    -154,   180,   -19,  -154,   109,    -7,   166,  -154,    28,  -154,
    -109,   155,  -154,   206,   128,  -154,  -154,  -154,  -154,    59,
    -154,  -154,  -154,    37,  -154,   -16,   -53,  -154,  -154,    70,
    -154,     0,  -154,   299,   282,    32,  -154,  -154,    83,   126,
    -154,   -67,   300,  -154,   210,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,   329,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -153,   -14,   350,   351,  -154,
    -154,    39,   270,    98,   -24,  -154,  -154,   -68,   251,  -117,
    -138,    84,  -154,   227,  -154,  -154,  -154,  -154
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     3,     6,     7,    76,    26,    77,   176,    78,
     177,    41,     9,    10,   119,    27,   141,   210,    28,    59,
     184,    44,    90,   194,   274,    45,    92,    93,   276,    52,
     101,    12,    15,    14,    37,   108,    29,    62,    63,   189,
     103,    30,    64,   191,   129,    31,    57,    58,    32,   192,
     265,   112,   186,   259,   187,   260,   142,   214,   143,   213,
     328,   144,   211,   145,   215,   146,   102,    46,    91,   195,
     270,   275,   322,   147,   212,   232,    33,   233,   234,   292,
     294,    34,    61,    69,    35,    70,    36,    72,   163,   164,
     165,   171,    73,   253,   307,   172,   173,   114
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      47,   179,   180,   120,    66,   175,   235,    42,     1,   151,
      68,     4,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    17,   185,     5,   240,   241,     8,    47,    47,
      47,    47,    47,    47,   134,    42,    42,    42,    42,    42,
      42,    23,    43,  -131,   132,   148,   239,   152,   154,    67,
     155,   110,   244,    56,    68,    11,    68,   160,   127,    65,
      13,   162,    20,   110,   110,   272,  -109,   120,   120,   193,
      43,    43,    43,    43,    43,    43,   262,   263,   264,   188,
     296,   297,    19,   149,  -142,    53,   124,   199,   121,   122,
     -84,   190,   236,   237,   238,   203,    89,   133,   134,    60,
     150,   302,   190,   110,    74,    71,    75,    53,   132,    94,
      48,   110,   116,   117,   118,   -95,   245,   247,   185,   185,
     185,   109,   127,    53,    53,    53,   305,   156,   126,   157,
      16,    50,    17,   109,   109,   226,  -142,   230,   231,    21,
     169,   130,   170,    51,  -142,   160,   115,   161,  -142,   162,
     124,   110,   121,   121,    49,    17,   251,   257,   258,    20,
     197,   133,    50,   246,    19,    16,   166,   167,   168,    38,
     248,    53,    20,   109,    51,   174,    21,    39,    22,   333,
     334,   109,    23,    40,   106,    18,   182,   181,   183,   190,
     190,   190,   126,   247,   247,   247,   247,   247,   247,   247,
     178,   161,   249,   162,   193,   130,   107,    60,   223,   252,
     196,   190,   190,   125,   190,   190,   200,    23,   107,   107,
     182,   109,    95,    96,    97,    98,    99,   100,   198,   206,
     207,   202,   251,   251,   251,   251,   251,   251,   251,   246,
     246,   246,   246,   246,   246,   246,   248,   248,   248,   248,
     248,   248,   248,   250,   247,   204,   255,   256,   107,   190,
     190,   205,   209,   349,   -55,   190,   107,   216,   225,   227,
     190,   229,   228,   254,   161,   242,   261,   125,   249,   249,
     249,   249,   249,   249,   249,   252,   252,   252,   252,   252,
     252,   252,   269,   251,   316,   317,   271,   277,   279,   183,
     246,   339,   340,   278,   281,   282,   107,   248,   217,   218,
     219,   220,   221,   222,    54,   266,   267,   268,   286,   289,
     291,   290,   190,   295,   293,   298,   300,   301,   299,   250,
     250,   250,   250,   250,   250,   250,    54,   284,   285,   249,
     287,   288,   303,   162,    55,   304,   252,   306,   272,   325,
     111,  -205,    54,    54,    54,   315,   324,   128,   326,   327,
     329,   330,   153,   153,   331,   332,    55,   336,   335,   337,
     341,   123,   343,   342,   345,   346,   283,   347,   352,   348,
     113,   350,    55,    55,    55,   318,   319,   131,   353,    38,
     250,   320,   113,   113,   104,   351,   321,   105,   354,   355,
      54,   273,   153,   323,   208,    18,   201,    16,   104,    17,
     153,   280,    38,     0,   106,    49,   158,   159,   224,    19,
     243,   128,     0,    50,     0,     0,    38,    18,   106,     0,
      55,    21,   113,    22,     0,    51,     0,    23,    49,     0,
     113,    19,     0,    24,     0,   135,    50,     0,   344,    20,
     153,   131,    49,    21,    21,    22,     0,     0,    51,    23,
      50,     0,     0,     0,     0,    24,     0,     0,    21,     0,
       0,    25,    51,   308,   309,   310,   311,   312,   313,   314,
     113,   136,     0,   137,     0,   138,     0,   139,     0,    49,
       0,   140,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   338
};

static const yytype_int16 yycheck[] =
{
      14,    77,    78,    56,    23,    73,   159,    14,     9,    62,
      24,     0,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    19,    90,    11,   163,   164,    13,    42,    43,
      44,    45,    46,    47,    58,    42,    43,    44,    45,    46,
      47,    69,    14,    19,    58,    60,   163,    63,    64,    77,
      65,    51,   169,    16,    68,    15,    70,    83,    58,    22,
      15,    87,    59,    63,    64,    57,    59,   120,   121,    61,
      42,    43,    44,    45,    46,    47,   185,   186,   187,     3,
     233,   234,    51,    52,     3,    15,    58,   103,    56,    57,
       3,    91,   160,   161,   162,   111,    37,    58,   122,    53,
      61,   239,   102,   103,    31,    79,    33,    37,   122,    14,
       3,   111,    53,    54,    55,    16,     3,   170,   185,   186,
     187,    51,   122,    53,    54,    55,   243,    71,    58,    73,
      17,    55,    19,    63,    64,   151,    55,   156,   157,    63,
      89,    58,    91,    67,    63,    83,    16,    85,    67,    87,
     122,   151,   120,   121,    47,    19,   170,   176,   177,    59,
     101,   122,    55,   170,    51,    17,    68,    76,    70,    21,
     170,   101,    59,   103,    67,    82,    63,    29,    65,     4,
       5,   111,    69,    35,    23,    37,    25,    16,    27,   189,
     190,   191,   122,   246,   247,   248,   249,   250,   251,   252,
      12,    85,   170,    87,    61,   122,    51,    53,    54,   170,
       3,   211,   212,    58,   214,   215,     4,    69,    63,    64,
      25,   151,    42,    43,    44,    45,    46,    47,   102,   120,
     121,    68,   246,   247,   248,   249,   250,   251,   252,   246,
     247,   248,   249,   250,   251,   252,   246,   247,   248,   249,
     250,   251,   252,   170,   307,    68,   172,   173,   103,   259,
     260,    18,    20,   339,    38,   265,   111,    38,    52,    60,
     270,    66,    64,    80,    85,    78,    22,   122,   246,   247,
     248,   249,   250,   251,   252,   246,   247,   248,   249,   250,
     251,   252,    30,   307,   257,   258,    36,    48,    10,    27,
     307,   316,   317,    56,    68,    20,   151,   307,   142,   143,
     144,   145,   146,   147,    15,   189,   190,   191,     3,    54,
       7,    60,   322,    70,     8,    70,    86,    88,    84,   246,
     247,   248,   249,   250,   251,   252,    37,   211,   212,   307,
     214,   215,    78,    87,    15,    78,   307,    90,    57,    24,
      51,    92,    53,    54,    55,    92,    36,    58,    40,    42,
      46,    50,    63,    64,     4,    72,    37,    78,    74,    90,
      26,     3,    62,    28,    44,    10,   210,    10,     7,    10,
      51,    34,    53,    54,    55,   259,   260,    58,    32,    21,
     307,   265,    63,    64,     3,    58,   270,     6,     5,    10,
     101,   195,   103,   275,   122,    37,   106,    17,     3,    19,
     111,   201,    21,    -1,    23,    47,    66,    66,   148,    51,
     169,   122,    -1,    55,    -1,    -1,    21,    37,    23,    -1,
     101,    63,   103,    65,    -1,    67,    -1,    69,    47,    -1,
     111,    51,    -1,    75,    -1,     3,    55,    -1,   322,    59,
     151,   122,    47,    63,    63,    65,    -1,    -1,    67,    69,
      55,    -1,    -1,    -1,    -1,    75,    -1,    -1,    63,    -1,
      -1,    81,    67,   246,   247,   248,   249,   250,   251,   252,
     151,    39,    -1,    41,    -1,    43,    -1,    45,    -1,    47,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   307
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    94,    95,     0,    11,    96,    97,    13,   105,
     106,    15,   124,    15,   126,   125,    17,    19,    37,    51,
      59,    63,    65,    69,    75,    81,    99,   108,   111,   129,
     134,   138,   141,   169,   174,   177,   179,   127,    21,    29,
      35,   104,   108,   111,   114,   118,   160,   169,     3,    47,
      55,    67,   122,   132,   136,   158,   126,   139,   140,   112,
      53,   175,   130,   131,   135,   126,   105,    77,   169,   176,
     178,    79,   180,   185,    31,    33,    98,   100,   102,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,   122,
     115,   161,   119,   120,    14,   104,   104,   104,   104,   104,
     104,   123,   159,   133,     3,     6,    23,   114,   128,   132,
     134,   136,   144,   158,   190,    16,   122,   122,   122,   107,
     129,   138,   138,     3,   111,   114,   132,   134,   136,   137,
     141,   158,   169,   174,   177,     3,    39,    41,    43,    45,
      49,   109,   149,   151,   154,   156,   158,   166,    99,    52,
     174,   129,   128,   136,   128,    99,    71,    73,   170,   171,
      83,    85,    87,   181,   182,   183,   176,    76,   176,    89,
      91,   184,   188,   189,    82,   180,   101,   103,    12,    98,
      98,    16,    25,    27,   113,   144,   145,   147,     3,   132,
     134,   136,   142,    61,   116,   162,     3,   122,   142,   128,
       4,   145,    68,   128,    68,    18,   107,   107,   137,    20,
     110,   155,   167,   152,   150,   157,    38,   109,   109,   109,
     109,   109,   109,    54,   175,    52,   128,    60,    64,    66,
     105,   105,   168,   170,   171,   168,   180,   180,   180,   182,
     183,   183,    78,   181,   182,     3,   108,   129,   134,   138,
     141,   169,   174,   186,    80,   184,   184,   105,   105,   146,
     148,    22,   113,   113,   113,   143,   142,   142,   142,    30,
     163,    36,    57,   116,   117,   164,   121,    48,    56,    10,
     147,    68,    20,   109,   142,   142,     3,   142,   142,    54,
      60,     7,   172,     8,   173,    70,   168,   168,    70,    84,
      86,    88,   183,    78,    78,   182,    90,   187,   186,   186,
     186,   186,   186,   186,   186,    92,   126,   126,   142,   142,
     142,   142,   165,   117,    36,    24,    40,    42,   153,    46,
      50,     4,    72,     4,     5,    74,    78,    90,   186,    99,
      99,    26,    28,    62,   142,    44,    10,    10,    10,    98,
      34,    58,     7,    32,     5,    10
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
     113,   113,   113,   113,   113,   115,   114,   116,   116,   116,
     117,   117,   119,   118,   120,   121,   118,   122,   122,   122,
     122,   122,   122,   123,   122,   122,   124,   125,   124,   126,
     127,   126,   128,   128,   128,   128,   128,   128,   128,   130,
     129,   131,   129,   133,   132,   135,   134,   136,   136,   136,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   139,   138,   140,   138,   141,   142,   142,   142,   142,
     142,   142,   143,   142,   142,   144,   146,   145,   148,   147,
     150,   149,   152,   153,   151,   155,   154,   157,   156,   159,
     158,   161,   160,   163,   162,   165,   164,   167,   166,   168,
     168,   168,   169,   169,   170,   171,   172,   173,   173,   174,
     174,   175,   175,   176,   176,   176,   176,   177,   178,   178,
     178,   178,   179,   180,   180,   181,   182,   183,   184,   184,
     184,   184,   185,   187,   186,   186,   186,   186,   186,   186,
     186,   186,   186,   186,   186,   186,   186,   186,   186,   186,
     188,   189,   189,   190
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
       2,     2,     2,     1,     1,     0,     4,     2,     2,     1,
       2,     1,     0,     4,     0,     0,     5,     2,     1,     2,
       1,     2,     1,     0,     3,     1,     0,     0,     4,     0,
       0,     4,     1,     1,     1,     1,     1,     1,     1,     0,
       5,     0,     4,     0,     4,     0,     4,     4,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     5,     0,     4,     4,     2,     1,     2,     1,
       2,     1,     0,     3,     1,     4,     0,     4,     0,     4,
       0,     4,     0,     0,     5,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       2,     2,     5,     5,     4,     4,     6,     3,     3,     4,
       3,     4,     3,     2,     1,     2,     1,     3,     5,     4,
       4,     3,     3,     2,     1,     3,     3,     3,     2,     1,
       2,     1,     3,     0,     3,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       3,     4,     3,     3
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
#line 1579 "grammar.tab.c"
    break;

  case 3: /* sigma: DOCTYPE $@1 article  */
#line 64 "grammar.y"
                                                                                         {fprintf(salida,"</body>\n</html>\n");}
#line 1585 "grammar.tab.c"
    break;

  case 4: /* $@2: %empty  */
#line 68 "grammar.y"
              {fprintf(salida,"<article>\n");}
#line 1591 "grammar.tab.c"
    break;

  case 5: /* article: A_ARTICLE $@2 info titledoc content recusection C_ARTICLE  */
#line 68 "grammar.y"
                                                                                          {fprintf(salida,"</article>\n");}
#line 1597 "grammar.tab.c"
    break;

  case 29: /* $@3: %empty  */
#line 91 "grammar.y"
              {fprintf(salida,"<section>\n");}
#line 1603 "grammar.tab.c"
    break;

  case 30: /* section: A_SECTION $@3 info titlesec content recusection C_SECTION  */
#line 91 "grammar.y"
                                                                                           {fprintf(salida,"</section>\n");}
#line 1609 "grammar.tab.c"
    break;

  case 31: /* $@4: %empty  */
#line 95 "grammar.y"
                 {fprintf(salida,"<section>\n");}
#line 1615 "grammar.tab.c"
    break;

  case 32: /* simsection: A_SIMSECTION $@4 info titlesec content C_SIMSECTION  */
#line 95 "grammar.y"
                                                                                     {fprintf(salida,"</section>\n");}
#line 1621 "grammar.tab.c"
    break;

  case 46: /* $@5: %empty  */
#line 109 "grammar.y"
             {fprintf(salida,"<div> \n <p style=\"background-color: green; color: white; font-size: 8pt;\">\n");}
#line 1627 "grammar.tab.c"
    break;

  case 47: /* info: A_INFO $@5 titlesec infocontent C_INFO  */
#line 109 "grammar.y"
                                                                                                                                              {fprintf(salida,"</p>\n</div>\n");}
#line 1633 "grammar.tab.c"
    break;

  case 53: /* $@6: %empty  */
#line 122 "grammar.y"
          {fprintf(salida, "%s",(yyvsp[0].text));}
#line 1639 "grammar.tab.c"
    break;

  case 55: /* addresscontent: TEXTO  */
#line 122 "grammar.y"
                                                                 {fprintf(salida, "%s",(yyvsp[0].text));}
#line 1645 "grammar.tab.c"
    break;

  case 68: /* $@7: %empty  */
#line 132 "grammar.y"
              {fprintf(salida,"<address>\n");}
#line 1651 "grammar.tab.c"
    break;

  case 69: /* address: A_ADDRESS $@7 addresscontent C_ADDRESS  */
#line 132 "grammar.y"
                                                                        {fprintf(salida,"</address>\n");}
#line 1657 "grammar.tab.c"
    break;

  case 75: /* $@8: %empty  */
#line 144 "grammar.y"
             {fprintf(salida,"<address>\n");}
#line 1663 "grammar.tab.c"
    break;

  case 76: /* author: A_AUTHOR $@8 authorcontent C_AUTHOR  */
#line 144 "grammar.y"
                                                                     {fprintf(salida,"</address>\n");}
#line 1669 "grammar.tab.c"
    break;

  case 82: /* $@9: %empty  */
#line 158 "grammar.y"
                {fprintf(salida,"<div>\n");}
#line 1675 "grammar.tab.c"
    break;

  case 83: /* copyright: A_COPYRIGHT $@9 copyrightyearcontent C_COPYRIGHT  */
#line 158 "grammar.y"
                                                                              {fprintf(salida,"</div>\n");}
#line 1681 "grammar.tab.c"
    break;

  case 84: /* $@10: %empty  */
#line 159 "grammar.y"
                {fprintf(salida,"<div>\n");}
#line 1687 "grammar.tab.c"
    break;

  case 85: /* $@11: %empty  */
#line 159 "grammar.y"
                                                   {fprintf(salida, "%s", (yyvsp[0].text));}
#line 1693 "grammar.tab.c"
    break;

  case 86: /* copyright: A_COPYRIGHT $@10 TEXTO $@11 C_COPYRIGHT  */
#line 159 "grammar.y"
                                                                                            {fprintf(salida,"</div>\n");}
#line 1699 "grammar.tab.c"
    break;

  case 93: /* $@12: %empty  */
#line 166 "grammar.y"
          {fprintf(salida, "%s",(yyvsp[0].text));}
#line 1705 "grammar.tab.c"
    break;

  case 95: /* titlecontent: TEXTO  */
#line 166 "grammar.y"
                                                                {fprintf(salida, "%s",(yyvsp[0].text));}
#line 1711 "grammar.tab.c"
    break;

  case 97: /* $@13: %empty  */
#line 171 "grammar.y"
              {fprintf(salida,"<h1>\n");}
#line 1717 "grammar.tab.c"
    break;

  case 98: /* titledoc: A_TITLE $@13 titlecontent C_TITLE  */
#line 171 "grammar.y"
                                                               {fprintf(salida,"</h1>\n");}
#line 1723 "grammar.tab.c"
    break;

  case 100: /* $@14: %empty  */
#line 176 "grammar.y"
              {fprintf(salida,"<h2>");}
#line 1729 "grammar.tab.c"
    break;

  case 101: /* titlesec: A_TITLE $@14 titlecontent C_TITLE  */
#line 176 "grammar.y"
                                                             {fprintf(salida,"</h2>\n");}
#line 1735 "grammar.tab.c"
    break;

  case 103: /* simparacontent: TEXTO  */
#line 180 "grammar.y"
                     {fprintf(salida, "%s", (yyvsp[0].text));}
#line 1741 "grammar.tab.c"
    break;

  case 109: /* $@15: %empty  */
#line 186 "grammar.y"
              {fprintf(salida,"<p>");}
#line 1747 "grammar.tab.c"
    break;

  case 110: /* simpara: A_SIMPARA $@15 simpara simparacontent C_SIMPARA  */
#line 186 "grammar.y"
                                                                        {fprintf(salida,"</p>\n");}
#line 1753 "grammar.tab.c"
    break;

  case 111: /* $@16: %empty  */
#line 187 "grammar.y"
              {fprintf(salida,"<p>");}
#line 1759 "grammar.tab.c"
    break;

  case 112: /* simpara: A_SIMPARA $@16 simparacontent C_SIMPARA  */
#line 187 "grammar.y"
                                                                {fprintf(salida,"</p>\n");}
#line 1765 "grammar.tab.c"
    break;

  case 113: /* $@17: %empty  */
#line 191 "grammar.y"
               {fprintf(salida,"<div>\n<p><i>\n");}
#line 1771 "grammar.tab.c"
    break;

  case 114: /* emphasis: A_EMPHASIS $@17 simparacontent C_EMPHASIS  */
#line 191 "grammar.y"
                                                                              {fprintf(salida,"</i></p>\n</div>\n");}
#line 1777 "grammar.tab.c"
    break;

  case 115: /* $@18: %empty  */
#line 195 "grammar.y"
             {fprintf(salida, "<div>\n");}
#line 1783 "grammar.tab.c"
    break;

  case 116: /* comment: A_COMMENT $@18 simparacontent C_COMMENT  */
#line 195 "grammar.y"
                                                                    {fprintf(salida, "</div>\n");}
#line 1789 "grammar.tab.c"
    break;

  case 130: /* paracontent: TEXTO  */
#line 207 "grammar.y"
                                        {fprintf(salida, "%s\n",(yyvsp[0].text));}
#line 1795 "grammar.tab.c"
    break;

  case 131: /* $@19: %empty  */
#line 211 "grammar.y"
           {fprintf(salida,"<p>");}
#line 1801 "grammar.tab.c"
    break;

  case 132: /* para: A_PARA $@19 para paracontent C_PARA  */
#line 211 "grammar.y"
                                                            {fprintf(salida,"</p>\n");}
#line 1807 "grammar.tab.c"
    break;

  case 133: /* $@20: %empty  */
#line 212 "grammar.y"
           {fprintf(salida,"<p>");}
#line 1813 "grammar.tab.c"
    break;

  case 134: /* para: A_PARA $@20 paracontent C_PARA  */
#line 212 "grammar.y"
                                                        {fprintf(salida,"</p>\n");}
#line 1819 "grammar.tab.c"
    break;

  case 142: /* $@21: %empty  */
#line 223 "grammar.y"
          {fprintf(salida, "%s",(yyvsp[0].text));}
#line 1825 "grammar.tab.c"
    break;

  case 144: /* sharedcontent: TEXTO  */
#line 223 "grammar.y"
                                                                     {fprintf(salida, "%s",(yyvsp[0].text));}
#line 1831 "grammar.tab.c"
    break;

  case 146: /* $@22: %empty  */
#line 232 "grammar.y"
                {fprintf(salida,"<p>");}
#line 1837 "grammar.tab.c"
    break;

  case 147: /* firstname: A_FIRSTNAME $@22 sharedcontent C_FIRSTNAME  */
#line 232 "grammar.y"
                                                                   {fprintf(salida,"</p>\n");}
#line 1843 "grammar.tab.c"
    break;

  case 148: /* $@23: %empty  */
#line 236 "grammar.y"
              {fprintf(salida,"<p>\n");}
#line 1849 "grammar.tab.c"
    break;

  case 149: /* surname: A_SURNAME $@23 sharedcontent C_SURNAME  */
#line 236 "grammar.y"
                                                                 {fprintf(salida,"</p>\n");}
#line 1855 "grammar.tab.c"
    break;

  case 150: /* $@24: %empty  */
#line 240 "grammar.y"
             {fprintf(salida,"<p>");}
#line 1861 "grammar.tab.c"
    break;

  case 151: /* street: A_STREET $@24 sharedcontent C_STREET  */
#line 240 "grammar.y"
                                                           {fprintf(salida,"</p>");}
#line 1867 "grammar.tab.c"
    break;

  case 152: /* $@25: %empty  */
#line 244 "grammar.y"
               {fprintf(salida,"<p>");}
#line 1873 "grammar.tab.c"
    break;

  case 153: /* $@26: %empty  */
#line 244 "grammar.y"
                                              {fprintf(salida, "%s",(yyvsp[0].text));}
#line 1879 "grammar.tab.c"
    break;

  case 154: /* postcode: A_POSTCODE $@25 TEXTO $@26 C_POSTCODE  */
#line 244 "grammar.y"
                                                                                      {fprintf(salida,"</p>");}
#line 1885 "grammar.tab.c"
    break;

  case 155: /* $@27: %empty  */
#line 248 "grammar.y"
           {fprintf(salida,"<p>");}
#line 1891 "grammar.tab.c"
    break;

  case 156: /* city: A_CITY $@27 sharedcontent C_CITY  */
#line 248 "grammar.y"
                                                         {fprintf(salida,"</p>");}
#line 1897 "grammar.tab.c"
    break;

  case 157: /* $@28: %empty  */
#line 252 "grammar.y"
            {fprintf(salida,"<p>");}
#line 1903 "grammar.tab.c"
    break;

  case 158: /* phone: A_PHONE $@28 sharedcontent C_PHONE  */
#line 252 "grammar.y"
                                                           {fprintf(salida,"</p>");}
#line 1909 "grammar.tab.c"
    break;

  case 159: /* $@29: %empty  */
#line 256 "grammar.y"
            {fprintf(salida,"</p>");}
#line 1915 "grammar.tab.c"
    break;

  case 160: /* email: A_EMAIL $@29 sharedcontent C_EMAIL  */
#line 256 "grammar.y"
                                                           {fprintf(salida,"</p>");}
#line 1921 "grammar.tab.c"
    break;

  case 161: /* $@30: %empty  */
#line 260 "grammar.y"
           {fprintf(salida,"<p>");}
#line 1927 "grammar.tab.c"
    break;

  case 162: /* date: A_DATE $@30 sharedcontent C_DATE  */
#line 260 "grammar.y"
                                                        {fprintf(salida,"</p>");}
#line 1933 "grammar.tab.c"
    break;

  case 163: /* $@31: %empty  */
#line 264 "grammar.y"
           {fprintf(salida,"<p>");}
#line 1939 "grammar.tab.c"
    break;

  case 164: /* year: A_YEAR $@31 sharedcontent C_YEAR  */
#line 264 "grammar.y"
                                                         {fprintf(salida,"</p>");}
#line 1945 "grammar.tab.c"
    break;

  case 165: /* $@32: %empty  */
#line 268 "grammar.y"
             {fprintf(salida,"<p>");}
#line 1951 "grammar.tab.c"
    break;

  case 166: /* holder: A_HOLDER $@32 sharedcontent C_HOLDER  */
#line 268 "grammar.y"
                                                             {fprintf(salida,"</p>");}
#line 1957 "grammar.tab.c"
    break;

  case 167: /* $@33: %empty  */
#line 272 "grammar.y"
            {fprintf(salida,"<p>");}
#line 1963 "grammar.tab.c"
    break;

  case 168: /* state: A_STATE $@33 sharedcontent C_STATE  */
#line 272 "grammar.y"
                                                           {fprintf(salida,"</p>");}
#line 1969 "grammar.tab.c"
    break;

  case 203: /* $@34: %empty  */
#line 366 "grammar.y"
          {fprintf(salida, "%s\n",(yyvsp[0].text));}
#line 1975 "grammar.tab.c"
    break;

  case 205: /* entrycontent: TEXTO  */
#line 366 "grammar.y"
                                                             {fprintf(salida, "%s\n",(yyvsp[0].text));}
#line 1981 "grammar.tab.c"
    break;


#line 1985 "grammar.tab.c"

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

#line 388 "grammar.y"

