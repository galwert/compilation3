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
#line 2 "parser.ypp"

#include <iostream>
#include "parser.hpp"
#include "hw3_output.hpp"
#include <climits>
extern int yylineno;
using namespace std;
int yyerror(const char * const s);
int yylex(void);
Stacks* semantic_stacks;
TokenType convert_table[5][5]={
        {/*UNDIF TO*/
                /*TOKEN_UNDIF*/TOKEN_UNDIF,
                /*TOKEN_INT*/TOKEN_UNDIF,
                /*TOKEN_B*/TOKEN_UNDIF,
                /*TOKEN_BOOL*/TOKEN_UNDIF,
                /*TOKEN_STRING*/TOKEN_UNDIF
        },
        {/*INT TO*/
                /*TOKEN_UNDIF*/TOKEN_UNDIF,
                /*TOKEN_INT*/TOKEN_INT,
                /*TOKEN_B*/TOKEN_INT,
                /*TOKEN_BOOL*/TOKEN_UNDIF,/*not sure*/
                /*TOKEN_STRING*/TOKEN_UNDIF
        },
        {/*B TO*/
                /*TOKEN_UNDIF*/TOKEN_UNDIF,
                /*TOKEN_INT*/TOKEN_B,
                /*TOKEN_B*/TOKEN_B,
                /*TOKEN_BOOL*/TOKEN_UNDIF,
                /*TOKEN_STRING*/TOKEN_UNDIF
        },
        {/*BOOL TO*/
                /*TOKEN_UNDIF*/TOKEN_UNDIF,
                /*TOKEN_INT*/TOKEN_UNDIF,
                /*TOKEN_B*/TOKEN_UNDIF,
                /*TOKEN_BOOL*/TOKEN_BOOL,
                /*TOKEN_STRING*/TOKEN_UNDIF
        },
        {/*STRING TO*/
                /*TOKEN_UNDIF*/TOKEN_UNDIF,
                /*TOKEN_INT*/TOKEN_UNDIF,
                /*TOKEN_B*/TOKEN_UNDIF,
                /*TOKEN_BOOL*/TOKEN_UNDIF,
                /*TOKEN_STRING*/TOKEN_STRING
        }
};



#line 122 "parser.tab.cpp"

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

