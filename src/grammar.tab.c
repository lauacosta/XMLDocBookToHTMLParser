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
  YYSYMBOL_copyright = 109,                /* copyright  */
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
  YYSYMBOL_postcode = 125,                 /* postcode  */
  YYSYMBOL_city = 126,                     /* city  */
  YYSYMBOL_phone = 127,                    /* phone  */
  YYSYMBOL_email = 128,                    /* email  */
  YYSYMBOL_date = 129,                     /* date  */
  YYSYMBOL_year = 130,                     /* year  */
  YYSYMBOL_holder = 131,                   /* holder  */
  YYSYMBOL_state = 132,                    /* state  */
  YYSYMBOL_mediaobjectcontent = 133,       /* mediaobjectcontent  */
  YYSYMBOL_mediaobject = 134,              /* mediaobject  */
  YYSYMBOL_imageobject = 135,              /* imageobject  */
  YYSYMBOL_videoobject = 136,              /* videoobject  */
  YYSYMBOL_videodata = 137,                /* videodata  */
  YYSYMBOL_imagedata = 138,                /* imagedata  */
  YYSYMBOL_itemizedlist = 139,             /* itemizedlist  */
  YYSYMBOL_listitem = 140,                 /* listitem  */
  YYSYMBOL_informaltablecontent = 141,     /* informaltablecontent  */
  YYSYMBOL_informaltable = 142,            /* informaltable  */
  YYSYMBOL_tgroup = 143,                   /* tgroup  */
  YYSYMBOL_tablecontent = 144,             /* tablecontent  */
  YYSYMBOL_thead = 145,                    /* thead  */
  YYSYMBOL_tbody = 146,                    /* tbody  */
  YYSYMBOL_tfoot = 147,                    /* tfoot  */
  YYSYMBOL_rowcontent = 148,               /* rowcontent  */
  YYSYMBOL_row = 149,                      /* row  */
  YYSYMBOL_entrycontent = 150,             /* entrycontent  */
  YYSYMBOL_entry = 151,                    /* entry  */
  YYSYMBOL_entrytbl = 152                  /* entrytbl  */
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
#define YYLAST   633

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  60
/* YYNRULES -- Number of rules.  */
#define YYNRULES  213
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  373

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
     136,   137,   137,   141,   145,   146,   147,   148,   149,   153,
     157,   158,   159,   163,   163,   167,   168,   172,   172,   173,
     173,   174,   174,   175,   175,   179,   183,   183,   183,   184,
     184,   185,   185,   189,   190,   194,   195,   199,   200,   204,
     205,   209,   209,   209,   209,   210,   210,   210,   210,   211,
     211,   211,   215,   216,   220,   221,   225,   225,   226,   226,
     227,   227,   228,   228,   232,   237,   241,   245,   249,   253,
     257,   261,   265,   269,   273,   277,   281,   281,   282,   282,
     286,   287,   288,   289,   290,   291,   295,   296,   300,   301,
     305,   309,   313,   314,   318,   319,   323,   323,   324,   324,
     328,   332,   333,   334,   335,   339,   339,   343,   347,   351,
     355,   355,   356,   356,   360,   364,   364,   365,   365,   366,
     366,   367,   367,   368,   368,   369,   369,   370,   370,   371,
     371,   375,   379,   380
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
  "copyrightyearcontent", "copyrightholdercontent", "copyright",
  "titlecontent", "title", "simparacontent", "simpara", "emphasis",
  "comment", "link", "paracontent", "para", "important", "sharedcontent",
  "personame", "firstname", "surname", "street", "postcode", "city",
  "phone", "email", "date", "year", "holder", "state",
  "mediaobjectcontent", "mediaobject", "imageobject", "videoobject",
  "videodata", "imagedata", "itemizedlist", "listitem",
  "informaltablecontent", "informaltable", "tgroup", "tablecontent",
  "thead", "tbody", "tfoot", "rowcontent", "row", "entrycontent", "entry",
  "entrytbl", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-196)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       8,    -4,    20,   506,  -196,  -196,   347,   187,   104,   439,
     206,   -30,   256,   475,   529,    63,   -53,   164,   529,   536,
     536,   536,   536,   536,   536,   536,   536,   536,   536,   108,
      11,     3,    53,   347,   347,   347,   347,   347,   347,   347,
     187,    11,   475,   475,    18,   187,   187,   187,    52,   -10,
     -10,   -10,  -196,  -196,  -196,  -196,  -196,  -196,    64,   440,
    -196,  -196,  -196,  -196,  -196,   206,    11,    11,    85,    11,
      11,    92,   206,   206,   206,   206,   206,   206,   536,    41,
    -196,    99,  -196,    46,   475,  -196,  -196,  -196,  -196,  -196,
      84,   475,    88,   536,    12,    13,    71,   170,   231,    81,
     -53,    79,   -53,  -196,   506,   506,   149,   153,   169,   536,
    -196,  -196,   192,  -196,  -196,  -196,  -196,  -196,  -196,  -196,
      11,    11,   150,   108,   108,   108,    11,    11,    11,    11,
     143,   141,    11,   142,   -15,  -196,  -196,  -196,  -196,  -196,
    -196,  -196,  -196,  -196,   135,   128,   475,   121,   475,  -196,
    -196,  -196,  -196,  -196,   174,  -196,  -196,  -196,   176,  -196,
     166,   188,   193,   190,   194,  -196,  -196,  -196,  -196,  -196,
    -196,  -196,     1,  -196,   168,   243,  -196,   221,  -196,   211,
    -196,   218,   282,   285,   228,   283,   289,   232,    71,    71,
    -196,   237,    71,    71,  -196,   239,   233,   233,   233,   114,
     229,   240,  -196,  -196,  -196,   182,   529,   536,   290,   529,
     536,  -196,  -196,  -196,   313,   345,   215,  -196,   346,   348,
     335,   341,  -196,  -196,  -196,  -196,  -196,  -196,  -196,  -196,
    -196,  -196,   301,  -196,    11,  -196,  -196,   316,  -196,  -196,
     321,  -196,   310,  -196,  -196,  -196,  -196,  -196,  -196,  -196,
    -196,   326,  -196,   357,  -196,  -196,  -196,   373,   314,  -196,
     375,   332,  -196,   325,   349,  -196,  -196,  -196,  -196,   161,
     334,   233,   336,   352,   229,   356,   358,  -196,  -196,   391,
     392,   225,   536,   296,  -196,   403,   536,   407,  -196,  -196,
    -196,   432,   433,  -196,  -196,  -196,  -196,  -196,   388,  -196,
    -196,  -196,  -196,  -196,  -196,  -196,  -196,  -196,  -196,  -196,
      -2,   257,   367,   161,   161,  -196,  -196,  -196,  -196,   371,
    -196,  -196,  -196,  -196,  -196,   420,   424,   234,  -196,   425,
     427,  -196,   428,  -196,  -196,  -196,  -196,   376,   374,   257,
     257,   257,   257,   257,   257,   257,   257,   378,  -196,  -196,
    -196,  -196,  -196,  -196,   442,   443,  -196,  -196,  -196,   389,
    -196,  -196,  -196,  -196,  -196,  -196,  -196,  -196,  -196,  -196,
    -196,  -196,  -196
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
     104,     0,     0,     0,     0,    98,   100,   102,     0,     0,
      66,    64,   131,   128,   124,   121,   125,   122,     0,     0,
     127,   123,   129,   126,   130,    70,     0,     0,     0,     0,
       0,     0,    72,    82,    74,    78,    80,    76,     0,     0,
     107,     0,   111,     0,     0,   106,   112,   109,   108,   110,
       0,   112,     0,     0,     0,     0,     0,     0,     0,     0,
     177,     0,   179,    14,     0,     0,     0,     0,     0,     0,
      31,    23,     0,    21,    29,    19,    17,    25,    15,    27,
       0,     0,     0,    87,     0,    88,   143,   139,   137,   141,
       0,     0,     0,     0,    92,    62,    52,    54,    56,    60,
      48,    58,    50,   103,     0,     0,   106,     0,   109,   105,
      97,    99,   101,    68,     0,    65,    63,   133,     0,    69,
       0,     0,     0,     0,     0,    83,    71,    81,    73,    77,
      79,    75,     0,   173,     0,     0,   114,     0,   118,     0,
     135,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     165,     0,   159,   157,   164,     0,     0,     0,     0,     0,
       0,     0,   176,   180,   178,     0,     0,     0,     0,     0,
       0,    12,    13,     8,     0,     0,     0,    11,     0,     0,
       0,     0,    89,    86,    84,    85,   142,   138,   136,   140,
     152,    96,     0,    95,     0,    90,    91,    94,   151,   116,
       0,   120,     0,    67,   132,   149,   155,   148,   147,   150,
     175,     0,   172,     0,   113,   117,   134,     0,     0,   169,
       0,     0,   167,     0,     0,   163,   158,   156,   162,     0,
       0,   186,     0,     0,     0,     0,     0,   184,    43,     0,
       0,     0,     0,     0,    47,     0,     0,     0,     6,     7,
       5,     0,     0,     9,    10,   145,   146,   153,     0,    93,
     115,   119,   174,   144,   170,   168,   171,   166,   161,   160,
       0,     0,     0,   191,   193,   187,   185,   189,   188,     0,
     182,   183,    41,    42,    37,     0,     0,     0,    40,     0,
       0,    45,     0,    46,     3,     4,   154,     0,     0,   196,
     210,   204,   208,   202,   200,   206,   198,     0,   194,   190,
     192,   181,    35,    36,     0,     0,    38,    39,    44,     0,
     213,   195,   209,   203,   207,   201,   199,   205,   197,   211,
      33,    34,   212
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -196,  -196,  -196,    89,   -65,   -64,   594,   117,   281,     2,
     541,   525,   242,    78,   331,   244,  -196,     5,    55,    62,
      10,   226,    59,   408,   421,    48,    86,   162,    33,   401,
     308,  -196,  -196,  -196,  -196,   426,  -196,  -196,  -196,  -196,
     -18,    -6,   -14,   -13,   305,   298,    68,   317,   178,     6,
    -196,  -185,   183,  -188,  -195,  -175,  -196,   280,  -196,  -196
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     4,    17,   106,   107,    32,    18,    48,    19,
      71,    20,   122,    35,   133,   236,    36,    44,    37,    83,
      22,   127,    23,   129,    58,    24,    25,   130,    88,   124,
     125,    72,    73,    74,    75,    76,    38,   134,   237,    77,
     191,    26,   192,   193,   184,   187,    27,    79,   101,    28,
     102,   270,   199,   200,   201,   312,   271,   347,   313,   314
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      39,    97,    98,    62,   275,   276,   131,     3,    33,     9,
     100,   274,   272,   273,   126,    64,    15,     1,    50,   182,
       5,   185,    84,    78,    99,     6,     6,    39,    39,    39,
      39,    39,    39,    39,   149,    33,    33,    33,    33,    33,
      33,    33,   234,   214,   215,   143,   132,   218,   219,    12,
     150,   151,   152,    62,    78,   250,    51,    59,    21,    50,
      50,    50,   123,    49,   132,    64,    42,   135,    56,    93,
     153,    86,    91,   109,    13,    90,     6,    63,    43,   319,
     195,   196,   188,   189,   157,   198,   316,    54,   162,   128,
      82,    82,    11,   173,   100,    60,   100,    51,    51,    51,
     128,    86,    86,    92,   145,   147,   176,   108,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,    56,     7,
      82,    82,   338,     9,   120,   128,   128,    63,   128,   128,
     165,    81,    96,   120,    94,   121,    95,    54,   349,   350,
     279,   280,    94,    86,    95,    60,   177,   174,   178,   359,
      86,   291,   292,   179,   180,   203,   123,   123,   123,   207,
     210,   211,    82,    12,   196,   212,   197,   172,   198,    82,
     263,   264,   222,   230,   266,   267,   103,   231,   233,   128,
     128,   213,   181,   238,   239,   128,   128,   128,   128,   241,
      40,   128,   243,   205,   208,   104,   244,   105,   216,   197,
     104,   198,   105,   144,   217,    86,   245,    86,   240,    65,
     242,   183,   186,   104,   278,   105,   325,   326,   329,   330,
     252,   206,   209,   104,    82,   105,    82,   290,   160,   161,
     246,   163,   164,    45,    41,    55,   248,   247,    85,    85,
     190,    94,    42,    95,   249,    66,   104,    67,   105,    68,
     310,    69,   311,    41,    43,    70,   104,   324,   105,    80,
     339,   282,   354,   355,   286,   104,    45,   105,   146,    85,
     121,    45,    45,    45,     8,   255,     9,    29,   202,    81,
     204,   254,   220,   221,   256,    55,   257,   260,   226,   227,
     228,   229,   182,   128,   232,   281,   283,   185,   285,   287,
     259,   194,    94,    41,    95,   345,   262,   265,    11,   268,
      85,    42,   269,   340,   197,    12,    12,    85,   277,    13,
      13,   341,    14,    43,   284,   288,    15,   104,   328,   105,
     154,   155,   156,   345,   345,   345,   345,   345,   345,   345,
     345,   340,   340,   340,   340,   340,   340,   340,   340,   341,
     341,   341,   341,   341,   341,   341,   341,   289,   293,   343,
     294,   295,     7,   297,     8,   223,   224,   225,    29,   296,
     342,   327,    85,   234,    85,   332,    30,   300,   301,   346,
     302,   303,    31,   304,    10,   306,   305,   343,   343,   343,
     343,   343,   343,   343,   343,   308,   298,   344,   342,   342,
     342,   342,   342,   342,   342,   342,   307,   346,   346,   346,
     346,   346,   346,   346,   346,    46,    15,    57,   315,   309,
      87,    87,   317,   322,   323,   344,   344,   344,   344,   344,
     344,   344,   344,    47,   320,    61,   321,   331,    89,    89,
     318,   333,    52,    52,   334,   335,   336,   348,    46,   351,
      87,   148,   352,    46,    46,    46,   353,   356,     9,   357,
      29,    29,   358,   198,   360,   235,    47,    57,    89,    89,
     369,    47,    47,    47,   370,   371,    10,    10,    80,   372,
     158,   299,   175,   253,   261,    61,    41,    41,   258,   251,
      11,    11,    87,   337,    42,    42,    29,     0,    81,    87,
       0,     0,    13,    13,    14,    14,    43,    43,    15,    15,
      89,     0,     0,     0,    16,    16,     0,    89,     0,     6,
       0,     7,    41,     8,     0,     9,     0,     0,     0,     0,
      42,    34,     0,     0,    53,     0,     0,     0,    13,     0,
       0,     0,    43,    10,     7,     0,     8,     0,     9,     0,
       0,     0,     0,     8,    87,     9,    87,    11,    34,    34,
      34,    34,    34,    34,    34,    12,    10,     0,     0,    13,
       0,    14,    89,    10,    89,    15,     0,     0,     0,     0,
      11,    16,     0,     0,    53,     0,     0,    11,    12,     0,
       0,     0,    13,     0,    14,    12,     0,     0,    15,    13,
       0,    14,     0,     0,    16,    15,   159,     0,     0,     0,
       0,    16,     0,   166,   167,   168,   169,   170,   171,   361,
     362,   363,   364,   365,   366,   367,   368,   136,   137,   138,
     139,   140,   141,   142
};

