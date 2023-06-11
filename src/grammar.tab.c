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
  YYSYMBOL_article = 95,                   /* article  */
  YYSYMBOL_content = 96,                   /* content  */
  YYSYMBOL_section = 97,                   /* section  */
  YYSYMBOL_simsection = 98,                /* simsection  */
  YYSYMBOL_infocontent = 99,               /* infocontent  */
  YYSYMBOL_info = 100,                     /* info  */
  YYSYMBOL_abstractcontent = 101,          /* abstractcontent  */
  YYSYMBOL_abstract = 102,                 /* abstract  */
  YYSYMBOL_addresscontent = 103,           /* addresscontent  */
  YYSYMBOL_address = 104,                  /* address  */
  YYSYMBOL_authorcontent = 105,            /* authorcontent  */
  YYSYMBOL_author = 106,                   /* author  */
  YYSYMBOL_copyrightyearcontent = 107,     /* copyrightyearcontent  */
  YYSYMBOL_copyrightholdercontent = 108,   /* copyrightholdercontent  */
  YYSYMBOL_Copyright = 109,                /* Copyright  */
  YYSYMBOL_titlecontent = 110,             /* titlecontent  */
  YYSYMBOL_title = 111,                    /* title  */
  YYSYMBOL_simparacontent = 112,           /* simparacontent  */
  YYSYMBOL_simpara = 113,                  /* simpara  */
  YYSYMBOL_emphasis = 114,                 /* emphasis  */
  YYSYMBOL_comment = 115,                  /* comment  */
  YYSYMBOL_link = 116,                     /* link  */
  YYSYMBOL_paracontent = 117,              /* paracontent  */
  YYSYMBOL_para = 118,                     /* para  */
  YYSYMBOL_important = 119,                /* important  */
  YYSYMBOL_sharedcontent = 120,            /* sharedcontent  */
  YYSYMBOL_personame = 121,                /* personame  */
  YYSYMBOL_firstname = 122,                /* firstname  */
  YYSYMBOL_surname = 123,                  /* surname  */
  YYSYMBOL_street = 124,                   /* street  */
  YYSYMBOL_city = 125,                     /* city  */
  YYSYMBOL_phone = 126,                    /* phone  */
  YYSYMBOL_email = 127,                    /* email  */
  YYSYMBOL_date = 128,                     /* date  */
  YYSYMBOL_year = 129,                     /* year  */
  YYSYMBOL_holder = 130,                   /* holder  */
  YYSYMBOL_state = 131,                    /* state  */
  YYSYMBOL_mediaobjectcontent = 132,       /* mediaobjectcontent  */
  YYSYMBOL_mediaobject = 133,              /* mediaobject  */
  YYSYMBOL_imageobject = 134,              /* imageobject  */
  YYSYMBOL_videoobject = 135,              /* videoobject  */
  YYSYMBOL_videodata = 136,                /* videodata  */
  YYSYMBOL_imagedata = 137,                /* imagedata  */
  YYSYMBOL_itemizedlist = 138,             /* itemizedlist  */
  YYSYMBOL_listitem = 139,                 /* listitem  */
  YYSYMBOL_informaltablecontent = 140,     /* informaltablecontent  */
  YYSYMBOL_informaltable = 141,            /* informaltable  */
  YYSYMBOL_tgroup = 142,                   /* tgroup  */
  YYSYMBOL_tablecontent = 143,             /* tablecontent  */
  YYSYMBOL_thead = 144,                    /* thead  */
  YYSYMBOL_tbody = 145,                    /* tbody  */
  YYSYMBOL_tfoot = 146,                    /* tfoot  */
  YYSYMBOL_rowcontent = 147,               /* rowcontent  */
  YYSYMBOL_row = 148,                      /* row  */
  YYSYMBOL_entrycontent = 149,             /* entrycontent  */
  YYSYMBOL_entry = 150,                    /* entry  */
  YYSYMBOL_entrytbl = 151                  /* entrytbl  */
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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   654

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  59
/* YYNRULES -- Number of rules.  */
#define YYNRULES  207
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  364

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
       0,    53,    53,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    72,    72,    73,    73,    74,
      74,    75,    75,    76,    76,    77,    77,    78,    78,    79,
      79,    80,    80,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    98,    99,   100,   101,   106,   106,
     107,   107,   108,   108,   109,   109,   110,   110,   111,   111,
     112,   112,   116,   121,   121,   122,   122,   126,   127,   131,
     131,   132,   132,   133,   133,   134,   134,   135,   135,   136,
     136,   140,   144,   145,   146,   150,   154,   155,   156,   160,
     160,   164,   168,   168,   169,   169,   170,   170,   171,   171,
     175,   179,   179,   179,   180,   180,   181,   181,   185,   186,
     190,   191,   195,   196,   200,   201,   205,   205,   205,   205,
     206,   206,   206,   206,   207,   207,   207,   211,   212,   216,
     217,   221,   221,   222,   222,   223,   223,   224,   224,   228,
     233,   237,   241,   245,   249,   253,   257,   261,   265,   269,
     273,   273,   274,   274,   278,   279,   280,   281,   282,   283,
     287,   288,   292,   293,   297,   301,   305,   306,   310,   311,
     315,   315,   316,   316,   320,   324,   325,   326,   327,   331,
     331,   335,   339,   343,   347,   347,   348,   348,   352,   356,
     356,   357,   357,   358,   358,   359,   359,   360,   360,   361,
     361,   362,   362,   363,   363,   367,   371,   372
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
  "C_ENTRY", "$accept", "sigma", "article", "content", "section",
  "simsection", "infocontent", "info", "abstractcontent", "abstract",
  "addresscontent", "address", "authorcontent", "author",
  "copyrightyearcontent", "copyrightholdercontent", "Copyright",
  "titlecontent", "title", "simparacontent", "simpara", "emphasis",
  "comment", "link", "paracontent", "para", "important", "sharedcontent",
  "personame", "firstname", "surname", "street", "city", "phone", "email",
  "date", "year", "holder", "state", "mediaobjectcontent", "mediaobject",
  "imageobject", "videoobject", "videodata", "imagedata", "itemizedlist",
  "listitem", "informaltablecontent", "informaltable", "tgroup",
  "tablecontent", "thead", "tbody", "tfoot", "rowcontent", "row",
  "entrycontent", "entry", "entrytbl", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-190)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      37,    12,    62,   516,  -190,  -190,   209,    17,     6,   242,
     274,    -4,   239,   424,   537,    91,   -19,   122,   537,   552,
     552,   552,   552,   552,   552,   552,   552,   552,   552,   159,
      23,     7,    69,   209,   209,   209,   209,   209,   209,   209,
      17,    23,   424,   424,    77,    17,    17,    17,   125,    15,
      15,    15,  -190,  -190,  -190,  -190,  -190,  -190,   118,   449,
    -190,  -190,  -190,  -190,  -190,   274,    23,    23,    23,    23,
     116,   274,   274,   274,   274,   274,   552,    79,  -190,   178,
    -190,   100,   424,  -190,  -190,  -190,  -190,  -190,   123,   424,
     141,   552,    38,    11,   124,   135,   161,    85,   -19,   171,
     -19,  -190,   516,   516,   252,   262,   128,   552,  -190,  -190,
     138,  -190,  -190,  -190,  -190,  -190,  -190,  -190,    23,    23,
     232,   159,   159,    23,    23,    23,    23,   246,    23,   248,
      14,  -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,
     237,   243,   424,   224,   424,  -190,  -190,  -190,  -190,  -190,
     277,  -190,  -190,  -190,   280,  -190,   261,   266,   257,   260,
    -190,  -190,  -190,  -190,  -190,  -190,   120,  -190,   264,   287,
    -190,   258,  -190,   256,  -190,   291,   318,   351,   289,   358,
     355,   292,   124,   124,  -190,   295,   124,   124,  -190,   297,
     290,   290,   290,   132,   283,   293,  -190,  -190,  -190,    89,
     537,   552,   338,   537,   552,  -190,  -190,  -190,   362,   363,
     167,  -190,   373,   374,   369,   368,  -190,  -190,  -190,  -190,
    -190,  -190,  -190,  -190,   335,  -190,    23,  -190,  -190,   349,
    -190,  -190,   352,  -190,   339,  -190,  -190,  -190,  -190,  -190,
    -190,  -190,   356,  -190,   385,  -190,  -190,  -190,   401,   357,
    -190,   411,   350,  -190,   353,   361,  -190,  -190,  -190,  -190,
     162,   348,   290,   360,   354,   283,   365,   366,  -190,  -190,
     416,   417,   226,   552,   236,  -190,   420,   552,   423,  -190,
    -190,  -190,   438,   439,  -190,  -190,  -190,  -190,  -190,   404,
    -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,
    -190,   109,   174,   389,   162,   162,  -190,  -190,  -190,  -190,
     387,  -190,  -190,  -190,  -190,  -190,   441,   442,   190,  -190,
     443,   444,  -190,   447,  -190,  -190,  -190,  -190,   390,   388,
     174,   174,   174,   174,   174,   174,   174,   174,   391,  -190,
    -190,  -190,  -190,  -190,  -190,   456,   457,  -190,  -190,  -190,
     400,  -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,
    -190,  -190,  -190,  -190
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     2,     1,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    32,
      24,     0,    22,    30,    20,    18,    26,    16,    28,     0,
       0,     0,     0,    53,    55,    57,    61,    49,    59,    51,
      99,     0,     0,     0,     0,    93,    95,    97,     0,     0,
      66,    64,   126,   123,   119,   116,   120,   117,     0,     0,
     122,   118,   124,   121,   125,    70,     0,     0,     0,     0,
       0,    72,    74,    78,    80,    76,     0,     0,   102,     0,
     106,     0,     0,   101,   107,   104,   103,   105,     0,   107,
       0,     0,     0,     0,     0,     0,     0,     0,   171,     0,
     173,    14,     0,     0,     0,     0,     0,     0,    31,    23,
       0,    21,    29,    19,    17,    25,    15,    27,     0,     0,
       0,     0,    84,   138,   134,   132,   136,     0,     0,     0,
      88,    62,    52,    54,    56,    60,    48,    58,    50,    98,
       0,     0,   101,     0,   104,   100,    92,    94,    96,    68,
       0,    65,    63,   128,     0,    69,     0,     0,     0,     0,
      81,    71,    73,    77,    79,    75,     0,   167,     0,     0,
     109,     0,   113,     0,   130,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   159,     0,   153,   151,   158,     0,
       0,     0,     0,     0,     0,     0,   170,   174,   172,     0,
       0,     0,     0,     0,     0,    12,    13,     8,     0,     0,
       0,    11,     0,     0,     0,     0,    85,    82,    83,   137,
     133,   131,   135,   146,     0,    91,     0,    86,    87,    90,
     145,   111,     0,   115,     0,    67,   127,   143,   149,   142,
     144,   169,     0,   166,     0,   108,   112,   129,     0,     0,
     163,     0,     0,   161,     0,     0,   157,   152,   150,   156,
       0,     0,   180,     0,     0,     0,     0,     0,   178,    43,
       0,     0,     0,     0,     0,    47,     0,     0,     0,     6,
       7,     5,     0,     0,     9,    10,   140,   141,   147,     0,
      89,   110,   114,   168,   139,   164,   162,   165,   160,   155,
     154,     0,     0,     0,   185,   187,   181,   179,   183,   182,
       0,   176,   177,    41,    42,    37,     0,     0,     0,    40,
       0,     0,    45,     0,    46,     3,     4,   148,     0,     0,
     190,   204,   198,   202,   196,   194,   200,   192,     0,   188,
     184,   186,   175,    35,    36,     0,     0,    38,    39,    44,
       0,   207,   189,   203,   197,   201,   195,   193,   199,   191,
     205,    33,    34,   206
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -190,  -190,  -190,    87,   -63,   -62,   402,    64,   231,     2,
     -58,   595,   114,    76,   364,   263,  -190,   182,    49,    60,
      10,   413,    57,   421,   434,    46,    82,   147,  -190,   418,
     329,  -190,  -190,  -190,   475,  -190,  -190,  -190,  -190,   -54,
      -6,   -14,   -13,   322,   321,    68,   340,   150,    -3,  -190,
    -180,   204,  -184,  -189,   -64,  -190,    19,  -190,  -190
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     4,    17,   104,   105,    32,    18,    48,    19,
      70,    20,   120,    35,   129,   228,    36,    44,    37,    81,
      22,   124,    23,   126,    58,    24,    25,   127,    86,   121,
     122,    71,    72,    73,    87,    38,   130,   229,    75,   185,
      26,   186,   187,   178,   181,    27,    77,    99,    28,   100,
     261,   193,   194,   195,   303,   262,   338,   304,   305
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      39,    95,    96,    62,   266,   267,    64,   155,    33,   265,
      98,   263,   264,   161,   162,   163,   164,   165,    50,   179,
      40,     7,    82,     3,     6,     9,   123,    39,    39,    39,
      39,    39,    39,    39,     9,    33,    33,    33,    33,    33,
      33,    33,   189,   208,   209,   176,     1,   212,   213,    76,
      15,     6,    21,    62,    51,    59,    64,    49,    97,    50,
      50,    50,     5,    91,    41,    12,    56,   107,   128,    84,
      89,   226,    42,    88,    12,   128,   310,    63,    42,    94,
     182,   183,   307,   131,    43,    54,    13,   125,    80,    80,
      43,    60,    98,   145,    98,    51,    51,    51,   125,    84,
      84,    90,   141,   143,     6,   106,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,    56,   329,    80,    80,
     102,   269,   103,   125,   125,   125,   125,    63,   254,   255,
      11,   167,   257,   258,   101,    54,   270,   271,   153,    84,
     207,    60,   171,   149,   350,   168,    84,   282,   283,   173,
     211,   201,   204,   102,   160,   103,   177,   180,    80,   102,
     170,   103,    92,   166,    93,    80,   200,   203,   190,   102,
     191,   103,   192,    76,   241,   125,   125,   330,   175,   281,
     125,   125,   125,   125,   118,   125,   119,   172,   140,   199,
     202,     8,   190,     9,   210,    92,   192,    93,   102,    84,
     103,    84,   232,   118,   234,   184,    92,   174,    93,   316,
     317,   320,   321,   156,   157,   158,   159,   191,    80,   192,
      80,   102,   139,   103,     7,    11,     8,   146,   147,   148,
      29,   188,    92,    12,    93,   217,   218,    13,    30,    14,
     340,   341,    78,    15,    31,    52,    10,   197,   196,   273,
     198,   301,   277,   302,   216,   345,   346,   102,   315,   103,
      29,     9,    79,    29,   205,   214,   215,   102,   319,   103,
     219,   220,   221,   222,   206,   224,   223,    65,    15,    10,
     150,   151,   152,   125,   225,   230,    41,   272,   274,    41,
     276,   278,   233,    11,    42,   235,   336,    42,    12,   231,
     236,   237,    13,   239,   331,    13,    43,    14,   238,    43,
     240,    15,   332,    66,   119,    67,   243,    16,   245,    68,
     246,    41,   248,    69,   336,   336,   336,   336,   336,   336,
     336,   336,   331,   331,   331,   331,   331,   331,   331,   331,
     332,   332,   332,   332,   332,   332,   332,   332,   334,   352,
     353,   354,   355,   356,   357,   358,   359,   247,   176,   333,
     318,   250,   251,   179,   323,   256,   253,   259,   191,   260,
     337,   268,   275,   289,   279,   280,   334,   334,   334,   334,
     334,   334,   334,   334,   335,   284,   285,   333,   333,   333,
     333,   333,   333,   333,   333,   286,   287,   288,   337,   337,
     337,   337,   337,   337,   337,   337,   226,   292,   291,   294,
     293,   295,   335,   335,   335,   335,   335,   335,   335,   335,
      45,   297,    55,   299,   298,    83,    83,    78,    46,   296,
      57,   300,   306,    85,    85,   132,   133,   134,   135,   136,
     137,   138,   309,   311,   312,    29,   308,    79,   313,   314,
     325,   326,    52,    45,   322,   142,    83,   324,    45,    45,
      45,    46,   327,    85,   144,   342,    46,    46,    46,   339,
      29,    41,    55,   343,   344,   347,   348,   192,   351,    42,
      57,   349,    47,   360,    61,    74,    10,    13,   361,   362,
     363,    43,   290,   154,   227,    83,    41,   169,   244,   249,
      11,   252,    83,    85,    42,   328,   242,     0,     0,     0,
      85,     0,    13,     0,    14,    47,    43,     0,    15,     0,
      47,    47,    47,     0,    16,     0,     0,     0,     0,     6,
       0,     7,     0,     8,    61,     9,     0,     0,     0,     0,
      74,     0,     0,     0,     0,     0,    74,    74,    74,    74,
      74,     0,     7,    10,     8,    83,     9,    83,     0,     0,
       0,     0,     0,    85,     0,    85,     0,    11,     0,     8,
       0,     9,     0,     0,    10,    12,     0,     0,     0,    13,
       0,    14,     0,     0,     0,    15,     0,     0,    11,    10,
       0,    16,     0,     0,     0,     0,    12,     0,     0,     0,
      13,    34,    14,    11,    53,     0,    15,     0,     0,     0,
       0,    12,    16,     0,     0,    13,     0,    14,     0,     0,
       0,    15,     0,     0,     0,     0,     0,    16,    34,    34,
      34,    34,    34,    34,    34,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    53
};

