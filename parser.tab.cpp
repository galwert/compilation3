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
#define YYDEBUG 1
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
                /*TOKEN_INT*/TOKEN_INT,
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



#line 123 "parser.tab.cpp"

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
  YYSYMBOL_VOID = 3,                       /* VOID  */
  YYSYMBOL_INT = 4,                        /* INT  */
  YYSYMBOL_BYTE = 5,                       /* BYTE  */
  YYSYMBOL_B = 6,                          /* B  */
  YYSYMBOL_BOOL = 7,                       /* BOOL  */
  YYSYMBOL_TRUE = 8,                       /* TRUE  */
  YYSYMBOL_FALSE = 9,                      /* FALSE  */
  YYSYMBOL_RETURN = 10,                    /* RETURN  */
  YYSYMBOL_WHILE = 11,                     /* WHILE  */
  YYSYMBOL_BREAK = 12,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 13,                  /* CONTINUE  */
  YYSYMBOL_SC = 14,                        /* SC  */
  YYSYMBOL_COMMA = 15,                     /* COMMA  */
  YYSYMBOL_LBRACE = 16,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 17,                    /* RBRACE  */
  YYSYMBOL_ID = 18,                        /* ID  */
  YYSYMBOL_NUM = 19,                       /* NUM  */
  YYSYMBOL_STRING = 20,                    /* STRING  */
  YYSYMBOL_ASSIGN = 21,                    /* ASSIGN  */
  YYSYMBOL_OR = 22,                        /* OR  */
  YYSYMBOL_AND = 23,                       /* AND  */
  YYSYMBOL_PLUS = 24,                      /* PLUS  */
  YYSYMBOL_MULTI = 25,                     /* MULTI  */
  YYSYMBOL_NOT = 26,                       /* NOT  */
  YYSYMBOL_RPAREN = 27,                    /* RPAREN  */
  YYSYMBOL_LPAREN = 28,                    /* LPAREN  */
  YYSYMBOL_NOELSE = 29,                    /* NOELSE  */
  YYSYMBOL_ELSE = 30,                      /* ELSE  */
  YYSYMBOL_IF = 31,                        /* IF  */
  YYSYMBOL_RELOP = 32,                     /* RELOP  */
  YYSYMBOL_CAST = 33,                      /* CAST  */
  YYSYMBOL_YYACCEPT = 34,                  /* $accept  */
  YYSYMBOL_Program = 35,                   /* Program  */
  YYSYMBOL_36_1 = 36,                      /* $@1  */
  YYSYMBOL_Funcs = 37,                     /* Funcs  */
  YYSYMBOL_FuncDecl = 38,                  /* FuncDecl  */
  YYSYMBOL_39_2 = 39,                      /* $@2  */
  YYSYMBOL_RetType = 40,                   /* RetType  */
  YYSYMBOL_Formals = 41,                   /* Formals  */
  YYSYMBOL_FormalsList = 42,               /* FormalsList  */
  YYSYMBOL_FormalDecl = 43,                /* FormalDecl  */
  YYSYMBOL_Statements = 44,                /* Statements  */
  YYSYMBOL_Statement = 45,                 /* Statement  */
  YYSYMBOL_46_3 = 46,                      /* $@3  */
  YYSYMBOL_47_4 = 47,                      /* $@4  */
  YYSYMBOL_48_5 = 48,                      /* $@5  */
  YYSYMBOL_IfExp = 49,                     /* IfExp  */
  YYSYMBOL_50_6 = 50,                      /* $@6  */
  YYSYMBOL_Call = 51,                      /* Call  */
  YYSYMBOL_ExpList = 52,                   /* ExpList  */
  YYSYMBOL_Type = 53,                      /* Type  */
  YYSYMBOL_Exp = 54                        /* Exp  */
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
#define YYLAST   225

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  34
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  56
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  107

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   288


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
      25,    26,    27,    28,    29,    30,    31,    32,    33
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    74,    74,    74,    77,    79,    82,    82,    91,    92,
      95,    96,    98,    99,   102,   104,   105,   108,   108,   109,
     111,   118,   126,   127,   131,   136,   137,   137,   138,   138,
     140,   142,   145,   145,   148,   162,   171,   172,   175,   176,
     177,   180,   184,   192,   211,   230,   238,   239,   241,   247,
     250,   253,   256,   260,   267,   274,   295
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
  "\"end of file\"", "error", "\"invalid token\"", "VOID", "INT", "BYTE",
  "B", "BOOL", "TRUE", "FALSE", "RETURN", "WHILE", "BREAK", "CONTINUE",
  "SC", "COMMA", "LBRACE", "RBRACE", "ID", "NUM", "STRING", "ASSIGN", "OR",
  "AND", "PLUS", "MULTI", "NOT", "RPAREN", "LPAREN", "NOELSE", "ELSE",
  "IF", "RELOP", "CAST", "$accept", "Program", "$@1", "Funcs", "FuncDecl",
  "$@2", "RetType", "Formals", "FormalsList", "FormalDecl", "Statements",
  "Statement", "$@3", "$@4", "$@5", "IfExp", "$@6", "Call", "ExpList",
  "Type", "Exp", YY_NULLPTR
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
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -29,     1,   172,   -29,   -29,   -29,   -29,   -29,   -29,   172,
      -8,   -29,   -29,   -12,   161,    -6,   -29,    19,    17,   -29,
     161,   -29,    42,   -29,    55,    89,    41,    34,    60,   -29,
     -19,    57,    20,   -29,    62,    82,    83,   -29,   -29,   -29,
      85,   110,   -29,   115,    86,   -29,   122,   115,   -29,   -29,
      55,   115,   102,   115,   -29,   -29,   -29,   -29,    -1,   -29,
      68,    91,   160,   -29,   115,   115,   115,   115,    97,   115,
     171,    71,   126,   -29,    92,   149,   182,    55,   -29,   115,
     115,   -29,   -17,    21,    32,    68,   115,    94,   -29,   -29,
     -29,   -29,   115,   -29,   -29,   138,   -29,   193,    55,   -29,
      55,   -29,   101,   -29,   -29,   115,    68
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     4,     1,     9,    38,    39,    40,     3,     4,
       0,     8,     5,     0,    10,     0,    11,    12,     0,     6,
       0,    14,     0,    13,     0,     0,     0,     0,     0,    17,
       0,     0,     0,    15,    25,     0,     0,    50,    51,    23,
      45,    47,    49,     0,     0,    46,     0,     0,    30,    31,
       0,     0,     0,     0,     7,    16,    26,    22,     0,    48,
      52,     0,     0,    24,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    35,     0,    36,     0,     0,    19,     0,
       0,    41,    54,    53,    43,    44,     0,    55,    28,    18,
      21,    34,     0,    32,    27,     0,    56,     0,     0,    37,
       0,    20,     0,    29,    33,     0,    42
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -29,   -29,   -29,   118,   -29,   -29,   -29,   -29,   112,   -29,
      87,   -28,   -29,   -29,   -29,   -29,   -29,   -21,    46,     3,
     -25
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,     2,     8,     9,    22,    10,    15,    16,    17,
      32,    33,    50,    77,    98,    34,   100,    45,    74,    36,
      75
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      46,     3,    51,    35,    55,    11,    65,    66,    67,    52,
      13,    35,    11,    78,    68,    69,    14,    18,    60,    62,
      79,    19,    70,    18,     5,     6,    72,     7,    76,    35,
      25,    26,    27,    28,    20,    21,    29,    54,    30,    82,
      83,    84,    85,    55,    87,    66,    67,    61,    48,    94,
      35,    31,    68,    69,    95,    96,    35,    67,    24,     5,
       6,    97,     7,    68,    69,    25,    26,    27,    28,    47,
     103,    29,   104,    30,    49,     5,     6,    35,     7,    35,
     106,    25,    26,    27,    28,    53,    31,    29,    89,    30,
       5,     6,    56,     7,    37,    38,    57,    37,    38,    68,
      69,    58,    31,    39,    40,    41,    42,    40,    41,    42,
      37,    38,    43,    52,    44,    43,    59,    44,    80,    91,
      40,    41,    42,    37,    38,    86,    -1,    12,    43,    73,
      44,   105,    23,    40,    41,    42,    63,    71,    99,     0,
      90,    43,     0,    44,    64,    65,    66,    67,    64,    65,
      66,    67,   101,    68,    69,     0,     0,    68,    69,     0,
      64,    65,    66,    67,    92,     5,     6,     0,     7,    68,
      69,    64,    65,    66,    67,     4,     5,     6,     0,     7,
      68,    69,    64,    65,    66,    67,     0,    81,     0,     0,
       0,    68,    69,    64,    65,    66,    67,     0,    88,     0,
       0,     0,    68,    69,    64,    65,    66,    67,     0,    93,
       0,     0,     0,    68,    69,    64,    65,    66,    67,     0,
     102,     0,     0,     0,    68,    69
};

