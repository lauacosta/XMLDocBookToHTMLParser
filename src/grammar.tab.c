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
  YYSYMBOL_EOL = 3,                        /* EOL  */
  YYSYMBOL_TEXTO = 4,                      /* TEXTO  */
  YYSYMBOL_RUTA = 5,                       /* RUTA  */
  YYSYMBOL_URL = 6,                        /* URL  */
  YYSYMBOL_XLINK = 7,                      /* XLINK  */
  YYSYMBOL_VIDEODATA = 8,                  /* VIDEODATA  */
  YYSYMBOL_IMAGEDATA = 9,                  /* IMAGEDATA  */
  YYSYMBOL_DOCTYPE = 10,                   /* DOCTYPE  */
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
  YYSYMBOL_input = 94,                     /* input  */
  YYSYMBOL_article = 95,                   /* article  */
  YYSYMBOL_Content = 96,                   /* Content  */
  YYSYMBOL_Section = 97,                   /* Section  */
  YYSYMBOL_SimSection = 98,                /* SimSection  */
  YYSYMBOL_InfoContent = 99,               /* InfoContent  */
  YYSYMBOL_Info = 100,                     /* Info  */
  YYSYMBOL_AbstractContent = 101,          /* AbstractContent  */
  YYSYMBOL_Abstract = 102,                 /* Abstract  */
  YYSYMBOL_AddressContent = 103,           /* AddressContent  */
  YYSYMBOL_Address = 104,                  /* Address  */
  YYSYMBOL_AuthorContent = 105,            /* AuthorContent  */
  YYSYMBOL_Author = 106,                   /* Author  */
  YYSYMBOL_CopyrightYearContent = 107,     /* CopyrightYearContent  */
  YYSYMBOL_CopyrightHolderContent = 108,   /* CopyrightHolderContent  */
  YYSYMBOL_Copyright = 109,                /* Copyright  */
  YYSYMBOL_TitleContent = 110,             /* TitleContent  */
  YYSYMBOL_Title = 111,                    /* Title  */
  YYSYMBOL_SimParaContent = 112,           /* SimParaContent  */
  YYSYMBOL_SimPara = 113,                  /* SimPara  */
  YYSYMBOL_Emphasis = 114,                 /* Emphasis  */
  YYSYMBOL_Comment = 115,                  /* Comment  */
  YYSYMBOL_Link = 116,                     /* Link  */
  YYSYMBOL_ParaContent = 117,              /* ParaContent  */
  YYSYMBOL_Para = 118,                     /* Para  */
  YYSYMBOL_Important = 119,                /* Important  */
  YYSYMBOL_SharedContent = 120,            /* SharedContent  */
  YYSYMBOL_Personame = 121,                /* Personame  */
  YYSYMBOL_Firstname = 122,                /* Firstname  */
  YYSYMBOL_Surname = 123,                  /* Surname  */
  YYSYMBOL_Street = 124,                   /* Street  */
  YYSYMBOL_City = 125,                     /* City  */
  YYSYMBOL_Phone = 126,                    /* Phone  */
  YYSYMBOL_Email = 127,                    /* Email  */
  YYSYMBOL_Date = 128,                     /* Date  */
  YYSYMBOL_Year = 129,                     /* Year  */
  YYSYMBOL_Holder = 130,                   /* Holder  */
  YYSYMBOL_State = 131,                    /* State  */
  YYSYMBOL_MediaObjectContent = 132,       /* MediaObjectContent  */
  YYSYMBOL_MediaObject = 133,              /* MediaObject  */
  YYSYMBOL_ImageObject = 134,              /* ImageObject  */
  YYSYMBOL_VideoObject = 135,              /* VideoObject  */
  YYSYMBOL_VideoData = 136,                /* VideoData  */
  YYSYMBOL_ImageData = 137,                /* ImageData  */
  YYSYMBOL_ItemizedList = 138,             /* ItemizedList  */
  YYSYMBOL_ListItem = 139,                 /* ListItem  */
  YYSYMBOL_InformalTableContent = 140,     /* InformalTableContent  */
  YYSYMBOL_InformalTable = 141,            /* InformalTable  */
  YYSYMBOL_Tgroup = 142,                   /* Tgroup  */
  YYSYMBOL_TableContent = 143,             /* TableContent  */
  YYSYMBOL_Thead = 144,                    /* Thead  */
  YYSYMBOL_Tbody = 145,                    /* Tbody  */
  YYSYMBOL_Tfoot = 146,                    /* Tfoot  */
  YYSYMBOL_RowContent = 147,               /* RowContent  */
  YYSYMBOL_Row = 148,                      /* Row  */
  YYSYMBOL_EntryContent = 149,             /* EntryContent  */
  YYSYMBOL_Entry = 150,                    /* Entry  */
  YYSYMBOL_EntryTbl = 151                  /* EntryTbl  */
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
#define YYLAST   590

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  59
/* YYNRULES -- Number of rules.  */
#define YYNRULES  204
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  360

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
       0,    51,    51,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    70,    70,    71,    71,    72,
      72,    73,    73,    74,    74,    75,    75,    76,    76,    77,
      77,    78,    78,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    94,    95,    96,    97,   102,   102,   103,   103,
     104,   104,   105,   105,   106,   106,   107,   107,   108,   108,
     112,   117,   117,   118,   118,   122,   123,   127,   127,   128,
     128,   129,   129,   130,   130,   131,   131,   132,   132,   136,
     140,   141,   142,   146,   150,   151,   152,   156,   156,   160,
     163,   163,   164,   164,   165,   165,   166,   166,   170,   174,
     174,   174,   175,   175,   176,   176,   180,   181,   185,   186,
     190,   191,   195,   196,   200,   200,   200,   200,   201,   201,
     201,   201,   202,   202,   206,   207,   211,   212,   216,   216,
     217,   217,   218,   218,   219,   219,   223,   228,   232,   236,
     240,   244,   248,   252,   256,   260,   264,   268,   268,   269,
     269,   273,   274,   275,   276,   277,   278,   282,   283,   287,
     288,   292,   296,   300,   301,   305,   306,   310,   310,   311,
     311,   315,   319,   320,   321,   322,   326,   326,   330,   334,
     338,   342,   342,   343,   343,   347,   351,   351,   352,   352,
     353,   353,   354,   354,   355,   355,   356,   356,   357,   357,
     358,   358,   362,   366,   367
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
  "\"end of file\"", "error", "\"invalid token\"", "EOL", "TEXTO", "RUTA",
  "URL", "XLINK", "VIDEODATA", "IMAGEDATA", "DOCTYPE", "A_ARTICLE",
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
  "C_ENTRY", "$accept", "input", "article", "Content", "Section",
  "SimSection", "InfoContent", "Info", "AbstractContent", "Abstract",
  "AddressContent", "Address", "AuthorContent", "Author",
  "CopyrightYearContent", "CopyrightHolderContent", "Copyright",
  "TitleContent", "Title", "SimParaContent", "SimPara", "Emphasis",
  "Comment", "Link", "ParaContent", "Para", "Important", "SharedContent",
  "Personame", "Firstname", "Surname", "Street", "City", "Phone", "Email",
  "Date", "Year", "Holder", "State", "MediaObjectContent", "MediaObject",
  "ImageObject", "VideoObject", "VideoData", "ImageData", "ItemizedList",
  "ListItem", "InformalTableContent", "InformalTable", "Tgroup",
  "TableContent", "Thead", "Tbody", "Tfoot", "RowContent", "Row",
  "EntryContent", "Entry", "EntryTbl", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-232)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       4,   105,   139,   397,    62,  -232,   400,     9,   -14,   467,
     509,   102,   386,   404,   446,    34,   -34,   202,   446,   433,
     433,   433,   433,   433,   433,   433,   433,   433,   433,  -232,
     122,    83,   115,   149,   400,   400,   400,   400,   400,   400,
     400,     9,    83,   404,   404,   181,     9,     9,     9,   184,
      -7,    -7,    -7,  -232,  -232,  -232,  -232,  -232,   183,   480,
    -232,  -232,  -232,  -232,  -232,   509,    83,    83,    83,    83,
     169,   509,   509,   509,   509,   509,   433,   -27,  -232,   191,
    -232,   157,   404,  -232,  -232,  -232,  -232,  -232,   165,   404,
     154,   433,    38,    64,     8,    94,   152,   -28,   -34,   158,
     -34,  -232,   397,   397,   218,   229,   215,   433,  -232,  -232,
     224,  -232,  -232,  -232,  -232,  -232,  -232,  -232,    83,    83,
     230,   122,   122,    83,    83,    83,    83,   226,    83,   225,
      32,  -232,  -232,  -232,  -232,  -232,  -232,  -232,  -232,  -232,
     216,   212,   404,   204,   404,  -232,  -232,  -232,  -232,  -232,
     258,  -232,  -232,  -232,   257,  -232,   251,   254,   261,   247,
    -232,  -232,  -232,  -232,  -232,  -232,   130,  -232,   264,   276,
    -232,   249,  -232,   253,  -232,   286,   314,   345,   283,   351,
     348,   284,     8,     8,  -232,   289,     8,     8,  -232,   290,
     285,   285,   285,   155,   277,   288,  -232,  -232,  -232,    78,
     446,   433,   338,   446,   433,  -232,  -232,  -232,   362,   376,
     242,  -232,   377,   399,   387,   390,  -232,  -232,  -232,  -232,
    -232,  -232,  -232,  -232,   357,  -232,    83,  -232,  -232,   363,
    -232,  -232,   366,  -232,   355,  -232,  -232,  -232,  -232,  -232,
    -232,  -232,   370,  -232,   402,  -232,  -232,  -232,  -232,   356,
    -232,  -232,   358,  -232,   360,   361,  -232,  -232,  -232,  -232,
     193,   352,   285,   353,   350,   277,   364,   365,  -232,  -232,
     414,   415,   259,   433,   259,  -232,   420,   433,   421,  -232,
    -232,  -232,   445,   452,  -232,  -232,  -232,  -232,  -232,   410,
    -232,  -232,  -232,  -232,  -232,  -232,  -232,  -232,  -232,    79,
     220,   378,   193,   193,  -232,  -232,  -232,  -232,   403,  -232,
    -232,  -232,  -232,   450,   453,   259,   455,   457,  -232,   456,
    -232,  -232,  -232,  -232,   406,   401,   220,   220,   220,   220,
     220,   220,   220,   220,   407,  -232,  -232,  -232,  -232,  -232,
    -232,   462,   463,  -232,  -232,  -232,   413,  -232,  -232,  -232,
    -232,  -232,  -232,  -232,  -232,  -232,  -232,  -232,  -232,  -232
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     1,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    32,
      24,     0,    22,    30,    20,    18,    26,    16,    28,     2,
       0,     0,     0,     0,    51,    53,    55,    59,    47,    57,
      49,    97,     0,     0,     0,     0,    91,    93,    95,     0,
       0,    64,    62,   121,   117,   114,   118,   115,     0,     0,
     120,   116,   122,   119,   123,    68,     0,     0,     0,     0,
       0,    70,    72,    76,    78,    74,     0,     0,   100,     0,
     104,     0,     0,    99,   105,   102,   101,   103,     0,   105,
       0,     0,     0,     0,     0,     0,     0,     0,   168,     0,
     170,    14,     0,     0,     0,     0,     0,     0,    31,    23,
       0,    21,    29,    19,    17,    25,    15,    27,     0,     0,
       0,     0,    82,   135,   131,   129,   133,     0,     0,     0,
      86,    60,    50,    52,    54,    58,    46,    56,    48,    96,
       0,     0,    99,     0,   102,    98,    90,    92,    94,    66,
       0,    63,    61,   125,     0,    67,     0,     0,     0,     0,
      79,    69,    71,    75,    77,    73,     0,   164,     0,     0,
     107,     0,   111,     0,   127,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   156,     0,   150,   148,   155,     0,
       0,     0,     0,     0,     0,     0,   167,   171,   169,     0,
       0,     0,     0,     0,     0,    12,    13,     8,     0,     0,
       0,    11,     0,     0,     0,     0,    83,    80,    81,   134,
     130,   128,   132,   143,     0,    89,     0,    84,    85,    88,
     142,   109,     0,   113,     0,    65,   124,   140,   146,   139,
     141,   166,     0,   163,     0,   106,   110,   126,   161,     0,
     160,   162,     0,   158,     0,     0,   154,   149,   147,   153,
       0,     0,   177,     0,     0,     0,     0,     0,   175,    41,
       0,     0,     0,     0,     0,    45,     0,     0,     0,     6,
       7,     5,     0,     0,     9,    10,   137,   138,   144,     0,
      87,   108,   112,   165,   136,   159,   157,   152,   151,     0,
       0,     0,   182,   184,   178,   176,   180,   179,     0,   173,
     174,    39,    40,     0,     0,     0,     0,     0,    43,     0,
      44,     3,     4,   145,     0,     0,   187,   201,   195,   199,
     193,   191,   197,   189,     0,   185,   181,   183,   172,    35,
      36,     0,     0,    37,    38,    42,     0,   204,   186,   200,
     194,   198,   192,   190,   196,   188,   202,    33,    34,   203
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -232,  -232,  -232,   167,  -104,   -62,   538,   116,    75,     2,
     304,   531,   -72,   162,   380,   271,  -232,    87,     1,   156,
      10,    71,    54,   219,   447,    18,    73,    33,  -232,   428,
     343,  -232,  -232,  -232,   240,  -232,  -232,  -232,  -232,   -42,
      -6,    -8,    -4,   339,   340,    65,   359,   195,    49,  -232,
    -171,   227,  -170,  -177,  -231,  -232,   147,  -232,  -232
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     4,    17,   104,   105,    33,    18,    49,    19,
      70,    20,   120,    36,   129,   228,    37,    45,    38,    81,
      22,   124,    23,   126,    58,    24,    25,   127,    86,   121,
     122,    71,    72,    73,    87,    39,   130,   229,    75,   185,
      26,   186,   187,   178,   181,    27,    77,    99,    28,   100,
     261,   193,   194,   195,   301,   262,   334,   302,   303
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      40,     7,   208,    62,    21,     9,   212,    95,    34,    50,
      98,    96,     9,    41,     1,    91,   266,   267,    51,   107,
     263,   264,    82,   265,    11,   167,    52,    59,    40,    40,
      40,    40,    40,    40,    40,    15,    34,    34,    34,    34,
      34,    34,    34,    97,   209,    12,   176,     6,   213,   217,
     218,     6,    12,    62,   189,   190,    42,   191,    64,   192,
      51,    51,    51,    56,    43,    29,    84,    89,    52,    52,
      52,   336,   337,   179,    63,   140,    44,     6,    46,    92,
      55,    93,    60,    83,    83,   125,   182,   123,   308,   226,
     183,   305,    98,   128,    98,   270,   125,    84,    84,   156,
     157,   158,   159,   201,   204,    92,   282,    93,    64,   102,
     269,   103,    46,    56,   142,    83,     3,    46,    46,    46,
     125,   125,   125,   125,    63,   150,   151,   152,   139,   325,
      55,    94,    60,   146,   147,   148,    84,   271,    43,     5,
     254,   255,   168,    84,   257,   258,    13,   118,   283,   119,
      44,   214,   215,    83,   346,    76,   219,   220,   221,   222,
      83,   224,   190,   131,   184,    92,   192,    93,   313,    88,
     316,    54,   125,   125,    80,    80,   128,   125,   125,   125,
     125,    90,   125,    76,   241,   106,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,    84,   145,    84,   141,
     143,   273,   149,   153,   277,    80,    80,   160,   177,   180,
     314,   341,   317,    83,   101,    83,   118,   170,   200,   203,
     174,    54,   188,    92,   326,    93,    47,   207,    57,   172,
     205,    85,    85,   102,   197,   103,   211,     8,   171,     9,
     191,   206,   192,   166,    80,   173,   102,    48,   103,    61,
      74,    80,   216,   342,   281,   102,   223,   103,   175,   289,
      47,   225,    85,   144,   230,    47,    47,    47,   231,   199,
     202,    11,   233,   102,   210,   103,   235,   236,    57,    12,
     125,    48,   299,    13,   300,    14,    48,    48,    48,    15,
     102,   237,   103,   196,   332,   198,   238,   240,   232,    61,
     234,    85,   327,   119,    80,    74,    80,   239,    85,   245,
     328,    74,    74,    74,    74,    74,   243,   246,   330,   248,
     332,   332,   332,   332,   332,   332,   332,   332,   327,   327,
     327,   327,   327,   327,   327,   327,   328,   328,   328,   328,
     328,   328,   328,   328,   330,   330,   330,   330,   330,   330,
     330,   330,   247,   176,   329,   250,   251,   179,   253,   256,
     259,    85,   191,    85,   260,   333,   268,   272,   274,   155,
     276,   278,   275,   331,   279,   161,   162,   163,   164,   165,
     329,   329,   329,   329,   329,   329,   329,   329,   280,   284,
      78,   333,   333,   333,   333,   333,   333,   333,   333,   331,
     331,   331,   331,   331,   331,   331,   331,    30,    78,    79,
       6,   285,     7,   286,     8,     7,     9,     8,   287,   288,
     226,    30,   291,   292,   293,    30,   294,    79,   295,    31,
     297,   298,   296,    42,    10,    32,   304,    10,   307,   306,
     315,    43,   309,   310,   319,    12,   311,   312,    11,    13,
       8,    42,     9,    44,   318,   320,    12,   321,   335,    43,
      13,     7,    14,     8,   322,     9,    15,    13,   323,    15,
      10,    44,    16,   348,   349,   350,   351,   352,   353,   354,
     355,   338,   339,    10,    11,   340,     9,   343,    30,   344,
     345,   347,    12,   192,   357,   358,    13,    11,    14,   356,
     290,    30,    15,   359,    10,    12,   154,   169,    16,    13,
     227,    14,   244,    65,    42,    15,   249,    10,    11,     0,
     252,    16,    43,     0,     0,   242,   324,    42,     0,     0,
      13,    11,    14,     0,    44,    43,    15,    35,     0,     0,
      53,     0,    16,    13,     0,    14,     0,    44,    66,    15,
      67,     0,     0,     0,    68,    16,    42,     0,    69,     0,
       0,     0,     0,     0,     0,    35,    35,    35,    35,    35,
      35,    35,   132,   133,   134,   135,   136,   137,   138,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      53
};

