/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "coco.y"

#include<stdio.h>
#include<stdlib.h>
int yyerror();
int yylex();
extern FILE *yyin;
extern int yylineno;

/* Line 371 of yacc.c  */
#line 77 "coco.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TOK_MY = 258,
     TOK_ACCEPT = 259,
     TOK_ACCESS = 260,
     TOK_ADD = 261,
     TOK_ADVANCING = 262,
     TOK_AFTER = 263,
     TOK_ALL = 264,
     TOK_ALPHABET = 265,
     TOK_ALPHABETIC = 266,
     TOK_ALPHABETIC_LOWER = 267,
     TOK_ALPHABETIC_UPPER = 268,
     TOK_ALPHANUMERIC = 269,
     TOK_ALPHANUMERIC_EDITED = 270,
     TOK_ALSO = 271,
     TOK_ALTER = 272,
     TOK_ALTERNATE = 273,
     TOK_AND = 274,
     TOK_ANY = 275,
     TOK_ARE = 276,
     TOK_AREA = 277,
     TOK_AREAS = 278,
     TOK_ASCENDING = 279,
     TOK_ASSIGN = 280,
     TOK_ASTERISK = 281,
     TOK_AT = 282,
     TOK_AUTHOR = 283,
     TOK_BACKGROUND_COLOR = 284,
     TOK_BEFORE = 285,
     TOK_BINARY = 286,
     TOK_BLANK = 287,
     TOK_BLINK = 288,
     TOK_BLOCK = 289,
     TOK_BOTTOM = 290,
     TOK_BY = 291,
     TOK_CALL = 292,
     TOK_CANCEL = 293,
     TOK_CD = 294,
     TOK_CF = 295,
     TOK_CH = 296,
     TOK_CHARACTER = 297,
     TOK_CHARACTERS = 298,
     TOK_CLASS = 299,
     TOK_CLOCK_UNITS = 300,
     TOK_CLOSE = 301,
     TOK_COBOL = 302,
     TOK_CODE = 303,
     TOK_CODE_SET = 304,
     TOK_COLLATING = 305,
     TOK_COLUMN = 306,
     TOK_COMMA = 307,
     TOK_COMMON = 308,
     TOK_COMMUNICATION = 309,
     TOK_COMP = 310,
     TOK_COMPUTATIONAL = 311,
     TOK_COMPUTE = 312,
     TOK_CONFIGURATION = 313,
     TOK_CONSOLE = 314,
     TOK_CONTAINS = 315,
     TOK_CONTENT = 316,
     TOK_CONTINUE = 317,
     TOK_CONTROL = 318,
     TOK_CONTROLS = 319,
     TOK_COPY = 320,
     TOK_CORR = 321,
     TOK_CORRESPONDING = 322,
     TOK_COUNT = 323,
     TOK_CURRENCY = 324,
     TOK_DATA = 325,
     TOK_DATE = 326,
     TOK_DATE_COMPILED = 327,
     TOK_DATE_WRITTEN = 328,
     TOK_DAY = 329,
     TOK_DAY_OF_WEEK = 330,
     TOK_DE = 331,
     TOK_DEBUGGING = 332,
     TOK_DEBUG_CONTENTS = 333,
     TOK_DEBUG_ITEM = 334,
     TOK_DEBUG_LINE = 335,
     TOK_DEBUG_NAME = 336,
     TOK_DEBUG_SUB_1 = 337,
     TOK_DEBUG_SUB_2 = 338,
     TOK_DEBUG_SUB_3 = 339,
     TOK_DECIMAL_POINT = 340,
     TOK_DECLARATIVES = 341,
     TOK_DELETE = 342,
     TOK_DELIMITED = 343,
     TOK_DELIMITER = 344,
     TOK_DEPENDING = 345,
     TOK_DEPTH = 346,
     TOK_DESCENDING = 347,
     TOK_DESTINATION = 348,
     TOK_DETAIL = 349,
     TOK_DISABLE = 350,
     TOK_DISPLAY = 351,
     TOK_DIVIDE = 352,
     TOK_DIVISION = 353,
     TOK_DOLLAR = 354,
     TOK_DOWN = 355,
     TOK_DUPLICATES = 356,
     TOK_DYNAMIC = 357,
     TOK_EGI = 358,
     TOK_ELSE = 359,
     TOK_ELSIF = 360,
     TOK_EMI = 361,
     TOK_ENABLE = 362,
     TOK_END = 363,
     TOK_END_ADD = 364,
     TOK_END_CALL = 365,
     TOK_END_COMPUTE = 366,
     TOK_END_DELETE = 367,
     TOK_END_DIVIDE = 368,
     TOK_END_EVALUATE = 369,
     TOK_END_IF = 370,
     TOK_END_MULTIPLY = 371,
     TOK_END_OF_PAGE = 372,
     TOK_END_PERFORM = 373,
     TOK_END_READ = 374,
     TOK_END_RECEIVE = 375,
     TOK_END_RETURN = 376,
     TOK_END_REWRITE = 377,
     TOK_END_SEARCH = 378,
     TOK_END_START = 379,
     TOK_END_STRING = 380,
     TOK_END_SUBTRACT = 381,
     TOK_END_UNSTRING = 382,
     TOK_END_WRITE = 383,
     TOK_ENTER = 384,
     TOK_ENVIRONMENT = 385,
     TOK_EOP = 386,
     TOK_EQUAL = 387,
     TOK_ERROR = 388,
     TOK_ESI = 389,
     TOK_EVALUATE = 390,
     TOK_EVERY = 391,
     TOK_EXCEPTION = 392,
     TOK_EXIT = 393,
     TOK_EXTEND = 394,
     TOK_EXTERNAL = 395,
     TOK_FALSE = 396,
     TOK_FD = 397,
     TOK_FILE = 398,
     TOK_FILE_CONTROL = 399,
     TOK_FILE_ID = 400,
     TOK_FILLER = 401,
     TOK_FINAL = 402,
     TOK_FIRST = 403,
     TOK_FLOAT = 404,
     TOK_FOOTING = 405,
     TOK_FOR = 406,
     TOK_FOREGROUND_COLOR = 407,
     TOK_FROM = 408,
     TOK_GENERATE = 409,
     TOK_GIVING = 410,
     TOK_GLOBAL = 411,
     TOK_GO = 412,
     TOK_GREATER = 413,
     TOK_GREATER_EQ = 414,
     TOK_GROUP = 415,
     TOK_HEADING = 416,
     TOK_HIGHLIGHT = 417,
     TOK_HIGH_VALUE = 418,
     TOK_IDENTIFICATION = 419,
     TOK_IDENTIFIER = 420,
     TOK_IF = 421,
     TOK_IN = 422,
     TOK_INDEX = 423,
     TOK_INDEXED = 424,
     TOK_INDICATE = 425,
     TOK_INITIAL = 426,
     TOK_INITIALIZE = 427,
     TOK_INITIATE = 428,
     TOK_INPUT = 429,
     TOK_INPUT_OUTPUT = 430,
     TOK_INSPECT = 431,
     TOK_INSTALLATION = 432,
     TOK_INTEGER = 433,
     TOK_INTO = 434,
     TOK_INVALID = 435,
     TOK_IS = 436,
     TOK_I_O = 437,
     TOK_I_O_CONTROL = 438,
     TOK_JUST = 439,
     TOK_JUSTIFIED = 440,
     TOK_KEY = 441,
     TOK_LABEL = 442,
     TOK_LAST = 443,
     TOK_LEADING = 444,
     TOK_LEFT = 445,
     TOK_LENGTH = 446,
     TOK_LESS = 447,
     TOK_LESS_EQ = 448,
     TOK_LIMIT = 449,
     TOK_LIMITS = 450,
     TOK_LINAGE = 451,
     TOK_LINAGE_COUNTER = 452,
     TOK_LINE = 453,
     TOK_LINES = 454,
     TOK_LINE_COUNTER = 455,
     TOK_LINKAGE = 456,
     TOK_LOCK = 457,
     TOK_LOW_VALUE = 458,
     TOK_LPAREN = 459,
     TOK_MEMORY = 460,
     TOK_MERGE = 461,
     TOK_MESSAGE = 462,
     TOK_MINUS = 463,
     TOK_MODE = 464,
     TOK_MODULES = 465,
     TOK_MOVE = 466,
     TOK_MULTIPLE = 467,
     TOK_MULTIPLY = 468,
     TOK_NATIVE = 469,
     TOK_NEGATIVE = 470,
     TOK_NEXT = 471,
     TOK_NO = 472,
     TOK_NOT = 473,
     TOK_NUMBER = 474,
     TOK_NUMERIC = 475,
     TOK_NUMERIC_EDITED = 476,
     TOK_OBJECT_COMPUTER = 477,
     TOK_OCCURS = 478,
     TOK_OF = 479,
     TOK_OFF = 480,
     TOK_OMITTED = 481,
     TOK_ON = 482,
     TOK_OPEN = 483,
     TOK_OPTIONAL = 484,
     TOK_OR = 485,
     TOK_ORDER = 486,
     TOK_ORGANIZATION = 487,
     TOK_OTHER = 488,
     TOK_OUTPUT = 489,
     TOK_OVERFLOW = 490,
     TOK_PACKED_DECIMAL = 491,
     TOK_PADDING = 492,
     TOK_PAGE = 493,
     TOK_PAGE_COUNTER = 494,
     TOK_PERFORM = 495,
     TOK_PERIOD = 496,
     TOK_PF = 497,
     TOK_PH = 498,
     TOK_PIC = 499,
     TOK_PICTURE = 500,
     TOK_PIC_TEXT = 501,
     TOK_PLUS = 502,
     TOK_POINTER = 503,
     TOK_POSITION = 504,
     TOK_POSITIVE = 505,
     TOK_PRINTING = 506,
     TOK_PROCEDURE = 507,
     TOK_PROCEDURES = 508,
     TOK_PROCEED = 509,
     TOK_PROGRAM = 510,
     TOK_PROGRAM_ID = 511,
     TOK_PURGE = 512,
     TOK_QUEUE = 513,
     TOK_QUOTE = 514,
     TOK_RANDOM = 515,
     TOK_RD = 516,
     TOK_READ = 517,
     TOK_RECEIVE = 518,
     TOK_RECORD = 519,
     TOK_RECORDS = 520,
     TOK_REDEFINES = 521,
     TOK_REEL = 522,
     TOK_REFERENCE = 523,
     TOK_REFERENCES = 524,
     TOK_RELATIVE = 525,
     TOK_RELEASE = 526,
     TOK_REMAINDER = 527,
     TOK_REMOVAL = 528,
     TOK_RENAMES = 529,
     TOK_REPLACE = 530,
     TOK_REPLACING = 531,
     TOK_REPORT = 532,
     TOK_REPORTING = 533,
     TOK_REPORTS = 534,
     TOK_RERUN = 535,
     TOK_RESERVE = 536,
     TOK_RESET = 537,
     TOK_RETURN = 538,
     TOK_REVERSED = 539,
     TOK_REVERSE_VIDEO = 540,
     TOK_REWIND = 541,
     TOK_REWRITE = 542,
     TOK_RF = 543,
     TOK_RH = 544,
     TOK_RIGHT = 545,
     TOK_ROUNDED = 546,
     TOK_RPAREN = 547,
     TOK_RUN = 548,
     TOK_SAME = 549,
     TOK_SCREEN = 550,
     TOK_SD = 551,
     TOK_SEARCH = 552,
     TOK_SECTION = 553,
     TOK_SECURITY = 554,
     TOK_SEGMENT = 555,
     TOK_SEGMENT_LIMIT = 556,
     TOK_SELECT = 557,
     TOK_SEMICOLON = 558,
     TOK_SEND = 559,
     TOK_SENTENCE = 560,
     TOK_SEPARATE = 561,
     TOK_SEQUENCE = 562,
     TOK_SEQUENTIAL = 563,
     TOK_SET = 564,
     TOK_SIGN = 565,
     TOK_SIZE = 566,
     TOK_SLASH = 567,
     TOK_SORT = 568,
     TOK_SORT_MERGE = 569,
     TOK_SOURCE = 570,
     TOK_SOURCE_COMPUTER = 571,
     TOK_SPACE = 572,
     TOK_SPACES = 573,
     TOK_SPECIAL_NAMES = 574,
     TOK_STANDARD = 575,
     TOK_STANDARD_1 = 576,
     TOK_STANDARD_2 = 577,
     TOK_START = 578,
     TOK_STATUS = 579,
     TOK_STOP = 580,
     TOK_STRING = 581,
     TOK_SUBTRACT = 582,
     TOK_SUB_QUEUE_1 = 583,
     TOK_SUB_QUEUE_2 = 584,
     TOK_SUB_QUEUE_3 = 585,
     TOK_SUM = 586,
     TOK_SUPRESS = 587,
     TOK_SYMBOLIC = 588,
     TOK_SYNC = 589,
     TOK_TABLE = 590,
     TOK_TALLYING = 591,
     TOK_TAPE = 592,
     TOK_TERMINAL = 593,
     TOK_TERMINATE = 594,
     TOK_TEST = 595,
     TOK_TEXT = 596,
     TOK_THAN = 597,
     TOK_THEN = 598,
     TOK_THROUGH = 599,
     TOK_THRU = 600,
     TOK_TIME = 601,
     TOK_TIMES = 602,
     TOK_TO = 603,
     TOK_TOP = 604,
     TOK_TRAILING = 605,
     TOK_TRUE = 606,
     TOK_TYPE = 607,
     TOK_UNDERLINE = 608,
     TOK_UNIT = 609,
     TOK_UNSTRING = 610,
     TOK_UNTIL = 611,
     TOK_UP = 612,
     TOK_UPON = 613,
     TOK_USAGE = 614,
     TOK_USE = 615,
     TOK_USING = 616,
     TOK_VALUE = 617,
     TOK_VALUES = 618,
     TOK_VARYING = 619,
     TOK_WHEN = 620,
     TOK_WHILE = 621,
     TOK_WITH = 622,
     TOK_WORDS = 623,
     TOK_WORKING_STORAGE = 624,
     TOK_WRITE = 625,
     TOK_ZERO = 626,
     HEADER = 627,
     NL = 628
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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



