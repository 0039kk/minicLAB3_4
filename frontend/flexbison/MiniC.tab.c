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
#line 1 "MiniC.y"

#include <cstdio>
#include <cstring>

// 词法分析头文件
#include "FlexLexer.h"

// bison生成的头文件
//#include "BisonParser.h"

// 抽象语法树函数定义原型头文件
#include "AST.h"

#include "IntegerType.h"

#include "AttrType.h"
// LR分析失败时所调用函数的原型声明
void yyerror(char * msg);


#line 92 "MiniC.tab.c"

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


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    UNARY_MINUS = 258,             /* UNARY_MINUS  */
    T_IFX = 259,                   /* T_IFX  */
    T_DIGIT = 260,                 /* T_DIGIT  */
    T_ID = 261,                    /* T_ID  */
    T_INT = 262,                   /* T_INT  */
    T_VOID = 263,                  /* T_VOID  */
    T_RETURN = 264,                /* T_RETURN  */
    T_SEMICOLON = 265,             /* T_SEMICOLON  */
    T_L_PAREN = 266,               /* T_L_PAREN  */
    T_R_PAREN = 267,               /* T_R_PAREN  */
    T_L_BRACE = 268,               /* T_L_BRACE  */
    T_R_BRACE = 269,               /* T_R_BRACE  */
    T_COMMA = 270,                 /* T_COMMA  */
    T_LT = 271,                    /* T_LT  */
    T_LE = 272,                    /* T_LE  */
    T_GT = 273,                    /* T_GT  */
    T_GE = 274,                    /* T_GE  */
    T_EQ = 275,                    /* T_EQ  */
    T_NE = 276,                    /* T_NE  */
    T_LAND = 277,                  /* T_LAND  */
    T_LOR = 278,                   /* T_LOR  */
    T_LNOT = 279,                  /* T_LNOT  */
    T_IF = 280,                    /* T_IF  */
    T_ELSE = 281,                  /* T_ELSE  */
    T_WHILE = 282,                 /* T_WHILE  */
    T_BREAK = 283,                 /* T_BREAK  */
    T_CONTINUE = 284,              /* T_CONTINUE  */
    T_ASSIGN = 285,                /* T_ASSIGN  */
    T_SUB = 286,                   /* T_SUB  */
    T_ADD = 287,                   /* T_ADD  */
    T_MUL = 288,                   /* T_MUL  */
    T_DIV = 289,                   /* T_DIV  */
    T_MOD = 290                    /* T_MOD  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 23 "MiniC.y"

    class ast_node * node;

    struct digit_int_attr integer_num;
    struct digit_real_attr float_num;
    struct var_id_attr var_id;
    struct type_attr type;
    int op_class;

#line 184 "MiniC.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_UNARY_MINUS = 3,                /* UNARY_MINUS  */
  YYSYMBOL_T_IFX = 4,                      /* T_IFX  */
  YYSYMBOL_T_DIGIT = 5,                    /* T_DIGIT  */
  YYSYMBOL_T_ID = 6,                       /* T_ID  */
  YYSYMBOL_T_INT = 7,                      /* T_INT  */
  YYSYMBOL_T_VOID = 8,                     /* T_VOID  */
  YYSYMBOL_T_RETURN = 9,                   /* T_RETURN  */
  YYSYMBOL_T_SEMICOLON = 10,               /* T_SEMICOLON  */
  YYSYMBOL_T_L_PAREN = 11,                 /* T_L_PAREN  */
  YYSYMBOL_T_R_PAREN = 12,                 /* T_R_PAREN  */
  YYSYMBOL_T_L_BRACE = 13,                 /* T_L_BRACE  */
  YYSYMBOL_T_R_BRACE = 14,                 /* T_R_BRACE  */
  YYSYMBOL_T_COMMA = 15,                   /* T_COMMA  */
  YYSYMBOL_T_LT = 16,                      /* T_LT  */
  YYSYMBOL_T_LE = 17,                      /* T_LE  */
  YYSYMBOL_T_GT = 18,                      /* T_GT  */
  YYSYMBOL_T_GE = 19,                      /* T_GE  */
  YYSYMBOL_T_EQ = 20,                      /* T_EQ  */
  YYSYMBOL_T_NE = 21,                      /* T_NE  */
  YYSYMBOL_T_LAND = 22,                    /* T_LAND  */
  YYSYMBOL_T_LOR = 23,                     /* T_LOR  */
  YYSYMBOL_T_LNOT = 24,                    /* T_LNOT  */
  YYSYMBOL_T_IF = 25,                      /* T_IF  */
  YYSYMBOL_T_ELSE = 26,                    /* T_ELSE  */
  YYSYMBOL_T_WHILE = 27,                   /* T_WHILE  */
  YYSYMBOL_T_BREAK = 28,                   /* T_BREAK  */
  YYSYMBOL_T_CONTINUE = 29,                /* T_CONTINUE  */
  YYSYMBOL_T_ASSIGN = 30,                  /* T_ASSIGN  */
  YYSYMBOL_T_SUB = 31,                     /* T_SUB  */
  YYSYMBOL_T_ADD = 32,                     /* T_ADD  */
  YYSYMBOL_T_MUL = 33,                     /* T_MUL  */
  YYSYMBOL_T_DIV = 34,                     /* T_DIV  */
  YYSYMBOL_T_MOD = 35,                     /* T_MOD  */
  YYSYMBOL_YYACCEPT = 36,                  /* $accept  */
  YYSYMBOL_CompileUnit = 37,               /* CompileUnit  */
  YYSYMBOL_FuncDef = 38,                   /* FuncDef  */
  YYSYMBOL_FormalParamListOpt = 39,        /* FormalParamListOpt  */
  YYSYMBOL_FormalParamList = 40,           /* FormalParamList  */
  YYSYMBOL_FormalParamDecl = 41,           /* FormalParamDecl  */
  YYSYMBOL_Block = 42,                     /* Block  */
  YYSYMBOL_BlockItemList = 43,             /* BlockItemList  */
  YYSYMBOL_BlockItem = 44,                 /* BlockItem  */
  YYSYMBOL_VarDecl = 45,                   /* VarDecl  */
  YYSYMBOL_VarDeclExpr = 46,               /* VarDeclExpr  */
  YYSYMBOL_VarDef = 47,                    /* VarDef  */
  YYSYMBOL_BasicType = 48,                 /* BasicType  */
  YYSYMBOL_Statement = 49,                 /* Statement  */
  YYSYMBOL_IfStmt = 50,                    /* IfStmt  */
  YYSYMBOL_WhileStmt = 51,                 /* WhileStmt  */
  YYSYMBOL_BreakStmt = 52,                 /* BreakStmt  */
  YYSYMBOL_ContinueStmt = 53,              /* ContinueStmt  */
  YYSYMBOL_Expr = 54,                      /* Expr  */
  YYSYMBOL_AssignExpr = 55,                /* AssignExpr  */
  YYSYMBOL_LOrExp = 56,                    /* LOrExp  */
  YYSYMBOL_LAndExp = 57,                   /* LAndExp  */
  YYSYMBOL_EqExp = 58,                     /* EqExp  */
  YYSYMBOL_EqOp = 59,                      /* EqOp  */
  YYSYMBOL_RelExp = 60,                    /* RelExp  */
  YYSYMBOL_RelOp = 61,                     /* RelOp  */
  YYSYMBOL_AddExp = 62,                    /* AddExp  */
  YYSYMBOL_MulExp = 63,                    /* MulExp  */
  YYSYMBOL_AddOp = 64,                     /* AddOp  */
  YYSYMBOL_MulOp = 65,                     /* MulOp  */
  YYSYMBOL_UnaryExp = 66,                  /* UnaryExp  */
  YYSYMBOL_PrimaryExp = 67,                /* PrimaryExp  */
  YYSYMBOL_RealParamList = 68,             /* RealParamList  */
  YYSYMBOL_LVal = 69                       /* LVal  */
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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   131

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  74
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  117

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   290


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
      35
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   115,   115,   123,   129,   134,   144,   159,   162,   166,
     175,   179,   186,   205,   211,   222,   227,   236,   240,   251,
     257,   276,   299,   305,   317,   327,   334,   335,   336,   337,
     338,   339,   342,   349,   354,   360,   368,   374,   385,   390,
     394,   398,   401,   405,   408,   412,   415,   419,   420,   424,
     427,   431,   432,   433,   434,   442,   445,   448,   451,   457,
     460,   465,   468,   471,   478,   484,   488,   492,   508,   527,
     531,   537,   549,   553,   560
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
  "\"end of file\"", "error", "\"invalid token\"", "UNARY_MINUS", "T_IFX",
  "T_DIGIT", "T_ID", "T_INT", "T_VOID", "T_RETURN", "T_SEMICOLON",
  "T_L_PAREN", "T_R_PAREN", "T_L_BRACE", "T_R_BRACE", "T_COMMA", "T_LT",
  "T_LE", "T_GT", "T_GE", "T_EQ", "T_NE", "T_LAND", "T_LOR", "T_LNOT",
  "T_IF", "T_ELSE", "T_WHILE", "T_BREAK", "T_CONTINUE", "T_ASSIGN",
  "T_SUB", "T_ADD", "T_MUL", "T_DIV", "T_MOD", "$accept", "CompileUnit",
  "FuncDef", "FormalParamListOpt", "FormalParamList", "FormalParamDecl",
  "Block", "BlockItemList", "BlockItem", "VarDecl", "VarDeclExpr",
  "VarDef", "BasicType", "Statement", "IfStmt", "WhileStmt", "BreakStmt",
  "ContinueStmt", "Expr", "AssignExpr", "LOrExp", "LAndExp", "EqExp",
  "EqOp", "RelExp", "RelOp", "AddExp", "MulExp", "AddOp", "MulOp",
  "UnaryExp", "PrimaryExp", "RealParamList", "LVal", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-58)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
       2,   -58,    22,   -58,   -58,    -5,    13,   -58,   -58,   -58,
     -58,    27,   -10,   -58,     8,   -58,    16,    10,   -58,    30,
      32,   -58,    59,   -58,    61,    10,    10,    10,   -58,   -58,
      55,    57,    -7,    58,    25,    26,   -58,   -58,    50,    75,
       2,   -58,     6,    70,   -58,   -58,   -58,    10,    10,   -58,
     -58,    10,   -58,   -58,   -58,   -58,    10,   -58,   -58,    10,
     -58,   -58,   -58,    10,    10,    39,   -58,   -58,   -58,   -58,
      20,   -58,    57,    -7,    58,    25,    26,   -58,   -58,    10,
     -58,   -58,    81,    86,    88,    92,   -58,    80,   -58,   -58,
      27,   -58,   -58,   -58,   -58,   -58,    96,   -58,    10,   100,
      10,    10,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   101,
     104,    90,    90,    94,   -58,    90,   -58
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    24,     0,     2,     3,     0,     0,     1,     4,     5,
      19,     0,    22,    20,    22,    21,     7,     0,     9,     0,
       8,    10,     0,    70,    74,     0,     0,     0,    23,    38,
      40,    42,    44,    46,    50,    56,    58,    64,    71,     0,
       0,    12,     0,     0,    66,    71,    65,     0,     0,    47,
      48,     0,    51,    52,    53,    54,     0,    60,    59,     0,
      61,    62,    63,     0,     0,     0,     6,    11,    67,    72,
       0,    69,    41,    43,    45,    49,    55,    57,    39,     0,
      32,    13,     0,     0,     0,     0,    26,     0,    15,    18,
       0,    17,    27,    28,    29,    30,     0,    68,     0,     0,
       0,     0,    36,    37,    14,    16,    31,    73,    25,     0,
       0,     0,     0,    33,    35,     0,    34
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -58,   -58,   110,   -58,   -58,    82,    84,   -58,    37,    69,
     -58,   114,   -14,   -57,   -58,   -58,   -58,   -58,   -17,    62,
     -58,    83,    79,   -58,    77,   -58,    73,    72,   -58,   -58,
     -23,   -58,   -58,   -20
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     3,    19,    20,    21,    86,    87,    88,    89,
       5,    13,     6,    91,    92,    93,    94,    95,    96,    29,
      30,    31,    32,    51,    33,    56,    34,    35,    59,    63,
      36,    37,    70,    38
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      28,    16,    22,    44,    46,    10,    45,    45,    43,     1,
      11,    23,    24,    49,    50,    23,    24,    25,    68,    12,
      17,    25,     7,     1,    18,    69,    22,    45,    45,     1,
      26,    45,    97,    14,    26,    98,    45,    27,    17,    45,
      77,    27,    39,    45,    23,    24,     1,    40,    79,    80,
      25,    90,    65,    81,   113,   114,    57,    58,   116,    60,
      61,    62,    99,    26,    82,    41,    83,    84,    85,     4,
      27,     9,    42,    90,    52,    53,    54,    55,    47,    48,
      64,   107,    71,   109,   110,    23,    24,     1,    65,    79,
      80,    25,   100,    65,   104,    23,    24,   101,   102,    79,
      80,    25,   103,    65,    26,    82,   106,    83,    84,    85,
     108,    27,     8,   111,    26,    82,   112,    83,    84,    85,
     115,    27,    67,    66,   105,    15,    78,    73,    74,    75,
      72,    76
};

