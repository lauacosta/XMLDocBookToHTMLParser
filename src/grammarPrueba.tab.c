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
#line 1 "grammarPrueba.y"
   
    #include <stdio.h>
    //#define YYDEBUG 1
    void yyerror(const char *str);
    FILE *salida;

#line 78 "grammarPrueba.tab.c"

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

#include "grammarPrueba.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TEXTO = 3,                      /* TEXTO  */
  YYSYMBOL_RUTA = 4,                       /* RUTA  */
  YYSYMBOL_URL = 5,                        /* URL  */
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
  YYSYMBOL_A_COPYRIGHT = 33,               /* A_COPYRIGHT  */
  YYSYMBOL_C_COPYRIGHT = 34,               /* C_COPYRIGHT  */
  YYSYMBOL_A_ADDRESS = 35,                 /* A_ADDRESS  */
  YYSYMBOL_C_ADDRESS = 36,                 /* C_ADDRESS  */
  YYSYMBOL_A_CITY = 37,                    /* A_CITY  */
  YYSYMBOL_C_CITY = 38,                    /* C_CITY  */
  YYSYMBOL_A_STATE = 39,                   /* A_STATE  */
  YYSYMBOL_C_STATE = 40,                   /* C_STATE  */
  YYSYMBOL_A_POSTCODE = 41,                /* A_POSTCODE  */
  YYSYMBOL_C_POSTCODE = 42,                /* C_POSTCODE  */
  YYSYMBOL_A_STREET = 43,                  /* A_STREET  */
  YYSYMBOL_C_STREET = 44,                  /* C_STREET  */
  YYSYMBOL_A_EMAIL = 45,                   /* A_EMAIL  */
  YYSYMBOL_C_EMAIL = 46,                   /* C_EMAIL  */
  YYSYMBOL_A_PHONE = 47,                   /* A_PHONE  */
  YYSYMBOL_C_PHONE = 48,                   /* C_PHONE  */
  YYSYMBOL_A_ITEMIZEDLIST = 49,            /* A_ITEMIZEDLIST  */
  YYSYMBOL_C_ITEMIZEDLIST = 50,            /* C_ITEMIZEDLIST  */
  YYSYMBOL_A_LISTITEM = 51,                /* A_LISTITEM  */
  YYSYMBOL_C_LISTITEM = 52,                /* C_LISTITEM  */
  YYSYMBOL_A_EMPHASIS = 53,                /* A_EMPHASIS  */
  YYSYMBOL_C_EMPHASIS = 54,                /* C_EMPHASIS  */
  YYSYMBOL_A_HOLDER = 55,                  /* A_HOLDER  */
  YYSYMBOL_C_HOLDER = 56,                  /* C_HOLDER  */
  YYSYMBOL_A_SIMPARA = 57,                 /* A_SIMPARA  */
  YYSYMBOL_C_SIMPARA = 58,                 /* C_SIMPARA  */
  YYSYMBOL_A_YEAR = 59,                    /* A_YEAR  */
  YYSYMBOL_C_YEAR = 60,                    /* C_YEAR  */
  YYSYMBOL_A_COMMENT = 61,                 /* A_COMMENT  */
  YYSYMBOL_C_COMMENT = 62,                 /* C_COMMENT  */
  YYSYMBOL_A_IMPORTANT = 63,               /* A_IMPORTANT  */
  YYSYMBOL_C_IMPORTANT = 64,               /* C_IMPORTANT  */
  YYSYMBOL_A_LINK = 65,                    /* A_LINK  */
  YYSYMBOL_C_LINK = 66,                    /* C_LINK  */
  YYSYMBOL_A_MEDIAOBJECT = 67,             /* A_MEDIAOBJECT  */
  YYSYMBOL_C_MEDIAOBJECT = 68,             /* C_MEDIAOBJECT  */
  YYSYMBOL_A_VIDEOOBJECT = 69,             /* A_VIDEOOBJECT  */
  YYSYMBOL_C_VIDEOOBJECT = 70,             /* C_VIDEOOBJECT  */
  YYSYMBOL_A_IMAGEOBJECT = 71,             /* A_IMAGEOBJECT  */
  YYSYMBOL_C_IMAGEOBJECT = 72,             /* C_IMAGEOBJECT  */
  YYSYMBOL_A_INFORMALTABLE = 73,           /* A_INFORMALTABLE  */
  YYSYMBOL_C_INFORMALTABLE = 74,           /* C_INFORMALTABLE  */
  YYSYMBOL_A_TGROUP = 75,                  /* A_TGROUP  */
  YYSYMBOL_C_TGROUP = 76,                  /* C_TGROUP  */
  YYSYMBOL_A_ROW = 77,                     /* A_ROW  */
  YYSYMBOL_C_ROW = 78,                     /* C_ROW  */
  YYSYMBOL_A_TABLE = 79,                   /* A_TABLE  */
  YYSYMBOL_C_TABLE = 80,                   /* C_TABLE  */
  YYSYMBOL_A_THEAD = 81,                   /* A_THEAD  */
  YYSYMBOL_C_THEAD = 82,                   /* C_THEAD  */
  YYSYMBOL_A_TFOOT = 83,                   /* A_TFOOT  */
  YYSYMBOL_C_TFOOT = 84,                   /* C_TFOOT  */
  YYSYMBOL_A_TBODY = 85,                   /* A_TBODY  */
  YYSYMBOL_C_TBODY = 86,                   /* C_TBODY  */
  YYSYMBOL_A_ENTRYTBL = 87,                /* A_ENTRYTBL  */
  YYSYMBOL_C_ENTRYTBL = 88,                /* C_ENTRYTBL  */
  YYSYMBOL_A_ENTRY = 89,                   /* A_ENTRY  */
  YYSYMBOL_C_ENTRY = 90,                   /* C_ENTRY  */
  YYSYMBOL_YYACCEPT = 91,                  /* $accept  */
  YYSYMBOL_sigma = 92,                     /* sigma  */
  YYSYMBOL_93_1 = 93,                      /* $@1  */
  YYSYMBOL_section = 94,                   /* section  */
  YYSYMBOL_95_2 = 95,                      /* $@2  */
  YYSYMBOL_96_3 = 96,                      /* $@3  */
  YYSYMBOL_97_4 = 97,                      /* $@4  */
  YYSYMBOL_98_5 = 98,                      /* $@5  */
  YYSYMBOL_articlecontent = 99,            /* articlecontent  */
  YYSYMBOL_article = 100,                  /* article  */
  YYSYMBOL_101_6 = 101,                    /* $@6  */
  YYSYMBOL_infocontent = 102,              /* infocontent  */
  YYSYMBOL_info = 103,                     /* info  */
  YYSYMBOL_104_7 = 104,                    /* $@7  */
  YYSYMBOL_titledoc = 105,                 /* titledoc  */
  YYSYMBOL_106_8 = 106,                    /* $@8  */
  YYSYMBOL_titlesec = 107,                 /* titlesec  */
  YYSYMBOL_108_9 = 108,                    /* $@9  */
  YYSYMBOL_author = 109,                   /* author  */
  YYSYMBOL_110_10 = 110,                   /* $@10  */
  YYSYMBOL_111_11 = 111,                   /* $@11  */
  YYSYMBOL_para = 112,                     /* para  */
  YYSYMBOL_113_12 = 113,                   /* $@12  */
  YYSYMBOL_114_13 = 114,                   /* $@13  */
  YYSYMBOL_simpara = 115,                  /* simpara  */
  YYSYMBOL_116_14 = 116,                   /* $@14  */
  YYSYMBOL_address = 117,                  /* address  */
  YYSYMBOL_118_15 = 118,                   /* $@15  */
  YYSYMBOL_firstname = 119,                /* firstname  */
  YYSYMBOL_120_16 = 120,                   /* $@16  */
  YYSYMBOL_surname = 121,                  /* surname  */
  YYSYMBOL_122_17 = 122,                   /* $@17  */
  YYSYMBOL_email = 123,                    /* email  */
  YYSYMBOL_124_18 = 124,                   /* $@18  */
  YYSYMBOL_postcode = 125,                 /* postcode  */
  YYSYMBOL_126_19 = 126,                   /* $@19  */
  YYSYMBOL_street = 127,                   /* street  */
  YYSYMBOL_128_20 = 128,                   /* $@20  */
  YYSYMBOL_city = 129,                     /* city  */
  YYSYMBOL_130_21 = 130,                   /* $@21  */
  YYSYMBOL_state = 131,                    /* state  */
  YYSYMBOL_132_22 = 132,                   /* $@22  */
  YYSYMBOL_phone = 133,                    /* phone  */
  YYSYMBOL_134_23 = 134,                   /* $@23  */
  YYSYMBOL_date = 135,                     /* date  */
  YYSYMBOL_136_24 = 136,                   /* $@24  */
  YYSYMBOL_year = 137,                     /* year  */
  YYSYMBOL_138_25 = 138,                   /* $@25  */
  YYSYMBOL_holder = 139,                   /* holder  */
  YYSYMBOL_140_26 = 140,                   /* $@26  */
  YYSYMBOL_comment = 141,                  /* comment  */
  YYSYMBOL_142_27 = 142,                   /* $@27  */
  YYSYMBOL_seclcontent = 143,              /* seclcontent  */
  YYSYMBOL_144_28 = 144,                   /* $@28  */
  YYSYMBOL_emphasis = 145,                 /* emphasis  */
  YYSYMBOL_146_29 = 146,                   /* $@29  */
  YYSYMBOL_link = 147,                     /* link  */
  YYSYMBOL_148_30 = 148,                   /* $@30  */
  YYSYMBOL_149_31 = 149,                   /* $@31  */
  YYSYMBOL_150_32 = 150,                   /* $@32  */
  YYSYMBOL_personname = 151,               /* personname  */
  YYSYMBOL_important = 152,                /* important  */
  YYSYMBOL_153_33 = 153,                   /* $@33  */
  YYSYMBOL_154_34 = 154,                   /* $@34  */
  YYSYMBOL_copyright = 155,                /* copyright  */
  YYSYMBOL_abstract = 156,                 /* abstract  */
  YYSYMBOL_mediaobject = 157,              /* mediaobject  */
  YYSYMBOL_videoobject = 158,              /* videoobject  */
  YYSYMBOL_imageobject = 159,              /* imageobject  */
  YYSYMBOL_itemizedlist = 160,             /* itemizedlist  */
  YYSYMBOL_listitem = 161,                 /* listitem  */
  YYSYMBOL_informaltable = 162,            /* informaltable  */
  YYSYMBOL_tgroup = 163,                   /* tgroup  */
  YYSYMBOL_thead = 164,                    /* thead  */
  YYSYMBOL_tfoot = 165,                    /* tfoot  */
  YYSYMBOL_tbody = 166,                    /* tbody  */
  YYSYMBOL_row = 167,                      /* row  */
  YYSYMBOL_entry = 168,                    /* entry  */
  YYSYMBOL_entrytbl = 169,                 /* entrytbl  */
  YYSYMBOL_content = 170,                  /* content  */
  YYSYMBOL_abstractcontent = 171,          /* abstractcontent  */
  YYSYMBOL_copyrightcontent = 172,         /* copyrightcontent  */
  YYSYMBOL_holders = 173,                  /* holders  */
  YYSYMBOL_addresscontent = 174,           /* addresscontent  */
  YYSYMBOL_175_35 = 175,                   /* $@35  */
  YYSYMBOL_titlecontent = 176,             /* titlecontent  */
  YYSYMBOL_177_36 = 177,                   /* $@36  */
  YYSYMBOL_authorcontent = 178,            /* authorcontent  */
  YYSYMBOL_sharedcontent = 179,            /* sharedcontent  */
  YYSYMBOL_180_37 = 180,                   /* $@37  */
  YYSYMBOL_paracontent = 181,              /* paracontent  */
  YYSYMBOL_182_38 = 182,                   /* $@38  */
  YYSYMBOL_entrycontent = 183,             /* entrycontent  */
  YYSYMBOL_184_39 = 184,                   /* $@39  */
  YYSYMBOL_mediaobjectcontent = 185,       /* mediaobjectcontent  */
  YYSYMBOL_videocontent = 186,             /* videocontent  */
  YYSYMBOL_187_40 = 187,                   /* $@40  */
  YYSYMBOL_188_41 = 188,                   /* $@41  */
  YYSYMBOL_189_42 = 189,                   /* $@42  */
  YYSYMBOL_190_43 = 190,                   /* $@43  */
  YYSYMBOL_191_44 = 191,                   /* $@44  */
  YYSYMBOL_192_45 = 192,                   /* $@45  */
  YYSYMBOL_193_46 = 193,                   /* $@46  */
  YYSYMBOL_194_47 = 194,                   /* $@47  */
  YYSYMBOL_imagecontent = 195,             /* imagecontent  */
  YYSYMBOL_196_48 = 196,                   /* $@48  */
  YYSYMBOL_197_49 = 197,                   /* $@49  */
  YYSYMBOL_198_50 = 198,                   /* $@50  */
  YYSYMBOL_199_51 = 199,                   /* $@51  */
  YYSYMBOL_200_52 = 200,                   /* $@52  */
  YYSYMBOL_201_53 = 201,                   /* $@53  */
  YYSYMBOL_202_54 = 202,                   /* $@54  */
  YYSYMBOL_203_55 = 203,                   /* $@55  */
  YYSYMBOL_informalcontent = 204,          /* informalcontent  */
  YYSYMBOL_variosrow = 205,                /* variosrow  */
  YYSYMBOL_rowcontent = 206                /* rowcontent  */
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
#define YYLAST   767

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  91
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  116
/* YYNRULES -- Number of rules.  */
#define YYNRULES  260
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  394

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   345


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
      85,    86,    87,    88,    89,    90
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    63,    63,    63,    67,    68,    68,    71,    71,    74,
      74,    77,    77,    84,    87,    90,    96,    97,    97,   101,
     101,   102,   102,   103,   103,   104,   104,   105,   105,   106,
     106,   107,   107,   111,   111,   115,   115,   118,   118,   126,
     126,   127,   127,   131,   131,   132,   132,   136,   136,   140,
     140,   144,   144,   148,   148,   152,   152,   156,   156,   160,
     160,   164,   164,   168,   168,   172,   172,   176,   176,   180,
     180,   184,   184,   188,   188,   192,   192,   192,   193,   193,
     194,   194,   195,   195,   196,   196,   200,   200,   204,   204,
     205,   205,   205,   209,   213,   213,   214,   214,   218,   222,
     223,   227,   228,   232,   236,   240,   244,   248,   249,   253,
     254,   255,   256,   260,   264,   268,   272,   276,   280,   281,
     286,   286,   287,   287,   288,   288,   289,   289,   290,   290,
     291,   291,   292,   292,   293,   293,   294,   294,   298,   298,
     299,   299,   303,   303,   303,   307,   307,   311,   311,   311,
     312,   312,   313,   313,   314,   314,   315,   315,   316,   316,
     317,   317,   321,   321,   321,   322,   322,   323,   323,   324,
     324,   328,   329,   330,   334,   334,   334,   335,   335,   336,
     336,   337,   337,   341,   341,   341,   342,   342,   343,   343,
     344,   344,   345,   345,   346,   346,   347,   347,   348,   348,
     349,   349,   350,   350,   351,   351,   355,   355,   355,   356,
     356,   357,   357,   358,   358,   359,   359,   360,   360,   361,
     361,   362,   362,   368,   368,   369,   369,   373,   373,   373,
     374,   374,   374,   375,   375,   375,   376,   376,   376,   380,
     380,   380,   381,   381,   381,   382,   382,   382,   383,   383,
     383,   387,   387,   388,   388,   392,   392,   396,   396,   397,
     397
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
  "\"end of file\"", "error", "\"invalid token\"", "TEXTO", "RUTA", "URL",
  "XLINK", "VIDEODATA", "IMAGEDATA", "DOCTYPE", "C_REF", "A_ARTICLE",
  "C_ARTICLE", "A_INFO", "C_INFO", "A_TITLE", "C_TITLE", "A_ABSTRACT",
  "C_ABSTRACT", "A_PARA", "C_PARA", "A_AUTHOR", "C_AUTHOR", "A_PERSONNAME",
  "C_PERSONNAME", "A_FIRSTNAME", "C_FIRSTNAME", "A_SURNAME", "C_SURNAME",
  "A_DATE", "C_DATE", "A_SECTION", "C_SECTION", "A_COPYRIGHT",
  "C_COPYRIGHT", "A_ADDRESS", "C_ADDRESS", "A_CITY", "C_CITY", "A_STATE",
  "C_STATE", "A_POSTCODE", "C_POSTCODE", "A_STREET", "C_STREET", "A_EMAIL",
  "C_EMAIL", "A_PHONE", "C_PHONE", "A_ITEMIZEDLIST", "C_ITEMIZEDLIST",
  "A_LISTITEM", "C_LISTITEM", "A_EMPHASIS", "C_EMPHASIS", "A_HOLDER",
  "C_HOLDER", "A_SIMPARA", "C_SIMPARA", "A_YEAR", "C_YEAR", "A_COMMENT",
  "C_COMMENT", "A_IMPORTANT", "C_IMPORTANT", "A_LINK", "C_LINK",
  "A_MEDIAOBJECT", "C_MEDIAOBJECT", "A_VIDEOOBJECT", "C_VIDEOOBJECT",
  "A_IMAGEOBJECT", "C_IMAGEOBJECT", "A_INFORMALTABLE", "C_INFORMALTABLE",
  "A_TGROUP", "C_TGROUP", "A_ROW", "C_ROW", "A_TABLE", "C_TABLE",
  "A_THEAD", "C_THEAD", "A_TFOOT", "C_TFOOT", "A_TBODY", "C_TBODY",
  "A_ENTRYTBL", "C_ENTRYTBL", "A_ENTRY", "C_ENTRY", "$accept", "sigma",
  "$@1", "section", "$@2", "$@3", "$@4", "$@5", "articlecontent",
  "article", "$@6", "infocontent", "info", "$@7", "titledoc", "$@8",
  "titlesec", "$@9", "author", "$@10", "$@11", "para", "$@12", "$@13",
  "simpara", "$@14", "address", "$@15", "firstname", "$@16", "surname",
  "$@17", "email", "$@18", "postcode", "$@19", "street", "$@20", "city",
  "$@21", "state", "$@22", "phone", "$@23", "date", "$@24", "year", "$@25",
  "holder", "$@26", "comment", "$@27", "seclcontent", "$@28", "emphasis",
  "$@29", "link", "$@30", "$@31", "$@32", "personname", "important",
  "$@33", "$@34", "copyright", "abstract", "mediaobject", "videoobject",
  "imageobject", "itemizedlist", "listitem", "informaltable", "tgroup",
  "thead", "tfoot", "tbody", "row", "entry", "entrytbl", "content",
  "abstractcontent", "copyrightcontent", "holders", "addresscontent",
  "$@35", "titlecontent", "$@36", "authorcontent", "sharedcontent", "$@37",
  "paracontent", "$@38", "entrycontent", "$@39", "mediaobjectcontent",
  "videocontent", "$@40", "$@41", "$@42", "$@43", "$@44", "$@45", "$@46",
  "$@47", "imagecontent", "$@48", "$@49", "$@50", "$@51", "$@52", "$@53",
  "$@54", "$@55", "informalcontent", "variosrow", "rowcontent", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-257)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-249)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       5,  -257,    23,    17,  -257,  -257,  -257,   128,  -257,  -257,
      66,   673,   688,   265,   210,  -257,    82,    64,  -257,    44,
    -257,  -257,    81,   -10,   -46,   -46,   688,   688,   688,   688,
     688,   688,   688,   688,   688,   688,   102,   102,  -257,    79,
    -257,    53,   120,   265,   265,   265,   265,   265,   265,   265,
     121,  -257,  -257,  -257,  -257,   210,   210,   210,   122,    25,
      25,    25,   124,   131,   668,   240,   688,    97,   137,   137,
     140,   688,    11,    14,   100,    89,    89,    91,   103,   -46,
     -46,    86,   111,   102,  -257,  -257,  -257,  -257,  -257,  -257,
    -257,  -257,  -257,    -5,  -257,  -257,   210,   162,   143,    70,
    -257,    20,   166,  -257,  -257,  -257,  -257,  -257,  -257,  -257,
    -257,   210,   199,    70,   137,   137,  -257,  -257,  -257,  -257,
     187,  -257,  -257,  -257,   668,   189,   668,   668,   668,   668,
     668,   668,   668,   668,   668,   668,   190,   179,  -257,  -257,
    -257,  -257,  -257,   240,   240,   240,   240,   240,   240,   194,
     192,  -257,   -53,   137,   137,   137,   183,   137,   191,   688,
     185,   248,   249,   204,   257,   268,   206,   216,  -257,  -257,
    -257,   214,   214,   214,   118,   208,   220,  -257,  -257,  -257,
    -257,  -257,   102,   102,   102,   102,   281,  -257,  -257,   162,
     162,   277,   162,   279,    71,    70,    70,    70,   273,    70,
    -257,   251,  -257,  -257,  -257,  -257,  -257,   258,   254,   250,
    -257,   303,   668,  -257,  -257,  -257,  -257,  -257,  -257,  -257,
    -257,  -257,  -257,  -257,   240,    70,    70,    70,    70,    70,
    -257,  -257,  -257,  -257,  -257,  -257,  -257,  -257,   137,  -257,
    -257,  -257,  -257,  -257,  -257,   260,  -257,   320,   322,   325,
    -257,   323,   326,   344,  -257,  -257,   153,   214,   267,   269,
     280,   208,   275,   276,  -257,   352,   140,   352,   688,  -257,
      70,    70,  -257,  -257,  -257,   343,  -257,    70,  -257,  -257,
    -257,  -257,   308,    70,  -257,   362,  -257,  -257,  -257,  -257,
    -257,  -257,   333,   335,   331,   334,   329,  -257,  -257,  -257,
    -257,   377,   379,  -257,  -257,   394,   396,    -1,   520,   153,
     153,   337,  -257,  -257,  -257,  -257,   327,  -257,  -257,   140,
     688,   688,   370,   385,   384,  -257,  -257,  -257,   357,  -257,
    -257,  -257,  -257,  -257,  -257,   406,   408,  -257,  -257,   409,
     410,  -257,  -257,   208,   338,   342,   520,   520,   520,   520,
     520,   520,   520,   347,  -257,  -257,  -257,  -257,   688,   393,
     395,  -257,  -257,  -257,  -257,  -257,  -257,   418,   423,  -257,
    -257,   424,   428,   359,  -257,   520,  -257,  -257,  -257,  -257,
    -257,  -257,  -257,  -257,   417,  -257,  -257,  -257,  -257,  -257,
    -257,  -257,  -257,  -257
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,     2,     0,    16,     1,    17,     3,     0,    33,    35,
       0,     0,     0,     0,     0,    18,     0,    45,    49,     0,
      47,    73,    96,     0,     0,     0,     0,   121,   127,   129,
     135,   125,   137,   131,   123,   133,     4,     4,    37,    39,
      67,     0,     0,    20,    22,    30,    24,    26,    28,    32,
     162,    90,    55,    86,    88,     0,   166,   170,     0,     0,
     139,   141,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   224,   226,     0,     0,   252,
     254,     0,     0,     4,   120,   126,   128,   134,   124,   136,
     130,   122,   132,    11,    14,    15,     0,     0,     0,     0,
      69,   143,     0,    34,    19,    21,    29,    23,    25,    27,
      31,     0,     0,     0,     0,     0,   167,   165,   169,    36,
       0,   138,   140,   100,     0,   183,   193,   201,   191,   195,
     187,   189,   199,   203,   197,   205,     0,   147,    61,    63,
      57,    59,    65,   159,   161,   151,     0,   155,   157,     0,
       0,   105,    75,    85,    83,    81,     0,    79,     0,     0,
       0,   230,     0,     0,   242,     0,     0,     0,   223,   225,
     101,     0,     0,     0,     0,     0,     0,   251,   253,   107,
     108,    13,     4,     4,     4,     4,     0,    51,    53,     0,
     173,     0,     0,     0,   176,   182,   180,   178,     0,     0,
      71,   145,   142,   144,    98,   163,    91,     0,     0,     0,
      99,     0,     0,   192,   200,   190,   194,   186,   188,   198,
     202,   196,   204,    46,     0,     0,     0,     0,     0,     0,
     158,   160,   150,   152,   154,   156,    50,   106,     0,    84,
      82,    80,    48,    78,    74,     0,    97,     0,     0,   227,
     103,     0,     0,   239,   104,   102,     0,   255,     0,     0,
       0,     0,     0,     0,   112,     0,     0,     0,     0,    38,
       0,     0,   171,   172,    40,     0,    42,     0,   181,   179,
     177,    68,     0,     0,   146,     0,    56,    87,    89,    44,
     184,   148,     0,     0,     0,     0,     0,    76,    95,   231,
     237,     0,     0,   243,   249,     0,     0,     0,     0,   257,
     259,     0,   256,   113,   114,   115,     0,   110,   111,     0,
       0,     0,     0,     0,     0,    93,   175,    70,     0,    92,
      62,    64,    58,    60,    66,     0,     0,   228,   234,     0,
       0,   240,   246,     0,     0,   206,   220,   222,   210,   214,
     218,   216,   212,     0,   258,   260,   116,   109,     0,     0,
       0,    12,    52,    54,    72,   232,   238,     0,     0,   244,
     250,     0,     0,     0,   119,     0,   219,   221,   209,   213,
     217,   215,   211,   117,     0,     8,    10,   229,   235,   241,
     247,   118,   207,     6
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -257,  -257,  -257,   -31,  -257,  -257,  -257,  -257,  -257,  -257,
    -257,   266,    -8,  -257,   449,  -257,   -12,  -257,   361,  -257,
    -257,     9,  -257,  -257,    39,  -257,   512,  -257,  -257,  -257,
    -257,  -257,   478,  -257,  -257,  -257,  -257,  -257,  -257,  -257,
    -257,  -257,  -257,  -257,  -257,  -257,  -257,  -257,  -257,  -257,
      93,  -257,    -9,  -257,   367,  -257,   552,  -257,  -257,  -257,
    -257,    46,  -257,  -257,  -257,    -6,   -13,  -257,  -257,   138,
    -257,   526,  -257,   154,   288,  -158,  -257,  -257,  -257,    59,
      48,   363,   264,   -98,  -257,    72,  -257,    22,   -32,  -257,
     324,  -257,  -115,  -257,   392,  -257,  -257,  -257,  -257,  -257,
    -257,  -257,  -257,  -257,  -257,  -257,  -257,  -257,  -257,  -257,
    -257,  -257,  -257,   -23,  -153,  -256
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     3,    94,   182,   183,   184,   185,    10,     6,
       7,    42,    11,    13,    12,    14,    43,    96,   126,    97,
      98,    27,    63,    64,    28,    68,    29,    65,   189,   270,
     190,   271,   128,   113,   144,   227,   145,   228,   146,   225,
     147,   226,   148,   229,    46,    99,   101,   199,   201,   283,
      30,    69,   156,   238,   196,   114,   197,   115,   112,   285,
     193,    31,    70,    71,    47,    32,    33,    75,    76,    34,
      67,    35,    80,   174,   175,   176,   257,   309,   310,    36,
      62,   102,   203,   149,   224,    58,   111,   191,   198,   277,
     136,   212,   353,   375,    77,   163,   301,   367,   247,   335,
     302,   368,   248,   336,   166,   305,   371,   251,   339,   306,
     372,   252,   340,    81,   258,   311
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      49,   -77,    82,     8,    59,   -77,    95,    48,    -5,   -77,
      -7,    79,    79,   -77,     1,    74,   262,   263,   161,   259,
     260,    23,   164,     4,     8,    60,    -5,     8,     5,    78,
      49,    49,    49,    49,    49,    49,    49,    48,    48,    48,
      48,    48,    48,    48,    17,   230,   231,   232,   233,   234,
     235,   133,   181,   354,   355,    61,   177,   178,   159,    72,
     158,    73,   168,   169,   162,   165,    79,    79,    60,    60,
      60,    37,   124,   194,  -174,   200,    51,  -174,    15,   100,
     171,   207,    20,   -43,   173,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    66,   -94,    38,    61,    61,
      61,    17,   -41,   316,   312,   208,   209,   120,   121,   122,
     132,   133,   100,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   133,    53,  -174,   150,   291,   116,   117,   118,
     160,    21,  -174,    93,   103,    54,  -174,  -164,   119,    20,
     152,     8,   123,     9,   239,   240,   241,   151,   243,   344,
      17,   265,   266,   267,   268,    38,    23,   129,    39,   170,
     179,   155,   155,   278,   279,   280,   192,   282,   186,    72,
     132,    73,   132,   132,   132,   132,   132,   132,   132,   132,
     132,   132,    52,   205,   171,   373,   172,   187,   173,   188,
      53,   180,   195,   292,   293,   294,   295,   296,    21,   133,
     204,   172,   134,   173,   206,   210,   195,   155,   155,  -185,
     223,   272,   273,    50,   275,  -149,    51,   129,   245,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   297,
     236,   376,   377,   378,   379,   380,   381,   382,   323,   324,
     307,   242,   308,   137,   237,   326,   155,   155,   155,   246,
     155,   328,  -236,   244,   320,    52,   249,   319,   132,   321,
     392,  -248,   134,    53,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   250,    54,   253,   138,   254,   139,
      38,   140,    16,   141,   255,    52,    39,   142,   195,   195,
     195,   256,   195,   173,    40,   351,   264,   269,    41,   274,
      18,   276,   350,   281,   286,   129,   200,   358,   287,   104,
     105,   106,   107,   108,   109,   110,   288,   346,   195,   195,
     195,   195,   195,   289,   298,   299,   300,   322,   303,  -233,
     304,   155,    23,   351,   351,   351,   351,   351,   351,   351,
     350,   350,   350,   350,   350,   350,   350,   347,  -245,   313,
     134,   317,   318,   314,   349,   346,   346,   346,   346,   346,
     346,   346,   351,   195,   195,     8,   315,   325,   327,   350,
     195,   330,   329,   332,    44,   331,   195,   334,   333,   359,
     360,    56,   337,   338,   346,   347,   347,   347,   347,   347,
     347,   347,   349,   349,   349,   349,   349,   349,   349,   341,
     342,   348,   361,   357,    44,    44,    44,    44,    44,    44,
      44,   362,   363,   364,   347,   356,   365,   384,   366,   369,
     370,   349,    56,    56,    56,   385,   374,   386,   387,   153,
     153,   130,  -208,   388,   389,   157,   157,   383,   390,   348,
     348,   348,   348,   348,   348,   348,   352,   391,   211,   393,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
      26,   343,   261,    56,   202,   284,   167,     0,   348,     0,
       0,     0,     0,     0,     0,   153,   153,     0,    56,     0,
       0,   157,   157,     0,   352,   352,   352,   352,   352,   352,
     352,   130,    55,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   352,   153,   153,   153,     0,   153,     0,
     157,   157,   157,   345,   157,    45,     0,     0,     0,     0,
       0,     0,     0,    55,    55,    55,   290,    16,     0,    17,
       0,     0,     0,   143,     0,     0,   154,   154,     0,     0,
       0,     0,     0,     0,     0,    45,    45,    45,    45,    45,
      45,    45,     0,     0,     0,     0,    57,     0,     0,    19,
       0,     0,     0,     0,    55,     0,   127,    20,     0,   130,
       0,    21,     0,    22,     0,     0,     0,    23,     0,    55,
     135,     0,   154,   154,     0,     0,     0,     0,     0,   153,
       0,     0,     0,     0,     0,   157,     0,    57,    57,    57,
       0,     0,     0,     0,     0,     0,   131,     0,     0,     0,
       0,   143,   143,   143,   143,   143,   143,     0,     0,     0,
       0,   154,   154,   154,     0,   154,   127,     0,   127,   127,
     127,   127,   127,   127,   127,   127,   127,   127,    57,     0,
     135,     0,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135,     0,    57,     0,     0,     0,     0,     0,     0,
       0,   125,     0,     0,    51,     0,   131,     0,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,     9,    39,
      16,     0,    17,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   143,    18,     0,    16,     0,    17,    18,     0,
       0,     0,     0,    52,     0,     0,   154,    19,     0,     0,
       0,    53,    19,    18,   127,     0,     0,     0,     0,    21,
      20,    22,     0,    54,    21,    23,    22,    19,   135,     0,
      23,    24,     0,     0,     0,    20,    24,    25,     0,    21,
       0,    22,    25,     0,     0,    23,     0,     0,     0,     0,
       0,    24,     0,     0,   131,     0,     0,    25
};

