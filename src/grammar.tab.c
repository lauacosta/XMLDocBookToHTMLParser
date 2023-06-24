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
   
    #include <string.h>

#line 75 "grammar.tab.c"

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
  YYSYMBOL_content = 98,                   /* content  */
  YYSYMBOL_section = 99,                   /* section  */
  YYSYMBOL_100_3 = 100,                    /* $@3  */
  YYSYMBOL_simsection = 101,               /* simsection  */
  YYSYMBOL_102_4 = 102,                    /* $@4  */
  YYSYMBOL_103_5 = 103,                    /* $@5  */
  YYSYMBOL_104_6 = 104,                    /* $@6  */
  YYSYMBOL_105_7 = 105,                    /* $@7  */
  YYSYMBOL_infocontent = 106,              /* infocontent  */
  YYSYMBOL_info = 107,                     /* info  */
  YYSYMBOL_108_8 = 108,                    /* $@8  */
  YYSYMBOL_abstractcontent = 109,          /* abstractcontent  */
  YYSYMBOL_abstract = 110,                 /* abstract  */
  YYSYMBOL_addresscontent = 111,           /* addresscontent  */
  YYSYMBOL_112_9 = 112,                    /* $@9  */
  YYSYMBOL_address = 113,                  /* address  */
  YYSYMBOL_authorcontent = 114,            /* authorcontent  */
  YYSYMBOL_author = 115,                   /* author  */
  YYSYMBOL_116_10 = 116,                   /* $@10  */
  YYSYMBOL_copyrightyearcontent = 117,     /* copyrightyearcontent  */
  YYSYMBOL_copyrightholdercontent = 118,   /* copyrightholdercontent  */
  YYSYMBOL_copyright = 119,                /* copyright  */
  YYSYMBOL_titlecontent = 120,             /* titlecontent  */
  YYSYMBOL_121_11 = 121,                   /* $@11  */
  YYSYMBOL_titledoc = 122,                 /* titledoc  */
  YYSYMBOL_123_12 = 123,                   /* $@12  */
  YYSYMBOL_titlesec = 124,                 /* titlesec  */
  YYSYMBOL_125_13 = 125,                   /* $@13  */
  YYSYMBOL_simparacontent = 126,           /* simparacontent  */
  YYSYMBOL_simpara = 127,                  /* simpara  */
  YYSYMBOL_emphasis = 128,                 /* emphasis  */
  YYSYMBOL_comment = 129,                  /* comment  */
  YYSYMBOL_link = 130,                     /* link  */
  YYSYMBOL_paracontent = 131,              /* paracontent  */
  YYSYMBOL_para = 132,                     /* para  */
  YYSYMBOL_133_14 = 133,                   /* $@14  */
  YYSYMBOL_134_15 = 134,                   /* $@15  */
  YYSYMBOL_important = 135,                /* important  */
  YYSYMBOL_sharedcontent = 136,            /* sharedcontent  */
  YYSYMBOL_137_16 = 137,                   /* $@16  */
  YYSYMBOL_personame = 138,                /* personame  */
  YYSYMBOL_139_17 = 139,                   /* $@17  */
  YYSYMBOL_firstname = 140,                /* firstname  */
  YYSYMBOL_141_18 = 141,                   /* $@18  */
  YYSYMBOL_surname = 142,                  /* surname  */
  YYSYMBOL_143_19 = 143,                   /* $@19  */
  YYSYMBOL_street = 144,                   /* street  */
  YYSYMBOL_postcode = 145,                 /* postcode  */
  YYSYMBOL_146_20 = 146,                   /* $@20  */
  YYSYMBOL_city = 147,                     /* city  */
  YYSYMBOL_phone = 148,                    /* phone  */
  YYSYMBOL_email = 149,                    /* email  */
  YYSYMBOL_date = 150,                     /* date  */
  YYSYMBOL_year = 151,                     /* year  */
  YYSYMBOL_holder = 152,                   /* holder  */
  YYSYMBOL_state = 153,                    /* state  */
  YYSYMBOL_mediaobjectcontent = 154,       /* mediaobjectcontent  */
  YYSYMBOL_mediaobject = 155,              /* mediaobject  */
  YYSYMBOL_imageobject = 156,              /* imageobject  */
  YYSYMBOL_videoobject = 157,              /* videoobject  */
  YYSYMBOL_videodata = 158,                /* videodata  */
  YYSYMBOL_imagedata = 159,                /* imagedata  */
  YYSYMBOL_itemizedlist = 160,             /* itemizedlist  */
  YYSYMBOL_listitem = 161,                 /* listitem  */
  YYSYMBOL_informaltablecontent = 162,     /* informaltablecontent  */
  YYSYMBOL_informaltable = 163,            /* informaltable  */
  YYSYMBOL_tgroup = 164,                   /* tgroup  */
  YYSYMBOL_tablecontent = 165,             /* tablecontent  */
  YYSYMBOL_thead = 166,                    /* thead  */
  YYSYMBOL_tbody = 167,                    /* tbody  */
  YYSYMBOL_tfoot = 168,                    /* tfoot  */
  YYSYMBOL_rowcontent = 169,               /* rowcontent  */
  YYSYMBOL_row = 170,                      /* row  */
  YYSYMBOL_entrycontent = 171,             /* entrycontent  */
  YYSYMBOL_172_21 = 172,                   /* $@21  */
  YYSYMBOL_entry = 173,                    /* entry  */
  YYSYMBOL_entrytbl = 174                  /* entrytbl  */
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
#define YYLAST   690

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  82
/* YYNRULES -- Number of rules.  */
#define YYNRULES  235
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  401

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
       0,    56,    56,    56,    60,    61,    62,    63,    64,    65,
      65,    66,    67,    68,    69,    70,    71,    75,    75,    76,
      76,    77,    77,    78,    78,    79,    79,    80,    80,    81,
      81,    82,    82,    83,    83,    87,    88,    89,    90,    91,
      92,    93,    94,    94,    95,    96,    97,   101,   101,   101,
     102,   103,   103,   103,   104,   109,   109,   110,   110,   111,
     111,   112,   112,   113,   113,   114,   114,   115,   115,   119,
     119,   124,   124,   125,   125,   129,   130,   134,   134,   134,
     135,   135,   136,   136,   137,   137,   138,   138,   139,   139,
     140,   140,   144,   148,   149,   150,   151,   152,   156,   156,
     160,   161,   162,   166,   166,   170,   171,   175,   175,   176,
     176,   177,   177,   178,   178,   178,   182,   182,   186,   186,
     190,   190,   190,   191,   191,   192,   192,   196,   197,   201,
     202,   206,   207,   211,   212,   216,   216,   216,   216,   217,
     217,   217,   217,   218,   218,   218,   222,   222,   223,   223,
     227,   228,   232,   232,   233,   233,   234,   234,   235,   235,
     235,   239,   239,   244,   244,   248,   248,   252,   256,   256,
     260,   264,   268,   272,   276,   280,   284,   288,   288,   289,
     289,   293,   294,   295,   296,   297,   298,   302,   303,   307,
     308,   312,   316,   320,   321,   325,   326,   330,   330,   331,
     331,   335,   339,   340,   341,   342,   350,   350,   354,   358,
     362,   366,   366,   367,   367,   371,   375,   375,   375,   376,
     376,   377,   377,   378,   378,   379,   379,   380,   380,   381,
     381,   382,   382,   386,   390,   391
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
  "C_ENTRY", "$accept", "sigma", "$@1", "article", "$@2", "content",
  "section", "$@3", "simsection", "$@4", "$@5", "$@6", "$@7",
  "infocontent", "info", "$@8", "abstractcontent", "abstract",
  "addresscontent", "$@9", "address", "authorcontent", "author", "$@10",
  "copyrightyearcontent", "copyrightholdercontent", "copyright",
  "titlecontent", "$@11", "titledoc", "$@12", "titlesec", "$@13",
  "simparacontent", "simpara", "emphasis", "comment", "link",
  "paracontent", "para", "$@14", "$@15", "important", "sharedcontent",
  "$@16", "personame", "$@17", "firstname", "$@18", "surname", "$@19",
  "street", "postcode", "$@20", "city", "phone", "email", "date", "year",
  "holder", "state", "mediaobjectcontent", "mediaobject", "imageobject",
  "videoobject", "videodata", "imagedata", "itemizedlist", "listitem",
  "informaltablecontent", "informaltable", "tgroup", "tablecontent",
  "thead", "tbody", "tfoot", "rowcontent", "row", "entrycontent", "$@21",
  "entry", "entrytbl", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-179)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-219)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -3,  -179,    16,    76,  -179,   499,  -179,  -179,  -179,    67,
      89,   195,   -30,   201,   206,   580,    18,    -6,    65,    46,
     615,   610,   610,   610,   610,   610,   610,   610,   610,   610,
     610,   461,    14,  -179,   113,    26,    26,    26,   115,   414,
     101,     7,     7,   141,     7,     7,     7,   164,   195,   195,
     195,   195,   195,   195,   610,     8,  -179,  -179,  -179,   206,
     206,  -179,   117,   206,  -179,  -179,  -179,  -179,  -179,   143,
     206,   145,   610,   152,    35,   -41,   181,   192,   138,    -6,
     155,    -6,   610,  -179,   550,   553,   202,   231,   135,   610,
    -179,  -179,   139,  -179,  -179,  -179,  -179,  -179,  -179,  -179,
       7,    12,   235,   461,   461,   461,   461,   461,   461,   461,
     229,   242,    14,    14,    14,    14,  -179,   237,  -179,  -179,
     414,  -179,  -179,  -179,  -179,  -179,  -179,   255,  -179,  -179,
    -179,  -179,  -179,   195,    69,     7,     7,     7,   238,   243,
    -179,   245,   257,   253,  -179,  -179,  -179,  -179,  -179,  -179,
    -179,   107,  -179,   254,   205,   283,   256,   206,   241,   206,
    -179,   250,  -179,   247,  -179,   251,   309,   311,   248,   315,
     313,   252,   -41,   -41,  -179,   268,   -41,   -41,  -179,   269,
     246,   246,   246,   112,   262,   244,  -179,  -179,  -179,   312,
     239,   325,   580,   610,   294,   325,   610,  -179,  -179,   329,
     330,   177,  -179,   337,   360,   297,   339,     7,   342,    38,
    -179,  -179,  -179,  -179,  -179,  -179,  -179,  -179,    14,  -179,
    -179,  -179,  -179,   363,  -179,   361,  -179,  -179,     7,  -179,
    -179,  -179,  -179,  -179,   336,  -179,  -179,  -179,  -179,   328,
    -179,  -179,  -179,   364,   205,   205,   205,   365,  -179,   331,
    -179,   320,  -179,  -179,  -179,   384,   332,  -179,   396,   333,
    -179,   345,   346,  -179,  -179,  -179,  -179,   146,   341,   246,
     340,   359,   262,   371,   372,  -179,  -179,  -179,   420,   425,
     610,   249,   610,   135,  -179,  -179,   424,   325,  -179,  -179,
    -179,   447,   448,  -179,  -179,  -179,  -179,   400,  -179,     7,
    -179,  -179,   409,  -179,  -179,  -179,  -179,  -179,  -179,     7,
       7,  -179,  -179,  -179,  -179,   443,  -179,  -179,  -179,  -179,
    -179,  -179,  -179,  -179,    84,   326,   388,   146,   146,  -179,
    -179,  -179,  -179,   394,  -179,  -179,  -179,  -179,   442,  -179,
     452,   453,   135,   454,   455,   610,  -179,  -179,  -179,  -179,
    -179,   430,  -179,   449,   465,  -179,   407,   413,   405,   326,
     326,   326,   326,   326,   326,   326,   415,  -179,  -179,  -179,
    -179,  -179,  -179,  -179,   467,   473,  -179,  -179,   472,   610,
    -179,  -179,  -179,   418,  -179,   326,  -179,  -179,  -179,  -179,
    -179,  -179,  -179,  -179,  -179,  -179,  -179,   475,  -179,  -179,
    -179
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     2,     0,     0,     1,     0,     3,    69,   116,     0,
     148,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    34,    26,     0,    24,    32,    22,    20,    28,    18,
      30,     0,     0,   118,     0,     0,    74,    72,     0,     0,
      77,     0,     0,     0,     0,     0,     0,     0,    81,    91,
      83,    87,    89,    85,     0,     0,   121,    98,   161,     0,
       0,   125,     0,     0,   120,   126,   123,   122,   124,     0,
     126,     0,     0,     0,     0,     0,     0,     0,     0,   198,
       0,   200,     0,    16,     0,    51,     0,     0,     0,     0,
      33,    25,     0,    23,    31,    21,    19,    27,    17,    29,
       0,     0,     0,    60,    62,    64,    68,    56,    66,    58,
     113,     0,   108,   110,   112,     0,    76,     0,    73,    71,
       0,   145,   142,   138,   135,   139,   136,     0,   141,   137,
     143,   140,   144,     0,   160,   155,   153,   157,     0,     0,
     168,     0,     0,     0,    92,    80,    90,    82,    86,    88,
      84,     0,   194,     0,     0,     0,     0,   120,     0,   123,
     128,     0,   132,     0,   151,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   186,     0,   180,   178,   185,     0,
       0,     0,     0,     0,     0,     0,   197,   201,   199,     0,
       0,     0,     0,     0,     0,     0,    47,    14,    15,     0,
       0,     0,    13,     0,     0,     0,     0,     0,     0,   102,
      70,    59,    61,    63,    67,    55,    65,    57,     0,   117,
     107,   109,   111,     0,    75,     0,   149,    78,     0,   154,
     152,   156,   170,   176,     0,   167,   172,   171,   196,     0,
     193,   163,   165,     0,    96,     0,    97,     0,   130,     0,
     134,     0,   127,   131,   150,     0,     0,   190,     0,     0,
     188,     0,     0,   184,   179,   177,   183,     0,     0,   207,
       0,     0,     0,     0,     0,   205,    10,    46,     0,     0,
       0,     0,     0,     0,    54,    52,     0,     0,     7,     8,
       6,     0,     0,    11,    12,   173,   106,     0,   105,     0,
     100,   101,   104,   114,   119,   147,   159,   169,   195,     0,
       0,    99,    95,    93,    94,     0,   129,   133,   191,   189,
     192,   187,   182,   181,     0,     0,     0,   212,   214,   208,
     206,   210,   209,     0,   203,   204,    44,    45,     0,    39,
       0,     0,     0,     0,     0,     0,    50,    48,     4,     5,
     174,     0,   103,     0,     0,   162,     0,     0,   216,   232,
     226,   230,   224,   222,   228,   220,     0,   215,   211,   213,
     202,    43,    37,    38,     0,     0,    40,    41,     0,     0,
     175,   164,   166,     0,   235,     0,   231,   225,   229,   223,
     221,   227,   219,   233,    35,    36,    53,     0,   234,   217,
      49
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -179,  -179,  -179,  -179,  -179,    91,   -68,  -179,   -63,  -179,
    -179,  -179,  -179,   293,   132,  -179,   258,    78,     4,  -179,
     228,    52,   417,  -179,   301,   211,  -179,   -75,  -179,   495,
    -179,    -1,  -179,   133,    -9,   187,     5,   432,   397,    -2,
    -179,  -179,    59,   -33,  -179,  -152,  -179,   373,  -179,   272,
    -179,  -179,  -179,  -179,  -179,  -179,   441,  -179,  -179,  -179,
    -179,   -76,    49,    60,    74,   362,   357,    68,   380,   160,
     -36,  -179,  -140,   208,  -178,  -162,   -39,  -179,   217,  -179,
    -179,  -179
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     3,     6,    18,    19,    86,   191,    87,   287,
     379,   195,   345,   102,    20,    31,    34,    21,    47,   133,
      22,   243,    61,   154,   208,   301,   106,   111,   218,    23,
      32,   107,   115,    62,    24,   135,    25,   137,   127,    26,
      38,    39,    27,   138,   228,    67,   155,   245,   309,   246,
     310,    48,    49,   234,    50,    51,    52,   108,   209,   302,
      53,   175,    28,   176,   177,   168,   171,    29,    55,    80,
      30,    81,   268,   183,   184,   185,   326,   269,   366,   385,
     327,   328
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      36,   179,   244,   132,    63,   272,     1,    37,    35,   139,
     134,   141,   142,   143,    72,   206,     4,   110,    65,    70,
     199,   273,   274,    54,   203,   200,    36,    36,    36,   204,
      73,     7,    74,    37,    37,    37,   120,   220,   221,   222,
     223,   270,   271,   169,   125,    10,   136,   136,     7,   136,
     136,   136,   145,   146,   147,   148,   149,   150,    83,    12,
     152,    45,    59,    16,    65,    65,    79,   205,    65,    59,
      14,    78,  -158,   207,    60,    65,    76,    84,     7,    85,
     109,    60,    33,   193,   132,    13,    10,     5,   130,    73,
      77,    74,   244,   244,   244,   299,   261,   262,   128,   207,
     264,   265,   229,   230,   231,   136,    71,   131,  -146,   103,
     333,    88,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   278,   153,  -158,   125,    13,   279,    79,   330,
      79,   116,  -158,   291,    10,   172,  -158,   227,   292,   -79,
     136,   136,   136,   303,   140,   151,   357,    69,    75,   173,
      82,   202,   109,   109,   109,   109,   109,   109,   109,   166,
      54,   238,    65,   165,    65,     7,    84,   180,    85,   130,
      84,   182,    85,   189,   297,   190,   194,   160,   383,   128,
     201,   103,   103,   103,   103,   103,   103,   103,   131,   290,
     280,   282,   156,   158,   285,   306,   161,   181,    40,   182,
      64,    64,   144,   163,    56,   167,   170,   162,    84,    56,
      85,   164,   136,   340,   197,   343,   192,   196,   341,   112,
     344,   180,    57,   181,    58,   182,   124,    57,    58,    58,
     241,   187,   242,   136,    41,   324,    42,   325,    43,   186,
      44,   188,    45,   198,    46,  -115,   157,    64,    45,   210,
      64,   174,    73,    45,    74,   224,    59,    64,   219,   104,
      13,    59,   178,    73,    14,    74,   351,   122,    60,    14,
      84,   277,    85,    60,   374,   226,   353,   354,   232,   375,
      84,   339,    85,   281,   283,   233,   347,   286,   368,   369,
     249,   235,   251,   117,   118,   119,   312,   313,   314,   112,
     112,   112,   112,   237,   136,   236,   240,   124,   241,   250,
     252,   253,   248,   255,   136,   136,   360,   254,   166,   258,
     257,   169,   275,   362,   276,   267,   260,   295,   284,   358,
     361,   104,   104,   104,   104,   104,   104,   104,   263,   266,
      33,   288,   289,     9,    64,    10,    64,   181,   122,   293,
     360,   360,   360,   360,   360,   360,   360,   362,   362,   362,
     362,   362,   362,   362,   361,   361,   361,   361,   361,   361,
     361,   338,   294,   342,   364,   296,   360,    12,   298,   304,
     307,   305,   308,   362,   363,    13,   311,   316,   317,    14,
     361,    15,   242,   365,   318,    16,   211,   212,   213,   214,
     215,   216,   217,   359,   319,   112,   320,   321,   364,   364,
     364,   364,   364,   364,   364,   322,   323,   121,   363,   363,
     363,   363,   363,   363,   363,   329,   331,   365,   365,   365,
     365,   365,   365,   365,   364,    57,   378,   359,   359,   359,
     359,   359,   359,   359,   363,    66,    66,   332,   105,   334,
     335,    11,   336,   365,    68,    68,   123,   337,   346,   348,
     349,    45,   350,   359,   113,    12,   299,   355,   367,    59,
     397,   126,   370,   114,   371,   381,    33,    14,     9,    15,
     129,    60,    57,    16,   372,   373,   376,   377,   380,    17,
     100,    66,   159,   382,   182,    66,   101,  -218,    11,   394,
      68,    68,    66,   384,    68,   395,   396,   393,   398,   400,
     300,    68,     7,   352,     8,    89,     9,   225,    10,   315,
     105,   105,   105,   105,   105,   105,   105,   259,   247,   256,
      16,   239,   356,     0,     0,     0,    11,   123,     0,     0,
       0,     0,     0,     0,   113,   113,   113,   113,     0,     0,
      12,     0,   126,   114,   114,   114,   114,     0,    13,     0,
       0,   129,    14,     7,    15,    33,     7,     9,    16,    10,
       9,     0,    10,     0,    17,     0,   386,   387,   388,   389,
     390,   391,   392,     0,     0,     0,     0,    11,     0,    66,
      11,    66,     0,     0,     0,    33,     0,     9,    68,    10,
      68,    12,   399,     0,    12,     0,     0,     0,     0,    13,
       0,     0,    13,    14,     0,    15,    14,    11,    15,    16,
       0,     0,    16,     0,     0,    17,     0,     9,    17,    10,
       8,    12,     9,     0,    10,     0,     0,     0,     0,    13,
       0,     0,     0,    14,     0,    15,     0,    11,     0,    16,
     113,     0,    11,     0,     0,    17,     0,     0,     0,   114,
       0,    12,     0,     0,     0,     0,    12,     0,     0,    13,
       0,     0,     0,    14,    13,    15,     0,     0,    14,    16,
      15,     0,     0,     0,    16,    17,     0,     0,     0,     0,
      17
};