static const yytype_int8 yycheck[] =
{
      17,    11,    16,    26,    27,    10,    26,    27,    25,     7,
      15,     5,     6,    20,    21,     5,     6,    11,    12,     6,
      30,    11,     0,     7,     8,    42,    40,    47,    48,     7,
      24,    51,    12,     6,    24,    15,    56,    31,    30,    59,
      63,    31,    12,    63,     5,     6,     7,    15,     9,    10,
      11,    65,    13,    14,   111,   112,    31,    32,   115,    33,
      34,    35,    79,    24,    25,     6,    27,    28,    29,     0,
      31,     2,    11,    87,    16,    17,    18,    19,    23,    22,
      30,    98,    12,   100,   101,     5,     6,     7,    13,     9,
      10,    11,    11,    13,    14,     5,     6,    11,    10,     9,
      10,    11,    10,    13,    24,    25,    10,    27,    28,    29,
      10,    31,     2,    12,    24,    25,    12,    27,    28,    29,
      26,    31,    40,    39,    87,    11,    64,    48,    51,    56,
      47,    59
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     7,    37,    38,    45,    46,    48,     0,    38,    45,
      10,    15,     6,    47,     6,    47,    11,    30,     8,    39,
      40,    41,    48,     5,     6,    11,    24,    31,    54,    55,
      56,    57,    58,    60,    62,    63,    66,    67,    69,    12,
      15,     6,    11,    54,    66,    69,    66,    23,    22,    20,
      21,    59,    16,    17,    18,    19,    61,    31,    32,    64,
      33,    34,    35,    65,    30,    13,    42,    41,    12,    54,
      68,    12,    57,    58,    60,    62,    63,    66,    55,     9,
      10,    14,    25,    27,    28,    29,    42,    43,    44,    45,
      48,    49,    50,    51,    52,    53,    54,    12,    15,    54,
      11,    11,    10,    10,    14,    44,    10,    54,    10,    54,
      54,    12,    12,    49,    49,    26,    49
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    36,    37,    37,    37,    37,    38,    39,    39,    39,
      40,    40,    41,    42,    42,    43,    43,    44,    44,    45,
      46,    46,    47,    47,    48,    49,    49,    49,    49,    49,
      49,    49,    49,    50,    50,    51,    52,    53,    54,    55,
      55,    56,    56,    57,    57,    58,    58,    59,    59,    60,
      60,    61,    61,    61,    61,    62,    62,    63,    63,    64,
      64,    65,    65,    65,    66,    66,    66,    66,    66,    67,
      67,    67,    68,    68,    69
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     2,     6,     0,     1,     1,
       1,     3,     2,     2,     3,     1,     2,     1,     1,     2,
       2,     3,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     2,     1,     5,     7,     5,     2,     2,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     3,     4,     3,
       1,     1,     1,     3,     1
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
  case 2: /* CompileUnit: FuncDef  */
#line 115 "MiniC.y"
                      {

		// 创建一个编译单元的节点AST_OP_COMPILE_UNIT
		(yyval.node) = create_contain_node(ast_operator_type::AST_OP_COMPILE_UNIT, (yyvsp[0].node));

		// 设置到全局变量中
		ast_root = (yyval.node);
	}
#line 1325 "MiniC.tab.c"
    break;

  case 3: /* CompileUnit: VarDecl  */
#line 123 "MiniC.y"
                  {

		// 创建一个编译单元的节点AST_OP_COMPILE_UNIT
		(yyval.node) = create_contain_node(ast_operator_type::AST_OP_COMPILE_UNIT, (yyvsp[0].node));
		ast_root = (yyval.node);
	}
#line 1336 "MiniC.tab.c"
    break;

  case 4: /* CompileUnit: CompileUnit FuncDef  */
#line 129 "MiniC.y"
                              {

		// 把函数定义的节点作为编译单元的孩子
		(yyval.node) = (yyvsp[-1].node)->insert_son_node((yyvsp[0].node));
	}
#line 1346 "MiniC.tab.c"
    break;

  case 5: /* CompileUnit: CompileUnit VarDecl  */
#line 134 "MiniC.y"
                              {
		// 把变量定义的节点作为编译单元的孩子
		(yyval.node) = (yyvsp[-1].node)->insert_son_node((yyvsp[0].node));
	}
#line 1355 "MiniC.tab.c"
    break;

  case 6: /* FuncDef: BasicType T_ID T_L_PAREN FormalParamListOpt T_R_PAREN Block  */
#line 144 "MiniC.y"
                                                                       {
        type_attr funcReturnType = (yyvsp[-5].type);
        var_id_attr funcId = (yyvsp[-4].var_id);
        ast_node * formalParamsNode = (yyvsp[-2].node); // $4 是 FormalParamListOpt 的结果
        ast_node * blockNode = (yyvsp[0].node);

        // 如果 formalParamsNode 是 nullptr (因为参数列表是空的或只有 void)，
        // create_func_def 应该能处理 nullptr，或者你在这里创建一个空的 AST_OP_FUNC_FORMAL_PARAMS 节点
        if (!formalParamsNode) {
            formalParamsNode = create_contain_node(ast_operator_type::AST_OP_FUNC_FORMAL_PARAMS);
        }
        (yyval.node) = create_func_def(funcReturnType, funcId, blockNode, formalParamsNode);
    }
#line 1373 "MiniC.tab.c"
    break;

  case 7: /* FormalParamListOpt: %empty  */
#line 159 "MiniC.y"
                                                    {
                        (yyval.node) = nullptr; // 或者返回一个空的 AST_OP_FUNC_FORMAL_PARAMS 节点
                    }
#line 1381 "MiniC.tab.c"
    break;

  case 8: /* FormalParamListOpt: FormalParamList  */
#line 162 "MiniC.y"
                                   {
                        (yyval.node) = (yyvsp[0].node);
                    }
#line 1389 "MiniC.tab.c"
    break;

  case 9: /* FormalParamListOpt: T_VOID  */
#line 166 "MiniC.y"
                          { // 假设你为 "void" 添加了 T_VOID token
                        // 创建一个空的参数列表节点，表示参数是 void
                        (yyval.node) = create_contain_node(ast_operator_type::AST_OP_FUNC_FORMAL_PARAMS);
                        // 你可能需要在 yylval.type 中为 T_VOID 设置正确的属性
                        // ast_node* type_node = create_type_node($1);
                        // $$->insert_son_node(type_node); // 可选：如果想表示 void 参数类型
                    }
#line 1401 "MiniC.tab.c"
    break;

  case 10: /* FormalParamList: FormalParamDecl  */
#line 175 "MiniC.y"
                                  {
                    // 第一个参数
                    (yyval.node) = create_contain_node(ast_operator_type::AST_OP_FUNC_FORMAL_PARAMS, (yyvsp[0].node));
                }
#line 1410 "MiniC.tab.c"
    break;

  case 11: /* FormalParamList: FormalParamList T_COMMA FormalParamDecl  */
#line 179 "MiniC.y"
                                                        {
                    // 后续参数
                    (yyval.node) = (yyvsp[-2].node)->insert_son_node((yyvsp[0].node));
                }
#line 1419 "MiniC.tab.c"
    break;

  case 12: /* FormalParamDecl: BasicType T_ID  */
#line 186 "MiniC.y"
                                 {
                    // $1 是 BasicType (type_attr)
                    // $2 是 T_ID (var_id_attr)
                    // ast_node* type_node = create_type_node($1); // 创建类型节点
                    // ast_node* id_node = ast_node::New($2);    // 创建标识符节点
                    // free($2.id);
                    // $$ = create_contain_node(ast_operator_type::AST_OP_VAR_DECL, type_node, id_node);
                    // $$->type = type_node->type; // 将类型存到 VAR_DECL 节点上

                    // 使用你现有的 createVarDeclNode(type_attr&, var_id_attr&)
                    // 这个函数在 AST.cpp 中，但你需要确保它返回的是 AST_OP_VAR_DECL 节点
                    // 并且在 create_func_def 或 IRGenerator 中能正确处理这种参数节点
                    (yyval.node) = createVarDeclNode((yyvsp[-1].type), (yyvsp[0].var_id)); // createVarDeclNode 应该会 free($2.id)
                }
#line 1438 "MiniC.tab.c"
    break;

  case 13: /* Block: T_L_BRACE T_R_BRACE  */
#line 205 "MiniC.y"
                            {
		// 语句块没有语句

		// 为了方便创建一个空的Block节点
		(yyval.node) = create_contain_node(ast_operator_type::AST_OP_BLOCK);
	}
#line 1449 "MiniC.tab.c"
    break;

  case 14: /* Block: T_L_BRACE BlockItemList T_R_BRACE  */
#line 211 "MiniC.y"
                                            {
		// 语句块含有语句

		// BlockItemList归约时内部创建Block节点，并把语句加入，这里不创建Block节点
		(yyval.node) = (yyvsp[-1].node);
	}
#line 1460 "MiniC.tab.c"
    break;

  case 15: /* BlockItemList: BlockItem  */
#line 222 "MiniC.y"
                          {
		// 第一个左侧的孩子节点归约成Block节点，后续语句可持续作为孩子追加到Block节点中
		// 创建一个AST_OP_BLOCK类型的中间节点，孩子为Statement($1)
		(yyval.node) = create_contain_node(ast_operator_type::AST_OP_BLOCK, (yyvsp[0].node));
	}
#line 1470 "MiniC.tab.c"
    break;

  case 16: /* BlockItemList: BlockItemList BlockItem  */
#line 227 "MiniC.y"
                                  {
		// 把BlockItem归约的节点加入到BlockItemList的节点中
		(yyval.node) = (yyvsp[-1].node)->insert_son_node((yyvsp[0].node));
	}
#line 1479 "MiniC.tab.c"
    break;

  case 17: /* BlockItem: Statement  */
#line 236 "MiniC.y"
                       {
		// 语句节点传递给归约后的节点上，综合属性
		(yyval.node) = (yyvsp[0].node);
	}
#line 1488 "MiniC.tab.c"
    break;

  case 18: /* BlockItem: VarDecl  */
#line 240 "MiniC.y"
                  {
		// 变量声明节点传递给归约后的节点上，综合属性
		(yyval.node) = (yyvsp[0].node);
	}
#line 1497 "MiniC.tab.c"
    break;

  case 19: /* VarDecl: VarDeclExpr T_SEMICOLON  */
#line 251 "MiniC.y"
                                  {
		(yyval.node) = (yyvsp[-1].node);
	}
#line 1505 "MiniC.tab.c"
    break;

  case 20: /* VarDeclExpr: BasicType VarDef  */
#line 257 "MiniC.y"
                              {
        // ... 动作代码，为单个 BasicType VarDef 创建声明节点 ...
        // 例如，创建一个 AST_OP_VAR_DECL 节点，然后包装在一个临时的 AST_OP_DECL_STMT 中
        // （如果你的 create_var_decl_stmt_node 是这样工作的）
        // 或者 VarDeclExpr 只产生一个 AST_OP_VAR_DECL 节点，
        // 然后 VarDecl: VarDeclExpr T_SEMICOLON; 会将单个 VarDecl 包装成 DECL_STMT
        // 而 VarDecl : VarDeclExprList T_SEMICOLON; (VarDeclExprList -> VarDeclExpr | VarDeclExprList ',' VarDeclExpr)
        // 会处理多个。

        // 假设我们保持你原有的 VarDeclExpr 结构，它能处理逗号分隔
        // 那么第一个产生式是基础情况：
        ast_node * type_node = create_type_node((yyvsp[-1].type));
        ast_node * single_var_decl_node = create_contain_node(ast_operator_type::AST_OP_VAR_DECL, type_node, (yyvsp[0].node) /*VarDef node*/);
        single_var_decl_node->type = type_node->type;

        // create_var_decl_stmt_node 期望一个或多个 VAR_DECL 节点作为其子节点。
        // 对于第一个 VarDef，我们创建一个只包含一个 VAR_DECL 的 DECL_STMT。
        (yyval.node) = create_var_decl_stmt_node(single_var_decl_node);
    }
#line 1529 "MiniC.tab.c"
    break;

  case 21: /* VarDeclExpr: VarDeclExpr T_COMMA VarDef  */
#line 276 "MiniC.y"
                                 { // <--- 这里之前可能是 VarDefList，应为 VarDef
        // $1 是前一个 VarDeclExpr (它是一个 AST_OP_DECL_STMT 节点)
        // $3 是新的 VarDef 节点

        // 需要从 $1 (AST_OP_DECL_STMT) 中获取类型信息
        // 假设 $1 的第一个子节点 (AST_OP_VAR_DECL) 的第一个子节点是类型节点
        if (!(yyvsp[-2].node) || (yyvsp[-2].node)->sons.empty() || !(yyvsp[-2].node)->sons[0] || (yyvsp[-2].node)->sons[0]->sons.empty() || !(yyvsp[-2].node)->sons[0]->sons[0]->type) {
            yyerror("Internal error: Cannot extract type from previous VarDeclExpr");
            YYABORT;
        }
        ast_node * type_node_for_new_var = ast_node::New((yyvsp[-2].node)->sons[0]->sons[0]->type);


        ast_node * new_single_var_decl_node = create_contain_node(ast_operator_type::AST_OP_VAR_DECL, type_node_for_new_var, (yyvsp[0].node));
        new_single_var_decl_node->type = type_node_for_new_var->type;

        // 将新的 single_var_decl_node 添加到 $1 (AST_OP_DECL_STMT) 的子节点列表中
        (yyval.node) = (yyvsp[-2].node)->insert_son_node(new_single_var_decl_node);
    }
#line 1553 "MiniC.tab.c"
    break;

  case 22: /* VarDef: T_ID  */
#line 299 "MiniC.y"
              {
		// 变量ID，无初始化
        // 使用现有的 ast_node::New(var_id_attr) 创建叶子节点
		(yyval.node) = ast_node::New((yyvsp[0].var_id)); 
		free((yyvsp[0].var_id).id);
	}
#line 1564 "MiniC.tab.c"
    break;

  case 23: /* VarDef: T_ID T_ASSIGN Expr  */
#line 305 "MiniC.y"
                             { // 变量ID，带初始化
        // $1 是 T_ID (var_id_attr)
        // $3 是 Expr (ast_node*)
        ast_node* id_node = ast_node::New((yyvsp[-2].var_id)); // 创建代表变量名的叶子节点
        free((yyvsp[-2].var_id).id); // 释放词法分析器分配的id字符串

        // 创建一个 AST_OP_INIT 节点，其子节点是 id_node 和 $3 (初始化表达式)
        (yyval.node) = create_contain_node(ast_operator_type::AST_OP_INIT, id_node, (yyvsp[0].node), nullptr);
	}
#line 1578 "MiniC.tab.c"
    break;

  case 24: /* BasicType: T_INT  */
#line 317 "MiniC.y"
                 {
		(yyval.type) = (yyvsp[0].type);
	}
#line 1586 "MiniC.tab.c"
    break;

  case 25: /* Statement: T_RETURN Expr T_SEMICOLON  */
#line 327 "MiniC.y"
                                      {
        // 假设 create_unary_op_node(op, child)
        (yyval.node) = create_contain_node(ast_operator_type::AST_OP_RETURN, (yyvsp[-1].node));
    }
#line 1595 "MiniC.tab.c"
    break;

  case 26: /* Statement: Block  */
#line 334 "MiniC.y"
            { (yyval.node) = (yyvsp[0].node); }
#line 1601 "MiniC.tab.c"
    break;

  case 27: /* Statement: IfStmt  */
#line 335 "MiniC.y"
                { (yyval.node) = (yyvsp[0].node); }
#line 1607 "MiniC.tab.c"
    break;

  case 28: /* Statement: WhileStmt  */
#line 336 "MiniC.y"
                { (yyval.node) = (yyvsp[0].node); }
#line 1613 "MiniC.tab.c"
    break;

  case 29: /* Statement: BreakStmt  */
#line 337 "MiniC.y"
                { (yyval.node) = (yyvsp[0].node); }
#line 1619 "MiniC.tab.c"
    break;

  case 30: /* Statement: ContinueStmt  */
#line 338 "MiniC.y"
                   { (yyval.node) = (yyvsp[0].node); }
#line 1625 "MiniC.tab.c"
    break;

  case 31: /* Statement: Expr T_SEMICOLON  */
#line 339 "MiniC.y"
                       {          // 表达式语句 (可能包含赋值表达式)
        (yyval.node) = (yyvsp[-1].node);
    }
#line 1633 "MiniC.tab.c"
    break;

  case 32: /* Statement: T_SEMICOLON  */
#line 342 "MiniC.y"
                  {               // 空语句
        // 用一个特殊的节点表示空语句，或者直接返回 nullptr
        // $$ = create_simple_stmt_node(ast_operator_type::AST_OP_EMPTY_STMT, yylineno);
        (yyval.node) = nullptr; // 在 BlockItemList 中处理 nullptr
    }
#line 1643 "MiniC.tab.c"
    break;

  case 33: /* IfStmt: T_IF T_L_PAREN Expr T_R_PAREN Statement  */
#line 349 "MiniC.y"
                                                              {
        (yyval.node) = create_contain_node(ast_operator_type::AST_OP_IF, (yyvsp[-2].node), (yyvsp[0].node), nullptr);
        // 手动设置行号，如果 create_contain_node 不会自动从第一个有效子节点获取的话
        if ((yyval.node) && (yyvsp[-2].node)) (yyval.node)->line_no = (yyvsp[-2].node)->line_no; // 以条件表达式的行号为准
    }
#line 1653 "MiniC.tab.c"
    break;

  case 34: /* IfStmt: T_IF T_L_PAREN Expr T_R_PAREN Statement T_ELSE Statement  */
#line 354 "MiniC.y"
                                                               {
        (yyval.node) = create_contain_node(ast_operator_type::AST_OP_IF, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
        if ((yyval.node) && (yyvsp[-4].node)) (yyval.node)->line_no = (yyvsp[-4].node)->line_no; // 以条件表达式的行号为准
    }
#line 1662 "MiniC.tab.c"
    break;

  case 35: /* WhileStmt: T_WHILE T_L_PAREN Expr T_R_PAREN Statement  */
#line 360 "MiniC.y"
                                                       {
        // 假设 create_while_stmt_node(cond_expr, body_stmt)
        // $$ = create_while_stmt_node($3, $5);
        // 使用通用创建函数
        (yyval.node) = create_contain_node(ast_operator_type::AST_OP_WHILE, (yyvsp[-2].node), (yyvsp[0].node)); // $3是条件, $5是循环体
    }
#line 1673 "MiniC.tab.c"
    break;

  case 36: /* BreakStmt: T_BREAK T_SEMICOLON  */
#line 368 "MiniC.y"
                                {
        (yyval.node) = create_contain_node(ast_operator_type::AST_OP_BREAK);
        if ((yyval.node)) (yyval.node)->line_no = yylineno; // 确保 $$ 非空后设置行号
    }
#line 1682 "MiniC.tab.c"
    break;

  case 37: /* ContinueStmt: T_CONTINUE T_SEMICOLON  */
#line 374 "MiniC.y"
                                      {
        (yyval.node) = create_contain_node(ast_operator_type::AST_OP_CONTINUE);
        if ((yyval.node)) (yyval.node)->line_no = yylineno; // 确保 $$ 非空后设置行号
    }
#line 1691 "MiniC.tab.c"
    break;

  case 38: /* Expr: AssignExpr  */
#line 385 "MiniC.y"
                     { (yyval.node) = (yyvsp[0].node); }
#line 1697 "MiniC.tab.c"
    break;

  case 39: /* AssignExpr: LVal T_ASSIGN AssignExpr  */
#line 390 "MiniC.y"
                                      { // 右结合: a = b = c  解析为 a = (b = c)
               // 假设 create_binary_op_node(op, left, right)
               (yyval.node) = create_contain_node(ast_operator_type::AST_OP_ASSIGN, (yyvsp[-2].node), (yyvsp[0].node));
           }
#line 1706 "MiniC.tab.c"
    break;

  case 40: /* AssignExpr: LOrExp  */
#line 394 "MiniC.y"
                    { (yyval.node) = (yyvsp[0].node); }
#line 1712 "MiniC.tab.c"
    break;

  case 41: /* LOrExp: LOrExp T_LOR LAndExp  */
#line 398 "MiniC.y"
                               {
            (yyval.node) = create_contain_node(ast_operator_type::AST_OP_LOR, (yyvsp[-2].node), (yyvsp[0].node));
        }
#line 1720 "MiniC.tab.c"
    break;

  case 42: /* LOrExp: LAndExp  */
#line 401 "MiniC.y"
                  { (yyval.node) = (yyvsp[0].node); }
#line 1726 "MiniC.tab.c"
    break;

  case 43: /* LAndExp: LAndExp T_LAND EqExp  */
#line 405 "MiniC.y"
                               { // 注意这里下一级是 EqExp (相等表达式)
            (yyval.node) = create_contain_node(ast_operator_type::AST_OP_LAND, (yyvsp[-2].node), (yyvsp[0].node));
        }
#line 1734 "MiniC.tab.c"
    break;

  case 44: /* LAndExp: EqExp  */
#line 408 "MiniC.y"
                { (yyval.node) = (yyvsp[0].node); }
#line 1740 "MiniC.tab.c"
    break;

  case 45: /* EqExp: EqExp EqOp RelExp  */
#line 412 "MiniC.y"
                            { // 注意这里下一级是 RelExp (关系表达式)
            (yyval.node) = create_contain_node((ast_operator_type)(yyvsp[-1].op_class), (yyvsp[-2].node), (yyvsp[0].node));
        }
#line 1748 "MiniC.tab.c"
    break;

  case 46: /* EqExp: RelExp  */
#line 415 "MiniC.y"
                 { (yyval.node) = (yyvsp[0].node); }
#line 1754 "MiniC.tab.c"
    break;

  case 47: /* EqOp: T_EQ  */
#line 419 "MiniC.y"
                { (yyval.op_class) = (int)ast_operator_type::AST_OP_EQ; }
#line 1760 "MiniC.tab.c"
    break;

  case 48: /* EqOp: T_NE  */
#line 420 "MiniC.y"
                { (yyval.op_class) = (int)ast_operator_type::AST_OP_NE; }
#line 1766 "MiniC.tab.c"
    break;

  case 49: /* RelExp: RelExp RelOp AddExp  */
#line 424 "MiniC.y"
                              { // 注意这里下一级是 AddExp (加法表达式)
            (yyval.node) = create_contain_node((ast_operator_type)(yyvsp[-1].op_class), (yyvsp[-2].node), (yyvsp[0].node));
        }
#line 1774 "MiniC.tab.c"
    break;

  case 50: /* RelExp: AddExp  */
#line 427 "MiniC.y"
                 { (yyval.node) = (yyvsp[0].node); }
#line 1780 "MiniC.tab.c"
    break;

  case 51: /* RelOp: T_LT  */
#line 431 "MiniC.y"
                { (yyval.op_class) = (int)ast_operator_type::AST_OP_LT; }
#line 1786 "MiniC.tab.c"
    break;

  case 52: /* RelOp: T_LE  */
#line 432 "MiniC.y"
                { (yyval.op_class) = (int)ast_operator_type::AST_OP_LE; }
#line 1792 "MiniC.tab.c"
    break;

  case 53: /* RelOp: T_GT  */
#line 433 "MiniC.y"
                { (yyval.op_class) = (int)ast_operator_type::AST_OP_GT; }
#line 1798 "MiniC.tab.c"
    break;

  case 54: /* RelOp: T_GE  */
#line 434 "MiniC.y"
                { (yyval.op_class) = (int)ast_operator_type::AST_OP_GE; }
#line 1804 "MiniC.tab.c"
    break;

  case 55: /* AddExp: AddExp AddOp MulExp  */
#line 442 "MiniC.y"
                              { // <--- 修改为左递归
            (yyval.node) = create_contain_node((ast_operator_type)(yyvsp[-1].op_class), (yyvsp[-2].node), (yyvsp[0].node));
        }
#line 1812 "MiniC.tab.c"
    break;

  case 56: /* AddExp: MulExp  */
#line 445 "MiniC.y"
                 { (yyval.node) = (yyvsp[0].node); }
#line 1818 "MiniC.tab.c"
    break;

  case 57: /* MulExp: MulExp MulOp UnaryExp  */
#line 448 "MiniC.y"
                                { // <--- 修改为左递归
            (yyval.node) = create_contain_node((ast_operator_type)(yyvsp[-1].op_class), (yyvsp[-2].node), (yyvsp[0].node));
        }
#line 1826 "MiniC.tab.c"
    break;

  case 58: /* MulExp: UnaryExp  */
#line 451 "MiniC.y"
                   { (yyval.node) = (yyvsp[0].node); }
#line 1832 "MiniC.tab.c"
    break;

  case 59: /* AddOp: T_ADD  */
#line 457 "MiniC.y"
             {
		(yyval.op_class) = (int)ast_operator_type::AST_OP_ADD;
	}
#line 1840 "MiniC.tab.c"
    break;

  case 60: /* AddOp: T_SUB  */
#line 460 "MiniC.y"
                {
		(yyval.op_class) = (int)ast_operator_type::AST_OP_SUB;
	}
#line 1848 "MiniC.tab.c"
    break;

  case 61: /* MulOp: T_MUL  */
#line 465 "MiniC.y"
              {
            (yyval.op_class) = (int)ast_operator_type::AST_OP_MUL;
        }
#line 1856 "MiniC.tab.c"
    break;

  case 62: /* MulOp: T_DIV  */
#line 468 "MiniC.y"
              {
            (yyval.op_class) = (int)ast_operator_type::AST_OP_DIV;
        }
#line 1864 "MiniC.tab.c"
    break;

  case 63: /* MulOp: T_MOD  */
#line 471 "MiniC.y"
              {
            (yyval.op_class) = (int)ast_operator_type::AST_OP_MOD;
        }
#line 1872 "MiniC.tab.c"
    break;

  case 64: /* UnaryExp: PrimaryExp  */
#line 478 "MiniC.y"
                      {
		// 基本表达式

		// 传递到归约后的UnaryExp上
		(yyval.node) = (yyvsp[0].node);
	}
#line 1883 "MiniC.tab.c"
    break;

  case 65: /* UnaryExp: T_SUB UnaryExp  */
#line 484 "MiniC.y"
                                           { 
		(yyval.node) = create_contain_node(ast_operator_type::AST_OP_NEG, (yyvsp[0].node));
	}
#line 1891 "MiniC.tab.c"
    break;

  case 66: /* UnaryExp: T_LNOT UnaryExp  */
#line 488 "MiniC.y"
                      { // 逻辑非! 优先级由 %right T_LNOT 控制
        (yyval.node) = create_contain_node(ast_operator_type::AST_OP_LNOT, (yyvsp[0].node));
    }
#line 1899 "MiniC.tab.c"
    break;

  case 67: /* UnaryExp: T_ID T_L_PAREN T_R_PAREN  */
#line 492 "MiniC.y"
                                   {
		// 没有实参的函数调用

		// 创建函数调用名终结符节点
		ast_node * name_node = ast_node::New(std::string((yyvsp[-2].var_id).id), (yyvsp[-2].var_id).lineno);

		// 对于字符型字面量的字符串空间需要释放，因词法用到了strdup进行了字符串复制
		free((yyvsp[-2].var_id).id);

		// 实参列表
		ast_node * paramListNode = nullptr;

		// 创建函数调用节点，其孩子为被调用函数名和实参，实参为空，但函数内部会创建实参列表节点，无孩子
		(yyval.node) = create_func_call(name_node, paramListNode);

	}
#line 1920 "MiniC.tab.c"
    break;

  case 68: /* UnaryExp: T_ID T_L_PAREN RealParamList T_R_PAREN  */
#line 508 "MiniC.y"
                                                 {
		// 含有实参的函数调用

		// 创建函数调用名终结符节点
		ast_node * name_node = ast_node::New(std::string((yyvsp[-3].var_id).id), (yyvsp[-3].var_id).lineno);

		// 对于字符型字面量的字符串空间需要释放，因词法用到了strdup进行了字符串复制
		free((yyvsp[-3].var_id).id);

		// 实参列表
		ast_node * paramListNode = (yyvsp[-1].node);

		// 创建函数调用节点，其孩子为被调用函数名和实参，实参不为空
		(yyval.node) = create_func_call(name_node, paramListNode);
	}
#line 1940 "MiniC.tab.c"
    break;

  case 69: /* PrimaryExp: T_L_PAREN Expr T_R_PAREN  */
#line 527 "MiniC.y"
                                       {
		// 带有括号的表达式
		(yyval.node) = (yyvsp[-1].node);
	}
#line 1949 "MiniC.tab.c"
    break;

  case 70: /* PrimaryExp: T_DIGIT  */
#line 531 "MiniC.y"
                  {
        	// 无符号整型字面量

		// 创建一个无符号整型的终结符节点
		(yyval.node) = ast_node::New((yyvsp[0].integer_num));
	}
#line 1960 "MiniC.tab.c"
    break;

  case 71: /* PrimaryExp: LVal  */
#line 537 "MiniC.y"
                {
		// 具有左值的表达式

		// 直接传递到归约后的非终结符号PrimaryExp
		(yyval.node) = (yyvsp[0].node);
	}
#line 1971 "MiniC.tab.c"
    break;

  case 72: /* RealParamList: Expr  */
#line 549 "MiniC.y"
                     {
		// 创建实参列表节点，并把当前的Expr节点加入
		(yyval.node) = create_contain_node(ast_operator_type::AST_OP_FUNC_REAL_PARAMS, (yyvsp[0].node));
	}
#line 1980 "MiniC.tab.c"
    break;

  case 73: /* RealParamList: RealParamList T_COMMA Expr  */
#line 553 "MiniC.y"
                                     {
		// 左递归增加实参表达式
		(yyval.node) = (yyvsp[-2].node)->insert_son_node((yyvsp[0].node));
	}
#line 1989 "MiniC.tab.c"
    break;

  case 74: /* LVal: T_ID  */
#line 560 "MiniC.y"
            {
		// 变量名终结符

		// 创建变量名终结符节点
		(yyval.node) = ast_node::New((yyvsp[0].var_id));

		// 对于字符型字面量的字符串空间需要释放，因词法用到了strdup进行了字符串复制
		free((yyvsp[0].var_id).id);
	}
#line 2003 "MiniC.tab.c"
    break;


#line 2007 "MiniC.tab.c"

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

#line 571 "MiniC.y"


// 语法识别错误要调用函数的定义
void yyerror(char * msg)
{
    printf("Line %d: %s\n", yylineno, msg);
}