static const yytype_int16 yycheck[] =
{
      13,    54,    25,    13,    16,    58,    37,    13,    13,    62,
      15,    24,    25,    66,     9,    23,   174,   175,     7,   172,
     173,    67,     8,     0,    13,    16,    31,    13,    11,    75,
      43,    44,    45,    46,    47,    48,    49,    43,    44,    45,
      46,    47,    48,    49,    19,   143,   144,   145,   146,   147,
     148,    64,    83,   309,   310,    16,    79,    80,    70,    69,
      69,    71,    75,    76,    72,    73,    79,    80,    59,    60,
      61,    12,    63,     3,     3,    55,     6,     6,    12,    59,
      81,   113,    57,    19,    85,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    51,    15,    15,    59,    60,
      61,    19,    23,   261,   257,   114,   115,    59,    60,    61,
      64,   124,    59,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,    53,    53,    66,   224,    55,    56,    57,
      71,    61,    61,    31,    14,    65,    65,    16,    16,    57,
       3,    13,    18,    15,   153,   154,   155,    50,   157,   307,
      19,   182,   183,   184,   185,    15,    67,    64,    21,    68,
      74,    68,    69,   195,   196,   197,    23,   199,    96,    69,
     124,    71,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,    45,   111,    81,   343,    83,    25,    85,    27,
      53,    80,    99,   225,   226,   227,   228,   229,    61,   212,
      34,    83,    64,    85,     5,    18,   113,   114,   115,    20,
      20,   189,   190,     3,   192,    36,     6,   124,   159,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   238,
      36,   346,   347,   348,   349,   350,   351,   352,   270,   271,
      87,    58,    89,     3,    52,   277,   153,   154,   155,    64,
     157,   283,     4,    62,   266,    45,     7,   265,   212,   267,
     375,     4,   124,    53,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,    70,    65,     8,    37,    72,    39,
      15,    41,    17,    43,    68,    45,    21,    47,   195,   196,
     197,    77,   199,    85,    29,   308,    76,    16,    33,    22,
      35,    22,   308,    30,    46,   212,    55,   319,    54,    43,
      44,    45,    46,    47,    48,    49,    66,   308,   225,   226,
     227,   228,   229,    20,    64,     5,     4,   268,     5,     4,
       4,   238,    67,   346,   347,   348,   349,   350,   351,   352,
     346,   347,   348,   349,   350,   351,   352,   308,     4,    82,
     212,    76,    76,    84,   308,   346,   347,   348,   349,   350,
     351,   352,   375,   270,   271,    13,    86,    24,    60,   375,
     277,    38,    10,    42,    13,    40,   283,    48,    44,   320,
     321,    14,     5,     4,   375,   346,   347,   348,   349,   350,
     351,   352,   346,   347,   348,   349,   350,   351,   352,     5,
       4,   308,    32,    76,    43,    44,    45,    46,    47,    48,
      49,    26,    28,    56,   375,    78,    10,   358,    10,    10,
      10,   375,    55,    56,    57,    32,    88,    32,    10,    68,
      69,    64,    90,    10,    10,    68,    69,    90,    10,   346,
     347,   348,   349,   350,   351,   352,   308,    88,   124,    32,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
      11,   307,   174,    96,   101,   201,    74,    -1,   375,    -1,
      -1,    -1,    -1,    -1,    -1,   114,   115,    -1,   111,    -1,
      -1,   114,   115,    -1,   346,   347,   348,   349,   350,   351,
     352,   124,    14,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   375,   153,   154,   155,    -1,   157,    -1,
     153,   154,   155,     3,   157,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    57,   212,    17,    -1,    19,
      -1,    -1,    -1,    65,    -1,    -1,    68,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    44,    45,    46,    47,
      48,    49,    -1,    -1,    -1,    -1,    14,    -1,    -1,    49,
      -1,    -1,    -1,    -1,    96,    -1,    64,    57,    -1,   212,
      -1,    61,    -1,    63,    -1,    -1,    -1,    67,    -1,   111,
      64,    -1,   114,   115,    -1,    -1,    -1,    -1,    -1,   238,
      -1,    -1,    -1,    -1,    -1,   238,    -1,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,   143,   144,   145,   146,   147,   148,    -1,    -1,    -1,
      -1,   153,   154,   155,    -1,   157,   124,    -1,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,    96,    -1,
     124,    -1,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,    -1,    -1,     6,    -1,   124,    -1,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,    15,    21,
      17,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   224,    35,    -1,    17,    -1,    19,    35,    -1,
      -1,    -1,    -1,    45,    -1,    -1,   238,    49,    -1,    -1,
      -1,    53,    49,    35,   212,    -1,    -1,    -1,    -1,    61,
      57,    63,    -1,    65,    61,    67,    63,    49,   212,    -1,
      67,    73,    -1,    -1,    -1,    57,    73,    79,    -1,    61,
      -1,    63,    79,    -1,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    73,    -1,    -1,   212,    -1,    -1,    79
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    92,    93,     0,    11,   100,   101,    13,    15,
      99,   103,   105,   104,   106,    12,    17,    19,    35,    49,
      57,    61,    63,    67,    73,    79,   105,   112,   115,   117,
     141,   152,   156,   157,   160,   162,   170,   170,    15,    21,
      29,    33,   102,   107,   109,   117,   135,   155,   156,   157,
       3,     6,    45,    53,    65,   123,   145,   147,   176,   107,
     112,   115,   171,   113,   114,   118,    51,   161,   116,   142,
     153,   154,    69,    71,   103,   158,   159,   185,    75,   157,
     163,   204,   204,   170,   170,   170,   170,   170,   170,   170,
     170,   170,   170,    31,    94,    94,   108,   110,   111,   136,
      59,   137,   172,    14,   102,   102,   102,   102,   102,   102,
     102,   177,   149,   124,   146,   148,   176,   176,   176,    16,
     171,   171,   171,    18,   112,     3,   109,   117,   123,   141,
     145,   147,   152,   157,   160,   162,   181,     3,    37,    39,
      41,    43,    47,   123,   125,   127,   129,   131,   133,   174,
     170,    50,     3,   109,   123,   141,   143,   145,   143,   107,
     170,     7,   103,   186,     8,   103,   195,   185,   157,   157,
      68,    81,    83,    85,   164,   165,   166,   204,   204,    74,
      80,    94,    95,    96,    97,    98,   176,    25,    27,   119,
     121,   178,    23,   151,     3,   141,   145,   147,   179,   138,
      55,   139,   172,   173,    34,   176,     5,   179,   143,   143,
      18,   181,   182,   181,   181,   181,   181,   181,   181,   181,
     181,   181,   181,    20,   175,   130,   132,   126,   128,   134,
     174,   174,   174,   174,   174,   174,    36,    52,   144,   143,
     143,   143,    58,   143,    62,   170,    64,   189,   193,     7,
      70,   198,   202,     8,    72,    68,    77,   167,   205,   205,
     205,   165,   166,   166,    76,    94,    94,    94,    94,    16,
     120,   122,   178,   178,    22,   178,    22,   180,   179,   179,
     179,    30,   179,   140,   173,   150,    46,    54,    66,    20,
     181,   174,   179,   179,   179,   179,   179,   143,    64,     5,
       4,   187,   191,     5,     4,   196,   200,    87,    89,   168,
     169,   206,   205,    82,    84,    86,   166,    76,    76,   103,
     107,   103,   170,   179,   179,    24,   179,    60,   179,    10,
      38,    40,    42,    44,    48,   190,   194,     5,     4,   199,
     203,     5,     4,   164,   166,     3,   112,   115,   141,   152,
     156,   157,   160,   183,   206,   206,    78,    76,   107,   170,
     170,    32,    26,    28,    56,    10,    10,   188,   192,    10,
      10,   197,   201,   166,    88,   184,   183,   183,   183,   183,
     183,   183,   183,    90,   170,    32,    32,    10,    10,    10,
      10,    88,   183,    32
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    91,    93,    92,    94,    95,    94,    96,    94,    97,
      94,    98,    94,    99,    99,    99,   100,   101,   100,   102,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   104,   103,   106,   105,   108,   107,   110,
     109,   111,   109,   113,   112,   114,   112,   116,   115,   118,
     117,   120,   119,   122,   121,   124,   123,   126,   125,   128,
     127,   130,   129,   132,   131,   134,   133,   136,   135,   138,
     137,   140,   139,   142,   141,   144,   143,   143,   143,   143,
     143,   143,   143,   143,   143,   143,   146,   145,   148,   147,
     149,   150,   147,   151,   153,   152,   154,   152,   155,   156,
     156,   157,   157,   158,   159,   160,   161,   162,   162,   163,
     163,   163,   163,   164,   165,   166,   167,   168,   169,   169,
     170,   170,   170,   170,   170,   170,   170,   170,   170,   170,
     170,   170,   170,   170,   170,   170,   170,   170,   171,   171,
     171,   171,   172,   172,   172,   173,   173,   175,   174,   174,
     174,   174,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   174,   177,   176,   176,   176,   176,   176,   176,   176,
     176,   178,   178,   178,   180,   179,   179,   179,   179,   179,
     179,   179,   179,   182,   181,   181,   181,   181,   181,   181,
     181,   181,   181,   181,   181,   181,   181,   181,   181,   181,
     181,   181,   181,   181,   181,   181,   184,   183,   183,   183,
     183,   183,   183,   183,   183,   183,   183,   183,   183,   183,
     183,   183,   183,   185,   185,   185,   185,   187,   188,   186,
     189,   190,   186,   191,   192,   186,   193,   194,   186,   196,
     197,   195,   198,   199,   195,   200,   201,   195,   202,   203,
     195,   204,   204,   204,   204,   205,   205,   206,   206,   206,
     206
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     3,     0,     0,     7,     0,     6,     0,
       6,     0,     5,     4,     3,     3,     0,     0,     4,     2,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     5,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     3,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     0,     4,     0,     4,
       0,     0,     5,     3,     0,     5,     0,     4,     3,     4,
       3,     3,     4,     3,     3,     3,     3,     3,     3,     5,
       4,     4,     3,     3,     3,     3,     3,     3,     4,     3,
       2,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     2,     0,     3,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     0,     3,     1,     2,     1,     2,     1,     2,
       1,     2,     2,     1,     0,     3,     1,     2,     1,     2,
       1,     2,     1,     0,     3,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     0,     3,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     0,     0,     6,
       0,     0,     5,     0,     0,     6,     0,     0,     5,     0,
       0,     6,     0,     0,     5,     0,     0,     6,     0,     0,
       5,     2,     1,     2,     1,     1,     2,     1,     2,     1,
       2
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
#line 63 "grammarPrueba.y"
             {fprintf(salida,"<!DOCTYPE html>\n<html lang=\"en\">\n<body>\n");}
#line 1667 "grammarPrueba.tab.c"
    break;

  case 3: /* sigma: DOCTYPE $@1 article  */
#line 63 "grammarPrueba.y"
                                                                                        {fprintf(salida,"</body>\n</html>\n");}
#line 1673 "grammarPrueba.tab.c"
    break;

  case 5: /* $@2: %empty  */
#line 68 "grammarPrueba.y"
              {fprintf(salida,"<section>\n");}
#line 1679 "grammarPrueba.tab.c"
    break;

  case 6: /* section: A_SECTION $@2 section info titlesec content C_SECTION  */
#line 68 "grammarPrueba.y"
                                                                                       {fprintf(salida,"</section>\n");}
#line 1685 "grammarPrueba.tab.c"
    break;

  case 7: /* $@3: %empty  */
#line 71 "grammarPrueba.y"
              {fprintf(salida,"<section>\n");}
#line 1691 "grammarPrueba.tab.c"
    break;

  case 8: /* section: A_SECTION $@3 section titlesec content C_SECTION  */
#line 71 "grammarPrueba.y"
                                                                                  {fprintf(salida,"</section>\n");}
#line 1697 "grammarPrueba.tab.c"
    break;

  case 9: /* $@4: %empty  */
#line 74 "grammarPrueba.y"
              {fprintf(salida,"<section>\n");}
#line 1703 "grammarPrueba.tab.c"
    break;

  case 10: /* section: A_SECTION $@4 section info content C_SECTION  */
#line 74 "grammarPrueba.y"
                                                                              {fprintf(salida,"</section>\n");}
#line 1709 "grammarPrueba.tab.c"
    break;

  case 11: /* $@5: %empty  */
#line 77 "grammarPrueba.y"
              {fprintf(salida,"<section>\n");}
#line 1715 "grammarPrueba.tab.c"
    break;

  case 12: /* section: A_SECTION $@5 section content C_SECTION  */
#line 77 "grammarPrueba.y"
                                                                         {fprintf(salida,"</section>\n");}
#line 1721 "grammarPrueba.tab.c"
    break;

  case 17: /* $@6: %empty  */
#line 97 "grammarPrueba.y"
              {fprintf(salida,"<article>\n");}
#line 1727 "grammarPrueba.tab.c"
    break;

  case 18: /* article: A_ARTICLE $@6 articlecontent C_ARTICLE  */
#line 97 "grammarPrueba.y"
                                                                        {fprintf(salida,"</article>\n");}
#line 1733 "grammarPrueba.tab.c"
    break;

  case 33: /* $@7: %empty  */
#line 111 "grammarPrueba.y"
           {fprintf(salida,"<div> \n <p style=\"background-color: green; color: white; font-size: 8pt;\">\n");}
#line 1739 "grammarPrueba.tab.c"
    break;

  case 34: /* info: A_INFO $@7 infocontent C_INFO  */
#line 111 "grammarPrueba.y"
                                                                                                                                   {fprintf(salida,"</p>\n</div>\n");}
#line 1745 "grammarPrueba.tab.c"
    break;

  case 35: /* $@8: %empty  */
#line 115 "grammarPrueba.y"
            {fprintf(salida,"<h1>\n");}
#line 1751 "grammarPrueba.tab.c"
    break;

  case 36: /* titledoc: A_TITLE $@8 titlecontent C_TITLE  */
#line 115 "grammarPrueba.y"
                                                             {fprintf(salida,"</h1>\n");}
#line 1757 "grammarPrueba.tab.c"
    break;

  case 37: /* $@9: %empty  */
#line 118 "grammarPrueba.y"
            {fprintf(salida,"<h2>");}
#line 1763 "grammarPrueba.tab.c"
    break;

  case 38: /* titlesec: A_TITLE $@9 titlecontent C_TITLE  */
#line 118 "grammarPrueba.y"
                                                           {fprintf(salida,"</h2>\n");}
#line 1769 "grammarPrueba.tab.c"
    break;

  case 39: /* $@10: %empty  */
#line 126 "grammarPrueba.y"
             {fprintf(salida,"<address>\n");}
#line 1775 "grammarPrueba.tab.c"
    break;

  case 40: /* author: A_AUTHOR $@10 authorcontent C_AUTHOR  */
#line 126 "grammarPrueba.y"
                                                                         {fprintf(salida,"</address>\n");}
#line 1781 "grammarPrueba.tab.c"
    break;

  case 41: /* $@11: %empty  */
#line 127 "grammarPrueba.y"
             {fprintf(salida,"<address>\n");}
#line 1787 "grammarPrueba.tab.c"
    break;

  case 42: /* author: A_AUTHOR $@11 personname C_AUTHOR  */
#line 127 "grammarPrueba.y"
                                                                         {fprintf(salida,"</address>\n");}
#line 1793 "grammarPrueba.tab.c"
    break;

  case 43: /* $@12: %empty  */
#line 131 "grammarPrueba.y"
           {fprintf(salida,"<p>");}
#line 1799 "grammarPrueba.tab.c"
    break;

  case 44: /* para: A_PARA $@12 para paracontent C_PARA  */
#line 131 "grammarPrueba.y"
                                                                  {fprintf(salida,"</p>\n");}
#line 1805 "grammarPrueba.tab.c"
    break;

  case 45: /* $@13: %empty  */
#line 132 "grammarPrueba.y"
           {fprintf(salida,"<p>");}
#line 1811 "grammarPrueba.tab.c"
    break;

  case 46: /* para: A_PARA $@13 paracontent C_PARA  */
#line 132 "grammarPrueba.y"
                                                                  {fprintf(salida,"</p>\n");}
#line 1817 "grammarPrueba.tab.c"
    break;

  case 47: /* $@14: %empty  */
#line 136 "grammarPrueba.y"
              {fprintf(salida,"<p>");}
#line 1823 "grammarPrueba.tab.c"
    break;

  case 48: /* simpara: A_SIMPARA $@14 seclcontent C_SIMPARA  */
#line 136 "grammarPrueba.y"
                                                             {fprintf(salida,"</p>\n");}
#line 1829 "grammarPrueba.tab.c"
    break;

  case 49: /* $@15: %empty  */
#line 140 "grammarPrueba.y"
              {fprintf(salida,"<address>\n");}
#line 1835 "grammarPrueba.tab.c"
    break;

  case 50: /* address: A_ADDRESS $@15 addresscontent C_ADDRESS  */
#line 140 "grammarPrueba.y"
                                                                        {fprintf(salida,"</address>\n");}
#line 1841 "grammarPrueba.tab.c"
    break;

  case 51: /* $@16: %empty  */
#line 144 "grammarPrueba.y"
                {fprintf(salida,"<p>");}
#line 1847 "grammarPrueba.tab.c"
    break;

  case 52: /* firstname: A_FIRSTNAME $@16 sharedcontent C_FIRSTNAME  */
#line 144 "grammarPrueba.y"
                                                                   {fprintf(salida,"</p>\n");}
#line 1853 "grammarPrueba.tab.c"
    break;

  case 53: /* $@17: %empty  */
#line 148 "grammarPrueba.y"
              {fprintf(salida,"<p>");}
#line 1859 "grammarPrueba.tab.c"
    break;

  case 54: /* surname: A_SURNAME $@17 sharedcontent C_SURNAME  */
#line 148 "grammarPrueba.y"
                                                               {fprintf(salida,"</p>\n");}
#line 1865 "grammarPrueba.tab.c"
    break;

  case 55: /* $@18: %empty  */
#line 152 "grammarPrueba.y"
            {fprintf(salida,"<p>");}
#line 1871 "grammarPrueba.tab.c"
    break;

  case 56: /* email: A_EMAIL $@18 sharedcontent C_EMAIL  */
#line 152 "grammarPrueba.y"
                                                           {fprintf(salida,"</p>\n");}
#line 1877 "grammarPrueba.tab.c"
    break;

  case 57: /* $@19: %empty  */
#line 156 "grammarPrueba.y"
               {fprintf(salida,"<p>");}
#line 1883 "grammarPrueba.tab.c"
    break;

  case 58: /* postcode: A_POSTCODE $@19 sharedcontent C_POSTCODE  */
#line 156 "grammarPrueba.y"
                                                                 {fprintf(salida,"</p>");}
#line 1889 "grammarPrueba.tab.c"
    break;

  case 59: /* $@20: %empty  */
#line 160 "grammarPrueba.y"
             {fprintf(salida,"<p>");}
#line 1895 "grammarPrueba.tab.c"
    break;

  case 60: /* street: A_STREET $@20 sharedcontent C_STREET  */
#line 160 "grammarPrueba.y"
                                                             {fprintf(salida,"</p>\n");}
#line 1901 "grammarPrueba.tab.c"
    break;

  case 61: /* $@21: %empty  */
#line 164 "grammarPrueba.y"
           {fprintf(salida,"<p>");}
#line 1907 "grammarPrueba.tab.c"
    break;

  case 62: /* city: A_CITY $@21 sharedcontent C_CITY  */
#line 164 "grammarPrueba.y"
                                                         {fprintf(salida,"</p>\n");}
#line 1913 "grammarPrueba.tab.c"
    break;

  case 63: /* $@22: %empty  */
#line 168 "grammarPrueba.y"
            {fprintf(salida,"<p>");}
#line 1919 "grammarPrueba.tab.c"
    break;

  case 64: /* state: A_STATE $@22 sharedcontent C_STATE  */
#line 168 "grammarPrueba.y"
                                                           {fprintf(salida,"</p>\n");}
#line 1925 "grammarPrueba.tab.c"
    break;

  case 65: /* $@23: %empty  */
#line 172 "grammarPrueba.y"
            {fprintf(salida,"<p>");}
#line 1931 "grammarPrueba.tab.c"
    break;

  case 66: /* phone: A_PHONE $@23 sharedcontent C_PHONE  */
#line 172 "grammarPrueba.y"
                                                           {fprintf(salida,"</p>\n");}
#line 1937 "grammarPrueba.tab.c"
    break;

  case 67: /* $@24: %empty  */
#line 176 "grammarPrueba.y"
           {fprintf(salida,"<p>");}
#line 1943 "grammarPrueba.tab.c"
    break;

  case 68: /* date: A_DATE $@24 sharedcontent C_DATE  */
#line 176 "grammarPrueba.y"
                                                         {fprintf(salida,"</p>\n");}
#line 1949 "grammarPrueba.tab.c"
    break;

  case 69: /* $@25: %empty  */
#line 180 "grammarPrueba.y"
           {fprintf(salida,"<p>");}
#line 1955 "grammarPrueba.tab.c"
    break;

  case 70: /* year: A_YEAR $@25 sharedcontent C_YEAR  */
#line 180 "grammarPrueba.y"
                                                         {fprintf(salida,"</p>\n");}
#line 1961 "grammarPrueba.tab.c"
    break;

  case 71: /* $@26: %empty  */
#line 184 "grammarPrueba.y"
             {fprintf(salida,"<p>");}
#line 1967 "grammarPrueba.tab.c"
    break;

  case 72: /* holder: A_HOLDER $@26 sharedcontent C_HOLDER  */
#line 184 "grammarPrueba.y"
                                                             {fprintf(salida,"</p>\n");}
#line 1973 "grammarPrueba.tab.c"
    break;

  case 73: /* $@27: %empty  */
#line 188 "grammarPrueba.y"
              {fprintf(salida,"<p>");}
#line 1979 "grammarPrueba.tab.c"
    break;

  case 74: /* comment: A_COMMENT $@27 seclcontent C_COMMENT  */
#line 188 "grammarPrueba.y"
                                                             {fprintf(salida,"</p>\n");}
#line 1985 "grammarPrueba.tab.c"
    break;

  case 75: /* $@28: %empty  */
#line 192 "grammarPrueba.y"
          {fprintf(salida,"%s", (yyvsp[0].text));}
#line 1991 "grammarPrueba.tab.c"
    break;

  case 77: /* seclcontent: TEXTO  */
#line 192 "grammarPrueba.y"
                                                          {fprintf(salida,"%s", (yyvsp[0].text));}
#line 1997 "grammarPrueba.tab.c"
    break;

  case 86: /* $@29: %empty  */
#line 200 "grammarPrueba.y"
               {fprintf(salida,"<p>");}
#line 2003 "grammarPrueba.tab.c"
    break;

  case 87: /* emphasis: A_EMPHASIS $@29 seclcontent C_EMPHASIS  */
#line 200 "grammarPrueba.y"
                                                               {fprintf(salida,"</p>\n");}
#line 2009 "grammarPrueba.tab.c"
    break;

  case 88: /* $@30: %empty  */
#line 204 "grammarPrueba.y"
           {fprintf(salida,"<p>");}
#line 2015 "grammarPrueba.tab.c"
    break;

  case 89: /* link: A_LINK $@30 seclcontent C_LINK  */
#line 204 "grammarPrueba.y"
                                                       {fprintf(salida,"</p>\n");}
#line 2021 "grammarPrueba.tab.c"
    break;

  case 90: /* $@31: %empty  */
#line 205 "grammarPrueba.y"
          {fprintf(salida,"html:a href=\"");}
#line 2027 "grammarPrueba.tab.c"
    break;

  case 91: /* $@32: %empty  */
#line 205 "grammarPrueba.y"
                                                  {fprintf(salida,"%s", yylval);}
#line 2033 "grammarPrueba.tab.c"
    break;

  case 92: /* link: XLINK $@31 URL $@32 C_REF  */
#line 205 "grammarPrueba.y"
                                                                                        {fprintf(salida,"\">\n");}
#line 2039 "grammarPrueba.tab.c"
    break;

  case 94: /* $@33: %empty  */
#line 213 "grammarPrueba.y"
                {fprintf(salida,"<p>");}
#line 2045 "grammarPrueba.tab.c"
    break;

  case 95: /* important: A_IMPORTANT $@33 titlesec content C_IMPORTANT  */
#line 213 "grammarPrueba.y"
                                                                      {fprintf(salida,"</p>\n");}
#line 2051 "grammarPrueba.tab.c"
    break;

  case 96: /* $@34: %empty  */
#line 214 "grammarPrueba.y"
                {fprintf(salida,"<p>");}
#line 2057 "grammarPrueba.tab.c"
    break;

  case 97: /* important: A_IMPORTANT $@34 content C_IMPORTANT  */
#line 214 "grammarPrueba.y"
                                                             {fprintf(salida,"</p>\n");}
#line 2063 "grammarPrueba.tab.c"
    break;

  case 147: /* $@35: %empty  */
#line 311 "grammarPrueba.y"
          {fprintf(salida,"%s",(yyvsp[0].text));}
#line 2069 "grammarPrueba.tab.c"
    break;

  case 149: /* addresscontent: TEXTO  */
#line 311 "grammarPrueba.y"
                                                            {fprintf(salida,"%s",(yyvsp[0].text));}
#line 2075 "grammarPrueba.tab.c"
    break;

  case 162: /* $@36: %empty  */
#line 321 "grammarPrueba.y"
          {fprintf(salida,"%s", (yyvsp[0].text));}
#line 2081 "grammarPrueba.tab.c"
    break;

  case 164: /* titlecontent: TEXTO  */
#line 321 "grammarPrueba.y"
                                                              {fprintf(salida,"%s", (yyvsp[0].text));}
#line 2087 "grammarPrueba.tab.c"
    break;

  case 174: /* $@37: %empty  */
#line 334 "grammarPrueba.y"
          {fprintf(salida,"%s",(yyvsp[0].text));}
#line 2093 "grammarPrueba.tab.c"
    break;

  case 176: /* sharedcontent: TEXTO  */
#line 334 "grammarPrueba.y"
                                                           {fprintf(salida,"%s",(yyvsp[0].text));}
#line 2099 "grammarPrueba.tab.c"
    break;

  case 183: /* $@38: %empty  */
#line 341 "grammarPrueba.y"
          {fprintf(salida,"%s", (yyvsp[0].text));}
#line 2105 "grammarPrueba.tab.c"
    break;

  case 185: /* paracontent: TEXTO  */
#line 341 "grammarPrueba.y"
                                                          {fprintf(salida,"%s", (yyvsp[0].text));}
#line 2111 "grammarPrueba.tab.c"
    break;

  case 206: /* $@39: %empty  */
#line 355 "grammarPrueba.y"
          {fprintf(salida,"%s", (yyvsp[0].text));}
#line 2117 "grammarPrueba.tab.c"
    break;

  case 208: /* entrycontent: TEXTO  */
#line 355 "grammarPrueba.y"
                                                           {fprintf(salida,"%s", (yyvsp[0].text));}
#line 2123 "grammarPrueba.tab.c"
    break;

  case 227: /* $@40: %empty  */
#line 373 "grammarPrueba.y"
                   {fprintf(salida,"html:a href=\"");}
#line 2129 "grammarPrueba.tab.c"
    break;

  case 228: /* $@41: %empty  */
#line 373 "grammarPrueba.y"
                                                           {fprintf(salida,"%s",yylval);}
#line 2135 "grammarPrueba.tab.c"
    break;

  case 229: /* videocontent: info VIDEODATA $@40 URL $@41 C_REF  */
#line 373 "grammarPrueba.y"
                                                                                                {fprintf(salida,"\">");}
#line 2141 "grammarPrueba.tab.c"
    break;

  case 230: /* $@42: %empty  */
#line 374 "grammarPrueba.y"
              {fprintf(salida,"html:a href=\"");}
#line 2147 "grammarPrueba.tab.c"
    break;

  case 231: /* $@43: %empty  */
#line 374 "grammarPrueba.y"
                                                      {fprintf(salida,"%s",yylval);}
#line 2153 "grammarPrueba.tab.c"
    break;

  case 232: /* videocontent: VIDEODATA $@42 URL $@43 C_REF  */
#line 374 "grammarPrueba.y"
                                                                                           {fprintf(salida,"\">");}
#line 2159 "grammarPrueba.tab.c"
    break;

  case 233: /* $@44: %empty  */
#line 375 "grammarPrueba.y"
                   {fprintf(salida,"html:a href=\"");}
#line 2165 "grammarPrueba.tab.c"
    break;

  case 234: /* $@45: %empty  */
#line 375 "grammarPrueba.y"
                                                            {fprintf(salida,"%s",yylval);}
#line 2171 "grammarPrueba.tab.c"
    break;

  case 235: /* videocontent: info VIDEODATA $@44 RUTA $@45 C_REF  */
#line 375 "grammarPrueba.y"
                                                                                                 {fprintf(salida,"\">");}
#line 2177 "grammarPrueba.tab.c"
    break;

  case 236: /* $@46: %empty  */
#line 376 "grammarPrueba.y"
              {fprintf(salida,"html:a href=\"");}
#line 2183 "grammarPrueba.tab.c"
    break;

  case 237: /* $@47: %empty  */
#line 376 "grammarPrueba.y"
                                                       {fprintf(salida,"%s",yylval);}
#line 2189 "grammarPrueba.tab.c"
    break;

  case 238: /* videocontent: VIDEODATA $@46 RUTA $@47 C_REF  */
#line 376 "grammarPrueba.y"
                                                                                            {fprintf(salida,"\">");}
#line 2195 "grammarPrueba.tab.c"
    break;

  case 239: /* $@48: %empty  */
#line 380 "grammarPrueba.y"
                   {fprintf(salida,"html:a href=\"");}
#line 2201 "grammarPrueba.tab.c"
    break;

  case 240: /* $@49: %empty  */
#line 380 "grammarPrueba.y"
                                                           {fprintf(salida,"%s",yylval);}
#line 2207 "grammarPrueba.tab.c"
    break;

  case 241: /* imagecontent: info IMAGEDATA $@48 URL $@49 C_REF  */
#line 380 "grammarPrueba.y"
                                                                                                {fprintf(salida,"\">");}
#line 2213 "grammarPrueba.tab.c"
    break;

  case 242: /* $@50: %empty  */
#line 381 "grammarPrueba.y"
              {fprintf(salida,"html:a href=\"");}
#line 2219 "grammarPrueba.tab.c"
    break;

  case 243: /* $@51: %empty  */
#line 381 "grammarPrueba.y"
                                                      {fprintf(salida,"%s",yylval);}
#line 2225 "grammarPrueba.tab.c"
    break;

  case 244: /* imagecontent: IMAGEDATA $@50 URL $@51 C_REF  */
#line 381 "grammarPrueba.y"
                                                                                           {fprintf(salida,"\">");}
#line 2231 "grammarPrueba.tab.c"
    break;

  case 245: /* $@52: %empty  */
#line 382 "grammarPrueba.y"
                   {fprintf(salida,"html:a href=\"");}
#line 2237 "grammarPrueba.tab.c"
    break;

  case 246: /* $@53: %empty  */
#line 382 "grammarPrueba.y"
                                                            {fprintf(salida,"%s",yylval);}
#line 2243 "grammarPrueba.tab.c"
    break;

  case 247: /* imagecontent: info IMAGEDATA $@52 RUTA $@53 C_REF  */
#line 382 "grammarPrueba.y"
                                                                                                 {fprintf(salida,"\">");}
#line 2249 "grammarPrueba.tab.c"
    break;

  case 248: /* $@54: %empty  */
#line 383 "grammarPrueba.y"
              {fprintf(salida,"html:a href=\"");}
#line 2255 "grammarPrueba.tab.c"
    break;

  case 249: /* $@55: %empty  */
#line 383 "grammarPrueba.y"
                                                       {fprintf(salida,"%s",yylval);}
#line 2261 "grammarPrueba.tab.c"
    break;

  case 250: /* imagecontent: IMAGEDATA $@54 RUTA $@55 C_REF  */
#line 383 "grammarPrueba.y"
                                                                                            {fprintf(salida,"\">");}
#line 2267 "grammarPrueba.tab.c"
    break;


#line 2271 "grammarPrueba.tab.c"

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

#line 400 "grammarPrueba.y"