#include "parser.tab.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NUM = 3,                        /* NUM  */
  YYSYMBOL_STRING = 4,                     /* STRING  */
  YYSYMBOL_ID = 5,                         /* ID  */
  YYSYMBOL_VOID = 6,                       /* VOID  */
  YYSYMBOL_INT = 7,                        /* INT  */
  YYSYMBOL_BYTE = 8,                       /* BYTE  */
  YYSYMBOL_B = 9,                          /* B  */
  YYSYMBOL_BOOL = 10,                      /* BOOL  */
  YYSYMBOL_ASSIGN = 11,                    /* ASSIGN  */
  YYSYMBOL_TRUE = 12,                      /* TRUE  */
  YYSYMBOL_FALSE = 13,                     /* FALSE  */
  YYSYMBOL_RETURN = 14,                    /* RETURN  */
  YYSYMBOL_WHILE = 15,                     /* WHILE  */
  YYSYMBOL_BREAK = 16,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 17,                  /* CONTINUE  */
  YYSYMBOL_SC = 18,                        /* SC  */
  YYSYMBOL_COMMA = 19,                     /* COMMA  */
  YYSYMBOL_OR = 20,                        /* OR  */
  YYSYMBOL_AND = 21,                       /* AND  */
  YYSYMBOL_RELOP = 22,                     /* RELOP  */
  YYSYMBOL_PLUS = 23,                      /* PLUS  */
  YYSYMBOL_MULTI = 24,                     /* MULTI  */
  YYSYMBOL_NOT = 25,                       /* NOT  */
  YYSYMBOL_LPAREN = 26,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 27,                    /* RPAREN  */
  YYSYMBOL_ELSE = 28,                      /* ELSE  */
  YYSYMBOL_IF = 29,                        /* IF  */
  YYSYMBOL_LBRACE = 30,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 31,                    /* RBRACE  */
  YYSYMBOL_YYACCEPT = 32,                  /* $accept  */
  YYSYMBOL_Program = 33,                   /* Program  */
  YYSYMBOL_34_1 = 34,                      /* $@1  */
  YYSYMBOL_Funcs = 35,                     /* Funcs  */
  YYSYMBOL_FuncDecl = 36,                  /* FuncDecl  */
  YYSYMBOL_37_2 = 37,                      /* $@2  */
  YYSYMBOL_RetType = 38,                   /* RetType  */
  YYSYMBOL_Formals = 39,                   /* Formals  */
  YYSYMBOL_FormalsList = 40,               /* FormalsList  */
  YYSYMBOL_FormalDecl = 41,                /* FormalDecl  */
  YYSYMBOL_Statements = 42,                /* Statements  */
  YYSYMBOL_Statement = 43,                 /* Statement  */
  YYSYMBOL_44_3 = 44,                      /* $@3  */
  YYSYMBOL_45_4 = 45,                      /* $@4  */
  YYSYMBOL_IfExp = 46,                     /* IfExp  */
  YYSYMBOL_Call = 47,                      /* Call  */
  YYSYMBOL_ExpList = 48,                   /* ExpList  */
  YYSYMBOL_Type = 49,                      /* Type  */
  YYSYMBOL_Exp = 50                        /* Exp  */
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
typedef yytype_int8 yy_state_t;

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   247

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  32
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  54
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  106

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   286


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
      25,    26,    27,    28,    29,    30,    31
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    94,    94,    94,    97,    99,   102,   102,   107,   108,
     111,   112,   114,   115,   118,   120,   121,   124,   124,   125,
     127,   134,   141,   142,   144,   146,   147,   148,   148,   149,
     151,   154,   156,   167,   176,   177,   180,   181,   182,   185,
     189,   197,   212,   227,   233,   234,   236,   242,   245,   248,
     251,   255,   262,   269,   289
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
  "\"end of file\"", "error", "\"invalid token\"", "NUM", "STRING", "ID",
  "VOID", "INT", "BYTE", "B", "BOOL", "ASSIGN", "TRUE", "FALSE", "RETURN",
  "WHILE", "BREAK", "CONTINUE", "SC", "COMMA", "OR", "AND", "RELOP",
  "PLUS", "MULTI", "NOT", "LPAREN", "RPAREN", "ELSE", "IF", "LBRACE",
  "RBRACE", "$accept", "Program", "$@1", "Funcs", "FuncDecl", "$@2",
  "RetType", "Formals", "FormalsList", "FormalDecl", "Statements",
  "Statement", "$@3", "$@4", "IfExp", "Call", "ExpList", "Type", "Exp", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-29)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -29,     3,   179,   -29,   -29,   -29,   -29,   -29,   -29,   179,
       5,   -29,   -29,   -12,    32,    -5,   -29,    -1,    19,    11,
      32,   -29,   -29,   -29,   114,    -9,   165,    22,    17,    34,
      24,   -29,    60,   -29,    96,    37,    20,   169,   129,    47,
     -29,    31,   -29,   -29,   -29,   169,   154,   -29,   178,   169,
     -29,   -29,   169,   114,   -29,   -29,   114,    43,   -29,   -10,
     188,   -29,    46,   116,   -29,    50,    53,     9,   -29,   169,
     169,   169,   169,   169,    56,   208,    76,    78,   -29,   114,
     169,   -29,   -29,   -29,   169,   169,   -29,    40,   124,    91,
     -17,    50,   169,   -29,   -29,   -29,   198,   -29,    50,   218,
     114,   -29,    59,   -29,   169,    50
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     4,     1,     9,    36,    37,    38,     3,     4,
       0,     8,     5,     0,    10,     0,    11,    12,     0,     0,
       0,    14,     6,    13,     0,     0,     0,     0,     0,     0,
       0,    17,     0,    15,     0,     0,     0,     0,     0,    45,
      47,    43,    48,    49,    23,     0,     0,    44,     0,     0,
      29,    30,     0,     0,     7,    16,     0,     0,    22,     0,
       0,    33,     0,    34,    46,    50,     0,     0,    24,     0,
       0,     0,     0,     0,     0,     0,    31,     0,    25,     0,
       0,    19,    21,    32,     0,     0,    39,    52,    51,    53,
      41,    42,     0,    27,    18,    26,     0,    35,    54,     0,
       0,    20,     0,    28,     0,    40
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -29,   -29,   -29,    75,   -29,   -29,   -29,   -29,    82,   -29,
      63,   -28,   -29,   -29,   -29,   -19,    33,     7,   -26
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,     2,     8,     9,    24,    10,    15,    16,    17,
      32,    33,    53,   100,    34,    47,    62,    36,    63
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      48,    80,    37,     3,    55,    35,    57,    73,    81,    11,
      13,    60,    74,    35,    14,    35,    11,    38,    20,    65,
      67,    18,    19,    75,    21,    59,    76,    18,    78,    69,
      70,    71,    72,    73,    35,    50,    86,    35,    74,     5,
       6,    22,     7,    87,    88,    89,    90,    91,    49,    55,
      52,    95,    51,    66,    96,    58,    64,    38,    35,    98,
      35,    70,    71,    72,    73,    25,    99,     5,     6,    74,
       7,    79,   103,    83,    26,    27,    28,    29,   105,    74,
      85,    35,    92,    25,    12,     5,     6,   104,     7,    30,
      31,    54,    26,    27,    28,    29,    69,    70,    71,    72,
      73,    25,    23,     5,     6,    74,     7,    30,    31,    94,
      26,    27,    28,    29,    72,    73,    77,    97,     0,    25,
      74,     5,     6,    56,     7,    30,    31,     0,    26,    27,
      28,    29,    39,    40,    41,    84,    69,    70,    71,    72,
      73,    42,    43,    30,    31,    74,    71,    72,    73,     0,
       0,     0,     0,    74,    45,    46,    61,    39,    40,    41,
       0,     5,     6,     0,     7,     0,    42,    43,    39,    40,
      41,     0,    39,    40,    41,     0,     0,    42,    43,    45,
      46,    42,    43,    44,     0,     4,     5,     6,     0,     7,
      45,    46,     0,     0,    45,    46,    68,     0,    69,    70,
      71,    72,    73,     0,     0,     0,    82,    74,    69,    70,
      71,    72,    73,     0,     0,     0,   101,    74,    69,    70,
      71,    72,    73,     0,     0,     0,     0,    74,    69,    70,
      71,    72,    73,     0,     0,    93,     0,    74,    69,    70,
      71,    72,    73,     0,     0,   102,     0,    74
};