/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 513 "coco.tab.c"

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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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

# define YYCOPY_NEEDED 1

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

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   522

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  374
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  135
/* YYNRULES -- Number of rules.  */
#define YYNRULES  350
/* YYNRULES -- Number of states.  */
#define YYNSTATES  538

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   628

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
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
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,    10,    15,    18,    19,    24,    29,
      34,    39,    44,    50,    53,    56,    59,    62,    65,    67,
      68,    72,    73,    75,    77,    78,    80,    82,    84,    85,
      89,    94,    97,    98,   100,   102,   104,   106,   108,   110,
     111,   115,   119,   124,   132,   138,   141,   142,   144,   145,
     153,   159,   168,   173,   175,   177,   179,   181,   183,   185,
     192,   195,   200,   207,   208,   210,   211,   213,   215,   217,
     219,   223,   228,   230,   232,   235,   236,   239,   241,   243,
     246,   248,   250,   251,   253,   255,   259,   260,   262,   264,
     266,   268,   270,   272,   276,   277,   279,   281,   283,   285,
     287,   289,   291,   293,   294,   296,   297,   299,   300,   302,
     304,   305,   307,   308,   310,   311,   315,   319,   323,   327,
     332,   335,   336,   342,   349,   353,   359,   362,   365,   369,
     373,   377,   383,   386,   390,   392,   395,   398,   401,   402,
     408,   410,   412,   414,   417,   418,   421,   424,   425,   431,
     434,   435,   437,   439,   442,   445,   448,   450,   452,   455,
     458,   461,   464,   466,   468,   470,   474,   478,   483,   489,
     495,   501,   507,   511,   516,   523,   526,   530,   535,   539,
     543,   546,   549,   557,   561,   565,   569,   573,   574,   578,
     582,   583,   585,   588,   592,   594,   596,   597,   599,   601,
     603,   605,   608,   611,   612,   614,   616,   618,   620,   622,
     626,   632,   633,   636,   639,   640,   642,   644,   646,   648,
     650,   653,   654,   657,   658,   660,   661,   667,   668,   672,
     675,   676,   679,   680,   683,   684,   688,   689,   693,   694,
     699,   703,   706,   709,   712,   715,   716,   718,   720,   723,
     725,   727,   728,   731,   733,   735,   737,   739,   741,   743,
     745,   747,   749,   751,   754,   756,   757,   761,   765,   769,
     773,   775,   779,   780,   783,   786,   789,   790,   793,   797,
     800,   801,   806,   807,   809,   811,   814,   815,   818,   822,
     826,   829,   831,   832,   835,   838,   839,   845,   848,   849,
     851,   853,   855,   857,   859,   861,   864,   867,   868,   871,
     874,   877,   880,   883,   885,   886,   888,   890,   892,   894,
     895,   897,   898,   900,   901,   903,   904,   906,   907,   909,
     910,   912,   913,   915,   916,   918,   919,   921,   922,   924,
     925,   927,   928,   930,   931,   933,   934,   936,   937,   939,
     940
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     375,     0,    -1,   376,    -1,   377,   386,   387,   426,    -1,
     164,    98,   241,   378,    -1,   379,   378,    -1,    -1,    28,
     241,   380,   241,    -1,   177,   241,   380,   241,    -1,    73,
     241,   380,   241,    -1,    72,   241,   380,   241,    -1,   299,
     241,   380,   241,    -1,   256,   241,   380,   382,   241,    -1,
     165,   381,    -1,   178,   381,    -1,   149,   381,    -1,   326,
     381,    -1,   312,   381,    -1,   380,    -1,    -1,   383,   384,
     385,    -1,    -1,   181,    -1,    21,    -1,    -1,    53,    -1,
     171,    -1,   255,    -1,    -1,   130,    98,   241,    -1,    70,
      98,   241,   388,    -1,   389,   388,    -1,    -1,   391,    -1,
     422,    -1,   423,    -1,   424,    -1,   425,    -1,   390,    -1,
      -1,   143,   298,   241,    -1,   369,   298,   241,    -1,   369,
     298,   241,   392,    -1,   178,   165,   245,   178,   362,   395,
     241,    -1,   178,   165,   245,   178,   241,    -1,   394,   393,
      -1,    -1,   392,    -1,    -1,   178,   165,   245,   178,   362,
     395,   241,    -1,   178,   165,   245,   178,   241,    -1,   396,
     397,   245,   326,    55,   362,   178,   241,    -1,   396,   397,
     399,   241,    -1,   178,    -1,   326,    -1,   178,    -1,   398,
      -1,   146,    -1,   165,    -1,   400,   411,    55,   178,   413,
     401,    -1,   266,   398,    -1,   400,   411,    55,   413,    -1,
     223,   396,   417,   169,   418,   398,    -1,    -1,   402,    -1,
      -1,   403,    -1,   404,    -1,   409,    -1,   407,    -1,   359,
     383,   412,    -1,   421,   383,   405,   406,    -1,   189,    -1,
     350,    -1,   306,   419,    -1,    -1,   408,   420,    -1,   185,
      -1,   184,    -1,   334,   410,    -1,   190,    -1,   290,    -1,
      -1,   398,    -1,   146,    -1,   245,   383,   326,    -1,    -1,
      31,    -1,    56,    -1,    55,    -1,    96,    -1,   168,    -1,
     236,    -1,   362,   383,   414,    -1,    -1,   396,    -1,   416,
      -1,   415,    -1,   398,    -1,   326,    -1,   178,    -1,   149,
      -1,   347,    -1,    -1,    36,    -1,    -1,    42,    -1,    -1,
     181,    -1,    21,    -1,    -1,   290,    -1,    -1,   310,    -1,
      -1,   201,   298,   241,    -1,    54,   298,   241,    -1,   277,
     298,   241,    -1,   295,   298,   241,    -1,   252,    98,   241,
     427,    -1,   428,   427,    -1,    -1,    96,   326,    52,   165,
     241,    -1,   380,   382,   241,    96,   326,   241,    -1,    96,
     326,   241,    -1,   211,   178,   348,   165,   241,    -1,   441,
     241,    -1,   442,   241,    -1,   252,   398,   241,    -1,   172,
     491,   241,    -1,   275,   225,   241,    -1,   262,   398,   501,
     446,   241,    -1,   398,   429,    -1,   325,   293,   241,    -1,
     241,    -1,   298,   241,    -1,   432,   431,    -1,   438,   430,
      -1,    -1,   507,   450,   383,   433,   508,    -1,    11,    -1,
      13,    -1,    12,    -1,   439,   450,    -1,    -1,   436,   435,
      -1,   438,   434,    -1,    -1,   507,   450,   383,   437,   508,
      -1,   440,   450,    -1,    -1,    19,    -1,   230,    -1,   158,
     504,    -1,   192,   504,    -1,   132,   502,    -1,   159,    -1,
     193,    -1,   218,   440,    -1,   158,   504,    -1,   192,   504,
      -1,   132,   502,    -1,   159,    -1,   193,    -1,   398,    -1,
       4,   451,   452,    -1,    96,   454,   459,    -1,   211,   450,
     348,   496,    -1,     6,   450,   348,   496,   460,    -1,   327,
     450,   153,   496,   460,    -1,   213,   496,    36,   450,   460,
      -1,    57,   398,   461,   132,   474,    -1,   157,   348,   398,
      -1,   240,   398,   463,   465,    -1,   240,   398,   356,    68,
     439,   395,    -1,   228,   479,    -1,    46,   496,   483,    -1,
     370,   398,   485,   486,    -1,   287,   398,   485,    -1,    37,
     487,   488,    -1,   325,   293,    -1,   138,   255,    -1,    97,
     496,   499,   450,   460,   461,   462,    -1,   166,   430,   443,
      -1,   505,   447,   444,    -1,   104,   505,   447,    -1,   105,
     445,   444,    -1,    -1,   430,   505,   447,    -1,    27,   108,
     447,    -1,    -1,   448,    -1,   441,   449,    -1,   442,   115,
     449,    -1,   442,    -1,   448,    -1,    -1,   398,    -1,   396,
      -1,   416,    -1,   415,    -1,   455,   496,    -1,   153,   453,
      -1,    -1,    71,    -1,    74,    -1,    75,    -1,   346,    -1,
      59,    -1,   455,   503,   456,    -1,   204,   396,    52,   396,
     292,    -1,    -1,   458,   457,    -1,   500,   456,    -1,    -1,
     398,    -1,   415,    -1,   396,    -1,   416,    -1,   259,    -1,
     358,   398,    -1,    -1,   155,   398,    -1,    -1,   291,    -1,
      -1,   227,   311,   133,   447,   241,    -1,    -1,   464,   466,
     467,    -1,   345,   398,    -1,    -1,   356,   434,    -1,    -1,
     396,   347,    -1,    -1,   364,   469,   468,    -1,    -1,     8,
     469,   468,    -1,    -1,   398,   153,   473,   470,    -1,   348,
     473,   472,    -1,   472,   471,    -1,   366,   430,    -1,   356,
     434,    -1,    36,   473,    -1,    -1,   398,    -1,   396,    -1,
     476,   475,    -1,   477,    -1,   474,    -1,    -1,   477,   478,
      -1,   478,    -1,   398,    -1,   396,    -1,   416,    -1,   247,
      -1,   208,    -1,    26,    -1,   312,    -1,   204,    -1,   292,
      -1,   481,   480,    -1,   479,    -1,    -1,   174,   496,   482,
      -1,   234,   496,   482,    -1,   139,   496,   482,    -1,   182,
     496,   482,    -1,   284,    -1,   367,   217,   286,    -1,    -1,
     354,   484,    -1,   267,   484,    -1,   367,   202,    -1,    -1,
     151,   273,    -1,   367,   217,   286,    -1,   153,   398,    -1,
      -1,     8,     7,   473,   199,    -1,    -1,   415,    -1,   398,
      -1,   361,   489,    -1,    -1,   398,   490,    -1,    36,   268,
     489,    -1,    36,    61,   489,    -1,    52,   489,    -1,   489,
      -1,    -1,   489,   492,    -1,   276,   493,    -1,    -1,   495,
     506,    36,   414,   494,    -1,   500,   493,    -1,    -1,    11,
      -1,    14,    -1,   220,    -1,    15,    -1,   221,    -1,   497,
      -1,   398,   498,    -1,   500,   497,    -1,    -1,   165,   381,
      -1,   178,   381,    -1,   149,   381,    -1,   326,   381,    -1,
     312,   381,    -1,   380,    -1,    -1,    36,    -1,   179,    -1,
     181,    -1,    21,    -1,    -1,    52,    -1,    -1,   264,    -1,
      -1,   348,    -1,    -1,     9,    -1,    -1,   342,    -1,    -1,
     343,    -1,    -1,    36,    -1,    -1,   310,    -1,    -1,    42,
      -1,    -1,   255,    -1,    -1,   290,    -1,    -1,    70,    -1,
      -1,   204,    -1,    -1,   292,    -1,    -1,   347,    -1,    -1,
     165,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   388,   388,   390,   398,   401,   402,   405,   406,   407,
     408,   409,   410,   415,   416,   417,   418,   419,   423,   424,
     427,   428,   431,   432,   433,   437,   438,   441,   442,   456,
     468,   473,   474,   479,   480,   481,   482,   483,   484,   485,
     490,   496,   497,   502,   504,   506,   507,   511,   512,   517,
     519,   521,   523,   526,   527,   530,   534,   535,   539,   544,
     545,   546,   550,   551,   555,   556,   560,   561,   562,   563,
     567,   571,   575,   576,   580,   581,   585,   589,   590,   594,
     598,   599,   600,   604,   605,   609,   610,   614,   615,   616,
     617,   618,   619,   623,   624,   628,   629,   630,   631,   636,
     640,   644,   648,   649,   652,   653,   656,   657,   660,   661,
     662,   665,   666,   669,   670,   674,   678,   682,   686,   703,
     706,   707,   713,   714,   715,   716,   717,   718,   720,   721,
     722,   723,   725,   726,   733,   734,   737,   741,   742,   746,
     750,   751,   752,   753,   754,   766,   770,   771,   775,   779,
     780,   784,   785,   789,   790,   791,   792,   793,   794,   798,
     799,   800,   801,   802,   815,   816,   817,   818,   819,   820,
     821,   822,   823,   824,   826,   828,   829,   830,   831,   832,
     833,   834,   835,   840,   845,   849,   850,   851,   855,   866,
     867,   871,   875,   876,   877,   881,   882,   886,   887,   888,
     889,   893,   897,   898,   902,   903,   904,   905,   906,   910,
     914,   915,   919,   923,   924,   928,   929,   930,   931,   932,
     936,   937,   941,   942,   946,   947,   951,   952,   956,   960,
     961,   965,   966,   970,   971,   975,   976,   980,   981,   985,
     989,   990,   994,   995,   999,  1000,  1003,  1004,  1008,  1009,
    1012,  1013,  1017,  1018,  1022,  1023,  1024,  1028,  1029,  1030,
    1031,  1032,  1033,  1037,  1041,  1042,  1046,  1047,  1048,  1049,
    1053,  1054,  1055,  1059,  1060,  1061,  1062,  1066,  1067,  1071,
    1072,  1076,  1077,  1081,  1082,  1086,  1087,  1091,  1092,  1093,
    1097,  1098,  1099,  1103,  1107,  1108,  1112,  1116,  1117,  1121,
    1122,  1123,  1124,  1125,  1129,  1133,  1137,  1138,  1142,  1143,
    1144,  1145,  1146,  1150,  1151,  1155,  1156,  1160,  1161,  1162,
    1165,  1166,  1170,  1171,  1175,  1176,  1180,  1181,  1185,  1186,
    1190,  1191,  1196,  1197,  1203,  1204,  1208,  1209,  1213,  1214,
    1220,  1221,  1225,  1226,  1230,  1231,  1235,  1236,  1240,  1241,
    1245
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOK_MY", "TOK_ACCEPT", "TOK_ACCESS",
  "TOK_ADD", "TOK_ADVANCING", "TOK_AFTER", "TOK_ALL", "TOK_ALPHABET",
  "TOK_ALPHABETIC", "TOK_ALPHABETIC_LOWER", "TOK_ALPHABETIC_UPPER",
  "TOK_ALPHANUMERIC", "TOK_ALPHANUMERIC_EDITED", "TOK_ALSO", "TOK_ALTER",
  "TOK_ALTERNATE", "TOK_AND", "TOK_ANY", "TOK_ARE", "TOK_AREA",
  "TOK_AREAS", "TOK_ASCENDING", "TOK_ASSIGN", "TOK_ASTERISK", "TOK_AT",
  "TOK_AUTHOR", "TOK_BACKGROUND_COLOR", "TOK_BEFORE", "TOK_BINARY",
  "TOK_BLANK", "TOK_BLINK", "TOK_BLOCK", "TOK_BOTTOM", "TOK_BY",
  "TOK_CALL", "TOK_CANCEL", "TOK_CD", "TOK_CF", "TOK_CH", "TOK_CHARACTER",
  "TOK_CHARACTERS", "TOK_CLASS", "TOK_CLOCK_UNITS", "TOK_CLOSE",
  "TOK_COBOL", "TOK_CODE", "TOK_CODE_SET", "TOK_COLLATING", "TOK_COLUMN",
  "TOK_COMMA", "TOK_COMMON", "TOK_COMMUNICATION", "TOK_COMP",
  "TOK_COMPUTATIONAL", "TOK_COMPUTE", "TOK_CONFIGURATION", "TOK_CONSOLE",
  "TOK_CONTAINS", "TOK_CONTENT", "TOK_CONTINUE", "TOK_CONTROL",
  "TOK_CONTROLS", "TOK_COPY", "TOK_CORR", "TOK_CORRESPONDING", "TOK_COUNT",
  "TOK_CURRENCY", "TOK_DATA", "TOK_DATE", "TOK_DATE_COMPILED",
  "TOK_DATE_WRITTEN", "TOK_DAY", "TOK_DAY_OF_WEEK", "TOK_DE",
  "TOK_DEBUGGING", "TOK_DEBUG_CONTENTS", "TOK_DEBUG_ITEM",
  "TOK_DEBUG_LINE", "TOK_DEBUG_NAME", "TOK_DEBUG_SUB_1", "TOK_DEBUG_SUB_2",
  "TOK_DEBUG_SUB_3", "TOK_DECIMAL_POINT", "TOK_DECLARATIVES", "TOK_DELETE",
  "TOK_DELIMITED", "TOK_DELIMITER", "TOK_DEPENDING", "TOK_DEPTH",
  "TOK_DESCENDING", "TOK_DESTINATION", "TOK_DETAIL", "TOK_DISABLE",
  "TOK_DISPLAY", "TOK_DIVIDE", "TOK_DIVISION", "TOK_DOLLAR", "TOK_DOWN",
  "TOK_DUPLICATES", "TOK_DYNAMIC", "TOK_EGI", "TOK_ELSE", "TOK_ELSIF",
  "TOK_EMI", "TOK_ENABLE", "TOK_END", "TOK_END_ADD", "TOK_END_CALL",
  "TOK_END_COMPUTE", "TOK_END_DELETE", "TOK_END_DIVIDE",
  "TOK_END_EVALUATE", "TOK_END_IF", "TOK_END_MULTIPLY", "TOK_END_OF_PAGE",
  "TOK_END_PERFORM", "TOK_END_READ", "TOK_END_RECEIVE", "TOK_END_RETURN",
  "TOK_END_REWRITE", "TOK_END_SEARCH", "TOK_END_START", "TOK_END_STRING",
  "TOK_END_SUBTRACT", "TOK_END_UNSTRING", "TOK_END_WRITE", "TOK_ENTER",
  "TOK_ENVIRONMENT", "TOK_EOP", "TOK_EQUAL", "TOK_ERROR", "TOK_ESI",
  "TOK_EVALUATE", "TOK_EVERY", "TOK_EXCEPTION", "TOK_EXIT", "TOK_EXTEND",
  "TOK_EXTERNAL", "TOK_FALSE", "TOK_FD", "TOK_FILE", "TOK_FILE_CONTROL",
  "TOK_FILE_ID", "TOK_FILLER", "TOK_FINAL", "TOK_FIRST", "TOK_FLOAT",
  "TOK_FOOTING", "TOK_FOR", "TOK_FOREGROUND_COLOR", "TOK_FROM",
  "TOK_GENERATE", "TOK_GIVING", "TOK_GLOBAL", "TOK_GO", "TOK_GREATER",
  "TOK_GREATER_EQ", "TOK_GROUP", "TOK_HEADING", "TOK_HIGHLIGHT",
  "TOK_HIGH_VALUE", "TOK_IDENTIFICATION", "TOK_IDENTIFIER", "TOK_IF",
  "TOK_IN", "TOK_INDEX", "TOK_INDEXED", "TOK_INDICATE", "TOK_INITIAL",
  "TOK_INITIALIZE", "TOK_INITIATE", "TOK_INPUT", "TOK_INPUT_OUTPUT",
  "TOK_INSPECT", "TOK_INSTALLATION", "TOK_INTEGER", "TOK_INTO",
  "TOK_INVALID", "TOK_IS", "TOK_I_O", "TOK_I_O_CONTROL", "TOK_JUST",
  "TOK_JUSTIFIED", "TOK_KEY", "TOK_LABEL", "TOK_LAST", "TOK_LEADING",
  "TOK_LEFT", "TOK_LENGTH", "TOK_LESS", "TOK_LESS_EQ", "TOK_LIMIT",
  "TOK_LIMITS", "TOK_LINAGE", "TOK_LINAGE_COUNTER", "TOK_LINE",
  "TOK_LINES", "TOK_LINE_COUNTER", "TOK_LINKAGE", "TOK_LOCK",
  "TOK_LOW_VALUE", "TOK_LPAREN", "TOK_MEMORY", "TOK_MERGE", "TOK_MESSAGE",
  "TOK_MINUS", "TOK_MODE", "TOK_MODULES", "TOK_MOVE", "TOK_MULTIPLE",
  "TOK_MULTIPLY", "TOK_NATIVE", "TOK_NEGATIVE", "TOK_NEXT", "TOK_NO",
  "TOK_NOT", "TOK_NUMBER", "TOK_NUMERIC", "TOK_NUMERIC_EDITED",
  "TOK_OBJECT_COMPUTER", "TOK_OCCURS", "TOK_OF", "TOK_OFF", "TOK_OMITTED",
  "TOK_ON", "TOK_OPEN", "TOK_OPTIONAL", "TOK_OR", "TOK_ORDER",
  "TOK_ORGANIZATION", "TOK_OTHER", "TOK_OUTPUT", "TOK_OVERFLOW",
  "TOK_PACKED_DECIMAL", "TOK_PADDING", "TOK_PAGE", "TOK_PAGE_COUNTER",
  "TOK_PERFORM", "TOK_PERIOD", "TOK_PF", "TOK_PH", "TOK_PIC",
  "TOK_PICTURE", "TOK_PIC_TEXT", "TOK_PLUS", "TOK_POINTER", "TOK_POSITION",
  "TOK_POSITIVE", "TOK_PRINTING", "TOK_PROCEDURE", "TOK_PROCEDURES",
  "TOK_PROCEED", "TOK_PROGRAM", "TOK_PROGRAM_ID", "TOK_PURGE", "TOK_QUEUE",
  "TOK_QUOTE", "TOK_RANDOM", "TOK_RD", "TOK_READ", "TOK_RECEIVE",
  "TOK_RECORD", "TOK_RECORDS", "TOK_REDEFINES", "TOK_REEL",
  "TOK_REFERENCE", "TOK_REFERENCES", "TOK_RELATIVE", "TOK_RELEASE",
  "TOK_REMAINDER", "TOK_REMOVAL", "TOK_RENAMES", "TOK_REPLACE",
  "TOK_REPLACING", "TOK_REPORT", "TOK_REPORTING", "TOK_REPORTS",
  "TOK_RERUN", "TOK_RESERVE", "TOK_RESET", "TOK_RETURN", "TOK_REVERSED",
  "TOK_REVERSE_VIDEO", "TOK_REWIND", "TOK_REWRITE", "TOK_RF", "TOK_RH",
  "TOK_RIGHT", "TOK_ROUNDED", "TOK_RPAREN", "TOK_RUN", "TOK_SAME",
  "TOK_SCREEN", "TOK_SD", "TOK_SEARCH", "TOK_SECTION", "TOK_SECURITY",
  "TOK_SEGMENT", "TOK_SEGMENT_LIMIT", "TOK_SELECT", "TOK_SEMICOLON",
  "TOK_SEND", "TOK_SENTENCE", "TOK_SEPARATE", "TOK_SEQUENCE",
  "TOK_SEQUENTIAL", "TOK_SET", "TOK_SIGN", "TOK_SIZE", "TOK_SLASH",
  "TOK_SORT", "TOK_SORT_MERGE", "TOK_SOURCE", "TOK_SOURCE_COMPUTER",
  "TOK_SPACE", "TOK_SPACES", "TOK_SPECIAL_NAMES", "TOK_STANDARD",
  "TOK_STANDARD_1", "TOK_STANDARD_2", "TOK_START", "TOK_STATUS",
  "TOK_STOP", "TOK_STRING", "TOK_SUBTRACT", "TOK_SUB_QUEUE_1",
  "TOK_SUB_QUEUE_2", "TOK_SUB_QUEUE_3", "TOK_SUM", "TOK_SUPRESS",
  "TOK_SYMBOLIC", "TOK_SYNC", "TOK_TABLE", "TOK_TALLYING", "TOK_TAPE",
  "TOK_TERMINAL", "TOK_TERMINATE", "TOK_TEST", "TOK_TEXT", "TOK_THAN",
  "TOK_THEN", "TOK_THROUGH", "TOK_THRU", "TOK_TIME", "TOK_TIMES", "TOK_TO",
  "TOK_TOP", "TOK_TRAILING", "TOK_TRUE", "TOK_TYPE", "TOK_UNDERLINE",
  "TOK_UNIT", "TOK_UNSTRING", "TOK_UNTIL", "TOK_UP", "TOK_UPON",
  "TOK_USAGE", "TOK_USE", "TOK_USING", "TOK_VALUE", "TOK_VALUES",
  "TOK_VARYING", "TOK_WHEN", "TOK_WHILE", "TOK_WITH", "TOK_WORDS",
  "TOK_WORKING_STORAGE", "TOK_WRITE", "TOK_ZERO", "HEADER", "NL",
  "$accept", "pgm", "program", "identification_division",
  "program_info_list", "program_info_clause", "word_list", "word_list_pl",
  "prg_name_option", "optional_is", "common_initial", "optional_program",
  "environment_division", "data_division", "data_section_list",
  "data_section_entry", "file_section", "working_storage_section",
  "record_entry_block", "record_entry_block_pl", "record_level", "inc",
  "integer", "level_name", "identifier", "record_new_or_redef",
  "array_options", "reclev_option_list", "record_level_option",
  "usage_option", "sign_option", "sign_args", "sep_char_option",
  "justified_option", "justified_just", "sync_option", "left_right_option",
  "picture", "pict_usage_args", "value_entry", "value", "string", "float",
  "optional_times", "optional_by", "optional_character", "optional_right",
  "optional_sign", "linkage_section", "communication_section",
  "report_section", "screen_section", "procedure_division",
  "statement_list", "statement", "id_statement", "boolean_list",
  "boolean_list_pl", "boolean", "boolean2", "not_boolean_list",
  "not_boolean_list_pl", "not_boolean", "not_boolean2", "logic_connector",
  "relational", "reverse_relational", "clause", "if_clause", "if_args",
  "if_args_end", "elsif_clause", "optional_at_end_clause",
  "compound_clause", "clause_list", "clause_list_pl", "expression",
  "accept_args", "accept_option", "from_arg", "display_args",
  "optional_at", "display_args_marked", "display_args_pl", "display_arg",
  "upon_option", "giving_option", "round_option", "size_error_option",
  "perform_options", "thru_option", "end_perform", "times_option",
  "varying_option", "after_list", "loop_condition", "loop_condition_part2",
  "loop_condition_part3", "by_option", "loop_iterator",
  "compute_expr_list", "compute_expr_list_pl", "compute_expr",
  "compute_term", "compute_operator", "open_list", "open_list_pl",
  "open_entry", "open_options", "close_options", "close_method",
  "write_from_clause", "write_options", "call_list", "using_options",
  "using_id_list", "using_id_list_pl", "initialize_args", "replace_option",
  "replace_next", "replace_next_pl", "replace_what", "id_list",
  "id_list_marked", "id_list_pl", "divide_action_word", "optional_comma",
  "optional_word_record", "optional_to", "optional_all", "optional_than",
  "optional_then", "optional_data", "optional_lparen", "optional_rparen", YY_NULL
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
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,   556,   557,   558,   559,   560,   561,   562,   563,   564,
     565,   566,   567,   568,   569,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,   587,   588,   589,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,   607,   608,   609,   610,   611,   612,   613,   614,
     615,   616,   617,   618,   619,   620,   621,   622,   623,   624,
     625,   626,   627,   628
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   374,   375,   376,   377,   378,   378,   379,   379,   379,
     379,   379,   379,   380,   380,   380,   380,   380,   381,   381,
     382,   382,   383,   383,   383,   384,   384,   385,   385,   386,
     387,   388,   388,   389,   389,   389,   389,   389,   389,   389,
     390,   391,   391,   392,   392,   392,   392,   393,   393,   394,
     394,   394,   394,   395,   395,   396,   397,   397,   398,   399,
     399,   399,   400,   400,   401,   401,   402,   402,   402,   402,
     403,   404,   405,   405,   406,   406,   407,   408,   408,   409,
     410,   410,   410,   397,   397,   411,   411,   412,   412,   412,
     412,   412,   412,   413,   413,   414,   414,   414,   414,   415,
     396,   416,   417,   417,   418,   418,   419,   419,   383,   383,
     383,   420,   420,   421,   421,   422,   423,   424,   425,   426,
     427,   427,   428,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   428,   429,   429,   430,   431,   431,   432,
     433,   433,   433,   433,   433,   434,   435,   435,   436,   437,
     437,   438,   438,   439,   439,   439,   439,   439,   439,   440,
     440,   440,   440,   440,   441,   441,   441,   441,   441,   441,
     441,   441,   441,   441,   441,   441,   441,   441,   441,   441,
     441,   441,   441,   442,   443,   444,   444,   444,   445,   446,
     446,   447,   448,   448,   448,   449,   449,   450,   450,   450,
     450,   451,   452,   452,   453,   453,   453,   453,   453,   454,
     455,   455,   456,   457,   457,   458,   458,   458,   458,   458,
     459,   459,   460,   460,   461,   461,   462,   462,   463,   464,
     464,   465,   465,   466,   466,   467,   467,   468,   468,   469,
     470,   470,   471,   471,   472,   472,   473,   473,   474,   474,
     475,   475,   476,   476,   477,   477,   477,   478,   478,   478,
     478,   478,   478,   479,   480,   480,   481,   481,   481,   481,
     482,   482,   482,   483,   483,   483,   483,   484,   484,   485,
     485,   486,   486,   487,   487,   488,   488,   489,   489,   489,
     490,   490,   490,   491,   492,   492,   493,   494,   494,   495,
     495,   495,   495,   495,   496,   497,   498,   498,   380,   380,
     380,   380,   380,   381,   381,   499,   499,   383,   383,   383,
     500,   500,   501,   501,   502,   502,   503,   503,   504,   504,
     505,   505,   418,   418,   421,   421,   419,   419,   385,   385,
     420,   420,   506,   506,   507,   507,   508,   508,   417,   417,
     398
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     4,     4,     2,     0,     4,     4,     4,
       4,     4,     5,     2,     2,     2,     2,     2,     1,     0,
       3,     0,     1,     1,     0,     1,     1,     1,     0,     3,
       4,     2,     0,     1,     1,     1,     1,     1,     1,     0,
       3,     3,     4,     7,     5,     2,     0,     1,     0,     7,
       5,     8,     4,     1,     1,     1,     1,     1,     1,     6,
       2,     4,     6,     0,     1,     0,     1,     1,     1,     1,
       3,     4,     1,     1,     2,     0,     2,     1,     1,     2,
       1,     1,     0,     1,     1,     3,     0,     1,     1,     1,
       1,     1,     1,     3,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     1,     0,     1,     0,     1,     1,
       0,     1,     0,     1,     0,     3,     3,     3,     3,     4,
       2,     0,     5,     6,     3,     5,     2,     2,     3,     3,
       3,     5,     2,     3,     1,     2,     2,     2,     0,     5,
       1,     1,     1,     2,     0,     2,     2,     0,     5,     2,
       0,     1,     1,     2,     2,     2,     1,     1,     2,     2,
       2,     2,     1,     1,     1,     3,     3,     4,     5,     5,
       5,     5,     3,     4,     6,     2,     3,     4,     3,     3,
       2,     2,     7,     3,     3,     3,     3,     0,     3,     3,
       0,     1,     2,     3,     1,     1,     0,     1,     1,     1,
       1,     2,     2,     0,     1,     1,     1,     1,     1,     3,
       5,     0,     2,     2,     0,     1,     1,     1,     1,     1,
       2,     0,     2,     0,     1,     0,     5,     0,     3,     2,
       0,     2,     0,     2,     0,     3,     0,     3,     0,     4,
       3,     2,     2,     2,     2,     0,     1,     1,     2,     1,
       1,     0,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     0,     3,     3,     3,     3,
       1,     3,     0,     2,     2,     2,     0,     2,     3,     2,
       0,     4,     0,     1,     1,     2,     0,     2,     3,     3,
       2,     1,     0,     2,     2,     0,     5,     2,     0,     1,
       1,     1,     1,     1,     1,     2,     2,     0,     2,     2,
       2,     2,     2,     1,     0,     1,     1,     1,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     2,     0,     0,     1,     0,     0,     6,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     4,
       6,    29,     0,     0,     3,     0,     0,     0,     0,     0,
       0,     5,    32,     0,    19,    19,    19,    19,    19,     0,
       0,     0,     0,    24,     0,     0,     0,     0,     0,     0,
       0,    30,    32,    38,    33,    34,    35,    36,    37,   121,
      18,    15,    13,    14,    17,    16,     7,    10,     9,     8,
      23,    22,     0,     0,    11,     0,     0,     0,     0,     0,
       0,    31,   211,     0,     0,     0,     0,   211,     0,     0,
       0,    19,   345,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    24,     0,   119,   121,     0,
       0,    12,    25,    26,    28,   116,    40,   115,   117,   118,
      41,     0,   203,     0,   101,    58,    55,    99,   198,   197,
     200,   199,     0,   284,   283,   286,   307,   276,   304,   225,
       0,   221,   327,     0,   181,     0,   344,   331,   138,     0,
       0,   292,   295,     0,     0,     0,     0,     0,     0,     0,
       0,   175,   265,   230,     0,   323,     0,   280,     0,     0,
     280,     0,   134,     0,   132,   120,   126,   127,    27,    20,
      55,    42,    46,     0,     0,     0,   165,   201,     0,     0,
     179,   320,   305,     0,     0,     0,     0,   176,   224,     0,
       0,   124,     0,   166,   326,     0,   315,   316,     0,   172,
     330,   183,     0,   151,   152,   136,   345,    24,     0,     0,
       0,   291,   287,     0,   293,   129,     0,     0,     0,   272,
     272,   272,   272,   264,   263,     0,     0,   232,   234,   128,
     322,   190,   130,     0,   178,   133,     0,   282,     0,   135,
       0,    47,    45,    57,    63,    56,     0,   208,   204,   205,
     206,   207,   202,   223,   285,   306,     0,     0,   274,   273,
     275,     0,     0,   220,   219,   217,   215,   216,   218,   209,
     214,   223,   211,     0,     0,   164,   196,   194,   187,   191,
     137,   144,   289,   288,   290,   299,   300,   302,   301,   303,
     294,   343,     0,   167,   223,   270,     0,   268,   266,   269,
     267,   229,     0,   345,   173,     0,   236,     0,     0,   279,
     223,     0,   177,     0,     0,     0,     0,     0,     0,    86,
       0,     0,   168,   277,     0,   259,   261,   258,   257,   262,
     260,   255,   254,   256,   171,   251,   249,   253,   122,   212,
       0,   225,   180,   195,   192,   196,   331,   345,   184,   140,
     142,   141,   325,   329,   156,   329,   157,     0,   347,     0,
     342,     0,   125,   170,     0,     0,   231,   147,     0,   233,
       0,   228,     0,   131,   169,     0,     0,     0,   103,     0,
      60,    52,    24,     0,   210,   222,   278,   250,   248,   252,
     213,   227,   193,     0,   331,   187,   324,   155,   328,   153,
     154,   325,   329,   162,   329,   163,   158,   346,   139,   143,
       0,   271,    53,    54,   174,   145,   345,    24,     0,   238,
     189,   247,   246,     0,   123,    44,     0,   102,     0,     0,
       0,    94,     0,   182,   185,     0,   186,   161,   159,   160,
      95,    98,   321,    97,    96,   146,   150,     0,     0,   235,
     281,     0,   105,     0,    85,    94,    24,    61,     0,   188,
     296,     0,   347,     0,   245,   238,    43,   104,     0,     0,
     114,     0,     0,   297,   148,   149,     0,     0,   239,     0,
     237,    62,    51,    78,    77,   113,    82,    24,    59,    64,
      66,    67,    69,   112,    68,    24,    93,     0,   244,   245,
     345,   345,   241,    80,    81,    79,     0,   111,    76,     0,
     226,   240,   243,   242,    87,    89,    88,    90,    91,    92,
      70,    72,    73,    75,   107,    71,   106,    74
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,    19,    20,    60,    62,    72,    73,
     114,   179,     8,    12,    51,    52,    53,    54,   181,   252,
     182,   424,   128,   254,   136,   328,   329,   498,   499,   500,
     501,   533,   535,   502,   503,   504,   515,   393,   530,   467,
     452,   130,   131,   438,   478,   537,   518,   505,    55,    56,
      57,    58,    24,   107,   108,   174,   147,   215,   148,   368,
     376,   425,   377,   472,   216,   369,   416,   286,   287,   211,
     358,   405,   318,   288,   289,   354,   155,   122,   186,   262,
     141,   142,   279,   349,   280,   203,   332,   199,   443,   237,
     238,   314,   316,   381,   459,   429,   488,   512,   489,   433,
     344,   398,   345,   346,   347,   161,   234,   162,   307,   197,
     268,   244,   322,   135,   190,   152,   222,   153,   224,   300,
     470,   301,   137,   138,   192,   208,   193,   241,   407,   205,
     409,   212,   371,   149,   418
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -380
static const yytype_int16 yypact[] =
{
     -77,    -2,   109,  -380,   -12,  -115,  -380,    13,    58,   -19,
    -100,    40,  -112,   -96,   -90,   -89,   -86,   -79,   -69,  -380,
     -19,  -380,   -64,    91,  -380,  -101,  -101,  -101,  -101,  -101,
    -101,  -380,   -37,   -40,  -101,  -101,  -101,  -101,  -101,   -36,
       1,    12,    18,   -15,    26,   -34,   -29,   -23,   -22,     8,
      11,  -380,   -37,  -380,  -380,  -380,  -380,  -380,  -380,    37,
    -380,  -380,  -380,  -380,  -380,  -380,  -380,  -380,  -380,  -380,
    -380,  -380,    59,     7,  -380,    70,    74,    76,    81,    88,
      90,  -380,    -6,   -93,  -153,    57,    57,  -143,    57,    29,
     -94,    22,   129,    23,   -83,    57,    67,    57,    57,    57,
      38,    57,    44,   -93,    57,   -15,  -163,  -380,    37,   102,
     105,  -380,  -380,  -380,    92,  -380,  -380,  -380,  -380,  -380,
     172,   174,   201,    57,  -380,  -380,  -380,  -380,  -380,  -380,
    -380,  -380,    17,  -380,  -380,     5,   320,  -147,  -380,    82,
     -44,    19,   365,    16,  -380,    57,  -380,    33,   -14,   -93,
     -38,    45,   103,   137,    34,    35,   348,    57,    57,    57,
      57,  -380,    67,  -240,   144,   127,   152,   241,   155,   244,
     241,   159,  -380,   161,  -380,  -380,  -380,  -380,  -380,  -380,
     238,  -380,   172,   -58,   353,   -43,  -380,  -380,    57,    23,
    -380,  -380,  -380,    57,  -138,  -138,   204,  -380,  -380,   276,
     245,  -380,    57,  -380,  -380,  -103,  -380,  -380,   -93,  -380,
    -380,  -380,   117,  -380,  -380,  -380,   129,     0,    23,    23,
      23,  -380,  -380,    15,  -380,  -380,   246,    57,   -93,  -219,
    -219,  -219,  -219,  -380,  -380,    57,   341,    56,   174,  -380,
    -380,   388,  -380,    57,  -380,  -380,    57,   408,   321,  -380,
     176,  -380,  -380,  -380,  -130,  -380,   174,  -380,  -380,  -380,
    -380,  -380,  -380,   269,  -380,  -380,   153,   208,  -380,  -380,
    -380,    43,   194,  -380,  -380,  -380,  -380,  -380,  -380,  -380,
     -41,   269,    -6,   -93,   143,  -380,   117,   323,    -1,  -380,
    -380,   281,  -380,  -380,  -380,  -380,  -380,  -380,  -380,  -380,
    -380,   367,   200,  -380,   269,  -380,   226,  -380,  -380,  -380,
    -380,  -380,   149,   129,  -380,    98,    83,   338,   207,  -380,
     269,   442,  -380,   124,   273,   174,   126,    57,   212,   209,
     163,    57,  -380,  -380,   170,  -380,  -380,  -380,  -380,  -380,
    -380,  -380,  -380,  -380,  -380,    43,    24,  -380,  -380,  -380,
    -103,    82,  -380,  -380,  -380,   117,    33,   129,  -380,  -380,
    -380,  -380,   110,   118,  -380,   118,  -380,   146,   167,   -93,
    -380,   425,  -380,  -380,   178,  -141,  -380,   -14,   -93,  -380,
      57,  -380,   117,  -380,  -380,   -76,   221,  -205,   119,   410,
    -380,  -380,     0,   412,  -380,  -380,  -380,  -380,  -380,  -380,
    -380,   242,  -380,   117,    33,    -1,  -380,  -380,  -380,  -380,
    -380,   110,   118,  -380,   118,  -380,  -380,  -380,  -380,  -380,
     -93,  -380,  -380,  -380,  -380,  -380,   129,     0,   315,   462,
    -380,  -380,  -380,   272,  -380,   294,  -141,  -380,   306,   115,
     154,  -158,   168,  -380,  -380,   117,  -380,  -380,  -380,  -380,
    -380,  -380,   -42,  -380,  -380,  -380,   146,   -76,    57,  -380,
    -380,   237,   445,   304,  -380,   121,     0,  -380,   351,  -380,
    -380,    15,   167,   -93,   -35,   462,   307,  -380,    57,   247,
      61,   -93,   117,  -380,  -380,  -380,   -76,   -76,  -380,  -265,
    -380,  -380,  -380,  -380,  -380,  -380,  -123,     0,  -380,  -380,
    -380,  -380,  -380,   196,  -380,     0,  -380,   248,  -380,   454,
     129,   129,  -380,  -380,  -380,  -380,     2,  -380,  -380,  -170,
    -380,  -380,  -380,  -380,  -380,  -380,  -380,  -380,  -380,  -380,
    -380,  -380,  -380,   185,   450,  -380,  -380,  -380
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -380,  -380,  -380,  -380,   473,  -380,   404,   322,   389,  -210,
    -380,  -380,  -380,  -380,   443,  -380,  -380,  -380,   314,  -380,
    -380,    62,  -106,  -380,   -59,  -380,  -380,  -380,  -380,  -380,
    -380,  -380,  -380,  -380,  -380,  -380,  -380,  -380,  -380,    32,
      20,   -80,  -154,  -380,  -380,  -380,  -380,  -380,  -380,  -380,
    -380,  -380,  -380,   392,  -380,  -380,  -213,  -380,  -380,  -380,
    -379,  -380,  -380,  -380,   125,   191,    48,    14,    21,  -380,
     100,  -380,  -380,  -303,  -216,   151,   -81,  -380,  -380,  -380,
    -380,   426,   157,  -380,  -380,  -380,   -47,   158,  -380,  -380,
    -380,  -380,  -380,  -380,    36,    52,  -380,  -380,     4,  -373,
     169,  -380,  -380,  -380,   171,   354,  -380,  -380,   138,  -380,
     324,   345,  -380,  -380,  -380,    42,  -380,  -380,  -380,    47,
    -380,  -380,   230,   327,  -380,  -380,  -262,  -380,   111,  -380,
    -302,  -285,  -380,  -258,    49
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -322
static const yytype_int16 yytable[] =
{
     106,   486,   132,   290,   134,   213,    70,   291,   200,    13,
     191,   191,   125,   266,   183,   184,   257,    45,   350,   531,
     465,    70,   169,   218,   129,   133,   295,   139,   258,   296,
     297,   259,   260,   524,   151,   129,   435,   422,   163,   164,
     165,    82,   167,    83,   129,   170,   124,   455,    34,   106,
     335,   278,   206,    14,    15,   378,   124,   525,   526,   150,
     112,   121,   125,   410,    35,   305,   124,   513,   217,   335,
     353,   403,   125,   109,    84,   126,   183,    36,   172,   430,
     110,   150,   125,    85,   474,   126,   209,     1,   253,   125,
     129,   510,   151,   325,    86,   154,     5,   220,   527,   275,
     444,   511,   126,   356,   357,   235,    46,   125,  -321,     6,
     448,    10,   449,   508,   509,   326,   236,   343,     7,   445,
     194,    82,   109,    83,   255,   277,     9,   281,    11,   110,
     151,   522,   315,    87,    88,   173,   327,  -321,    22,   353,
      23,    21,   469,   273,   404,    25,   276,   304,   306,   129,
     330,    26,    27,   285,    84,    28,   274,   436,    16,   151,
     151,   151,    29,    85,    47,   341,    71,   514,   378,   129,
     528,    34,    30,   127,    86,    89,   311,    32,   113,   507,
     532,    71,   440,   140,   319,   423,    34,    35,   125,    33,
     471,   343,   124,   221,    90,   207,   278,   201,   121,  -298,
      36,    59,    91,    92,   466,    66,   157,   195,   125,    93,
     125,    37,   342,   282,    88,    36,   214,   456,  -321,   388,
     196,   126,   125,   127,   129,    38,   -21,   285,   336,   267,
     219,   264,   337,   127,   351,   298,   299,    17,   529,   341,
      48,   158,    67,   127,   275,   493,   494,   336,    94,   159,
      95,   337,   378,    68,   145,    89,   481,   373,    49,    69,
     292,   293,   294,   166,    75,    96,   454,    74,   390,    76,
     277,   338,   395,   384,    90,    77,    78,    97,   411,   431,
      18,   362,   125,    92,   144,  -321,   342,   516,   419,    98,
     338,   276,   359,   360,   361,   519,   285,   427,   523,    99,
     111,   160,   -65,   261,   412,   413,    79,   363,   364,    80,
     129,   115,   100,   487,   450,   116,   339,   117,   143,   129,
     -58,   428,   118,   285,   101,   156,   432,   454,   283,   119,
      95,   120,    50,   146,    37,   339,   340,   168,   414,   415,
     453,   365,   366,   176,   285,    96,   177,   178,    38,    37,
     180,   431,   126,   187,   185,   340,    61,    97,    63,    64,
      65,   451,   102,    38,   103,   188,   189,   367,   308,   309,
     310,   495,   191,   198,   204,   450,   210,   202,   225,   223,
     431,   431,   226,   227,   228,   239,   285,   229,   230,   231,
     232,   240,   485,   242,   243,   496,   245,   246,   432,   428,
     248,   453,   249,   250,   101,   256,   270,   104,   271,   312,
     272,   302,   313,   362,   129,   317,   321,   323,   263,   491,
     497,   324,   451,   285,   331,   334,   333,   432,   432,    39,
      40,    41,    42,    43,    44,   348,   352,   370,   355,   363,
     364,   372,   284,   374,   103,   379,   382,   380,   383,   385,
     386,   387,   389,   391,   392,   394,   396,   303,   406,   417,
     408,   420,   434,   105,   421,   439,   437,   441,   457,   442,
     458,   460,   -50,   365,   366,   462,   320,   463,   476,   468,
     464,   477,   479,   466,   482,   -49,   517,   104,   492,   520,
     486,   534,   536,    31,   171,    81,   251,   480,   461,   367,
     175,   506,   426,   375,   473,   446,   402,   400,   123,   401,
     475,   490,   105,   521,   397,   247,   233,   399,   483,   269,
     265,   484,   447
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-380)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_uint16 yycheck[] =
{
      59,    36,    83,   216,    84,    19,    21,   217,    52,    28,
      52,    52,   165,   151,   120,   121,    59,    54,   280,   189,
     178,    21,   103,    61,    83,    84,    11,    86,    71,    14,
      15,    74,    75,    31,    93,    94,   241,   178,    97,    98,
      99,     4,   101,     6,   103,   104,   149,   426,   149,   108,
      26,   205,    36,    72,    73,   313,   149,    55,    56,    36,
      53,   204,   165,   365,   165,   284,   149,   190,   149,    26,
     286,   356,   165,    59,    37,   178,   182,   178,   241,   382,
      59,    36,   165,    46,   457,   178,   145,   164,   146,   165,
     149,   356,   151,   223,    57,   178,    98,    52,    96,   205,
     403,   366,   178,   104,   105,   345,   143,   165,   149,     0,
     412,    98,   414,   486,   487,   245,   356,   271,   130,   404,
     267,     4,   108,     6,   183,   205,   241,   208,    70,   108,
     189,   510,   238,    96,    97,   298,   266,   178,    98,   355,
     252,   241,   445,   202,   357,   241,   205,   228,   367,   208,
     256,   241,   241,   212,    37,   241,   259,   362,   177,   218,
     219,   220,   241,    46,   201,   271,   181,   290,   426,   228,
     168,   149,   241,   326,    57,   138,   235,   241,   171,   482,
     350,   181,   392,   326,   243,   326,   149,   165,   165,    98,
     452,   345,   149,   151,   157,   179,   350,   241,   204,   241,
     178,   241,   165,   166,   362,   241,   139,   354,   165,   172,
     165,   312,   271,    96,    97,   178,   230,   427,   259,   325,
     367,   178,   165,   326,   283,   326,   241,   286,   204,   367,
     268,   189,   208,   326,   281,   220,   221,   256,   236,   345,
     277,   174,   241,   326,   350,   184,   185,   204,   211,   182,
     213,   208,   510,   241,   348,   138,   466,   304,   295,   241,
     218,   219,   220,   225,   298,   228,   420,   241,   327,   298,
     350,   247,   331,   320,   157,   298,   298,   240,   132,   385,
     299,   132,   165,   166,   255,   326,   345,   497,   369,   252,
     247,   350,    11,    12,    13,   505,   355,   378,   511,   262,
     241,   234,   241,   346,   158,   159,   298,   158,   159,   298,
     369,   241,   275,   348,   420,   241,   292,   241,    88,   378,
     298,   380,   241,   382,   287,    95,   385,   481,   211,   241,
     213,   241,   369,   204,   312,   292,   312,   293,   192,   193,
     420,   192,   193,   241,   403,   228,   241,   255,   326,   312,
     178,   457,   178,   123,   153,   312,    34,   240,    36,    37,
      38,   420,   325,   326,   327,   348,   361,   218,   230,   231,
     232,   310,    52,   291,     9,   481,   343,   358,   241,   276,
     486,   487,   348,   348,    36,   241,   445,   157,   158,   159,
     160,   264,   473,   241,   153,   334,   241,   153,   457,   458,
     241,   481,   241,   165,   287,    52,   202,   370,   132,    68,
     165,   165,   356,   132,   473,    27,     8,    96,   188,   478,
     359,   245,   481,   482,   155,   217,   273,   486,   487,    25,
      26,    27,    28,    29,    30,   241,   293,    70,   115,   158,
     159,   241,   325,   217,   327,   347,   108,   364,   241,     7,
     326,   178,   326,   241,   245,   292,   286,   227,   348,   292,
     342,    36,   241,    59,   286,    55,   347,    55,   153,   227,
       8,   199,   178,   192,   193,   169,   246,   362,   241,   311,
     326,    36,   178,   362,   133,   178,   290,   370,   241,   241,
      36,   306,    42,    20,   105,    52,   182,   465,   436,   218,
     108,   481,   377,   312,   456,   405,   355,   350,    82,   351,
     458,   475,   108,   509,   345,   170,   162,   346,   471,   195,
     193,   472,   411
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   164,   375,   376,   377,    98,     0,   130,   386,   241,
      98,    70,   387,    28,    72,    73,   177,   256,   299,   378,
     379,   241,    98,   252,   426,   241,   241,   241,   241,   241,
     241,   378,   241,    98,   149,   165,   178,   312,   326,   380,
     380,   380,   380,   380,   380,    54,   143,   201,   277,   295,
     369,   388,   389,   390,   391,   422,   423,   424,   425,   241,
     380,   381,   381,   381,   381,   381,   241,   241,   241,   241,
      21,   181,   382,   383,   241,   298,   298,   298,   298,   298,
     298,   388,     4,     6,    37,    46,    57,    96,    97,   138,
     157,   165,   166,   172,   211,   213,   228,   240,   252,   262,
     275,   287,   325,   327,   370,   380,   398,   427,   428,   441,
     442,   241,    53,   171,   384,   241,   241,   241,   241,   241,
     241,   204,   451,   455,   149,   165,   178,   326,   396,   398,
     415,   416,   450,   398,   415,   487,   398,   496,   497,   398,
     326,   454,   455,   496,   255,   348,   204,   430,   432,   507,
      36,   398,   489,   491,   178,   450,   496,   139,   174,   182,
     234,   479,   481,   398,   398,   398,   225,   398,   293,   450,
     398,   382,   241,   298,   429,   427,   241,   241,   255,   385,
     178,   392,   394,   396,   396,   153,   452,   496,   348,   361,
     488,    52,   498,   500,   267,   354,   367,   483,   291,   461,
      52,   241,   358,   459,     9,   503,    36,   179,   499,   398,
     343,   443,   505,    19,   230,   431,   438,   450,    61,   268,
      52,   489,   490,   276,   492,   241,   348,   348,    36,   496,
     496,   496,   496,   479,   480,   345,   356,   463,   464,   241,
     264,   501,   241,   153,   485,   241,   153,   485,   241,   241,
     165,   392,   393,   146,   397,   398,    52,    59,    71,    74,
      75,   346,   453,   496,   489,   497,   151,   367,   484,   484,
     202,   132,   165,   398,   259,   396,   398,   415,   416,   456,
     458,   450,    96,   211,   325,   398,   441,   442,   447,   448,
     430,   383,   489,   489,   489,    11,    14,    15,   220,   221,
     493,   495,   165,   496,   450,   284,   367,   482,   482,   482,
     482,   398,    68,   356,   465,   396,   466,    27,   446,   398,
     496,     8,   486,    96,   245,   223,   245,   266,   399,   400,
     396,   155,   460,   273,   217,    26,   204,   208,   247,   292,
     312,   396,   398,   416,   474,   476,   477,   478,   241,   457,
     500,   460,   293,   448,   449,   115,   104,   105,   444,    11,
      12,    13,   132,   158,   159,   192,   193,   218,   433,   439,
      70,   506,   241,   460,   217,   439,   434,   436,   507,   347,
     364,   467,   108,   241,   460,     7,   326,   178,   396,   326,
     398,   241,   245,   411,   292,   398,   286,   474,   475,   478,
     456,   461,   449,   505,   430,   445,   348,   502,   342,   504,
     504,   132,   158,   159,   192,   193,   440,   292,   508,   450,
      36,   286,   178,   326,   395,   435,   438,   450,   398,   469,
     447,   396,   398,   473,   241,   241,   362,   347,   417,    55,
     383,    55,   227,   462,   447,   505,   444,   502,   504,   504,
     396,   398,   414,   415,   416,   434,   383,   153,     8,   468,
     199,   395,   169,   362,   326,   178,   362,   413,   311,   447,
     494,   500,   437,   440,   473,   469,   241,    36,   418,   178,
     413,   383,   133,   493,   508,   450,    36,   348,   470,   472,
     468,   398,   241,   184,   185,   310,   334,   359,   401,   402,
     403,   404,   407,   408,   409,   421,   414,   447,   473,   473,
     356,   366,   471,   190,   290,   410,   383,   290,   420,   383,
     241,   472,   434,   430,    31,    55,    56,    96,   168,   236,
     412,   189,   350,   405,   306,   406,    42,   419
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
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




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

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

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
/* Line 1792 of yacc.c  */
#line 388 "coco.y"
    {printf(" THE PROGRAM IS VALID \n");exit(0);}
    break;


/* Line 1792 of yacc.c  */
#line 2407 "coco.tab.c"
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
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
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


/* Line 2055 of yacc.c  */
#line 1251 "coco.y"

void main()
{
printf("welcome to cobol compiler\n");
yyin=fopen("input.cbl","r");
yyparse();
}
int yyerror(char *msg)
{
int m=yylineno;
printf("\n syntax error found at line number %d",m);
return 0;
}
int yywrap()
{
return 1;
}