static const yytype_int8 yycheck[] =
{
      25,     0,    21,    24,    32,     2,    23,    24,    25,    28,
      18,    32,     9,    14,    31,    32,    28,    14,    43,    44,
      21,    27,    47,    20,     4,     5,    51,     7,    53,    50,
      10,    11,    12,    13,    15,    18,    16,    17,    18,    64,
      65,    66,    67,    71,    69,    24,    25,    44,    14,    77,
      71,    31,    31,    32,    79,    80,    77,    25,    16,     4,
       5,    86,     7,    31,    32,    10,    11,    12,    13,    28,
      98,    16,   100,    18,    14,     4,     5,    98,     7,   100,
     105,    10,    11,    12,    13,    28,    31,    16,    17,    18,
       4,     5,    30,     7,     8,     9,    14,     8,     9,    31,
      32,    18,    31,    14,    18,    19,    20,    18,    19,    20,
       8,     9,    26,    28,    28,    26,     6,    28,    27,    27,
      18,    19,    20,     8,     9,    28,    32,     9,    26,    27,
      28,    30,    20,    18,    19,    20,    14,    50,    92,    -1,
      14,    26,    -1,    28,    22,    23,    24,    25,    22,    23,
      24,    25,    14,    31,    32,    -1,    -1,    31,    32,    -1,
      22,    23,    24,    25,    15,     4,     5,    -1,     7,    31,
      32,    22,    23,    24,    25,     3,     4,     5,    -1,     7,
      31,    32,    22,    23,    24,    25,    -1,    27,    -1,    -1,
      -1,    31,    32,    22,    23,    24,    25,    -1,    27,    -1,
      -1,    -1,    31,    32,    22,    23,    24,    25,    -1,    27,
      -1,    -1,    -1,    31,    32,    22,    23,    24,    25,    -1,
      27,    -1,    -1,    -1,    31,    32
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    35,    36,     0,     3,     4,     5,     7,    37,    38,
      40,    53,    37,    18,    28,    41,    42,    43,    53,    27,
      15,    18,    39,    42,    16,    10,    11,    12,    13,    16,
      18,    31,    44,    45,    49,    51,    53,     8,     9,    14,
      18,    19,    20,    26,    28,    51,    54,    28,    14,    14,
      46,    21,    28,    28,    17,    45,    30,    14,    18,     6,
      54,    53,    54,    14,    22,    23,    24,    25,    31,    32,
      54,    44,    54,    27,    52,    54,    54,    47,    14,    21,
      27,    27,    54,    54,    54,    54,    28,    54,    27,    17,
      14,    27,    15,    27,    45,    54,    54,    54,    48,    52,
      50,    14,    27,    45,    45,    30,    54
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    34,    36,    35,    37,    37,    39,    38,    40,    40,
      41,    41,    42,    42,    43,    44,    44,    46,    45,    45,
      45,    45,    45,    45,    45,    45,    47,    45,    48,    45,
      45,    45,    50,    49,    51,    51,    52,    52,    53,    53,
      53,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     0,     2,     0,     9,     1,     1,
       0,     1,     1,     3,     2,     1,     2,     0,     4,     3,
       5,     4,     2,     2,     3,     1,     0,     4,     0,     6,
       2,     2,     0,     6,     4,     3,     1,     3,     1,     1,
       1,     3,     7,     3,     3,     1,     1,     1,     2,     1,
       1,     1,     2,     3,     3,     3,     4
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
#line 74 "parser.ypp"
           {semantic_stacks=new Stacks();}
#line 1252 "parser.tab.cpp"
    break;

  case 3: /* Program: $@1 Funcs  */
#line 74 "parser.ypp"
                                                 {semantic_stacks->exit_scope();}
#line 1258 "parser.tab.cpp"
    break;

  case 4: /* Funcs: %empty  */
#line 77 "parser.ypp"
                            {if(!semantic_stacks->is_exsists("main")||!semantic_stacks->is_func("main")||semantic_stacks->get_type("main")!=TokenType::TOKEN_UNDIF||semantic_stacks->get_args("main")->size()!=0)
                         		{output::errorMainMissing(); exit(2);}}
#line 1265 "parser.tab.cpp"
    break;

  case 5: /* Funcs: FuncDecl Funcs  */
#line 79 "parser.ypp"
                                 {}
#line 1271 "parser.tab.cpp"
    break;

  case 6: /* $@2: %empty  */
#line 82 "parser.ypp"
                                                  {if(semantic_stacks->is_exsists(yyvsp[-3]->name))
                                                                              		{output::errorDef(yylineno,yyvsp[-3]->name); exit(2);}
                                                                              		for(int i=0; i<yyvsp[-1]->get_args()->size();i++){
                                                                              		if(yyvsp[-1]->get_args()->at(i).second == yyvsp[-3]->name)
                                                                                     {output::errorDef(yylineno,yyvsp[-3]->name); exit(2);}}
                                                                              		semantic_stacks->new_func(yyvsp[-3]->name,yyvsp[-4]->type,yyvsp[-1]->get_args());}
#line 1282 "parser.tab.cpp"
    break;

  case 7: /* FuncDecl: RetType ID LPAREN Formals RPAREN $@2 LBRACE Statements RBRACE  */
#line 88 "parser.ypp"
                                     { semantic_stacks->exit_scope();}
#line 1288 "parser.tab.cpp"
    break;

  case 8: /* RetType: Type  */
#line 91 "parser.ypp"
                             {yyval=yyvsp[0];}
#line 1294 "parser.tab.cpp"
    break;

  case 9: /* RetType: VOID  */
#line 92 "parser.ypp"
                       {yyval=new Node(TokenType::TOKEN_UNDIF,"",0);}
#line 1300 "parser.tab.cpp"
    break;

  case 10: /* Formals: %empty  */
#line 95 "parser.ypp"
                            {yyval=new FormalList();}
#line 1306 "parser.tab.cpp"
    break;

  case 11: /* Formals: FormalsList  */
#line 96 "parser.ypp"
                              {yyval=yyvsp[0];}
#line 1312 "parser.tab.cpp"
    break;

  case 12: /* FormalsList: FormalDecl  */
#line 98 "parser.ypp"
                           {if(semantic_stacks->is_exsists(yyvsp[0]->name)){output::errorDef(yylineno,yyvsp[0]->name); exit(2);}yyval = new FormalList(); yyval->get_args()->insert(yyval->get_args()->begin(),pair<TokenType,string>(yyvsp[0]->type,yyvsp[0]->name));}
#line 1318 "parser.tab.cpp"
    break;

  case 13: /* FormalsList: FormalDecl COMMA FormalsList  */
#line 99 "parser.ypp"
                                               {if(semantic_stacks->is_exsists(yyvsp[-2]->name)){output::errorDef(yylineno,yyvsp[-2]->name);exit(2);}yyvsp[0]->get_args()->insert(yyvsp[0]->get_args()->begin(),pair<TokenType,string>(yyvsp[-2]->type,yyvsp[-2]->name));yyval=yyvsp[0];}
#line 1324 "parser.tab.cpp"
    break;

  case 14: /* FormalDecl: Type ID  */
#line 102 "parser.ypp"
                        {yyval=new Node(yyvsp[-1]->type,yyvsp[0]->name,0);}
#line 1330 "parser.tab.cpp"
    break;

  case 15: /* Statements: Statement  */
#line 104 "parser.ypp"
                           {}
#line 1336 "parser.tab.cpp"
    break;

  case 16: /* Statements: Statements Statement  */
#line 105 "parser.ypp"
                                        {}
#line 1342 "parser.tab.cpp"
    break;

  case 17: /* $@3: %empty  */
#line 108 "parser.ypp"
                       {semantic_stacks->new_scope();}
#line 1348 "parser.tab.cpp"
    break;

  case 18: /* Statement: LBRACE $@3 Statements RBRACE  */
#line 108 "parser.ypp"
                                                                        {semantic_stacks->exit_scope();}
#line 1354 "parser.tab.cpp"
    break;

  case 19: /* Statement: Type ID SC  */
#line 109 "parser.ypp"
                             {if(semantic_stacks->is_exsists(yyvsp[-1]->name)){output::errorDef(yylineno,yyvsp[-1]->name); exit(2);}
		yyval=new Node(yyvsp[-2]->type,yyvsp[-1]->name,0); semantic_stacks->new_entry(yyvsp[-1]->name,yyvsp[-2]->type,0);}
#line 1361 "parser.tab.cpp"
    break;

  case 20: /* Statement: Type ID ASSIGN Exp SC  */
#line 111 "parser.ypp"
                                         {if(semantic_stacks->is_exsists(yyvsp[-3]->name)){output::errorDef(yylineno,yyvsp[-3]->name); exit(2);}
		if(convert_table[yyvsp[-4]->type][yyvsp[-1]->type]==false||(yyvsp[-4]->type==TokenType::TOKEN_B && yyvsp[-1]->type==TokenType::TOKEN_INT))
        		    { fflush(stdout);output::errorMismatch(yylineno); exit(2);}
        		    if(yyvsp[-3]->type==TokenType::TOKEN_B && yyvsp[-1]->value>255)
        		    {output::errorByteTooLarge (yylineno, std::to_string(yyvsp[-2]->value)); exit(2);}
		            yyval=new Node(yyvsp[-4]->type,yyvsp[-3]->name,yyvsp[-1]->value);
		             semantic_stacks->new_entry(yyvsp[-3]->name,yyvsp[-4]->type,yyvsp[-1]->value);}
#line 1373 "parser.tab.cpp"
    break;

  case 21: /* Statement: ID ASSIGN Exp SC  */
#line 118 "parser.ypp"
                                   {
		if(!semantic_stacks->is_exsists(yyvsp[-3]->name)||semantic_stacks->is_func(yyvsp[-3]->name)){output::errorUndef(yylineno,yyvsp[-3]->name); exit(2);}
		if(convert_table[semantic_stacks->get_type(yyvsp[-3]->name)][yyvsp[-1]->type]==false||(semantic_stacks->get_type(yyvsp[-3]->name)==TokenType::TOKEN_B && yyvsp[-1]->type==TokenType::TOKEN_INT))
		    { output::errorMismatch(yylineno); exit(2);}
		    if(yyvsp[-3]->type==TokenType::TOKEN_B && yyvsp[-1]->value>255)
		    {output::errorByteTooLarge (yylineno, std::to_string(yyvsp[-1]->value)); exit(2);}
		    yyvsp[-3]->value=yyvsp[-1]->value;
		    semantic_stacks->set_value(yyvsp[-3]->name,yyvsp[-1]->value);}
#line 1386 "parser.tab.cpp"
    break;

  case 22: /* Statement: Call SC  */
#line 126 "parser.ypp"
                          {}
#line 1392 "parser.tab.cpp"
    break;

  case 23: /* Statement: RETURN SC  */
#line 127 "parser.ypp"
                            {if(semantic_stacks->get_func_type()!=TokenType::TOKEN_UNDIF)
		{output::errorMismatch(yylineno);exit(2);}
		}
#line 1400 "parser.tab.cpp"
    break;

  case 24: /* Statement: RETURN Exp SC  */
#line 131 "parser.ypp"
                                {
		if(convert_table[yyvsp[-1]->type][semantic_stacks->get_func_type()]==TokenType::TOKEN_UNDIF||(semantic_stacks->get_func_type()==TokenType::TOKEN_B && yyvsp[-1]->type==TokenType::TOKEN_INT)){
                         		output::errorMismatch(yylineno);exit(2);}
                         		semantic_stacks->update_last_func(yyvsp[-1]->value);
                         		}
#line 1410 "parser.tab.cpp"
    break;

  case 26: /* $@4: %empty  */
#line 137 "parser.ypp"
                              {semantic_stacks->new_scope();}
#line 1416 "parser.tab.cpp"
    break;

  case 27: /* Statement: IfExp ELSE $@4 Statement  */
#line 137 "parser.ypp"
                                                                        {semantic_stacks->exit_scope();}
#line 1422 "parser.tab.cpp"
    break;

  case 28: /* $@5: %empty  */
#line 138 "parser.ypp"
                                         {if(yyvsp[-1]->type!=TokenType::TOKEN_BOOL){output::errorMismatch(yylineno);exit(2);}
		        semantic_stacks->whilecounter++;semantic_stacks->new_scope();}
#line 1429 "parser.tab.cpp"
    break;

  case 29: /* Statement: WHILE LPAREN Exp RPAREN $@5 Statement  */
#line 139 "parser.ypp"
                                                                                                 {semantic_stacks->whilecounter--;semantic_stacks->exit_scope();}
#line 1435 "parser.tab.cpp"
    break;

  case 30: /* Statement: BREAK SC  */
#line 140 "parser.ypp"
                            {if(semantic_stacks->whilecounter==0)
                     		{output::errorUnexpectedBreak(yylineno); exit(2);}}
#line 1442 "parser.tab.cpp"
    break;

  case 31: /* Statement: CONTINUE SC  */
#line 142 "parser.ypp"
                               {if(semantic_stacks->whilecounter==0)
		{output::errorUnexpectedContinue(yylineno); exit(2);}}
#line 1449 "parser.tab.cpp"
    break;

  case 32: /* $@6: %empty  */
#line 145 "parser.ypp"
                             {if(yyvsp[-1]->type!=TokenType::TOKEN_BOOL){output::errorMismatch(yylineno);exit(2);}
        semantic_stacks->new_scope();}
#line 1456 "parser.tab.cpp"
    break;

  case 33: /* IfExp: IF LPAREN Exp RPAREN $@6 Statement  */
#line 146 "parser.ypp"
                                                 {semantic_stacks->exit_scope();}
#line 1462 "parser.tab.cpp"
    break;

  case 34: /* Call: ID LPAREN ExpList RPAREN  */
#line 148 "parser.ypp"
                                          {if(!semantic_stacks->is_exsists(yyvsp[-3]->name)||!semantic_stacks->is_func(yyvsp[-3]->name)){output::errorUndefFunc(yylineno,yyvsp[-3]->name); exit(2);}
                                       		vector<pair<TokenType,string>>* func_args=semantic_stacks->get_args(yyvsp[-3]->name);
                                       		if(func_args->size()!=yyvsp[-1]->get_vars()->size())
                                       		   {output::errorPrototypeMismatch(yylineno,yyvsp[-3]->name,*(semantic_stacks->get_string_args(yyvsp[-3]->name))); exit(2);}
                                       		for(int i=0; i<func_args->size();i++)
                                       		{

                                       	       if(convert_table[func_args->at(i).first][yyvsp[-1]->get_vars()->at(i).type]==TOKEN_UNDIF||(func_args->at(i).first==TokenType::TOKEN_B && yyvsp[-1]->get_vars()->at(i).type==TokenType::TOKEN_INT))
                                                   		    {output::errorPrototypeMismatch(yylineno,yyvsp[-3]->name,*(semantic_stacks->get_string_args(yyvsp[-3]->name)));
                                                   		     exit(2);}

                                       		}
                                       		yyval=new Exp(semantic_stacks->get_type(yyvsp[-3]->name),yyvsp[-3]->name,semantic_stacks->get_value(yyvsp[-3]->name));
                                       		}
#line 1481 "parser.tab.cpp"
    break;

  case 35: /* Call: ID LPAREN RPAREN  */
#line 162 "parser.ypp"
                                    {
		if(!semantic_stacks->is_exsists(yyvsp[-2]->name)||!semantic_stacks->is_func(yyvsp[-2]->name)){output::errorUndefFunc(yylineno,yyvsp[-2]->name); exit(2);}
        		vector<pair<TokenType,string>>* args=semantic_stacks->get_args(yyvsp[-2]->name);
        		if(args->size()!=0)
        		    {output::errorPrototypeMismatch(yylineno,yyvsp[-2]->name,*(semantic_stacks->get_string_args(yyvsp[-2]->name))); exit(2);}

		yyval=new Exp(semantic_stacks->get_type(yyvsp[-2]->name),yyvsp[-2]->name,semantic_stacks->get_value(yyvsp[-2]->name));}
#line 1493 "parser.tab.cpp"
    break;

  case 36: /* ExpList: Exp  */
#line 171 "parser.ypp"
                            {ExpList *explist = new ExpList(); explist->vars->push_back(Exp(*yyvsp[0]));yyval=explist;}
#line 1499 "parser.tab.cpp"
    break;

  case 37: /* ExpList: Exp COMMA ExpList  */
#line 172 "parser.ypp"
                                     {Exp* exp= new Exp(yyvsp[-2]->type,yyvsp[-2]->name,yyvsp[-2]->value);yyvsp[0]->get_vars()->insert(yyvsp[0]->get_vars()->begin(),Exp(*exp));yyval=yyvsp[0];}
#line 1505 "parser.tab.cpp"
    break;

  case 38: /* Type: INT  */
#line 175 "parser.ypp"
                     {yyval=new Node(TokenType::TOKEN_INT,"",0);}
#line 1511 "parser.tab.cpp"
    break;

  case 39: /* Type: BYTE  */
#line 176 "parser.ypp"
                        {yyval=new Node(TokenType::TOKEN_B,"",0);}
#line 1517 "parser.tab.cpp"
    break;

  case 40: /* Type: BOOL  */
#line 177 "parser.ypp"
                        {yyval=new Node(TokenType::TOKEN_BOOL,"",0);}
#line 1523 "parser.tab.cpp"
    break;

  case 41: /* Exp: LPAREN Exp RPAREN  */
#line 180 "parser.ypp"
                                   {
	yyval = new Exp(yyvsp[-1]->type, yyvsp[-1]->name, yyvsp[-1]->value);
}
#line 1531 "parser.tab.cpp"
    break;

  case 42: /* Exp: Exp IF LPAREN Exp RPAREN ELSE Exp  */
#line 184 "parser.ypp"
                                                    {
		    	if(yyvsp[-3]->type != TokenType::TOKEN_BOOL)
            		  {output::errorMismatch(yylineno); exit(2);}
            	if(yyvsp[-3]->value==1)
            		    yyval = new Exp(yyvsp[-6]->type, yyvsp[-6]->name, yyvsp[-6]->value);
            		 else
            		    yyval = new Exp(yyvsp[0]->type, yyvsp[0]->name, yyvsp[0]->value);
		}
#line 1544 "parser.tab.cpp"
    break;

  case 43: /* Exp: Exp PLUS Exp  */
#line 192 "parser.ypp"
                               {
						TokenType new_type;
						int new_val;
						if(yyvsp[-2]->type==TokenType::TOKEN_STRING||yyvsp[-2]->type==TokenType::TOKEN_BOOL||yyvsp[0]->type==TokenType::TOKEN_STRING||yyvsp[0]->type==TokenType::TOKEN_BOOL)
							{output::errorMismatch(yylineno); exit(2);}
						if(yyvsp[-2]->type==TokenType::TOKEN_INT||yyvsp[0]->type==TokenType::TOKEN_INT)
							new_type=TokenType::TOKEN_INT;
						else
							new_type=TokenType::TOKEN_B;
						if(yyvsp[-1]->name == "+")
							new_val = yyvsp[-2]->value + yyvsp[0]->value;
						else if(yyvsp[-1]->name == "-")
							new_val = yyvsp[-2]->value - yyvsp[0]->value;
							if(new_type==TokenType::TOKEN_B&&new_val>255)
                            {
               				    output::errorByteTooLarge(yylineno,std::to_string(new_val));
                            }
						yyval = new Exp(new_type, std::to_string(new_val), new_val);
		}
#line 1568 "parser.tab.cpp"
    break;

  case 44: /* Exp: Exp MULTI Exp  */
#line 211 "parser.ypp"
                                 {
						TokenType new_type;
						int new_val;
						if(yyvsp[-2]->type==TokenType::TOKEN_STRING||yyvsp[-2]->type==TokenType::TOKEN_BOOL||yyvsp[0]->type==TokenType::TOKEN_STRING||yyvsp[0]->type==TokenType::TOKEN_BOOL)
							{output::errorMismatch(yylineno); exit(2);}
						if(yyvsp[-2]->type==TokenType::TOKEN_INT||yyvsp[0]->type==TokenType::TOKEN_INT)
							new_type=TokenType::TOKEN_INT;
						else
							new_type=TokenType::TOKEN_B;
						if(yyvsp[-1]->name == "*")
							new_val = yyvsp[-2]->value * yyvsp[0]->value;
						else if(yyvsp[-1]->name == "/")
							new_val = yyvsp[-2]->value / yyvsp[0]->value;
						if(new_type==TokenType::TOKEN_B&&new_val>255)
						{
						    output::errorByteTooLarge(yylineno,std::to_string(new_val));
						}
						yyval = new Exp(new_type, std::to_string(new_val), new_val);
		}
#line 1592 "parser.tab.cpp"
    break;

  case 45: /* Exp: ID  */
#line 230 "parser.ypp"
                      {
		if(semantic_stacks->is_func(yyvsp[0]->name)){output::errorUndef(yylineno,yyvsp[0]->name); exit(2);}
		TokenType type=semantic_stacks->get_type(yyvsp[0]->name);
		if(TOKEN_UNDIF==type)
		    {output::errorUndef(yylineno, yyvsp[0]->name); exit(2);}

		yyval = new Exp(type, yyvsp[0]->name,semantic_stacks->get_value(yyvsp[0]->name));
		}
#line 1605 "parser.tab.cpp"
    break;

  case 46: /* Exp: Call  */
#line 238 "parser.ypp"
                        {}
#line 1611 "parser.tab.cpp"
    break;

  case 47: /* Exp: NUM  */
#line 239 "parser.ypp"
                      {      yyval->type = yyvsp[0]->type;
            yyval->value = yyvsp[0]->value;}
#line 1618 "parser.tab.cpp"
    break;

  case 48: /* Exp: NUM B  */
#line 241 "parser.ypp"
                         {
		yyval->type = TokenType::TOKEN_B;
      yyval->value = yyvsp[-1]->value;
      if (yyvsp[-1]->value > 255) {
        output::errorByteTooLarge (yylineno, std::to_string(yyvsp[-1]->value)); exit(2);}
        }
#line 1629 "parser.tab.cpp"
    break;

  case 49: /* Exp: STRING  */
#line 247 "parser.ypp"
                         {
			yyval = new Exp(yyvsp[0]->type, yyvsp[0]->name, yyvsp[0]->value);
		}
#line 1637 "parser.tab.cpp"
    break;

  case 50: /* Exp: TRUE  */
#line 250 "parser.ypp"
                        {
			yyval = new Exp(TokenType::TOKEN_BOOL, "TRUE",1);
		}
#line 1645 "parser.tab.cpp"
    break;

  case 51: /* Exp: FALSE  */
#line 253 "parser.ypp"
                         {
			yyval = new Exp(TokenType::TOKEN_BOOL, "FALSE",0);
		}
#line 1653 "parser.tab.cpp"
    break;

  case 52: /* Exp: NOT Exp  */
#line 256 "parser.ypp"
                           {
			if(yyvsp[0]->value == 0) yyval = new Exp(yyvsp[0]->type, "TRUE",1);
			else yyval = new Exp(yyvsp[0]->type, "FALSE",0);
		}
#line 1662 "parser.tab.cpp"
    break;

  case 53: /* Exp: Exp AND Exp  */
#line 260 "parser.ypp"
                               {
						if(yyvsp[-2]->type != TokenType::TOKEN_BOOL || yyvsp[0]->type != TokenType::TOKEN_BOOL)
		                    {output::errorMismatch(yylineno); exit(2);}
						int new_val = yyvsp[-2]->value & yyvsp[0]->value;
						if(new_val == 0) yyval = new Exp(yyvsp[-2]->type, "FALSE", new_val);
						else yyval = new Exp(yyvsp[-2]->type, "TRUE", new_val);
		}
#line 1674 "parser.tab.cpp"
    break;

  case 54: /* Exp: Exp OR Exp  */
#line 267 "parser.ypp"
                              {
		                if(yyvsp[-2]->type != TokenType::TOKEN_BOOL || yyvsp[0]->type != TokenType::TOKEN_BOOL)
		                    {output::errorMismatch(yylineno); exit(2);}
						int new_val = yyvsp[-2]->value | yyvsp[0]->value;
						if(new_val == 0) yyval = new Exp(yyvsp[-2]->type, "FALSE", new_val);
						else yyval = new Exp(yyvsp[-2]->type, "TRUE", new_val);
		}
#line 1686 "parser.tab.cpp"
    break;

  case 55: /* Exp: Exp RELOP Exp  */
#line 274 "parser.ypp"
                                 {//test 17 says we cannot compare bool
		        if(yyvsp[-2]->type == TokenType::TOKEN_UNDIF || yyvsp[-2]->type == TokenType::TOKEN_BOOL ||yyvsp[-2]->type == TokenType::TOKEN_STRING ||
		         yyvsp[0]->type == TokenType::TOKEN_UNDIF || yyvsp[0]->type == TokenType::TOKEN_STRING ||yyvsp[0]->type == TokenType::TOKEN_BOOL)
		                    {output::errorMismatch(yylineno); exit(2);}
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
#line 1712 "parser.tab.cpp"
    break;

  case 56: /* Exp: LPAREN Type RPAREN Exp  */
#line 295 "parser.ypp"
                                                      {
			if(convert_table[yyvsp[-2]->type][yyvsp[0]->type] == TokenType::TOKEN_UNDIF)
				{output::errorMismatch(yylineno); exit(2);}
			if(yyvsp[-2]->type == TokenType::TOKEN_BOOL) yyval = new Exp(yyvsp[-2]->type,yyvsp[0]->name,yyvsp[0]->value);
			if(yyvsp[-2]->type == TokenType::TOKEN_INT) yyval = new Exp(yyvsp[-2]->type,yyvsp[0]->name,yyvsp[0]->value);
			if(yyvsp[-2]->type == TokenType::TOKEN_B){
				if(yyvsp[0]->type == TokenType::TOKEN_INT && yyvsp[0]->value > 255) {output::errorByteTooLarge(yylineno,std::to_string(yyvsp[0]->value)); exit(2);}
				yyval = new Exp(yyvsp[-2]->type,yyvsp[0]->name,yyvsp[0]->value);
			}
		}
#line 1727 "parser.tab.cpp"
    break;


#line 1731 "parser.tab.cpp"

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

#line 308 "parser.ypp"


int yyerror(const char* const s)
{
  extern int yylineno;
  output::errorSyn(yylineno);
  exit(2);
}

int main(){
	return yyparse();
}

