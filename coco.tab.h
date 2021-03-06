/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
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

#ifndef YY_YY_COCO_TAB_H_INCLUDED
# define YY_YY_COCO_TAB_H_INCLUDED
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

#endif /* !YY_YY_COCO_TAB_H_INCLUDED  */