static const yytype_int16 yycheck[] =
{
       6,    15,    15,     9,   199,   200,     3,    11,     6,    19,
      16,   199,   197,   198,     3,     9,    69,     9,     8,     7,
       0,     8,    12,    53,    77,    13,    13,    33,    34,    35,
      36,    37,    38,    39,    16,    33,    34,    35,    36,    37,
      38,    39,    57,   108,   108,    40,    61,   112,   112,    59,
      45,    46,    47,    59,    53,    54,     8,     9,     3,    49,
      50,    51,    29,     8,    61,    59,    55,    14,     9,    14,
      18,    12,    13,    18,    63,    13,    13,     9,    67,   274,
      98,    83,    96,    96,    20,    87,   271,     9,     3,    30,
      12,    13,    51,    52,   100,     9,   102,    49,    50,    51,
      41,    42,    43,    14,    42,    43,    60,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    59,    15,
      42,    43,   310,    19,    25,    66,    67,    59,    69,    70,
      38,    23,    15,    25,    71,    27,    73,    59,   313,   314,
     205,   205,    71,    84,    73,    59,    84,    79,    64,   337,
      91,   216,   216,    91,    66,    76,   123,   124,   125,   104,
     105,    12,    84,    59,    83,    12,    85,    78,    87,    91,
     188,   189,    22,    30,   192,   193,    12,    36,    36,   120,
     121,    12,    93,    48,    56,   126,   127,   128,   129,    68,
       3,   132,    18,   104,   105,    31,    20,    33,   109,    85,
      31,    87,    33,    41,    12,   146,    40,   148,   146,     3,
     148,    94,    95,    31,    32,    33,   281,   281,   283,   283,
      52,   104,   105,    31,   146,    33,   148,    12,    66,    67,
      42,    69,    70,     7,    47,     9,    46,    44,    12,    13,
      70,    71,    55,    73,    50,    39,    31,    41,    33,    43,
      89,    45,    91,    47,    67,    49,    31,    32,    33,     3,
       3,   206,   327,   327,   209,    31,    40,    33,    42,    43,
      27,    45,    46,    47,    17,    64,    19,    21,   100,    23,
     102,    60,   120,   121,    66,    59,     4,     4,   126,   127,
     128,   129,     7,   234,   132,   206,   207,     8,   209,   210,
      72,    70,    71,    47,    73,   311,    74,    70,    51,    70,
      84,    55,    79,   311,    85,    59,    59,    91,    78,    63,
      63,   311,    65,    67,    34,    12,    69,    31,    32,    33,
      49,    50,    51,   339,   340,   341,   342,   343,   344,   345,
     346,   339,   340,   341,   342,   343,   344,   345,   346,   339,
     340,   341,   342,   343,   344,   345,   346,    12,    12,   311,
      12,    26,    15,    62,    17,   123,   124,   125,    21,    28,
     311,   282,   146,    57,   148,   286,    29,    56,    68,   311,
      54,    24,    35,    10,    37,    10,    72,   339,   340,   341,
     342,   343,   344,   345,   346,    70,   234,   311,   339,   340,
     341,   342,   343,   344,   345,   346,    74,   339,   340,   341,
     342,   343,   344,   345,   346,     7,    69,     9,    84,    70,
      12,    13,    86,    32,    32,   339,   340,   341,   342,   343,
     344,   345,   346,     7,    78,     9,    78,    34,    12,    13,
      88,    34,     3,     3,    12,    12,    58,    80,    40,    78,
      42,    43,    32,    45,    46,    47,    32,    32,    19,    32,
      21,    21,    34,    87,    90,   134,    40,    59,    42,    43,
      92,    45,    46,    47,    32,    32,    37,    37,     3,    90,
      59,   237,    81,   175,   186,    59,    47,    47,   183,   172,
      51,    51,    84,   310,    55,    55,    21,    -1,    23,    91,
      -1,    -1,    63,    63,    65,    65,    67,    67,    69,    69,
      84,    -1,    -1,    -1,    75,    75,    -1,    91,    -1,    13,
      -1,    15,    47,    17,    -1,    19,    -1,    -1,    -1,    -1,
      55,     6,    -1,    -1,     9,    -1,    -1,    -1,    63,    -1,
      -1,    -1,    67,    37,    15,    -1,    17,    -1,    19,    -1,
      -1,    -1,    -1,    17,   146,    19,   148,    51,    33,    34,
      35,    36,    37,    38,    39,    59,    37,    -1,    -1,    63,
      -1,    65,   146,    37,   148,    69,    -1,    -1,    -1,    -1,
      51,    75,    -1,    -1,    59,    -1,    -1,    51,    59,    -1,
      -1,    -1,    63,    -1,    65,    59,    -1,    -1,    69,    63,
      -1,    65,    -1,    -1,    75,    69,    65,    -1,    -1,    -1,
      -1,    75,    -1,    72,    73,    74,    75,    76,    77,   339,
     340,   341,   342,   343,   344,   345,   346,    33,    34,    35,
      36,    37,    38,    39
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    94,    11,    95,     0,    13,    15,    17,    19,
      37,    51,    59,    63,    65,    69,    75,    96,   100,   102,
     104,   111,   113,   115,   118,   119,   134,   139,   142,    21,
      29,    35,    99,   102,   104,   106,   109,   111,   129,   134,
       3,    47,    55,    67,   110,   114,   116,   128,   101,   111,
     113,   118,     3,   104,   106,   114,   115,   116,   117,   118,
     119,   128,   134,   139,   142,     3,    39,    41,    43,    45,
      49,   103,   124,   125,   126,   127,   128,   132,    53,   140,
       3,    23,   106,   112,   113,   114,   115,   116,   121,   128,
     112,   115,    96,   111,    71,    73,   100,   135,   136,    77,
     134,   141,   143,    12,    31,    33,    97,    98,    96,   111,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      25,    27,   105,   121,   122,   123,     3,   114,   115,   116,
     120,     3,    61,   107,   130,    14,    99,    99,    99,    99,
      99,    99,    99,   110,   120,   112,   114,   112,   116,    16,
     110,   110,   110,    18,   101,   101,   101,    20,   117,   103,
     120,   120,     3,   120,   120,    38,   103,   103,   103,   103,
     103,   103,    96,    52,   139,   122,    60,   112,    64,   112,
      66,    96,     7,   100,   137,     8,   100,   138,   135,   136,
      70,   133,   135,   136,    70,   133,    83,    85,    87,   145,
     146,   147,   141,    76,   141,    96,   100,   111,    96,   100,
     111,    12,    12,    12,    97,    98,    96,    12,    97,    98,
     120,   120,    22,   105,   105,   105,   120,   120,   120,   120,
      30,    36,   120,    36,    57,   107,   108,   131,    48,    56,
     112,    68,   112,    18,    20,    40,    42,    44,    46,    50,
      54,   140,    52,   123,    60,    64,    66,     4,   137,    72,
       4,   138,    74,   133,   133,    70,   133,   133,    70,    79,
     144,   149,   144,   144,   146,   147,   147,    78,    32,    97,
      98,    96,   111,    96,    34,    96,   111,    96,    12,    12,
      12,    97,    98,    12,    12,    26,    28,    62,   120,   108,
      56,    68,    54,    24,    10,    72,    10,    74,    70,    70,
      89,    91,   148,   151,   152,    84,   144,    86,    88,   147,
      78,    78,    32,    32,    32,    97,    98,    96,    32,    97,
      98,    34,    96,    34,    12,    12,    58,   145,   146,     3,
     102,   113,   115,   118,   119,   134,   139,   150,    80,   148,
     148,    78,    32,    32,    97,    98,    32,    32,    34,   146,
      90,   150,   150,   150,   150,   150,   150,   150,   150,    92,
      32,    32,    90
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
     103,   103,   103,   104,   105,   105,   105,   105,   105,   106,
     107,   107,   107,   108,   108,   109,   109,   110,   110,   110,
     110,   110,   110,   110,   110,   111,   112,   112,   112,   112,
     112,   112,   112,   113,   113,   114,   114,   115,   115,   116,
     116,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   118,   118,   119,   119,   120,   120,   120,   120,
     120,   120,   120,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   133,   133,   133,
     134,   134,   134,   134,   134,   134,   135,   135,   136,   136,
     137,   138,   139,   139,   140,   140,   141,   141,   141,   141,
     142,   143,   143,   143,   143,   144,   144,   145,   146,   147,
     148,   148,   148,   148,   149,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   151,   152,   152
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
       1,     2,     1,     3,     2,     2,     2,     1,     1,     3,
       2,     2,     1,     2,     1,     3,     3,     2,     1,     2,
       1,     2,     1,     2,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     4,     3,     4,     3,     4,     3,     4,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     3,     4,     3,     2,     1,     2,     1,
       2,     1,     2,     1,     4,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     1,     2,     1,
       5,     5,     4,     4,     3,     3,     4,     3,     4,     3,
       3,     3,     4,     3,     4,     3,     2,     1,     2,     1,
       3,     5,     4,     4,     3,     2,     1,     3,     3,     3,
       2,     1,     2,     1,     3,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     3,     4,     3
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

#line 1545 "grammar.tab.c"

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

#line 386 "grammar.y"