static const yytype_int16 yycheck[] =
{
       9,    77,   154,    39,    13,   183,     9,     9,     9,    42,
       3,    44,    45,    46,    15,     3,     0,     3,    13,    14,
      88,   183,   184,    53,    92,    88,    35,    36,    37,    92,
      71,    13,    73,    35,    36,    37,    38,   112,   113,   114,
     115,   181,   182,     8,    39,    19,    41,    42,    13,    44,
      45,    46,    48,    49,    50,    51,    52,    53,    12,    51,
      52,    47,    55,    69,    59,    60,    17,   100,    63,    55,
      63,    77,     3,    61,    67,    70,    16,    31,    13,    33,
      31,    67,    15,    84,   120,    59,    19,    11,    39,    71,
      16,    73,   244,   245,   246,    57,   172,   173,    39,    61,
     176,   177,   135,   136,   137,   100,    15,    39,    19,    31,
     272,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,   190,    55,    55,   120,    59,   190,    79,   269,
      81,    18,    63,   201,    19,    75,    67,   133,   201,    38,
     135,   136,   137,   218,     3,    54,   324,    14,    16,    75,
      18,    12,   103,   104,   105,   106,   107,   108,   109,     7,
      53,    54,   157,    72,   159,    13,    31,    83,    33,   120,
      31,    87,    33,    82,   207,    84,    85,    60,   356,   120,
      89,   103,   104,   105,   106,   107,   108,   109,   120,    12,
     191,   192,    59,    60,   195,   228,    63,    85,     3,    87,
      13,    14,    38,    70,     3,    73,    74,    64,    31,     3,
      33,    66,   207,   281,    12,   283,    84,    85,   281,    32,
     283,    83,    21,    85,    23,    87,    39,    21,    23,    23,
      25,    76,    27,   228,    39,    89,    41,    91,    43,    79,
      45,    81,    47,    12,    49,    16,    59,    60,    47,    14,
      63,    70,    71,    47,    73,    18,    55,    70,    16,    31,
      59,    55,    70,    71,    63,    73,   299,    39,    67,    63,
      31,    32,    33,    67,   342,    20,   309,   310,    40,   342,
      31,    32,    33,   192,   193,    42,   287,   196,   327,   328,
     157,    46,   159,    35,    36,    37,   244,   245,   246,   112,
     113,   114,   115,    50,   299,    48,    52,   120,    25,    68,
      60,    64,    56,     4,   309,   310,   325,    66,     7,     4,
      72,     8,    78,   325,    12,    79,    74,    30,    34,     3,
     325,   103,   104,   105,   106,   107,   108,   109,    70,    70,
      15,    12,    12,    17,   157,    19,   159,    85,   120,    12,
     359,   360,   361,   362,   363,   364,   365,   359,   360,   361,
     362,   363,   364,   365,   359,   360,   361,   362,   363,   364,
     365,   280,    12,   282,   325,    36,   385,    51,    36,    16,
      44,    20,    54,   385,   325,    59,    22,    56,    68,    63,
     385,    65,    27,   325,    10,    69,   103,   104,   105,   106,
     107,   108,   109,   325,    72,   218,    10,    74,   359,   360,
     361,   362,   363,   364,   365,    70,    70,     3,   359,   360,
     361,   362,   363,   364,   365,    84,    86,   359,   360,   361,
     362,   363,   364,   365,   385,    21,   345,   359,   360,   361,
     362,   363,   364,   365,   385,    13,    14,    88,    31,    78,
      78,    37,    32,   385,    13,    14,    39,    32,    34,    12,
      12,    47,    62,   385,    32,    51,    57,    24,    80,    55,
     379,    39,    78,    32,    32,    26,    15,    63,    17,    65,
      39,    67,    21,    69,    32,    32,    32,    32,    58,    75,
      29,    59,    60,    28,    87,    63,    35,    92,    37,    32,
      59,    60,    70,    90,    63,    32,    34,    92,    90,    34,
     209,    70,    13,   302,    15,    20,    17,   120,    19,   247,
     103,   104,   105,   106,   107,   108,   109,   170,   155,   167,
      69,   151,   324,    -1,    -1,    -1,    37,   120,    -1,    -1,
      -1,    -1,    -1,    -1,   112,   113,   114,   115,    -1,    -1,
      51,    -1,   120,   112,   113,   114,   115,    -1,    59,    -1,
      -1,   120,    63,    13,    65,    15,    13,    17,    69,    19,
      17,    -1,    19,    -1,    75,    -1,   359,   360,   361,   362,
     363,   364,   365,    -1,    -1,    -1,    -1,    37,    -1,   157,
      37,   159,    -1,    -1,    -1,    15,    -1,    17,   157,    19,
     159,    51,   385,    -1,    51,    -1,    -1,    -1,    -1,    59,
      -1,    -1,    59,    63,    -1,    65,    63,    37,    65,    69,
      -1,    -1,    69,    -1,    -1,    75,    -1,    17,    75,    19,
      15,    51,    17,    -1,    19,    -1,    -1,    -1,    -1,    59,
      -1,    -1,    -1,    63,    -1,    65,    -1,    37,    -1,    69,
     218,    -1,    37,    -1,    -1,    75,    -1,    -1,    -1,   218,
      -1,    51,    -1,    -1,    -1,    -1,    51,    -1,    -1,    59,
      -1,    -1,    -1,    63,    59,    65,    -1,    -1,    63,    69,
      65,    -1,    -1,    -1,    69,    75,    -1,    -1,    -1,    -1,
      75
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    94,    95,     0,    11,    96,    13,    15,    17,
      19,    37,    51,    59,    63,    65,    69,    75,    97,    98,
     107,   110,   113,   122,   127,   129,   132,   135,   155,   160,
     163,   108,   123,    15,   109,   124,   127,   132,   133,   134,
       3,    39,    41,    43,    45,    47,    49,   111,   144,   145,
     147,   148,   149,   153,    53,   161,     3,    21,    23,    55,
      67,   115,   126,   127,   128,   129,   130,   138,   149,   126,
     129,    98,   124,    71,    73,   107,   156,   157,    77,   155,
     162,   164,   107,    12,    31,    33,    99,   101,    98,   122,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      29,    35,   106,   110,   113,   115,   119,   124,   150,   155,
       3,   120,   128,   130,   149,   125,    18,   109,   109,   109,
     132,     3,   113,   115,   128,   129,   130,   131,   135,   149,
     155,   160,   163,   112,     3,   128,   129,   130,   136,   136,
       3,   136,   136,   136,    38,   111,   111,   111,   111,   111,
     111,    98,    52,   160,   116,   139,   126,   128,   126,   130,
      60,   126,    64,   126,    66,    98,     7,   107,   158,     8,
     107,   159,   156,   157,    70,   154,   156,   157,    70,   154,
      83,    85,    87,   166,   167,   168,   162,    76,   162,    98,
      98,   100,   107,   124,    98,   104,   107,    12,    12,    99,
     101,    98,    12,    99,   101,   136,     3,    61,   117,   151,
      14,   106,   106,   106,   106,   106,   106,   106,   121,    16,
     120,   120,   120,   120,    18,   131,    20,   111,   137,   136,
     136,   136,    40,    42,   146,    46,    48,    50,    54,   161,
      52,    25,    27,   114,   138,   140,   142,   140,    56,   126,
      68,   126,    60,    64,    66,     4,   158,    72,     4,   159,
      74,   154,   154,    70,   154,   154,    70,    79,   165,   170,
     165,   165,   167,   168,   168,    78,    12,    32,    99,   101,
     124,    98,   124,    98,    34,   124,    98,   102,    12,    12,
      12,    99,   101,    12,    12,    30,    36,   136,    36,    57,
     117,   118,   152,   120,    16,    20,   136,    44,    54,   141,
     143,    22,   114,   114,   114,   142,    56,    68,    10,    72,
      10,    74,    70,    70,    89,    91,   169,   173,   174,    84,
     165,    86,    88,   168,    78,    78,    32,    32,    98,    32,
      99,   101,    98,    99,   101,   105,    34,   124,    12,    12,
      62,   136,   118,   136,   136,    24,   166,   167,     3,   110,
     127,   129,   132,   135,   155,   160,   171,    80,   169,   169,
      78,    32,    32,    32,    99,   101,    32,    32,    98,   103,
      58,    26,    28,   167,    90,   172,   171,   171,   171,   171,
     171,   171,   171,    92,    32,    32,    34,    98,    90,   171,
      34
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    95,    94,    96,    96,    96,    96,    96,    97,
      96,    96,    96,    96,    96,    96,    96,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    99,    99,    99,    99,    99,
      99,    99,   100,    99,    99,    99,    99,   102,   103,   101,
     101,   104,   105,   101,   101,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   108,
     107,   109,   109,   109,   109,   110,   110,   112,   111,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   113,   114,   114,   114,   114,   114,   116,   115,
     117,   117,   117,   118,   118,   119,   119,   120,   120,   120,
     120,   120,   120,   121,   120,   120,   123,   122,   125,   124,
     126,   126,   126,   126,   126,   126,   126,   127,   127,   128,
     128,   129,   129,   130,   130,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   133,   132,   134,   132,
     135,   135,   136,   136,   136,   136,   136,   136,   137,   136,
     136,   139,   138,   141,   140,   143,   142,   144,   146,   145,
     147,   148,   149,   150,   151,   152,   153,   154,   154,   154,
     154,   155,   155,   155,   155,   155,   155,   156,   156,   157,
     157,   158,   159,   160,   160,   161,   161,   162,   162,   162,
     162,   163,   164,   164,   164,   164,   165,   165,   166,   167,
     168,   169,   169,   169,   169,   170,   172,   171,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   171,   171,
     171,   171,   171,   173,   174,   174
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     3,     6,     6,     5,     5,     5,     0,
       5,     5,     5,     4,     4,     4,     3,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     6,     6,     5,     5,     4,
       5,     5,     0,     5,     4,     4,     3,     0,     0,     7,
       4,     0,     0,     6,     3,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     0,
       4,     2,     1,     2,     1,     4,     3,     0,     3,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     3,     2,     2,     2,     1,     1,     0,     4,
       2,     2,     1,     2,     1,     3,     3,     2,     1,     2,
       1,     2,     1,     0,     3,     1,     0,     4,     0,     4,
       1,     1,     1,     1,     1,     1,     1,     4,     3,     4,
       3,     4,     3,     4,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     5,     0,     4,
       4,     3,     2,     1,     2,     1,     2,     1,     0,     3,
       1,     0,     5,     0,     4,     0,     4,     3,     0,     4,
       3,     3,     3,     3,     3,     3,     3,     2,     1,     2,
       1,     5,     5,     4,     4,     3,     3,     4,     3,     4,
       3,     3,     3,     4,     3,     4,     3,     2,     1,     2,
       1,     3,     5,     4,     4,     3,     2,     1,     3,     3,
       3,     2,     1,     2,     1,     3,     0,     3,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     3,     4,     3
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
#line 56 "grammar.y"
             {printf("<!DOCTYPE html>\n<html>\n");}
#line 1604 "grammar.tab.c"
    break;

  case 3: /* sigma: DOCTYPE $@1 article  */
#line 56 "grammar.y"
                                                            {printf("</html>\n");}
#line 1610 "grammar.tab.c"
    break;

  case 9: /* $@2: %empty  */
#line 65 "grammar.y"
              {printf("<article>");}
#line 1616 "grammar.tab.c"
    break;

  case 10: /* article: A_ARTICLE $@2 info content C_ARTICLE  */
#line 65 "grammar.y"
                                                                                             {printf("</article>\n");}
#line 1622 "grammar.tab.c"
    break;

  case 42: /* $@3: %empty  */
#line 94 "grammar.y"
              {printf("<section>\n");}
#line 1628 "grammar.tab.c"
    break;

  case 43: /* section: A_SECTION $@3 titlesec content C_SECTION  */
#line 94 "grammar.y"
                                                                                                  {printf("</section>\n");}
#line 1634 "grammar.tab.c"
    break;

  case 47: /* $@4: %empty  */
#line 101 "grammar.y"
                       {printf("<h2>\n");}
#line 1640 "grammar.tab.c"
    break;

  case 48: /* $@5: %empty  */
#line 101 "grammar.y"
                                                     {printf("</h2>\n");}
#line 1646 "grammar.tab.c"
    break;

  case 51: /* $@6: %empty  */
#line 103 "grammar.y"
                 {printf("<h2>\n");}
#line 1652 "grammar.tab.c"
    break;

  case 52: /* $@7: %empty  */
#line 103 "grammar.y"
                                              {printf("</h2>\n");}
#line 1658 "grammar.tab.c"
    break;

  case 69: /* $@8: %empty  */
#line 119 "grammar.y"
           {printf("<info>\n<p style=\"background-color: green; color: white; font-size: 8pt;\">\n");}
#line 1664 "grammar.tab.c"
    break;

  case 70: /* info: A_INFO $@8 infocontent C_INFO  */
#line 119 "grammar.y"
                                                                                                                          {printf("</info>\n");}
#line 1670 "grammar.tab.c"
    break;

  case 77: /* $@9: %empty  */
#line 134 "grammar.y"
          {printf("%s",yylval);}
#line 1676 "grammar.tab.c"
    break;

  case 79: /* addresscontent: TEXTO  */
#line 134 "grammar.y"
                                                            {printf("%s",yylval);}
#line 1682 "grammar.tab.c"
    break;

  case 98: /* $@10: %empty  */
#line 156 "grammar.y"
             {printf("<author>\n");}
#line 1688 "grammar.tab.c"
    break;

  case 99: /* author: A_AUTHOR $@10 authorcontent C_AUTHOR  */
#line 156 "grammar.y"
                                                            {printf("</author>\n");}
#line 1694 "grammar.tab.c"
    break;

  case 113: /* $@11: %empty  */
#line 178 "grammar.y"
          {printf("%s",yylval);}
#line 1700 "grammar.tab.c"
    break;

  case 115: /* titlecontent: TEXTO  */
#line 178 "grammar.y"
                                                           {printf("%s",yylval);}
#line 1706 "grammar.tab.c"
    break;

  case 116: /* $@12: %empty  */
#line 182 "grammar.y"
            {printf("<h1>\n");}
#line 1712 "grammar.tab.c"
    break;

  case 117: /* titledoc: A_TITLE $@12 titlecontent C_TITLE  */
#line 182 "grammar.y"
                                                     {printf("</h1>\n");}
#line 1718 "grammar.tab.c"
    break;

  case 118: /* $@13: %empty  */
#line 186 "grammar.y"
            {printf("<h2>\n");}
#line 1724 "grammar.tab.c"
    break;

  case 119: /* titlesec: A_TITLE $@13 titlecontent C_TITLE  */
#line 186 "grammar.y"
                                                     {printf("</h2>\n");}
#line 1730 "grammar.tab.c"
    break;

  case 121: /* simparacontent: TEXTO  */
#line 190 "grammar.y"
                     {printf("%s",yylval);}
#line 1736 "grammar.tab.c"
    break;

  case 145: /* paracontent: TEXTO  */
#line 218 "grammar.y"
                                        {printf("%s\n",yylval);}
#line 1742 "grammar.tab.c"
    break;

  case 146: /* $@14: %empty  */
#line 222 "grammar.y"
           {printf("<p>\n");}
#line 1748 "grammar.tab.c"
    break;

  case 147: /* para: A_PARA $@14 para paracontent C_PARA  */
#line 222 "grammar.y"
                                                       {printf("</p>\n");}
#line 1754 "grammar.tab.c"
    break;

  case 148: /* $@15: %empty  */
#line 223 "grammar.y"
           {printf("<p>\n");}
#line 1760 "grammar.tab.c"
    break;

  case 149: /* para: A_PARA $@15 paracontent C_PARA  */
#line 223 "grammar.y"
                                                  {printf("</p>\n");}
#line 1766 "grammar.tab.c"
    break;

  case 158: /* $@16: %empty  */
#line 235 "grammar.y"
          {printf("%s",yylval);}
#line 1772 "grammar.tab.c"
    break;

  case 160: /* sharedcontent: TEXTO  */
#line 235 "grammar.y"
                                                                {printf("%s",yylval);}
#line 1778 "grammar.tab.c"
    break;

  case 161: /* $@17: %empty  */
#line 239 "grammar.y"
                 {printf("<personname>");}
#line 1784 "grammar.tab.c"
    break;

  case 162: /* personame: A_PERSONNAME $@17 firstname surname C_PERSONNAME  */
#line 239 "grammar.y"
                                                                          {printf("</personname>\n");}
#line 1790 "grammar.tab.c"
    break;

  case 163: /* $@18: %empty  */
#line 244 "grammar.y"
                {printf("<firstname>");}
#line 1796 "grammar.tab.c"
    break;

  case 164: /* firstname: A_FIRSTNAME $@18 sharedcontent C_FIRSTNAME  */
#line 244 "grammar.y"
                                                                   {printf("</firstname>\n");}
#line 1802 "grammar.tab.c"
    break;

  case 165: /* $@19: %empty  */
#line 248 "grammar.y"
              {printf("<surname>");}
#line 1808 "grammar.tab.c"
    break;

  case 166: /* surname: A_SURNAME $@19 sharedcontent C_SURNAME  */
#line 248 "grammar.y"
                                                             {printf("</surname>\n");}
#line 1814 "grammar.tab.c"
    break;

  case 168: /* $@20: %empty  */
#line 256 "grammar.y"
                     {printf("%s",yylval);}
#line 1820 "grammar.tab.c"
    break;

  case 216: /* $@21: %empty  */
#line 375 "grammar.y"
          {printf("%s\n",yylval);}
#line 1826 "grammar.tab.c"
    break;

  case 218: /* entrycontent: TEXTO  */
#line 375 "grammar.y"
                                                        {printf("%s\n",yylval);}
#line 1832 "grammar.tab.c"
    break;


#line 1836 "grammar.tab.c"

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

#line 397 "grammar.y"