static const yytype_int16 yycheck[] =
{
       6,    15,   106,     9,     3,    19,   110,    15,     6,     8,
      16,    15,    19,     4,    10,    14,   193,   194,     8,    18,
     191,   192,    12,   193,    51,    52,     8,     9,    34,    35,
      36,    37,    38,    39,    40,    69,    34,    35,    36,    37,
      38,    39,    40,    77,   106,    59,     8,    13,   110,   121,
     122,    13,    59,    59,    96,    83,    47,    85,     9,    87,
      50,    51,    52,     9,    55,     3,    12,    13,    50,    51,
      52,   302,   303,     9,     9,    42,    67,    13,     7,    71,
       9,    73,     9,    12,    13,    31,    94,     4,   265,    57,
      94,   262,    98,    61,   100,   199,    42,    43,    44,    66,
      67,    68,    69,   102,   103,    71,   210,    73,    59,    31,
      32,    33,    41,    59,    43,    44,    11,    46,    47,    48,
      66,    67,    68,    69,    59,    50,    51,    52,    41,   299,
      59,    15,    59,    46,    47,    48,    82,   199,    55,     0,
     182,   183,    77,    89,   186,   187,    63,    25,   210,    27,
      67,   118,   119,    82,   324,    53,   123,   124,   125,   126,
      89,   128,    83,    14,    70,    71,    87,    73,   272,    13,
     274,     9,   118,   119,    12,    13,    61,   123,   124,   125,
     126,    14,   128,    53,    54,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,   142,    16,   144,    43,
      44,   200,    18,    20,   203,    43,    44,    38,    92,    93,
     272,   315,   274,   142,    12,   144,    25,    60,   102,   103,
      66,    59,    70,    71,     4,    73,     7,    12,     9,    64,
      12,    12,    13,    31,    76,    33,    12,    17,    82,    19,
      85,    12,    87,    76,    82,    89,    31,     7,    33,     9,
      10,    89,    22,   315,    12,    31,    30,    33,    91,   226,
      41,    36,    43,    44,    48,    46,    47,    48,    56,   102,
     103,    51,    68,    31,   107,    33,    18,    20,    59,    59,
     226,    41,    89,    63,    91,    65,    46,    47,    48,    69,
      31,    40,    33,    98,   300,   100,    42,    50,   142,    59,
     144,    82,   300,    27,   142,    65,   144,    46,    89,    60,
     300,    71,    72,    73,    74,    75,    52,    64,   300,     5,
     326,   327,   328,   329,   330,   331,   332,   333,   326,   327,
     328,   329,   330,   331,   332,   333,   326,   327,   328,   329,
     330,   331,   332,   333,   326,   327,   328,   329,   330,   331,
     332,   333,    66,     8,   300,    72,     5,     9,    74,    70,
      70,   142,    85,   144,    79,   300,    78,   200,   201,    65,
     203,   204,    34,   300,    12,    71,    72,    73,    74,    75,
     326,   327,   328,   329,   330,   331,   332,   333,    12,    12,
       4,   326,   327,   328,   329,   330,   331,   332,   333,   326,
     327,   328,   329,   330,   331,   332,   333,    21,     4,    23,
      13,    12,    15,    26,    17,    15,    19,    17,    28,    62,
      57,    21,    56,    68,    54,    21,    24,    23,    72,    29,
      70,    70,    74,    47,    37,    35,    84,    37,    88,    86,
     273,    55,    78,    78,   277,    59,    32,    32,    51,    63,
      17,    47,    19,    67,    34,    34,    59,    12,    80,    55,
      63,    15,    65,    17,    12,    19,    69,    63,    58,    69,
      37,    67,    75,   326,   327,   328,   329,   330,   331,   332,
     333,    78,    32,    37,    51,    32,    19,    32,    21,    32,
      34,    90,    59,    87,    32,    32,    63,    51,    65,    92,
     229,    21,    69,    90,    37,    59,    59,    79,    75,    63,
     130,    65,   169,     4,    47,    69,   177,    37,    51,    -1,
     180,    75,    55,    -1,    -1,   166,   299,    47,    -1,    -1,
      63,    51,    65,    -1,    67,    55,    69,     6,    -1,    -1,
       9,    -1,    75,    63,    -1,    65,    -1,    67,    39,    69,
      41,    -1,    -1,    -1,    45,    75,    47,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,    40,    34,    35,    36,    37,    38,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      59
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    94,    11,    95,     0,    13,    15,    17,    19,
      37,    51,    59,    63,    65,    69,    75,    96,   100,   102,
     104,   111,   113,   115,   118,   119,   133,   138,   141,     3,
      21,    29,    35,    99,   102,   104,   106,   109,   111,   128,
     133,     4,    47,    55,    67,   110,   114,   116,   127,   101,
     111,   113,   118,   104,   106,   114,   115,   116,   117,   118,
     119,   127,   133,   138,   141,     4,    39,    41,    45,    49,
     103,   124,   125,   126,   127,   131,    53,   139,     4,    23,
     106,   112,   113,   114,   115,   116,   121,   127,   112,   115,
      96,   111,    71,    73,   100,   134,   135,    77,   133,   140,
     142,    12,    31,    33,    97,    98,    96,   111,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    25,    27,
     105,   122,   123,     4,   114,   115,   116,   120,    61,   107,
     129,    14,    99,    99,    99,    99,    99,    99,    99,   110,
     120,   112,   114,   112,   116,    16,   110,   110,   110,    18,
     101,   101,   101,    20,   117,   103,   120,   120,   120,   120,
      38,   103,   103,   103,   103,   103,    96,    52,   138,   122,
      60,   112,    64,   112,    66,    96,     8,   100,   136,     9,
     100,   137,   134,   135,    70,   132,   134,   135,    70,   132,
      83,    85,    87,   144,   145,   146,   140,    76,   140,    96,
     100,   111,    96,   100,   111,    12,    12,    12,    97,    98,
      96,    12,    97,    98,   120,   120,    22,   105,   105,   120,
     120,   120,   120,    30,   120,    36,    57,   107,   108,   130,
      48,    56,   112,    68,   112,    18,    20,    40,    42,    46,
      50,    54,   139,    52,   123,    60,    64,    66,     5,   136,
      72,     5,   137,    74,   132,   132,    70,   132,   132,    70,
      79,   143,   148,   143,   143,   145,   146,   146,    78,    32,
      97,    98,    96,   111,    96,    34,    96,   111,    96,    12,
      12,    12,    97,    98,    12,    12,    26,    28,    62,   120,
     108,    56,    68,    54,    24,    72,    74,    70,    70,    89,
      91,   147,   150,   151,    84,   143,    86,    88,   146,    78,
      78,    32,    32,    97,    98,    96,    97,    98,    34,    96,
      34,    12,    12,    58,   144,   145,     4,   102,   113,   115,
     118,   119,   133,   138,   149,    80,   147,   147,    78,    32,
      32,    97,    98,    32,    32,    34,   145,    90,   149,   149,
     149,   149,   149,   149,   149,   149,    92,    32,    32,    90
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    94,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    98,    98,    98,    98,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
     100,   101,   101,   101,   101,   102,   102,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   104,
     105,   105,   105,   106,   107,   107,   107,   108,   108,   109,
     110,   110,   110,   110,   110,   110,   110,   110,   111,   112,
     112,   112,   112,   112,   112,   112,   113,   113,   114,   114,
     115,   115,   116,   116,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   118,   118,   119,   119,   120,   120,
     120,   120,   120,   120,   120,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   132,   132,
     132,   133,   133,   133,   133,   133,   133,   134,   134,   135,
     135,   136,   137,   138,   138,   139,   139,   140,   140,   140,
     140,   141,   142,   142,   142,   142,   143,   143,   144,   145,
     146,   147,   147,   147,   147,   148,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   150,   151,   151
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     6,     6,     5,     5,     5,     4,     5,
       5,     4,     4,     4,     3,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     6,     6,     5,     5,     5,     5,     4,
       4,     3,     5,     4,     4,     3,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       3,     2,     1,     2,     1,     4,     3,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     3,
       2,     2,     1,     3,     2,     2,     1,     2,     1,     3,
       2,     1,     2,     1,     2,     1,     2,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     4,     3,     4,     3,
       4,     3,     4,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     3,     4,     3,     2,     1,
       2,     1,     2,     1,     2,     1,     4,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     1,     2,
       1,     5,     5,     4,     4,     3,     3,     4,     3,     4,
       3,     2,     2,     4,     3,     4,     3,     2,     1,     2,
       1,     3,     5,     4,     4,     3,     2,     1,     3,     3,
       3,     2,     1,     2,     1,     3,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     3,     4,     3
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

#line 1526 "grammar.tab.c"

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

#line 374 "grammar.y"


int main(int argc, char **argv) {
    if (errorControl(argc, argv))
        return 1;

    printWelcome();
    yyparse();
    return 0;
}

yyerror(char *s){
    printf("No cumple :(\n");
    return 1;
}