static const yytype_int8 yycheck[] =
{
      26,    11,    11,     0,    32,    24,    34,    24,    18,     2,
       5,    37,    29,    32,    26,    34,     9,    26,    19,    45,
      46,    14,    27,    49,     5,     5,    52,    20,    56,    20,
      21,    22,    23,    24,    53,    18,    27,    56,    29,     7,
       8,    30,    10,    69,    70,    71,    72,    73,    26,    77,
      26,    79,    18,    46,    80,    18,     9,    26,    77,    85,
      79,    21,    22,    23,    24,     5,    92,     7,     8,    29,
      10,    28,   100,    27,    14,    15,    16,    17,   104,    29,
      27,   100,    26,     5,     9,     7,     8,    28,    10,    29,
      30,    31,    14,    15,    16,    17,    20,    21,    22,    23,
      24,     5,    20,     7,     8,    29,    10,    29,    30,    31,
      14,    15,    16,    17,    23,    24,    53,    84,    -1,     5,
      29,     7,     8,    27,    10,    29,    30,    -1,    14,    15,
      16,    17,     3,     4,     5,    19,    20,    21,    22,    23,
      24,    12,    13,    29,    30,    29,    22,    23,    24,    -1,
      -1,    -1,    -1,    29,    25,    26,    27,     3,     4,     5,
      -1,     7,     8,    -1,    10,    -1,    12,    13,     3,     4,
       5,    -1,     3,     4,     5,    -1,    -1,    12,    13,    25,
      26,    12,    13,    18,    -1,     6,     7,     8,    -1,    10,
      25,    26,    -1,    -1,    25,    26,    18,    -1,    20,    21,
      22,    23,    24,    -1,    -1,    -1,    18,    29,    20,    21,
      22,    23,    24,    -1,    -1,    -1,    18,    29,    20,    21,
      22,    23,    24,    -1,    -1,    -1,    -1,    29,    20,    21,
      22,    23,    24,    -1,    -1,    27,    -1,    29,    20,    21,
      22,    23,    24,    -1,    -1,    27,    -1,    29
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    33,    34,     0,     6,     7,     8,    10,    35,    36,
      38,    49,    35,     5,    26,    39,    40,    41,    49,    27,
      19,     5,    30,    40,    37,     5,    14,    15,    16,    17,
      29,    30,    42,    43,    46,    47,    49,    11,    26,     3,
       4,     5,    12,    13,    18,    25,    26,    47,    50,    26,
      18,    18,    26,    44,    31,    43,    27,    43,    18,     5,
      50,    27,    48,    50,     9,    50,    49,    50,    18,    20,
      21,    22,    23,    24,    29,    50,    50,    42,    43,    28,
      11,    18,    18,    27,    19,    27,    27,    50,    50,    50,
      50,    50,    26,    27,    31,    43,    50,    48,    50,    50,
      45,    18,    27,    43,    28,    50
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    32,    34,    33,    35,    35,    37,    36,    38,    38,
      39,    39,    40,    40,    41,    42,    42,    44,    43,    43,
      43,    43,    43,    43,    43,    43,    43,    45,    43,    43,
      43,    46,    47,    47,    48,    48,    49,    49,    49,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    50,    50,
      50,    50,    50,    50,    50
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     0,     2,     0,     9,     1,     1,
       0,     1,     1,     3,     2,     1,     2,     0,     4,     3,
       5,     4,     2,     2,     3,     3,     4,     0,     6,     2,
       2,     3,     4,     3,     1,     3,     1,     1,     1,     3,
       7,     3,     3,     1,     1,     1,     2,     1,     1,     1,
       2,     3,     3,     3,     4
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
#line 94 "parser.ypp"
           {semantic_stacks=new Stacks();}
#line 1248 "parser.tab.cpp"
    break;

  case 3: /* Program: $@1 Funcs  */
#line 94 "parser.ypp"
                                                 {semantic_stacks->exit_scope();}
#line 1254 "parser.tab.cpp"
    break;

  case 4: /* Funcs: %empty  */
#line 97 "parser.ypp"
                            {if(!semantic_stacks->is_exsists("main")||!semantic_stacks->is_func("main"))
                         		output::errorMainMissing();}
#line 1261 "parser.tab.cpp"
    break;

  case 5: /* Funcs: FuncDecl Funcs  */
#line 99 "parser.ypp"
                                 {}
#line 1267 "parser.tab.cpp"
    break;

  case 6: /* $@2: %empty  */
#line 102 "parser.ypp"
                                                        {semantic_stacks->new_func(yyvsp[-4]->name,yyvsp[-5]->type,yyvsp[-2]->get_args());}
#line 1273 "parser.tab.cpp"
    break;

  case 7: /* FuncDecl: RetType ID LPAREN Formals RPAREN LBRACE $@2 Statements RBRACE  */
#line 103 "parser.ypp"
                               { semantic_stacks->exit_scope();}
#line 1279 "parser.tab.cpp"
    break;

  case 8: /* RetType: Type  */
#line 107 "parser.ypp"
                             {yyval=yyvsp[0];}
#line 1285 "parser.tab.cpp"
    break;

  case 9: /* RetType: VOID  */
#line 108 "parser.ypp"
                       {yyval=new Node(TokenType::TOKEN_UNDIF,"",0);}
#line 1291 "parser.tab.cpp"
    break;

  case 10: /* Formals: %empty  */
#line 111 "parser.ypp"
                            {yyval=new FormalList();}
#line 1297 "parser.tab.cpp"
    break;

  case 11: /* Formals: FormalsList  */
#line 112 "parser.ypp"
                              {yyval=yyvsp[0];}
#line 1303 "parser.tab.cpp"
    break;

  case 12: /* FormalsList: FormalDecl  */
#line 114 "parser.ypp"
                           {yyval = new FormalList(); yyval->get_args()->push_back(pair<TokenType,string>(yyvsp[0]->type,yyvsp[0]->name));}
#line 1309 "parser.tab.cpp"
    break;

  case 13: /* FormalsList: FormalDecl COMMA FormalsList  */
#line 115 "parser.ypp"
                                               {yyvsp[0]->get_args()->push_back(pair<TokenType,string>(yyvsp[-2]->type,yyvsp[-2]->name));yyval=yyvsp[0];}
#line 1315 "parser.tab.cpp"
    break;

  case 14: /* FormalDecl: Type ID  */
#line 118 "parser.ypp"
                        {yyval=new Node(yyvsp[-1]->type,yyvsp[0]->name,0);}
#line 1321 "parser.tab.cpp"
    break;

  case 15: /* Statements: Statement  */
#line 120 "parser.ypp"
                           {}
#line 1327 "parser.tab.cpp"
    break;

  case 16: /* Statements: Statements Statement  */
#line 121 "parser.ypp"
                                        {}
#line 1333 "parser.tab.cpp"
    break;

  case 17: /* $@3: %empty  */
#line 124 "parser.ypp"
                       {semantic_stacks->new_scope();}
#line 1339 "parser.tab.cpp"
    break;

  case 18: /* Statement: LBRACE $@3 Statements RBRACE  */
#line 124 "parser.ypp"
                                                                        {semantic_stacks->exit_scope();}
#line 1345 "parser.tab.cpp"
    break;

  case 19: /* Statement: Type ID SC  */
#line 125 "parser.ypp"
                             {if(semantic_stacks->is_exsists(yyvsp[-2]->name)){output::errorDef(yylineno,yyvsp[-2]->name);}
		yyval=new Node(yyvsp[-2]->type,yyvsp[-1]->name,0); semantic_stacks->new_entry(yyvsp[-1]->name,yyvsp[-2]->type);}
#line 1352 "parser.tab.cpp"
    break;

  case 20: /* Statement: Type ID ASSIGN Exp SC  */
#line 127 "parser.ypp"
                                         {if(semantic_stacks->is_exsists(yyvsp[-3]->name)){output::errorDef(yylineno,yyvsp[-3]->name);}
		if(convert_table[yyvsp[-4]->type][yyvsp[-1]->type]==false)//check which converstions are relevent
        		    { output::errorMismatch(yylineno);}
        		    if(yyvsp[-3]->type==TokenType::TOKEN_B && yyvsp[-1]->value>255)
        		    {output::errorByteTooLarge (yylineno, std::to_string(yyvsp[-2]->value));}
		            yyval=new Node(yyvsp[-4]->type,yyvsp[-3]->name,yyvsp[-1]->value);
		             semantic_stacks->new_entry(yyvsp[-3]->name,yyvsp[-4]->type);}
#line 1364 "parser.tab.cpp"
    break;

  case 21: /* Statement: ID ASSIGN Exp SC  */
#line 134 "parser.ypp"
                                   {
		if(semantic_stacks->is_exsists(yyvsp[-3]->name)){output::errorUndef(yylineno,yyvsp[-3]->name);}
		if(convert_table[yyvsp[-3]->type][yyvsp[-1]->type]==false)
		    { output::errorMismatch(yylineno);}
		    if(yyvsp[-3]->type==TokenType::TOKEN_B&&yyvsp[-1]->value>255)
		    {output::errorByteTooLarge (yylineno, std::to_string(yyvsp[-1]->value));}
		    yyvsp[-3]->value=yyvsp[-1]->value;}
#line 1376 "parser.tab.cpp"
    break;

  case 22: /* Statement: Call SC  */
#line 141 "parser.ypp"
                          {}
#line 1382 "parser.tab.cpp"
    break;

  case 23: /* Statement: RETURN SC  */
#line 142 "parser.ypp"
                            {if(semantic_stacks->get_func_type()!=TokenType::TOKEN_UNDIF)
		output::errorMismatch(yylineno);}
#line 1389 "parser.tab.cpp"
    break;

  case 24: /* Statement: RETURN Exp SC  */
#line 144 "parser.ypp"
                                {if(semantic_stacks->get_func_type()!=yyvsp[-1]->type)
                         		output::errorMismatch(yylineno);}
#line 1396 "parser.tab.cpp"
    break;

  case 25: /* Statement: IfExp RPAREN Statement  */
#line 146 "parser.ypp"
                                          {semantic_stacks->exit_scope();}
#line 1402 "parser.tab.cpp"
    break;

  case 26: /* Statement: IfExp Statement ELSE Statement  */
#line 147 "parser.ypp"
                                                 {semantic_stacks->exit_scope();}
#line 1408 "parser.tab.cpp"
    break;

  case 27: /* $@4: %empty  */
#line 148 "parser.ypp"
                                         {semantic_stacks->whilecounter++;semantic_stacks->new_scope();}
#line 1414 "parser.tab.cpp"
    break;

  case 28: /* Statement: WHILE LPAREN Exp RPAREN $@4 Statement  */
#line 148 "parser.ypp"
                                                                                                                   {semantic_stacks->whilecounter--;semantic_stacks->exit_scope();}
#line 1420 "parser.tab.cpp"
    break;

  case 29: /* Statement: BREAK SC  */
#line 149 "parser.ypp"
                            {if(semantic_stacks->whilecounter==0)
                     		{output::errorUnexpectedBreak(yylineno);}}
#line 1427 "parser.tab.cpp"
    break;

  case 30: /* Statement: CONTINUE SC  */
#line 151 "parser.ypp"
                               {if(semantic_stacks->whilecounter==0)
		{output::errorUnexpectedContinue(yylineno);}}
#line 1434 "parser.tab.cpp"
    break;

  case 31: /* IfExp: IF LPAREN Exp  */
#line 154 "parser.ypp"
                      {semantic_stacks->new_scope();}
#line 1440 "parser.tab.cpp"
    break;

  case 32: /* Call: ID LPAREN ExpList RPAREN  */
#line 156 "parser.ypp"
                                          {if(!semantic_stacks->is_exsists(yyvsp[-3]->name)){output::errorUndef(yylineno,yyvsp[-3]->name);}
                                       		if(!semantic_stacks->is_exsists(yyvsp[-3]->name)){output::errorUndefFunc(yylineno,yyvsp[-3]->name);}
                                       		vector<pair<TokenType,string>>* func_args=semantic_stacks->get_args(yyvsp[-3]->name);
                                       		if(func_args->size()!=yyvsp[-1]->get_vars()->size())
                                       		   {output::errorPrototypeMismatch(yylineno,yyvsp[-3]->name,*(semantic_stacks->get_string_args(yyvsp[-3]->name)));}
                                       		for(int i=0; i<func_args->size();i++)
                                       		{
                                       	       if(func_args->at(i).first != yyvsp[-1]->get_vars()->at(i).type)
                                                   		    output::errorPrototypeMismatch(yylineno,yyvsp[-3]->name,*(semantic_stacks->get_string_args(yyvsp[-3]->name)));
                                       		}
                                       		}
#line 1456 "parser.tab.cpp"
    break;

  case 33: /* Call: ID LPAREN RPAREN  */
#line 167 "parser.ypp"
                                    {
		if(!semantic_stacks->is_exsists(yyvsp[-2]->name)){output::errorUndef(yylineno,yyvsp[-2]->name);}
        		if(!semantic_stacks->is_exsists(yyvsp[-2]->name)){output::errorUndefFunc(yylineno,yyvsp[-2]->name);}
        		vector<pair<TokenType,string>>* args=semantic_stacks->get_args(yyvsp[-2]->name);
        		if(args->size()!=0)
        		    output::errorPrototypeMismatch(yylineno,yyvsp[-2]->name,*(semantic_stacks->get_string_args(yyvsp[-2]->name)));
		}
#line 1468 "parser.tab.cpp"
    break;

  case 34: /* ExpList: Exp  */
#line 176 "parser.ypp"
                            {ExpList *explist = new ExpList(); explist->vars->push_back(Exp(*yyvsp[0]));yyval=explist;}
#line 1474 "parser.tab.cpp"
    break;

  case 35: /* ExpList: Exp COMMA ExpList  */
#line 177 "parser.ypp"
                                     {Exp* exp= new Exp(yyvsp[-2]->type,yyvsp[-2]->name,yyvsp[-2]->value);yyvsp[0]->get_vars()->push_back(Exp(*exp));yyval=yyvsp[0];}
#line 1480 "parser.tab.cpp"
    break;

  case 36: /* Type: INT  */
#line 180 "parser.ypp"
                     {yyval=new Node(TokenType::TOKEN_INT,"",0);}
#line 1486 "parser.tab.cpp"
    break;

  case 37: /* Type: BYTE  */
#line 181 "parser.ypp"
                        {yyval=new Node(TokenType::TOKEN_B,"",0);}
#line 1492 "parser.tab.cpp"
    break;

  case 38: /* Type: BOOL  */
#line 182 "parser.ypp"
                        {yyval=new Node(TokenType::TOKEN_BOOL,"",0);}
#line 1498 "parser.tab.cpp"
    break;

  case 39: /* Exp: LPAREN Exp RPAREN  */
#line 185 "parser.ypp"
                                   {
	yyval = new Exp(yyvsp[-1]->type, yyvsp[-1]->name, yyvsp[-1]->value);
}
#line 1506 "parser.tab.cpp"
    break;

  case 40: /* Exp: Exp IF LPAREN Exp RPAREN ELSE Exp  */
#line 189 "parser.ypp"
                                                    {
		    	if(yyvsp[-3]->type != TokenType::TOKEN_BOOL)
            		  output::errorMismatch(yylineno);
            	if(yyvsp[-4]->value==1)
            		    yyval = new Exp(yyvsp[-6]->type, yyvsp[-6]->name, yyvsp[-6]->value);
            		 else
            		    yyval = new Exp(yyvsp[-1]->type, yyvsp[-1]->name, yyvsp[-1]->value);
		}
#line 1519 "parser.tab.cpp"
    break;

  case 41: /* Exp: Exp PLUS Exp  */
#line 197 "parser.ypp"
                               {
						TokenType new_type;
						int new_val;
						if(yyvsp[-2]->type==TokenType::TOKEN_STRING||yyvsp[-2]->type==TokenType::TOKEN_B||yyvsp[0]->type==TokenType::TOKEN_STRING||yyvsp[0]->type==TokenType::TOKEN_B)
							output::errorMismatch(yylineno);
						if(yyvsp[-2]->type==TokenType::TOKEN_INT||yyvsp[0]->type==TokenType::TOKEN_INT)
							new_type=TokenType::TOKEN_INT;
						else
							new_type=TokenType::TOKEN_B;
						if(yyvsp[-1]->name == "+")
							new_val = yyvsp[-2]->value + yyvsp[0]->value;
						else if(yyvsp[-1]->name == "-")
							new_val = yyvsp[-2]->value - yyvsp[0]->value;
						yyval = new Exp(new_type, std::to_string(new_val), new_val);
		}
#line 1539 "parser.tab.cpp"
    break;

  case 42: /* Exp: Exp MULTI Exp  */
#line 212 "parser.ypp"
                                 {
						TokenType new_type;
						int new_val;
						if(yyvsp[-2]->type==TokenType::TOKEN_STRING||yyvsp[-2]->type==TokenType::TOKEN_B||yyvsp[0]->type==TokenType::TOKEN_STRING||yyvsp[0]->type==TokenType::TOKEN_B)
							output::errorMismatch(yylineno);
						if(yyvsp[-2]->type==TokenType::TOKEN_INT||yyvsp[0]->type==TokenType::TOKEN_INT)
							new_type=TokenType::TOKEN_INT;
						else
							new_type=TokenType::TOKEN_B;
						if(yyvsp[-1]->name == "*")
							new_val = yyvsp[-2]->value * yyvsp[0]->value;
						else if(yyvsp[-1]->name == "/")
							new_val = yyvsp[-2]->value / yyvsp[0]->value;
						yyval = new Exp(new_type, std::to_string(new_val), new_val);
		}
#line 1559 "parser.tab.cpp"
    break;

  case 43: /* Exp: ID  */
#line 227 "parser.ypp"
                      {
		TokenType type=semantic_stacks->get_type(yyvsp[0]->name);
		if(TOKEN_UNDIF==type)
		    output::errorUndef(yylineno, yyvsp[0]->name);
		yyval = new Exp(type, yyvsp[0]->name,0);
		}
#line 1570 "parser.tab.cpp"
    break;

  case 44: /* Exp: Call  */
#line 233 "parser.ypp"
                        {}
#line 1576 "parser.tab.cpp"
    break;

  case 45: /* Exp: NUM  */
#line 234 "parser.ypp"
                      {      yyval->type = yyvsp[0]->type;
            yyval->value = yyvsp[0]->value;}
#line 1583 "parser.tab.cpp"
    break;

  case 46: /* Exp: NUM B  */
#line 236 "parser.ypp"
                         {
		yyval->type = TokenType::TOKEN_B;
      yyval->value = yyvsp[-1]->value;
      if (yyvsp[-1]->value > INT_MAX) {
        output::errorByteTooLarge (yylineno, std::to_string(yyvsp[-1]->value));}
        }
#line 1594 "parser.tab.cpp"
    break;

  case 47: /* Exp: STRING  */
#line 242 "parser.ypp"
                         {
			yyval = new Exp(yyvsp[0]->type, yyvsp[0]->name, yyvsp[0]->value);
		}
#line 1602 "parser.tab.cpp"
    break;

  case 48: /* Exp: TRUE  */
#line 245 "parser.ypp"
                        {
			yyval = new Exp(TokenType::TOKEN_BOOL, "TRUE",1);
		}
#line 1610 "parser.tab.cpp"
    break;

  case 49: /* Exp: FALSE  */
#line 248 "parser.ypp"
                         {
			yyval = new Exp(TokenType::TOKEN_BOOL, "FALSE",0);
		}
#line 1618 "parser.tab.cpp"
    break;

  case 50: /* Exp: NOT Exp  */
#line 251 "parser.ypp"
                           {
			if(yyvsp[0]->value == 0) yyval = new Exp(yyvsp[0]->type, "TRUE",1);
			else yyval = new Exp(yyvsp[0]->type, "FALSE",0);
		}
#line 1627 "parser.tab.cpp"
    break;

  case 51: /* Exp: Exp AND Exp  */
#line 255 "parser.ypp"
                               {
						if(yyvsp[-2]->type != TokenType::TOKEN_BOOL || yyvsp[0]->type != TokenType::TOKEN_BOOL)
		                    output::errorMismatch(yylineno);
						int new_val = yyvsp[-2]->value & yyvsp[0]->value;
						if(new_val == 0) yyval = new Exp(yyvsp[-2]->type, "FALSE", new_val);
						else yyval = new Exp(yyvsp[-2]->type, "TRUE", new_val);
		}
#line 1639 "parser.tab.cpp"
    break;

  case 52: /* Exp: Exp OR Exp  */
#line 262 "parser.ypp"
                              {
		                if(yyvsp[-2]->type != TokenType::TOKEN_BOOL || yyvsp[0]->type != TokenType::TOKEN_BOOL)
		                    output::errorMismatch(yylineno);
						int new_val = yyvsp[-2]->value | yyvsp[0]->value;
						if(new_val == 0) yyval = new Exp(yyvsp[-2]->type, "FALSE", new_val);
						else yyval = new Exp(yyvsp[-2]->type, "TRUE", new_val);
		}
#line 1651 "parser.tab.cpp"
    break;

  case 53: /* Exp: Exp RELOP Exp  */
#line 269 "parser.ypp"
                                 {
		        if(yyvsp[-2]->type == TokenType::TOKEN_UNDIF || yyvsp[-2]->type == TokenType::TOKEN_STRING || yyvsp[0]->type == TokenType::TOKEN_UNDIF || yyvsp[0]->type == TokenType::TOKEN_STRING )
		                    output::errorMismatch(yylineno);
		        int new_val;
						if(yyvsp[-1]->name == "==")
							new_val = yyvsp[-2]->value == yyvsp[0]->value;
						if(yyvsp[-1]->name == "!=")
							new_val = yyvsp[-2]->value != yyvsp[0]->value;
						if(yyvsp[-1]->name == "<")
							new_val = yyvsp[-2]->value < yyvsp[0]->value;
						if(yyvsp[-1]->name == ">")
							new_val = yyvsp[-2]->value > yyvsp[0]->value;
						if(yyvsp[-1]->name == "<=")
							new_val = yyvsp[-2]->value <= yyvsp[0]->value;
						if(yyvsp[-1]->name == ">=")
							new_val = yyvsp[-2]->value >= yyvsp[0]->value;
						if(new_val == 1) yyval = new Exp(TokenType::TOKEN_BOOL,"TRUE",new_val);
						else yyval = new Exp(TokenType::TOKEN_BOOL,"FALSE",new_val);
						
		}
#line 1676 "parser.tab.cpp"
    break;

  case 54: /* Exp: LPAREN Type RPAREN Exp  */
#line 289 "parser.ypp"
                                           {
			if(convert_table[yyvsp[-2]->type][yyvsp[0]->type] == TokenType::TOKEN_UNDIF)
				output::errorMismatch(yylineno);
			if(yyvsp[-2]->type == TokenType::TOKEN_BOOL) yyval = new Exp(yyvsp[-2]->type,yyvsp[0]->name,yyvsp[0]->value);
			if(yyvsp[-2]->type == TokenType::TOKEN_INT) yyval = new Exp(yyvsp[-2]->type,yyvsp[0]->name,yyvsp[0]->value);
			if(yyvsp[-2]->type == TokenType::TOKEN_B){
				if(yyvsp[0]->type == TokenType::TOKEN_INT && yyvsp[0]->value > 255) output::errorByteTooLarge(yylineno,std::to_string(yyvsp[0]->value));
				yyval = new Exp(yyvsp[-2]->type,yyvsp[0]->name,yyvsp[0]->value);
			}
		}
#line 1691 "parser.tab.cpp"
    break;


#line 1695 "parser.tab.cpp"

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

#line 302 "parser.ypp"


int yyerror(const char* const s)
{
  extern int yylineno;
  output::errorSyn(yylineno);
  exit(1);
}

int main(){
	return yyparse();
}

