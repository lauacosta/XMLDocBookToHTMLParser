
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "grammarPrueba.y"
   
    #include <string.h>
    #include <stdlib.h>
    #include <stdio.h>
    //#define YYDEBUG 1
    void yyerror(const char *str);
    const char* getExtension(const char* filename);
    int errorControl (int argc, char **argv);
    FILE *salida;
    extern int yylineno;


/* Line 189 of yacc.c  */
#line 86 "grammarPrueba.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


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

/* Line 214 of yacc.c  */
#line 13 "grammarPrueba.y"
char* text;


/* Line 214 of yacc.c  */
#line 218 "grammarPrueba.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 230 "grammarPrueba.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   873

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  133
/* YYNRULES -- Number of rules.  */
#define YYNRULES  288
/* YYNRULES -- Number of states.  */
#define YYNSTATES  458

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   347

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     8,     9,    10,    15,    16,    21,
      22,    27,    28,    33,    34,    42,    43,    51,    52,    59,
      60,    67,    68,    75,    76,    82,    83,    90,    91,    98,
      99,   105,   106,   112,   113,   119,   120,   125,   126,   127,
     128,   129,   130,   131,   132,   156,   157,   162,   163,   168,
     169,   175,   176,   181,   182,   187,   188,   193,   194,   199,
     200,   205,   206,   211,   212,   217,   218,   223,   224,   229,
     230,   235,   236,   241,   242,   247,   248,   253,   254,   259,
     260,   265,   266,   271,   272,   273,   274,   275,   286,   290,
     291,   297,   298,   303,   307,   312,   316,   320,   325,   329,
     333,   337,   341,   348,   354,   359,   364,   368,   372,   376,
     380,   384,   388,   393,   397,   400,   402,   405,   407,   410,
     412,   415,   417,   420,   422,   425,   427,   430,   432,   435,
     437,   440,   442,   443,   448,   453,   457,   461,   465,   468,
     472,   476,   479,   482,   484,   487,   489,   492,   494,   497,
     499,   502,   504,   507,   509,   512,   514,   517,   519,   522,
     524,   527,   529,   532,   534,   537,   538,   542,   544,   547,
     549,   552,   554,   557,   559,   562,   564,   567,   569,   572,
     574,   575,   579,   581,   584,   586,   589,   591,   594,   596,
     599,   602,   604,   605,   609,   611,   614,   616,   619,   621,
     624,   626,   627,   631,   633,   636,   638,   641,   643,   646,
     648,   651,   653,   656,   658,   661,   663,   666,   668,   671,
     673,   676,   678,   681,   683,   684,   688,   690,   693,   695,
     698,   700,   703,   705,   708,   710,   713,   715,   718,   720,
     723,   725,   726,   730,   732,   735,   737,   740,   742,   745,
     747,   750,   752,   755,   757,   760,   762,   763,   764,   771,
     772,   773,   779,   780,   781,   788,   789,   790,   796,   797,
     798,   805,   806,   807,   813,   814,   815,   822,   823,   824,
     830,   833,   835,   838,   840,   842,   845,   847,   851
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      94,     0,    -1,    -1,     9,    95,    96,    -1,    -1,    -1,
      11,    97,   186,    12,    -1,    -1,    13,    99,   187,    14,
      -1,    -1,    15,   101,   193,    16,    -1,    -1,    15,   103,
     193,    16,    -1,    -1,    31,   105,    98,   102,   185,   104,
      32,    -1,    -1,    31,   106,    98,   102,   185,   117,    32,
      -1,    -1,    31,   107,    98,   102,   185,    32,    -1,    -1,
      31,   108,   102,   185,   104,    32,    -1,    -1,    31,   109,
     102,   185,   117,    32,    -1,    -1,    31,   110,   102,   185,
      32,    -1,    -1,    31,   111,    98,   185,   104,    32,    -1,
      -1,    31,   112,    98,   185,   117,    32,    -1,    -1,    31,
     113,    98,   185,    32,    -1,    -1,    31,   114,   185,   104,
      32,    -1,    -1,    31,   115,   185,   117,    32,    -1,    -1,
      31,   116,   185,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,   118,    98,   102,   185,    34,   119,    33,
     120,    98,   185,    34,   121,    33,   122,   102,   185,    34,
     123,    33,   124,   185,    34,    -1,    -1,    21,   126,   195,
      22,    -1,    -1,    21,   127,   166,    22,    -1,    -1,    19,
     129,   128,   198,    20,    -1,    -1,    19,   130,   198,    20,
      -1,    -1,    59,   132,   202,    60,    -1,    -1,    37,   134,
     191,    38,    -1,    -1,    25,   136,   196,    26,    -1,    -1,
      27,   138,   196,    28,    -1,    -1,    47,   140,   196,    48,
      -1,    -1,    43,   142,   196,    44,    -1,    -1,    45,   144,
     196,    46,    -1,    -1,    39,   146,   196,    40,    -1,    -1,
      41,   148,   196,    42,    -1,    -1,    49,   150,   196,    50,
      -1,    -1,    29,   152,   196,    30,    -1,    -1,    61,   154,
     196,    62,    -1,    -1,    57,   156,   196,    58,    -1,    -1,
      63,   158,   202,    64,    -1,    -1,    55,   160,   202,    56,
      -1,    -1,    -1,    -1,    -1,    67,   162,   202,    68,   163,
       6,   164,     5,   165,    10,    -1,    23,   195,    24,    -1,
      -1,    65,   168,   102,   185,    66,    -1,    -1,    65,   169,
     185,    66,    -1,    35,   189,    36,    -1,    17,   102,   188,
      18,    -1,    17,   188,    18,    -1,    69,   204,    70,    -1,
      69,    98,   204,    70,    -1,    71,   205,    72,    -1,    73,
     214,    74,    -1,    51,   176,    52,    -1,    53,   185,    54,
      -1,    75,   223,    76,    81,   223,    82,    -1,    77,   179,
     180,   181,    78,    -1,    77,   179,   181,    78,    -1,    77,
     180,   181,    78,    -1,    77,   181,    78,    -1,    83,   224,
      84,    -1,    85,   224,    86,    -1,    87,   224,    88,    -1,
      79,   225,    80,    -1,    91,   200,    92,    -1,    89,   179,
     181,    90,    -1,    89,   181,    90,    -1,   128,   185,    -1,
     128,    -1,   175,   185,    -1,   175,    -1,   167,   185,    -1,
     167,    -1,   131,   185,    -1,   131,    -1,   133,   185,    -1,
     133,    -1,   172,   185,    -1,   172,    -1,   177,   185,    -1,
     177,    -1,   157,   185,    -1,   157,    -1,   171,   185,    -1,
     171,    -1,    -1,    98,   100,   185,   104,    -1,    98,   100,
     185,   117,    -1,    98,   100,   185,    -1,    98,   185,   104,
      -1,    98,   185,   117,    -1,    98,   185,    -1,   100,   185,
     104,    -1,   100,   185,   117,    -1,   100,   185,    -1,   102,
     187,    -1,   102,    -1,   125,   187,    -1,   125,    -1,   151,
     187,    -1,   151,    -1,   170,   187,    -1,   170,    -1,   171,
     187,    -1,   171,    -1,   133,   187,    -1,   133,    -1,   172,
     187,    -1,   172,    -1,   128,   188,    -1,   128,    -1,   131,
     188,    -1,   131,    -1,   153,   189,    -1,   153,    -1,   153,
     190,    -1,   155,    -1,   155,   190,    -1,    -1,     3,   192,
     191,    -1,     3,    -1,   143,   191,    -1,   143,    -1,   145,
     191,    -1,   143,    -1,   147,   191,    -1,   147,    -1,   149,
     191,    -1,   149,    -1,   139,   191,    -1,   139,    -1,   141,
     191,    -1,   141,    -1,    -1,     3,   194,   193,    -1,     3,
      -1,   159,   193,    -1,   159,    -1,   139,   193,    -1,   159,
      -1,   161,   193,    -1,   161,    -1,   135,   195,    -1,   137,
     195,    -1,   137,    -1,    -1,     3,   197,   196,    -1,     3,
      -1,   161,   196,    -1,   161,    -1,   159,   196,    -1,   159,
      -1,   157,   196,    -1,   157,    -1,    -1,     3,   199,   198,
      -1,     3,    -1,   159,   198,    -1,   159,    -1,   161,   198,
      -1,   161,    -1,   139,   198,    -1,   139,    -1,   125,   198,
      -1,   125,    -1,   157,   198,    -1,   157,    -1,   175,   198,
      -1,   175,    -1,   167,   198,    -1,   167,    -1,   133,   198,
      -1,   133,    -1,   172,   198,    -1,   172,    -1,   177,   198,
      -1,   177,    -1,    -1,     3,   201,   200,    -1,     3,    -1,
     157,   200,    -1,   157,    -1,   175,   200,    -1,   175,    -1,
     167,   200,    -1,   167,    -1,   172,   200,    -1,   172,    -1,
     171,   200,    -1,   171,    -1,   128,   200,    -1,   128,    -1,
     131,   200,    -1,   131,    -1,    -1,     3,   203,   202,    -1,
       3,    -1,   159,   202,    -1,   159,    -1,   157,   202,    -1,
     157,    -1,   139,   202,    -1,   139,    -1,   125,   202,    -1,
     125,    -1,   173,   172,    -1,   173,    -1,   174,   172,    -1,
     174,    -1,    -1,    -1,    98,     7,   206,     5,   207,    10,
      -1,    -1,    -1,     7,   208,     5,   209,    10,    -1,    -1,
      -1,    98,     7,   210,     4,   211,    10,    -1,    -1,    -1,
       7,   212,     4,   213,    10,    -1,    -1,    -1,    98,     8,
     215,     5,   216,    10,    -1,    -1,    -1,     8,   217,     5,
     218,    10,    -1,    -1,    -1,    98,     8,   219,     4,   220,
      10,    -1,    -1,    -1,     8,   221,     4,   222,    10,    -1,
     172,   223,    -1,   172,    -1,   178,   223,    -1,   178,    -1,
     182,    -1,   182,   224,    -1,   183,    -1,   183,   225,   184,
      -1,   184,   225,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    65,    65,    65,    69,    70,    70,    74,    74,    78,
      78,    81,    81,    85,    85,    86,    86,    87,    87,    88,
      88,    89,    89,    90,    90,    91,    91,    92,    92,    93,
      93,    94,    94,    95,    95,    96,    96,   100,   100,   101,
     101,   102,   102,   103,   100,   109,   109,   110,   110,   114,
     114,   115,   115,   119,   119,   123,   123,   127,   127,   131,
     131,   135,   135,   139,   139,   143,   143,   147,   147,   151,
     151,   155,   155,   159,   159,   163,   163,   167,   167,   171,
     171,   175,   175,   179,   179,   180,   180,   179,   184,   188,
     188,   189,   189,   193,   197,   198,   202,   203,   207,   211,
     215,   219,   223,   228,   229,   230,   231,   235,   239,   243,
     247,   251,   255,   256,   261,   261,   262,   262,   263,   263,
     264,   264,   265,   265,   266,   266,   267,   267,   268,   268,
     269,   269,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   285,   285,   286,   286,   287,   287,   288,   288,
     289,   289,   290,   290,   291,   291,   295,   295,   296,   296,
     300,   300,   300,   304,   304,   308,   308,   308,   309,   309,
     310,   310,   311,   311,   312,   312,   313,   313,   314,   314,
     318,   318,   318,   319,   319,   320,   320,   321,   321,   325,
     326,   327,   331,   331,   331,   332,   332,   333,   333,   334,
     334,   338,   338,   338,   339,   339,   340,   340,   341,   341,
     342,   342,   343,   343,   344,   344,   345,   345,   346,   346,
     347,   347,   348,   348,   352,   352,   352,   353,   353,   354,
     354,   355,   355,   356,   356,   357,   357,   358,   358,   359,
     359,   363,   363,   363,   364,   364,   365,   365,   366,   366,
     367,   367,   371,   371,   372,   372,   376,   376,   376,   377,
     377,   377,   378,   378,   378,   379,   379,   379,   383,   383,
     383,   384,   384,   384,   385,   385,   385,   386,   386,   386,
     390,   390,   391,   391,   395,   395,   399,   399,   400
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TEXTO", "RUTA", "URL", "XLINK",
  "VIDEODATA", "IMAGEDATA", "DOCTYPE", "C_REF", "A_ARTICLE", "C_ARTICLE",
  "A_INFO", "C_INFO", "A_TITLE", "C_TITLE", "A_ABSTRACT", "C_ABSTRACT",
  "A_PARA", "C_PARA", "A_AUTHOR", "C_AUTHOR", "A_PERSONNAME",
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
  "C_ENTRY", "$accept", "sigma", "$@1", "article", "$@2", "info", "$@3",
  "titledoc", "$@4", "titlesec", "$@5", "section", "$@6", "$@7", "$@8",
  "$@9", "$@10", "$@11", "$@12", "$@13", "$@14", "$@15", "$@16", "$@17",
  "simsection", "$@18", "$@19", "$@20", "$@21", "$@22", "$@23", "$@24",
  "author", "$@25", "$@26", "para", "$@27", "$@28", "simpara", "$@29",
  "address", "$@30", "firstname", "$@31", "surname", "$@32", "email",
  "$@33", "postcode", "$@34", "street", "$@35", "city", "$@36", "state",
  "$@37", "phone", "$@38", "date", "$@39", "year", "$@40", "holder",
  "$@41", "comment", "$@42", "emphasis", "$@43", "link", "$@44", "$@45",
  "$@46", "$@47", "personname", "important", "$@48", "$@49", "copyright",
  "abstract", "mediaobject", "videoobject", "imageobject", "itemizedlist",
  "listitem", "informaltable", "tgroup", "thead", "tfoot", "tbody", "row",
  "entry", "entrytbl", "content", "articlecontent", "infocontent",
  "abstractcontent", "copyrightcontent", "holders", "addresscontent",
  "$@50", "titlecontent", "$@51", "authorcontent", "sharedcontent", "$@52",
  "paracontent", "$@53", "entrycontent", "$@54", "seclcontent", "$@55",
  "mediaobjectcontent", "videocontent", "$@56", "$@57", "$@58", "$@59",
  "$@60", "$@61", "$@62", "$@63", "imagecontent", "$@64", "$@65", "$@66",
  "$@67", "$@68", "$@69", "$@70", "$@71", "informalcontent", "variosrow",
  "rowcontent", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    95,    94,    96,    97,    96,    99,    98,   101,
     100,   103,   102,   105,   104,   106,   104,   107,   104,   108,
     104,   109,   104,   110,   104,   111,   104,   112,   104,   113,
     104,   114,   104,   115,   104,   116,   104,   118,   119,   120,
     121,   122,   123,   124,   117,   126,   125,   127,   125,   129,
     128,   130,   128,   132,   131,   134,   133,   136,   135,   138,
     137,   140,   139,   142,   141,   144,   143,   146,   145,   148,
     147,   150,   149,   152,   151,   154,   153,   156,   155,   158,
     157,   160,   159,   162,   163,   164,   165,   161,   166,   168,
     167,   169,   167,   170,   171,   171,   172,   172,   173,   174,
     175,   176,   177,   178,   178,   178,   178,   179,   180,   181,
     182,   183,   184,   184,   185,   185,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   186,   186,   186,   186,   186,   186,   186,   186,
     186,   186,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   188,   188,   188,   188,
     189,   189,   189,   190,   190,   192,   191,   191,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   191,
     194,   193,   193,   193,   193,   193,   193,   193,   193,   195,
     195,   195,   197,   196,   196,   196,   196,   196,   196,   196,
     196,   199,   198,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   198,   201,   200,   200,   200,   200,   200,
     200,   200,   200,   200,   200,   200,   200,   200,   200,   200,
     200,   203,   202,   202,   202,   202,   202,   202,   202,   202,
     202,   202,   204,   204,   204,   204,   206,   207,   205,   208,
     209,   205,   210,   211,   205,   212,   213,   205,   215,   216,
     214,   217,   218,   214,   219,   220,   214,   221,   222,   214,
     223,   223,   223,   223,   224,   224,   225,   225,   225
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     3,     0,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     7,     0,     7,     0,     6,     0,
       6,     0,     6,     0,     5,     0,     6,     0,     6,     0,
       5,     0,     5,     0,     5,     0,     4,     0,     0,     0,
       0,     0,     0,     0,    23,     0,     4,     0,     4,     0,
       5,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     0,     0,     0,    10,     3,     0,
       5,     0,     4,     3,     4,     3,     3,     4,     3,     3,
       3,     3,     6,     5,     4,     4,     3,     3,     3,     3,
       3,     3,     4,     3,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     0,     4,     4,     3,     3,     3,     2,     3,
       3,     2,     2,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     0,     3,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       0,     3,     1,     2,     1,     2,     1,     2,     1,     2,
       2,     1,     0,     3,     1,     2,     1,     2,     1,     2,
       1,     0,     3,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     0,     3,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     0,     3,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     0,     0,     6,     0,
       0,     5,     0,     0,     6,     0,     0,     5,     0,     0,
       6,     0,     0,     5,     0,     0,     6,     0,     0,     5,
       2,     1,     2,     1,     1,     2,     1,     3,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     2,     0,     4,     1,     5,     3,   132,     7,     9,
       0,     0,     0,     0,     0,     0,    51,    55,     0,    53,
      79,    91,     0,     0,     0,   115,   121,   123,   129,   119,
     131,   125,   117,   127,   138,   141,     6,    11,    45,    73,
       0,   143,   145,   153,   147,   149,   151,   155,     0,   180,
      61,    81,    83,     0,   184,   188,     0,     0,   157,   159,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   253,   255,     0,     0,   281,   283,     0,
     135,   114,   120,   122,   128,   118,   130,   124,   116,   126,
      31,    37,   136,   137,   139,   140,     0,     0,     0,     0,
      75,   161,     0,   142,   144,   152,   146,   148,   150,   154,
       8,     0,     0,     0,     0,   185,   183,   187,    10,     0,
     156,   158,    95,     0,   201,   211,   219,   209,   213,   205,
     207,   217,   221,   215,   223,     0,   165,    67,    69,    63,
      65,    71,   177,   179,   169,     0,   173,   175,     0,     0,
     100,   241,   251,   249,   247,   245,     0,     0,     0,     0,
     259,     0,     0,   271,     0,     0,     0,   252,   254,    96,
       0,     0,     0,     0,     0,     0,   280,   282,     0,   133,
     134,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    57,    59,     0,   191,     0,
       0,     0,   194,   200,   198,   196,     0,     0,    77,   163,
     160,   162,    93,   181,     0,     0,     0,    94,     0,     0,
     210,   218,   208,   212,   204,   206,   216,   220,   214,   222,
      52,     0,     0,     0,     0,     0,     0,   176,   178,   168,
     170,   172,   174,    56,   101,     0,   250,   248,   246,   244,
      54,    80,     0,    92,     0,     0,   256,    98,     0,     0,
     268,    99,    97,     0,   284,     0,     0,     0,     0,     0,
       0,   106,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,     0,     0,   189,
     190,    46,     0,    48,     0,   199,   197,   195,    74,     0,
       0,   164,    62,    82,    84,    50,   202,   166,     0,     0,
       0,     0,     0,   242,    90,   260,   266,     0,     0,   272,
     278,     0,     0,     0,     0,   286,     0,     0,   285,   107,
     108,   109,     0,   104,   105,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    36,     0,     0,
       0,    88,   193,    76,     0,     0,    68,    70,    64,    66,
      72,     0,     0,   257,   263,     0,     0,   269,   275,     0,
       0,   224,   238,   240,   228,   232,   236,   234,   230,     0,
       0,   288,   110,   103,   102,     0,     0,     0,     0,     0,
      24,     0,     0,    30,    32,    34,     0,    58,    60,    78,
      85,   261,   267,     0,     0,   273,   279,     0,     0,     0,
     113,     0,   237,   239,   227,   231,   235,   233,   229,   111,
     287,     0,     0,    18,    20,    22,    26,    28,    38,     0,
     258,   264,   270,   276,   112,   225,    14,    16,     0,    86,
      39,     0,     0,    87,     0,     0,    40,     0,    41,     0,
       0,     0,    42,     0,    43,     0,     0,    44
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     6,     7,    10,    13,    11,    14,    41,
      96,    92,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,    93,   193,   438,   442,   447,   449,
     453,   455,   125,    97,    98,    25,    61,    62,    26,    66,
      27,    63,   197,   287,   198,   288,   127,   112,   143,   234,
     144,   235,   145,   232,   146,   233,   147,   236,    44,    99,
     101,   207,   209,   300,    28,    67,   204,   113,   205,   114,
     355,   429,   441,   201,    29,    68,    69,    45,    30,    31,
      73,    74,    32,    65,    33,    78,   173,   174,   175,   264,
     325,   326,    34,    12,    48,    60,   102,   211,   148,   231,
      56,   111,   199,   206,   294,   135,   219,   379,   411,   156,
     245,    75,   162,   317,   403,   254,   361,   318,   404,   255,
     362,   165,   321,   407,   258,   365,   322,   408,   259,   366,
      79,   265,   327
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -238
static const yytype_int16 yypact[] =
{
       2,  -238,    32,    68,  -238,  -238,  -238,   128,  -238,  -238,
     755,   785,    48,   314,   111,    -7,    75,  -238,    42,  -238,
    -238,    83,    44,     9,   785,   785,   785,   785,   785,   785,
     785,   785,   785,   785,   164,   164,  -238,  -238,    90,  -238,
      55,   314,   314,   314,   314,   314,   314,   314,   112,   118,
    -238,  -238,  -238,   111,   111,   111,   122,    28,    28,    28,
     127,   140,   752,   209,   785,   108,   252,   252,   149,   785,
      49,    36,    71,   113,   113,   107,   -24,     9,     9,   125,
     164,  -238,  -238,  -238,  -238,  -238,  -238,  -238,  -238,  -238,
     183,  -238,  -238,  -238,  -238,  -238,   111,   193,   198,   162,
    -238,    19,   190,  -238,  -238,  -238,  -238,  -238,  -238,  -238,
    -238,   111,   162,   252,   252,  -238,  -238,  -238,  -238,   215,
    -238,  -238,  -238,   752,   217,   752,   752,   752,   752,   752,
     752,   752,   752,   752,   752,   218,   205,  -238,  -238,  -238,
    -238,  -238,   209,   209,   209,   209,   209,   209,   206,   191,
    -238,   171,   252,   252,   252,   252,   186,   185,   785,   181,
     249,   256,   192,   268,   266,   201,   207,  -238,  -238,  -238,
     202,   202,   202,   137,   210,   214,  -238,  -238,   212,  -238,
    -238,   281,   281,   281,   149,   149,   149,   281,   281,   281,
     785,   785,   785,   281,   282,  -238,  -238,   193,   193,   278,
     193,   279,   173,   162,   162,   162,   272,   162,  -238,   246,
    -238,  -238,  -238,  -238,   257,   248,   241,  -238,   292,   752,
    -238,  -238,  -238,  -238,  -238,  -238,  -238,  -238,  -238,  -238,
    -238,   209,   162,   162,   162,   162,   162,  -238,  -238,  -238,
    -238,  -238,  -238,  -238,  -238,   252,  -238,  -238,  -238,  -238,
    -238,  -238,   247,  -238,   311,   315,   317,  -238,   318,   326,
     335,  -238,  -238,   143,   202,   258,   254,   253,   210,   267,
     270,  -238,     9,   149,   149,   149,   785,   785,   785,   785,
     785,   785,   313,   319,   321,   149,  -238,   162,   162,  -238,
    -238,  -238,   322,  -238,   162,  -238,  -238,  -238,  -238,   288,
     162,  -238,  -238,  -238,  -238,  -238,  -238,  -238,   316,   324,
     323,   309,   307,  -238,  -238,  -238,  -238,   353,   355,  -238,
    -238,   370,   373,    -6,   259,   143,   143,   298,  -238,  -238,
    -238,  -238,   301,  -238,  -238,   299,   785,   785,   785,   313,
     319,   348,   313,   319,   350,   352,   361,  -238,   785,   359,
     366,  -238,  -238,  -238,   345,   398,  -238,  -238,  -238,  -238,
    -238,   395,   396,  -238,  -238,   399,   400,  -238,  -238,   210,
     325,   327,   259,   259,   259,   259,   259,   259,   259,   328,
     329,  -238,  -238,  -238,  -238,   313,   319,   379,   382,   389,
    -238,   392,   394,  -238,  -238,  -238,   393,  -238,  -238,  -238,
    -238,  -238,  -238,   418,   421,  -238,  -238,   422,   426,   340,
    -238,   259,  -238,  -238,  -238,  -238,  -238,  -238,  -238,  -238,
    -238,   405,   406,  -238,  -238,  -238,  -238,  -238,  -238,   435,
    -238,  -238,  -238,  -238,  -238,  -238,  -238,  -238,   408,  -238,
    -238,   432,   281,  -238,   785,   409,  -238,   413,  -238,   149,
     785,   415,  -238,   414,  -238,   785,   423,  -238
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -238,  -238,  -238,  -238,  -238,   -20,  -238,   458,  -238,   -14,
    -238,   -25,  -238,  -238,  -238,  -238,  -238,  -238,  -238,  -238,
    -238,  -238,  -238,  -238,   -32,  -238,  -238,  -238,  -238,  -238,
    -238,  -238,    61,  -238,  -238,    14,  -238,  -238,    78,  -238,
      77,  -238,  -238,  -238,  -238,  -238,   545,  -238,  -238,  -238,
    -238,  -238,  -238,  -238,  -238,  -238,  -238,  -238,  -238,  -238,
    -238,  -238,  -238,  -238,   346,  -238,   490,  -238,   618,  -238,
    -238,  -238,  -238,  -238,   157,  -238,  -238,  -238,    -4,    23,
    -238,  -238,   386,  -238,   654,  -238,   147,   320,  -139,  -238,
    -238,   114,   -11,  -238,   420,    52,   390,   283,  -119,  -238,
      29,  -238,  -167,   129,  -238,    60,  -238,   110,  -238,   -22,
    -238,   424,  -238,  -238,  -238,  -238,  -238,  -238,  -238,  -238,
    -238,  -238,  -238,  -238,  -238,  -238,  -238,  -238,  -238,  -238,
     -73,  -165,  -237
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -278
static const yytype_int16 yytable[] =
{
      35,    57,    72,    95,   176,   177,   266,   267,    37,    46,
      94,     1,    16,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,   237,   238,   239,   240,   241,   242,    58,
     289,   290,     4,   292,   269,   270,    47,    46,    46,    46,
      46,    46,    46,    46,   163,   157,    77,    16,   180,     8,
     161,   164,    19,   149,   158,   179,   160,     8,   159,   170,
      36,   171,     8,   172,    47,    47,    47,    47,    47,    47,
      47,    58,    58,    58,    42,   123,   208,   170,    22,     5,
     100,   172,   115,   116,   117,   132,    76,    19,   380,   381,
      43,   215,   216,    59,   -49,    64,   167,   168,   -89,   328,
      77,    77,    42,    42,    42,    42,    42,    42,    42,   119,
     120,   121,   307,   -47,    49,    70,   100,    71,    43,    43,
      43,    43,    43,    43,    43,   194,   110,   152,   152,   332,
     246,   247,   248,   249,  -182,    59,    59,    59,   118,   126,
     213,     8,    70,     9,    71,   122,   132,   252,   132,   132,
     132,   132,   132,   132,   132,   132,   132,   132,    50,    16,
     150,   273,   274,   275,    37,   202,    51,   279,   280,   281,
     276,   277,   278,   285,   152,   152,  -192,   169,    52,   282,
     283,   284,    22,   218,   370,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,    90,   -13,    91,   -19,   335,
     126,   178,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   136,   152,   152,   152,   152,    51,   195,   131,
     196,   200,   171,   313,   172,    20,   212,  -243,  -192,    52,
     409,  -243,   323,   217,   324,  -243,  -192,  -203,   230,  -243,
    -192,   214,   132,  -167,   243,   244,   250,   253,   137,   251,
     138,   346,   139,  -265,   140,   151,    50,   345,   141,   336,
     337,   338,   371,   256,   257,   339,   340,   341,   342,   343,
     344,   348,  -277,    38,   260,   261,    15,   262,    16,   306,
     131,   263,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   271,   272,     8,    77,   126,   172,   286,    50,
     291,   293,   298,   208,   303,   302,   152,    51,   389,   304,
      18,   392,   305,   314,   388,    20,   315,   391,    19,   316,
     376,  -262,    20,   319,    21,   385,   386,   387,    22,    37,
     320,    15,   295,   296,   297,    38,   299,   396,   372,  -274,
     330,   331,   329,    39,    90,   333,   351,   377,   334,    40,
     353,    17,    91,   347,   422,   359,   356,   360,   363,   364,
     421,   308,   309,   310,   311,   312,   357,   358,   376,   376,
     376,   376,   376,   376,   376,   367,   131,   368,   382,   383,
     390,   384,   393,    22,   394,   397,   372,   372,   372,   372,
     372,   372,   372,   395,   398,   377,   377,   377,   377,   377,
     377,   377,   373,   399,   400,   401,   402,   376,   128,   405,
     406,   423,   154,   154,   424,   410,   349,   350,   323,  -226,
     419,   425,   444,   352,   426,   372,   427,   428,   430,   354,
     434,   431,   432,   445,   377,   450,   433,   436,   437,   451,
     439,   440,   443,   446,   456,   203,   448,   454,   133,   452,
     373,   373,   373,   373,   373,   373,   373,   457,   203,   154,
     154,   103,   104,   105,   106,   107,   108,   109,    24,   128,
     369,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   375,   412,   413,   414,   415,   416,   417,   418,   373,
       0,   210,   301,   268,   420,     0,   166,     0,   154,   154,
     154,   154,     0,     0,    54,     0,     0,     0,     0,   133,
       0,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   435,     0,     0,     0,     0,     0,     0,     0,   375,
     375,   375,   375,   375,   375,   375,     0,     0,     0,     0,
       0,     0,     0,    54,    54,    54,     0,     0,     0,   203,
     203,   203,   129,   203,     0,     0,   155,   155,     0,    53,
       0,     0,     0,     0,     0,   128,     0,     0,   375,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   203,   203,
     203,   203,   203,     0,     0,     0,    54,     0,     0,     0,
       0,   154,     0,     0,     0,     0,     0,     0,    53,    53,
      53,    54,     0,   155,   155,   133,     0,     0,   142,     0,
       0,   153,   153,   129,     0,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,     0,     0,     0,     0,     0,
       0,     0,    55,   203,   203,     0,     0,     0,     0,     0,
     203,    53,   155,   155,   155,   155,   203,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    53,     0,   153,   153,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     374,    55,    55,    55,     0,     0,     0,     0,     0,     0,
     130,     0,     0,     0,     0,     0,     0,   142,   142,   142,
     142,   142,   142,     0,     0,     0,     0,   153,   153,   153,
     153,     0,     0,     0,     0,     0,     0,     0,     0,   129,
     378,     0,     0,     0,    55,     0,   134,     0,   374,   374,
     374,   374,   374,   374,   374,     0,     0,     0,     0,    55,
       0,     0,     0,     0,     0,   155,     0,     0,     0,     0,
       0,   130,     0,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,     0,     0,   124,     0,   374,   378,   378,
     378,   378,   378,   378,   378,     0,     0,     0,     0,     0,
       9,     0,    15,    38,    16,     0,   142,   134,     0,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,    17,
     153,     0,    17,     0,     0,     0,     0,   378,     0,    50,
       0,     0,    15,    18,    16,     0,    18,    51,     0,     0,
       0,     0,     0,     0,    19,    20,     0,    21,    20,    52,
      21,    22,    17,     0,    22,     0,     0,    23,     0,     0,
      23,     0,     0,     0,     0,     0,    18,   130,     0,     0,
       0,     0,     0,     0,    19,     0,     0,     0,    20,     0,
      21,     0,     0,     0,    22,     0,     0,     0,     0,     0,
      23,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   134
};

static const yytype_int16 yycheck[] =
{
      11,    15,    22,    35,    77,    78,   171,   172,    15,    13,
      35,     9,    19,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,   142,   143,   144,   145,   146,   147,    15,
     197,   198,     0,   200,   173,   174,    13,    41,    42,    43,
      44,    45,    46,    47,     8,    67,    23,    19,    80,    13,
      70,    71,    59,    64,    68,    80,     7,    13,    69,    83,
      12,    85,    13,    87,    41,    42,    43,    44,    45,    46,
      47,    57,    58,    59,    13,    61,    57,    83,    69,    11,
      61,    87,    53,    54,    55,    62,    77,    59,   325,   326,
      13,   113,   114,    15,    19,    53,    73,    74,    15,   264,
      77,    78,    41,    42,    43,    44,    45,    46,    47,    57,
      58,    59,   231,    23,     3,    71,    61,    73,    41,    42,
      43,    44,    45,    46,    47,    96,    14,    66,    67,   268,
     152,   153,   154,   155,    16,    57,    58,    59,    16,    62,
     111,    13,    71,    15,    73,    18,   123,   158,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,    47,    19,
      52,   181,   182,   183,    15,     3,    55,   187,   188,   189,
     184,   185,   186,   193,   113,   114,     3,    70,    67,   190,
     191,   192,    69,   123,   323,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,    31,    13,    33,    15,   272,
     123,    76,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,     3,   152,   153,   154,   155,    55,    25,    62,
      27,    23,    85,   245,    87,    63,    36,    56,    55,    67,
     369,    60,    89,    18,    91,    64,    63,    20,    20,    68,
      67,   112,   219,    38,    38,    54,    60,    66,    39,    64,
      41,   283,    43,     4,    45,     3,    47,   282,    49,   273,
     274,   275,     3,     7,    72,   276,   277,   278,   279,   280,
     281,   285,     4,    21,     8,    74,    17,    70,    19,   219,
     123,    79,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,    78,    81,    13,   272,   219,    87,    16,    47,
      22,    22,    30,    57,    56,    48,   245,    55,   340,    68,
      51,   343,    20,    66,   339,    63,     5,   342,    59,     4,
     324,     4,    63,     5,    65,   336,   337,   338,    69,    15,
       4,    17,   203,   204,   205,    21,   207,   348,   324,     4,
      86,    88,    84,    29,    31,    78,    24,   324,    78,    35,
      62,    37,    33,    32,   386,    46,    40,    50,     5,     4,
     385,   232,   233,   234,   235,   236,    42,    44,   372,   373,
     374,   375,   376,   377,   378,     5,   219,     4,    80,    78,
      32,    82,    32,    69,    32,    26,   372,   373,   374,   375,
     376,   377,   378,    32,    28,   372,   373,   374,   375,   376,
     377,   378,   324,    58,     6,    10,    10,   411,    62,    10,
      10,    32,    66,    67,    32,    90,   287,   288,    89,    92,
      92,    32,   442,   294,    32,   411,    32,    34,    10,   300,
      90,    10,    10,   444,   411,   449,    10,    32,    32,   450,
       5,    33,    10,    34,   455,    99,    33,    33,    62,    34,
     372,   373,   374,   375,   376,   377,   378,    34,   112,   113,
     114,    41,    42,    43,    44,    45,    46,    47,    10,   123,
     323,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   324,   372,   373,   374,   375,   376,   377,   378,   411,
      -1,   101,   209,   173,   380,    -1,    72,    -1,   152,   153,
     154,   155,    -1,    -1,    14,    -1,    -1,    -1,    -1,   123,
      -1,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   411,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   372,
     373,   374,   375,   376,   377,   378,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    54,    55,    -1,    -1,    -1,   203,
     204,   205,    62,   207,    -1,    -1,    66,    67,    -1,    14,
      -1,    -1,    -1,    -1,    -1,   219,    -1,    -1,   411,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   232,   233,
     234,   235,   236,    -1,    -1,    -1,    96,    -1,    -1,    -1,
      -1,   245,    -1,    -1,    -1,    -1,    -1,    -1,    53,    54,
      55,   111,    -1,   113,   114,   219,    -1,    -1,    63,    -1,
      -1,    66,    67,   123,    -1,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    14,   287,   288,    -1,    -1,    -1,    -1,    -1,
     294,    96,   152,   153,   154,   155,   300,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,   113,   114,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     324,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,   144,
     145,   146,   147,    -1,    -1,    -1,    -1,   152,   153,   154,
     155,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,
     324,    -1,    -1,    -1,    96,    -1,    62,    -1,   372,   373,
     374,   375,   376,   377,   378,    -1,    -1,    -1,    -1,   111,
      -1,    -1,    -1,    -1,    -1,   245,    -1,    -1,    -1,    -1,
      -1,   123,    -1,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,    -1,    -1,     3,    -1,   411,   372,   373,
     374,   375,   376,   377,   378,    -1,    -1,    -1,    -1,    -1,
      15,    -1,    17,    21,    19,    -1,   231,   123,    -1,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,    37,
     245,    -1,    37,    -1,    -1,    -1,    -1,   411,    -1,    47,
      -1,    -1,    17,    51,    19,    -1,    51,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    63,    -1,    65,    63,    67,
      65,    69,    37,    -1,    69,    -1,    -1,    75,    -1,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    51,   219,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,    63,    -1,
      65,    -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   219
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    94,    95,     0,    11,    96,    97,    13,    15,
      98,   100,   186,    99,   101,    17,    19,    37,    51,    59,
      63,    65,    69,    75,   100,   128,   131,   133,   157,   167,
     171,   172,   175,   177,   185,   185,    12,    15,    21,    29,
      35,   102,   125,   133,   151,   170,   171,   172,   187,     3,
      47,    55,    67,   139,   159,   161,   193,   102,   128,   131,
     188,   129,   130,   134,    53,   176,   132,   158,   168,   169,
      71,    73,    98,   173,   174,   204,    77,   172,   178,   223,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
      31,    33,   104,   117,   104,   117,   103,   126,   127,   152,
      61,   153,   189,   187,   187,   187,   187,   187,   187,   187,
      14,   194,   140,   160,   162,   193,   193,   193,    16,   188,
     188,   188,    18,   128,     3,   125,   133,   139,   157,   159,
     161,   167,   172,   175,   177,   198,     3,    39,    41,    43,
      45,    49,   139,   141,   143,   145,   147,   149,   191,   185,
      52,     3,   125,   139,   157,   159,   202,   202,   102,   185,
       7,    98,   205,     8,    98,   214,   204,   172,   172,    70,
      83,    85,    87,   179,   180,   181,   223,   223,    76,   104,
     117,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   118,   193,    25,    27,   135,   137,   195,
      23,   166,     3,   157,   159,   161,   196,   154,    57,   155,
     189,   190,    36,   193,   196,   202,   202,    18,   198,   199,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   198,
      20,   192,   146,   148,   142,   144,   150,   191,   191,   191,
     191,   191,   191,    38,    54,   203,   202,   202,   202,   202,
      60,    64,   185,    66,   208,   212,     7,    72,   217,   221,
       8,    74,    70,    79,   182,   224,   224,   224,   180,   181,
     181,    78,    81,    98,    98,    98,   102,   102,   102,    98,
      98,    98,   185,   185,   185,    98,    16,   136,   138,   195,
     195,    22,   195,    22,   197,   196,   196,   196,    30,   196,
     156,   190,    48,    56,    68,    20,   198,   191,   196,   196,
     196,   196,   196,   202,    66,     5,     4,   206,   210,     5,
       4,   215,   219,    89,    91,   183,   184,   225,   224,    84,
      86,    88,   181,    78,    78,   223,   102,   102,   102,   185,
     185,   185,   185,   185,   185,   104,   117,    32,   102,   196,
     196,    24,   196,    62,   196,   163,    40,    42,    44,    46,
      50,   209,   213,     5,     4,   218,   222,     5,     4,   179,
     181,     3,   128,   131,   157,   167,   171,   172,   175,   200,
     225,   225,    80,    78,    82,   185,   185,   185,   104,   117,
      32,   104,   117,    32,    32,    32,   185,    26,    28,    58,
       6,    10,    10,   207,   211,    10,    10,   216,   220,   181,
      90,   201,   200,   200,   200,   200,   200,   200,   200,    92,
     184,   104,   117,    32,    32,    32,    32,    32,    34,   164,
      10,    10,    10,    10,    90,   200,    32,    32,   119,     5,
      33,   165,   120,    10,    98,   185,    34,   121,    33,   122,
     102,   185,    34,   123,    33,   124,   185,    34
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 65 "grammarPrueba.y"
    {fprintf(salida,"<!DOCTYPE html>\n<html lang=\"en\">\n<body>\n");;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 65 "grammarPrueba.y"
    {fprintf(salida,"</body>\n</html>\n");;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 70 "grammarPrueba.y"
    {fprintf(salida,"<article>\n");;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 70 "grammarPrueba.y"
    {fprintf(salida,"</article>\n");;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 74 "grammarPrueba.y"
    {fprintf(salida,"<div> \n <p style=\"background-color: green; color: white; font-size: 8pt;\">\n");;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 74 "grammarPrueba.y"
    {fprintf(salida,"</p>\n</div>\n");;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 78 "grammarPrueba.y"
    {fprintf(salida,"<h1>\n");;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 78 "grammarPrueba.y"
    {fprintf(salida,"</h1>\n");;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 81 "grammarPrueba.y"
    {fprintf(salida,"<h2>");;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 81 "grammarPrueba.y"
    {fprintf(salida,"</h2>\n");;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 85 "grammarPrueba.y"
    {fprintf(salida,"<section>\n");;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 85 "grammarPrueba.y"
    {fprintf(salida,"</section>\n");;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 86 "grammarPrueba.y"
    {fprintf(salida,"<section>\n");;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 86 "grammarPrueba.y"
    {fprintf(salida,"</section>\n");;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 87 "grammarPrueba.y"
    {fprintf(salida,"<section>\n");;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 87 "grammarPrueba.y"
    {fprintf(salida,"</section>\n");;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 88 "grammarPrueba.y"
    {fprintf(salida,"<section>\n");;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 88 "grammarPrueba.y"
    {fprintf(salida,"</section>\n");;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 89 "grammarPrueba.y"
    {fprintf(salida,"<section>\n");;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 89 "grammarPrueba.y"
    {fprintf(salida,"</section>\n");;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 90 "grammarPrueba.y"
    {fprintf(salida,"<section>\n");;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 90 "grammarPrueba.y"
    {fprintf(salida,"</section>\n");;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 91 "grammarPrueba.y"
    {fprintf(salida,"<section>\n");;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 91 "grammarPrueba.y"
    {fprintf(salida,"</section>\n");;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 92 "grammarPrueba.y"
    {fprintf(salida,"<section>\n");;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 92 "grammarPrueba.y"
    {fprintf(salida,"</section>\n");;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 93 "grammarPrueba.y"
    {fprintf(salida,"<section>\n");;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 93 "grammarPrueba.y"
    {fprintf(salida,"</section>\n");;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 94 "grammarPrueba.y"
    {fprintf(salida,"<section>\n");;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 94 "grammarPrueba.y"
    {fprintf(salida,"</section>\n");;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 95 "grammarPrueba.y"
    {fprintf(salida,"<section>\n");;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 95 "grammarPrueba.y"
    {fprintf(salida,"</section>\n");;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 96 "grammarPrueba.y"
    {fprintf(salida,"<section>\n");;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 96 "grammarPrueba.y"
    {fprintf(salida,"</section>\n");;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 100 "grammarPrueba.y"
    {fprintf(salida,"<section>\n");;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 100 "grammarPrueba.y"
    {fprintf(salida,"</section>\n");;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 101 "grammarPrueba.y"
    {fprintf(salida,"<section>\n");;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 101 "grammarPrueba.y"
    {fprintf(salida,"</section>\n");;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 102 "grammarPrueba.y"
    {fprintf(salida,"<section>\n");;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 102 "grammarPrueba.y"
    {fprintf(salida,"</section>\n");;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 103 "grammarPrueba.y"
    {fprintf(salida,"<section>\n");;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 103 "grammarPrueba.y"
    {fprintf(salida,"</section>\n");;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 109 "grammarPrueba.y"
    {fprintf(salida,"<address>\n");;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 109 "grammarPrueba.y"
    {fprintf(salida,"</address>\n");;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 110 "grammarPrueba.y"
    {fprintf(salida,"<address>\n");;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 110 "grammarPrueba.y"
    {fprintf(salida,"</address>\n");;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 114 "grammarPrueba.y"
    {fprintf(salida,"<p>");;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 114 "grammarPrueba.y"
    {fprintf(salida,"</p>\n");;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 115 "grammarPrueba.y"
    {fprintf(salida,"<p>");;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 115 "grammarPrueba.y"
    {fprintf(salida,"</p>\n");;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 119 "grammarPrueba.y"
    {fprintf(salida,"<p>");;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 119 "grammarPrueba.y"
    {fprintf(salida,"</p>\n");;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 123 "grammarPrueba.y"
    {fprintf(salida,"<address>\n");;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 123 "grammarPrueba.y"
    {fprintf(salida,"</address>\n");;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 127 "grammarPrueba.y"
    {fprintf(salida,"<p>");;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 127 "grammarPrueba.y"
    {fprintf(salida,"</p>\n");;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 131 "grammarPrueba.y"
    {fprintf(salida,"<p>");;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 131 "grammarPrueba.y"
    {fprintf(salida,"</p>\n");;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 135 "grammarPrueba.y"
    {fprintf(salida,"<p>");;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 135 "grammarPrueba.y"
    {fprintf(salida,"</p>\n");;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 139 "grammarPrueba.y"
    {fprintf(salida,"<p>");;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 139 "grammarPrueba.y"
    {fprintf(salida,"</p>");;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 143 "grammarPrueba.y"
    {fprintf(salida,"<p>");;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 143 "grammarPrueba.y"
    {fprintf(salida,"</p>\n");;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 147 "grammarPrueba.y"
    {fprintf(salida,"<p>");;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 147 "grammarPrueba.y"
    {fprintf(salida,"</p>\n");;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 151 "grammarPrueba.y"
    {fprintf(salida,"<p>");;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 151 "grammarPrueba.y"
    {fprintf(salida,"</p>\n");;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 155 "grammarPrueba.y"
    {fprintf(salida,"<p>");;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 155 "grammarPrueba.y"
    {fprintf(salida,"</p>\n");;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 159 "grammarPrueba.y"
    {fprintf(salida,"<p>");;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 159 "grammarPrueba.y"
    {fprintf(salida,"</p>\n");;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 163 "grammarPrueba.y"
    {fprintf(salida,"<p>");;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 163 "grammarPrueba.y"
    {fprintf(salida,"</p>\n");;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 167 "grammarPrueba.y"
    {fprintf(salida,"<p>");;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 167 "grammarPrueba.y"
    {fprintf(salida,"</p>\n");;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 171 "grammarPrueba.y"
    {fprintf(salida,"<p>");;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 171 "grammarPrueba.y"
    {fprintf(salida,"</p>\n");;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 175 "grammarPrueba.y"
    {fprintf(salida,"<p>");;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 175 "grammarPrueba.y"
    {fprintf(salida,"</p>\n");;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 179 "grammarPrueba.y"
    {fprintf(salida,"<p>");;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 179 "grammarPrueba.y"
    {fprintf(salida,"</p>\n");;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 180 "grammarPrueba.y"
    {fprintf(salida,"html:a href=\"");;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 180 "grammarPrueba.y"
    {fprintf(salida,"%s", yylval);;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 180 "grammarPrueba.y"
    {fprintf(salida,"\">\n");;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 188 "grammarPrueba.y"
    {fprintf(salida,"<p>");;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 188 "grammarPrueba.y"
    {fprintf(salida,"</p>\n");;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 189 "grammarPrueba.y"
    {fprintf(salida,"<p>");;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 189 "grammarPrueba.y"
    {fprintf(salida,"</p>\n");;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 308 "grammarPrueba.y"
    {fprintf(salida,"%s",yylval);;}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 308 "grammarPrueba.y"
    {fprintf(salida,"%s",yylval);;}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 318 "grammarPrueba.y"
    {fprintf(salida,"%s", yylval);;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 318 "grammarPrueba.y"
    {fprintf(salida,"%s", yylval);;}
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 331 "grammarPrueba.y"
    {fprintf(salida,"%s",yylval);;}
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 331 "grammarPrueba.y"
    {fprintf(salida,"%s",yylval);;}
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 338 "grammarPrueba.y"
    {fprintf(salida,"%s", yylval);;}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 338 "grammarPrueba.y"
    {fprintf(salida,"%s", yylval);;}
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 352 "grammarPrueba.y"
    {fprintf(salida,"%s", yylval);;}
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 352 "grammarPrueba.y"
    {fprintf(salida,"%s", yylval);;}
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 363 "grammarPrueba.y"
    {fprintf(salida,"%s", yylval);;}
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 363 "grammarPrueba.y"
    {fprintf(salida,"%s", yylval);;}
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 376 "grammarPrueba.y"
    {fprintf(salida,"html:a href=\"");;}
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 376 "grammarPrueba.y"
    {fprintf(salida,"%s",yylval);;}
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 376 "grammarPrueba.y"
    {fprintf(salida,"\">");;}
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 377 "grammarPrueba.y"
    {fprintf(salida,"html:a href=\"");;}
    break;

  case 260:

/* Line 1455 of yacc.c  */
#line 377 "grammarPrueba.y"
    {fprintf(salida,"%s",yylval);;}
    break;

  case 261:

/* Line 1455 of yacc.c  */
#line 377 "grammarPrueba.y"
    {fprintf(salida,"\">");;}
    break;

  case 262:

/* Line 1455 of yacc.c  */
#line 378 "grammarPrueba.y"
    {fprintf(salida,"html:a href=\"");;}
    break;

  case 263:

/* Line 1455 of yacc.c  */
#line 378 "grammarPrueba.y"
    {fprintf(salida,"%s",yylval);;}
    break;

  case 264:

/* Line 1455 of yacc.c  */
#line 378 "grammarPrueba.y"
    {fprintf(salida,"\">");;}
    break;

  case 265:

/* Line 1455 of yacc.c  */
#line 379 "grammarPrueba.y"
    {fprintf(salida,"html:a href=\"");;}
    break;

  case 266:

/* Line 1455 of yacc.c  */
#line 379 "grammarPrueba.y"
    {fprintf(salida,"%s",yylval);;}
    break;

  case 267:

/* Line 1455 of yacc.c  */
#line 379 "grammarPrueba.y"
    {fprintf(salida,"\">");;}
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 383 "grammarPrueba.y"
    {fprintf(salida,"html:a href=\"");;}
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 383 "grammarPrueba.y"
    {fprintf(salida,"%s",yylval);;}
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 383 "grammarPrueba.y"
    {fprintf(salida,"\">");;}
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 384 "grammarPrueba.y"
    {fprintf(salida,"html:a href=\"");;}
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 384 "grammarPrueba.y"
    {fprintf(salida,"%s",yylval);;}
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 384 "grammarPrueba.y"
    {fprintf(salida,"\">");;}
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 385 "grammarPrueba.y"
    {fprintf(salida,"html:a href=\"");;}
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 385 "grammarPrueba.y"
    {fprintf(salida,"%s",yylval);;}
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 385 "grammarPrueba.y"
    {fprintf(salida,"\">");;}
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 386 "grammarPrueba.y"
    {fprintf(salida,"html:a href=\"");;}
    break;

  case 278:

/* Line 1455 of yacc.c  */
#line 386 "grammarPrueba.y"
    {fprintf(salida,"%s",yylval);;}
    break;

  case 279:

/* Line 1455 of yacc.c  */
#line 386 "grammarPrueba.y"
    {fprintf(salida,"\">");;}
    break;



/* Line 1455 of yacc.c  */
#line 2867 "grammarPrueba.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 403 "grammarPrueba.y"


void printWelcome(){
    printf("\n\t ANALIZADOR SINTACTICO  -  Grupo N°19\n");
    printf("\n\t Ultima modificación 25-06-23\n");
    printf("\n\t Ivan Niveyro, Lautaro Acosta Quintana, Martín Galeano, Francisco Morel\n");
    printf("\n\t Github repo: https://github.com/LautaroAcosta/LexerParser\n");
    printf("\t");    
}

void yyerror(const char *str) {
    printf("Analisis Sintactico 'INTERRUMPIDO' -  Error: '%s' en la linea '%d'.",  str, yylineno);
    exit(1);
}

int main(int argc, char **argv) {
    if (errorControl(argc, argv))
        return 1;

    salida = fopen("salida.html", "w");
    printWelcome();
    printf("\n");

    //yydebug = 1;

    if (!yyparse()){printf("\n Analisis Sintactico 'CORRECTO' \n");}    
    fclose(salida);
    return 0;
}