static const yytype_int16 yycheck[] =
{
       6,    15,    15,     9,   193,   194,     9,    65,     6,   193,
      16,   191,   192,    71,    72,    73,    74,    75,     8,     8,
       3,    15,    12,    11,    13,    19,     3,    33,    34,    35,
      36,    37,    38,    39,    19,    33,    34,    35,    36,    37,
      38,    39,    96,   106,   106,     7,     9,   110,   110,    53,
      69,    13,     3,    59,     8,     9,    59,     8,    77,    49,
      50,    51,     0,    14,    47,    59,     9,    18,    61,    12,
      13,    57,    55,    13,    59,    61,   265,     9,    55,    15,
      94,    94,   262,    14,    67,     9,    63,    30,    12,    13,
      67,     9,    98,    16,   100,    49,    50,    51,    41,    42,
      43,    14,    42,    43,    13,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    59,   301,    42,    43,
      31,    32,    33,    66,    67,    68,    69,    59,   182,   183,
      51,    52,   186,   187,    12,    59,   199,   199,    20,    82,
      12,    59,    82,    18,   328,    77,    89,   210,   210,    89,
      12,   102,   103,    31,    38,    33,    92,    93,    82,    31,
      60,    33,    71,    76,    73,    89,   102,   103,    83,    31,
      85,    33,    87,    53,    54,   118,   119,     3,    91,    12,
     123,   124,   125,   126,    25,   128,    27,    64,    41,   102,
     103,    17,    83,    19,   107,    71,    87,    73,    31,   142,
      33,   144,   142,    25,   144,    70,    71,    66,    73,   272,
     272,   274,   274,    66,    67,    68,    69,    85,   142,    87,
     144,    31,    40,    33,    15,    51,    17,    45,    46,    47,
      21,    70,    71,    59,    73,   121,   122,    63,    29,    65,
     304,   305,     3,    69,    35,     3,    37,    76,    98,   200,
     100,    89,   203,    91,    22,   318,   318,    31,    32,    33,
      21,    19,    23,    21,    12,   118,   119,    31,    32,    33,
     123,   124,   125,   126,    12,   128,    30,     3,    69,    37,
      49,    50,    51,   226,    36,    48,    47,   200,   201,    47,
     203,   204,    68,    51,    55,    18,   302,    55,    59,    56,
      20,    40,    63,    46,   302,    63,    67,    65,    42,    67,
      50,    69,   302,    39,    27,    41,    52,    75,    60,    45,
      64,    47,     4,    49,   330,   331,   332,   333,   334,   335,
     336,   337,   330,   331,   332,   333,   334,   335,   336,   337,
     330,   331,   332,   333,   334,   335,   336,   337,   302,   330,
     331,   332,   333,   334,   335,   336,   337,    66,     7,   302,
     273,    72,     4,     8,   277,    70,    74,    70,    85,    79,
     302,    78,    34,   226,    12,    12,   330,   331,   332,   333,
     334,   335,   336,   337,   302,    12,    12,   330,   331,   332,
     333,   334,   335,   336,   337,    26,    28,    62,   330,   331,
     332,   333,   334,   335,   336,   337,    57,    68,    56,    24,
      54,    10,   330,   331,   332,   333,   334,   335,   336,   337,
       7,    10,     9,    70,    74,    12,    13,     3,     7,    72,
       9,    70,    84,    12,    13,    33,    34,    35,    36,    37,
      38,    39,    88,    78,    78,    21,    86,    23,    32,    32,
      12,    12,     3,    40,    34,    42,    43,    34,    45,    46,
      47,    40,    58,    42,    43,    78,    45,    46,    47,    80,
      21,    47,    59,    32,    32,    32,    32,    87,    90,    55,
      59,    34,     7,    92,     9,    10,    37,    63,    32,    32,
      90,    67,   229,    59,   130,    82,    47,    79,   169,   177,
      51,   180,    89,    82,    55,   301,   166,    -1,    -1,    -1,
      89,    -1,    63,    -1,    65,    40,    67,    -1,    69,    -1,
      45,    46,    47,    -1,    75,    -1,    -1,    -1,    -1,    13,
      -1,    15,    -1,    17,    59,    19,    -1,    -1,    -1,    -1,
      65,    -1,    -1,    -1,    -1,    -1,    71,    72,    73,    74,
      75,    -1,    15,    37,    17,   142,    19,   144,    -1,    -1,
      -1,    -1,    -1,   142,    -1,   144,    -1,    51,    -1,    17,
      -1,    19,    -1,    -1,    37,    59,    -1,    -1,    -1,    63,
      -1,    65,    -1,    -1,    -1,    69,    -1,    -1,    51,    37,
      -1,    75,    -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,
      63,     6,    65,    51,     9,    -1,    69,    -1,    -1,    -1,
      -1,    59,    75,    -1,    -1,    63,    -1,    65,    -1,    -1,
      -1,    69,    -1,    -1,    -1,    -1,    -1,    75,    33,    34,
      35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    59
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    94,    11,    95,     0,    13,    15,    17,    19,
      37,    51,    59,    63,    65,    69,    75,    96,   100,   102,
     104,   111,   113,   115,   118,   119,   133,   138,   141,    21,
      29,    35,    99,   102,   104,   106,   109,   111,   128,   133,
       3,    47,    55,    67,   110,   114,   116,   127,   101,   111,
     113,   118,     3,   104,   106,   114,   115,   116,   117,   118,
     119,   127,   133,   138,   141,     3,    39,    41,    45,    49,
     103,   124,   125,   126,   127,   131,    53,   139,     3,    23,
     106,   112,   113,   114,   115,   116,   121,   127,   112,   115,
      96,   111,    71,    73,   100,   134,   135,    77,   133,   140,
     142,    12,    31,    33,    97,    98,    96,   111,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    25,    27,
     105,   122,   123,     3,   114,   115,   116,   120,    61,   107,
     129,    14,    99,    99,    99,    99,    99,    99,    99,   110,
     120,   112,   114,   112,   116,    16,   110,   110,   110,    18,
     101,   101,   101,    20,   117,   103,   120,   120,   120,   120,
      38,   103,   103,   103,   103,   103,    96,    52,   138,   122,
      60,   112,    64,   112,    66,    96,     7,   100,   136,     8,
     100,   137,   134,   135,    70,   132,   134,   135,    70,   132,
      83,    85,    87,   144,   145,   146,   140,    76,   140,    96,
     100,   111,    96,   100,   111,    12,    12,    12,    97,    98,
      96,    12,    97,    98,   120,   120,    22,   105,   105,   120,
     120,   120,   120,    30,   120,    36,    57,   107,   108,   130,
      48,    56,   112,    68,   112,    18,    20,    40,    42,    46,
      50,    54,   139,    52,   123,    60,    64,    66,     4,   136,
      72,     4,   137,    74,   132,   132,    70,   132,   132,    70,
      79,   143,   148,   143,   143,   145,   146,   146,    78,    32,
      97,    98,    96,   111,    96,    34,    96,   111,    96,    12,
      12,    12,    97,    98,    12,    12,    26,    28,    62,   120,
     108,    56,    68,    54,    24,    10,    72,    10,    74,    70,
      70,    89,    91,   147,   150,   151,    84,   143,    86,    88,
     146,    78,    78,    32,    32,    32,    97,    98,    96,    32,
      97,    98,    34,    96,    34,    12,    12,    58,   144,   145,
       3,   102,   113,   115,   118,   119,   133,   138,   149,    80,
     147,   147,    78,    32,    32,    97,    98,    32,    32,    34,
     145,    90,   149,   149,   149,   149,   149,   149,   149,   149,
      92,    32,    32,    90
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    94,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    98,    98,    98,    98,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,   100,   101,   101,   101,   101,   102,   102,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   104,   105,   105,   105,   106,   107,   107,   107,   108,
     108,   109,   110,   110,   110,   110,   110,   110,   110,   110,
     111,   112,   112,   112,   112,   112,   112,   112,   113,   113,
     114,   114,   115,   115,   116,   116,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   118,   118,   119,
     119,   120,   120,   120,   120,   120,   120,   120,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   132,   132,   132,   133,   133,   133,   133,   133,   133,
     134,   134,   135,   135,   136,   137,   138,   138,   139,   139,
     140,   140,   140,   140,   141,   142,   142,   142,   142,   143,
     143,   144,   145,   146,   147,   147,   147,   147,   148,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   150,   151,   151
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     6,     6,     5,     5,     5,     4,     5,
       5,     4,     4,     4,     3,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     6,     6,     5,     5,     4,     5,     5,
       4,     4,     4,     3,     5,     4,     4,     3,     2,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     3,     2,     1,     2,     1,     4,     3,     2,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     3,     2,     2,     1,     3,     2,     2,     1,     2,
       1,     3,     2,     1,     2,     1,     2,     1,     2,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     4,     3,
       4,     3,     4,     3,     4,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     3,     4,
       3,     2,     1,     2,     1,     2,     1,     2,     1,     4,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     1,     2,     1,     5,     5,     4,     4,     3,     3,
       4,     3,     4,     3,     3,     3,     4,     3,     4,     3,
       2,     1,     2,     1,     3,     5,     4,     4,     3,     2,
       1,     3,     3,     3,     2,     1,     2,     1,     3,     2,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     3,     4,     3
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
  case 2: /* input: DOCTYPE article EOL  */
#line 51 "grammar.y"
                         { printf("Cumple! :)\n"); return 0;}
#line 1528 "grammar.tab.c"
    break;

<<<<<<< HEAD

#line 1532 "grammar.tab.c"
=======
#line 1541 "grammar.tab.c"
>>>>>>> f0a45a73c9e14ae310cc90491892c21a04166c76

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

