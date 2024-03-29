#ifndef ABSYN_HEADER
#define ABSYN_HEADER

/* C++ Abstract Syntax Interface generated by the BNF Converter.*/

/********************   TypeDef Section    ********************/
typedef int Integer;
typedef char Char;
typedef double Double;
typedef char* String;
typedef char* Ident;
typedef char* Unsigned;
typedef char* Long;
typedef char* UnsignedLong;
typedef char* Hexadecimal;
typedef char* HexUnsigned;
typedef char* HexLong;
typedef char* HexUnsLong;
typedef char* Octal;
typedef char* OctalUnsigned;
typedef char* OctalLong;
typedef char* OctalUnsLong;
typedef char* CDouble;
typedef char* CFloat;
typedef char* CLongDouble;


/********************   Forward Declarations    ********************/

struct ListExternal_declaration_;
typedef struct ListExternal_declaration_ *ListExternal_declaration;
struct ListDec_;
typedef struct ListDec_ *ListDec;
struct ListDeclaration_specifier_;
typedef struct ListDeclaration_specifier_ *ListDeclaration_specifier;
struct ListInit_declarator_;
typedef struct ListInit_declarator_ *ListInit_declarator;
struct ListStruct_dec_;
typedef struct ListStruct_dec_ *ListStruct_dec;
struct ListSpec_qual_;
typedef struct ListSpec_qual_ *ListSpec_qual;
struct ListStruct_declarator_;
typedef struct ListStruct_declarator_ *ListStruct_declarator;
struct ListEnumerator_;
typedef struct ListEnumerator_ *ListEnumerator;
struct ListType_qualifier_;
typedef struct ListType_qualifier_ *ListType_qualifier;
struct ListIdent_;
typedef struct ListIdent_ *ListIdent;
struct ListStm_;
typedef struct ListStm_ *ListStm;
struct ListExp_;
typedef struct ListExp_ *ListExp;
struct External_declaration_;
typedef struct External_declaration_ *External_declaration;
struct ClassName_;
typedef struct ClassName_ *ClassName;
struct Extends_;
typedef struct Extends_ *Extends;
struct Jump_stm_;
typedef struct Jump_stm_ *Jump_stm;
struct Type_specifier_;
typedef struct Type_specifier_ *Type_specifier;
struct Storage_class_specifier_;
typedef struct Storage_class_specifier_ *Storage_class_specifier;
struct Type_qualifier_;
typedef struct Type_qualifier_ *Type_qualifier;
struct Unary_operator_;
typedef struct Unary_operator_ *Unary_operator;
struct Assignment_op_;
typedef struct Assignment_op_ *Assignment_op;
struct Init_declarator_;
typedef struct Init_declarator_ *Init_declarator;
struct Enumerator_;
typedef struct Enumerator_ *Enumerator;
struct Declaration_specifier_;
typedef struct Declaration_specifier_ *Declaration_specifier;
struct Program_;
typedef struct Program_ *Program;
struct Function_def_;
typedef struct Function_def_ *Function_def;
struct Dec_;
typedef struct Dec_ *Dec;
struct Struct_or_union_spec_;
typedef struct Struct_or_union_spec_ *Struct_or_union_spec;
struct Struct_or_union_;
typedef struct Struct_or_union_ *Struct_or_union;
struct Struct_dec_;
typedef struct Struct_dec_ *Struct_dec;
struct Spec_qual_;
typedef struct Spec_qual_ *Spec_qual;
struct Struct_declarator_;
typedef struct Struct_declarator_ *Struct_declarator;
struct Enum_specifier_;
typedef struct Enum_specifier_ *Enum_specifier;
struct Declarator_;
typedef struct Declarator_ *Declarator;
struct Direct_declarator_;
typedef struct Direct_declarator_ *Direct_declarator;
struct Pointer_;
typedef struct Pointer_ *Pointer;
struct Parameter_type_;
typedef struct Parameter_type_ *Parameter_type;
struct Parameter_declarations_;
typedef struct Parameter_declarations_ *Parameter_declarations;
struct Parameter_declaration_;
typedef struct Parameter_declaration_ *Parameter_declaration;
struct Initializer_;
typedef struct Initializer_ *Initializer;
struct Initializers_;
typedef struct Initializers_ *Initializers;
struct Type_name_;
typedef struct Type_name_ *Type_name;
struct Abstract_declarator_;
typedef struct Abstract_declarator_ *Abstract_declarator;
struct Dir_abs_dec_;
typedef struct Dir_abs_dec_ *Dir_abs_dec;
struct Stm_;
typedef struct Stm_ *Stm;
struct Labeled_stm_;
typedef struct Labeled_stm_ *Labeled_stm;
struct Compound_stm_;
typedef struct Compound_stm_ *Compound_stm;
struct Expression_stm_;
typedef struct Expression_stm_ *Expression_stm;
struct Selection_stm_;
typedef struct Selection_stm_ *Selection_stm;
struct Iter_stm_;
typedef struct Iter_stm_ *Iter_stm;
struct Exp_;
typedef struct Exp_ *Exp;
struct Constant_;
typedef struct Constant_ *Constant;
struct Constant_expression_;
typedef struct Constant_expression_ *Constant_expression;


/********************   Abstract Syntax Classes    ********************/

struct External_declaration_
{
  enum { is_Class, is_Namespace, is_Afunc, is_Global } kind;
  union
  {
    struct { ClassName classname_; Extends extends_; ListExternal_declaration listexternal_declaration_; } class_;
    struct { Ident ident_; ListExternal_declaration listexternal_declaration_; } namespace_;
    struct { Function_def function_def_; } afunc_;
    struct { Dec dec_; } global_;
  } u;
};

External_declaration make_Class(ClassName p0, Extends p1, ListExternal_declaration p2);
External_declaration make_Namespace(Ident p0, ListExternal_declaration p1);
External_declaration make_Afunc(Function_def p0);
External_declaration make_Global(Dec p0);

struct ClassName_
{
  enum { is_ClassWithNamespace, is_ClassWithoutNamespace } kind;
  union
  {
    struct { Ident ident_1, ident_2; } classwithnamespace_;
    struct { Ident ident_; } classwithoutnamespace_;
  } u;
};

ClassName make_ClassWithNamespace(Ident p0, Ident p1);
ClassName make_ClassWithoutNamespace(Ident p0);

struct Extends_
{
  enum { is_Inheritance, is_NoInheritance } kind;
  union
  {
    struct { ClassName classname_; } inheritance_;
  } u;
};

Extends make_Inheritance(ClassName p0);
Extends make_NoInheritance();

struct Jump_stm_
{
  enum { is_SjumpFour, is_SjumpFive, is_SjumpOne, is_SjumpTwo, is_SjumpThree } kind;
  union
  {
    struct { Exp exp_; } sjumpfive_;
    struct { Ident ident_; } sjumpone_;
  } u;
};

Jump_stm make_SjumpFour();
Jump_stm make_SjumpFive(Exp p0);
Jump_stm make_SjumpOne(Ident p0);
Jump_stm make_SjumpTwo();
Jump_stm make_SjumpThree();

struct Type_specifier_
{
  enum { is_Tvoid, is_Tchar, is_Tshort, is_Tint, is_Tlong, is_Tfloat, is_Tdouble, is_Tsigned, is_Tunsigned, is_Tstruct, is_Tenum, is_Tname } kind;
  union
  {
    struct { Struct_or_union_spec struct_or_union_spec_; } tstruct_;
    struct { Enum_specifier enum_specifier_; } tenum_;
  } u;
};

Type_specifier make_Tvoid();
Type_specifier make_Tchar();
Type_specifier make_Tshort();
Type_specifier make_Tint();
Type_specifier make_Tlong();
Type_specifier make_Tfloat();
Type_specifier make_Tdouble();
Type_specifier make_Tsigned();
Type_specifier make_Tunsigned();
Type_specifier make_Tstruct(Struct_or_union_spec p0);
Type_specifier make_Tenum(Enum_specifier p0);
Type_specifier make_Tname();

struct Storage_class_specifier_
{
  enum { is_MyType, is_GlobalPrograms, is_LocalProgram, is_LocalBlock, is_LocalReg } kind;
  union
  {
  } u;
};

Storage_class_specifier make_MyType();
Storage_class_specifier make_GlobalPrograms();
Storage_class_specifier make_LocalProgram();
Storage_class_specifier make_LocalBlock();
Storage_class_specifier make_LocalReg();

struct Type_qualifier_
{
  enum { is_Const, is_NoOptim } kind;
  union
  {
  } u;
};

Type_qualifier make_Const();
Type_qualifier make_NoOptim();

struct Unary_operator_
{
  enum { is_Logicalneg, is_Address, is_Indirection, is_Plus, is_Negative, is_Complement } kind;
  union
  {
  } u;
};

Unary_operator make_Logicalneg();
Unary_operator make_Address();
Unary_operator make_Indirection();
Unary_operator make_Plus();
Unary_operator make_Negative();
Unary_operator make_Complement();

struct Assignment_op_
{
  enum { is_Assign, is_AssignMul, is_AssignDiv, is_AssignMod, is_AssignAdd, is_AssignSub, is_AssignLeft, is_AssignRight, is_AssignAnd, is_AssignXor, is_AssignOr } kind;
  union
  {
  } u;
};

Assignment_op make_Assign();
Assignment_op make_AssignMul();
Assignment_op make_AssignDiv();
Assignment_op make_AssignMod();
Assignment_op make_AssignAdd();
Assignment_op make_AssignSub();
Assignment_op make_AssignLeft();
Assignment_op make_AssignRight();
Assignment_op make_AssignAnd();
Assignment_op make_AssignXor();
Assignment_op make_AssignOr();

struct Init_declarator_
{
  enum { is_InitDecl, is_OnlyDecl } kind;
  union
  {
    struct { Declarator declarator_; Initializer initializer_; } initdecl_;
    struct { Declarator declarator_; } onlydecl_;
  } u;
};

Init_declarator make_InitDecl(Declarator p0, Initializer p1);
Init_declarator make_OnlyDecl(Declarator p0);

struct Enumerator_
{
  enum { is_EnumInit, is_Plain } kind;
  union
  {
    struct { Constant_expression constant_expression_; Ident ident_; } enuminit_;
    struct { Ident ident_; } plain_;
  } u;
};

Enumerator make_EnumInit(Ident p0, Constant_expression p1);
Enumerator make_Plain(Ident p0);

struct Exp_
{
  enum { is_InitClass, is_DestroyClass, is_Ecomma, is_Eassign, is_Econdition, is_Elor, is_Eland, is_Ebitor, is_Ebitexor, is_Ebitand, is_Eeq, is_Eneq, is_Elthen, is_Egrthen, is_Ele, is_Ege, is_Eleft, is_Eright, is_Eplus, is_Eminus, is_Etimes, is_Ediv, is_Emod, is_Etypeconv, is_Epreinc, is_Epredec, is_Epreop, is_Ebytesexpr, is_Ebytestype, is_Earray, is_Efunk, is_Efunkpar, is_Eselect, is_Epoint, is_Epostinc, is_Epostdec, is_Evar, is_Econst, is_Estring } kind;
  union
  {
    struct { Assignment_op assignment_op_; ClassName classname_; Exp exp_; } initclass_;
    struct { Ident ident_; } destroyclass_;
    struct { Exp exp_1, exp_2; } ecomma_;
    struct { Assignment_op assignment_op_; Exp exp_1, exp_2; } eassign_;
    struct { Exp exp_1, exp_2, exp_3; } econdition_;
    struct { Exp exp_1, exp_2; } elor_;
    struct { Exp exp_1, exp_2; } eland_;
    struct { Exp exp_1, exp_2; } ebitor_;
    struct { Exp exp_1, exp_2; } ebitexor_;
    struct { Exp exp_1, exp_2; } ebitand_;
    struct { Exp exp_1, exp_2; } eeq_;
    struct { Exp exp_1, exp_2; } eneq_;
    struct { Exp exp_1, exp_2; } elthen_;
    struct { Exp exp_1, exp_2; } egrthen_;
    struct { Exp exp_1, exp_2; } ele_;
    struct { Exp exp_1, exp_2; } ege_;
    struct { Exp exp_1, exp_2; } eleft_;
    struct { Exp exp_1, exp_2; } eright_;
    struct { Exp exp_1, exp_2; } eplus_;
    struct { Exp exp_1, exp_2; } eminus_;
    struct { Exp exp_1, exp_2; } etimes_;
    struct { Exp exp_1, exp_2; } ediv_;
    struct { Exp exp_1, exp_2; } emod_;
    struct { Exp exp_; Type_name type_name_; } etypeconv_;
    struct { Exp exp_; } epreinc_;
    struct { Exp exp_; } epredec_;
    struct { Exp exp_; Unary_operator unary_operator_; } epreop_;
    struct { Exp exp_; } ebytesexpr_;
    struct { Type_name type_name_; } ebytestype_;
    struct { Exp exp_1, exp_2; } earray_;
    struct { Exp exp_; } efunk_;
    struct { Exp exp_; ListExp listexp_; } efunkpar_;
    struct { Exp exp_; Ident ident_; } eselect_;
    struct { Exp exp_; Ident ident_; } epoint_;
    struct { Exp exp_; } epostinc_;
    struct { Exp exp_; } epostdec_;
    struct { Ident ident_; } evar_;
    struct { Constant constant_; } econst_;
    struct { String string_; } estring_;
  } u;
};

Exp make_InitClass(Exp p0, Assignment_op p1, ClassName p2);
Exp make_DestroyClass(Ident p0);
Exp make_Ecomma(Exp p0, Exp p1);
Exp make_Eassign(Exp p0, Assignment_op p1, Exp p2);
Exp make_Econdition(Exp p0, Exp p1, Exp p2);
Exp make_Elor(Exp p0, Exp p1);
Exp make_Eland(Exp p0, Exp p1);
Exp make_Ebitor(Exp p0, Exp p1);
Exp make_Ebitexor(Exp p0, Exp p1);
Exp make_Ebitand(Exp p0, Exp p1);
Exp make_Eeq(Exp p0, Exp p1);
Exp make_Eneq(Exp p0, Exp p1);
Exp make_Elthen(Exp p0, Exp p1);
Exp make_Egrthen(Exp p0, Exp p1);
Exp make_Ele(Exp p0, Exp p1);
Exp make_Ege(Exp p0, Exp p1);
Exp make_Eleft(Exp p0, Exp p1);
Exp make_Eright(Exp p0, Exp p1);
Exp make_Eplus(Exp p0, Exp p1);
Exp make_Eminus(Exp p0, Exp p1);
Exp make_Etimes(Exp p0, Exp p1);
Exp make_Ediv(Exp p0, Exp p1);
Exp make_Emod(Exp p0, Exp p1);
Exp make_Etypeconv(Type_name p0, Exp p1);
Exp make_Epreinc(Exp p0);
Exp make_Epredec(Exp p0);
Exp make_Epreop(Unary_operator p0, Exp p1);
Exp make_Ebytesexpr(Exp p0);
Exp make_Ebytestype(Type_name p0);
Exp make_Earray(Exp p0, Exp p1);
Exp make_Efunk(Exp p0);
Exp make_Efunkpar(Exp p0, ListExp p1);
Exp make_Eselect(Exp p0, Ident p1);
Exp make_Epoint(Exp p0, Ident p1);
Exp make_Epostinc(Exp p0);
Exp make_Epostdec(Exp p0);
Exp make_Evar(Ident p0);
Exp make_Econst(Constant p0);
Exp make_Estring(String p0);

struct Declaration_specifier_
{
  enum { is_DecClass, is_DecClassNoPoiter, is_Type, is_Storage, is_SpecProp } kind;
  union
  {
    struct { ClassName classname_; Ident ident_; Pointer pointer_; } decclass_;
    struct { ClassName classname_; Ident ident_; } decclassnopoiter_;
    struct { Type_specifier type_specifier_; } type_;
    struct { Storage_class_specifier storage_class_specifier_; } storage_;
    struct { Type_qualifier type_qualifier_; } specprop_;
  } u;
};

Declaration_specifier make_DecClass(ClassName p0, Pointer p1, Ident p2);
Declaration_specifier make_DecClassNoPoiter(ClassName p0, Ident p1);
Declaration_specifier make_Type(Type_specifier p0);
Declaration_specifier make_Storage(Storage_class_specifier p0);
Declaration_specifier make_SpecProp(Type_qualifier p0);

struct Program_
{
  enum { is_Progr } kind;
  union
  {
    struct { ListExternal_declaration listexternal_declaration_; } progr_;
  } u;
};

Program make_Progr(ListExternal_declaration p0);

struct ListExternal_declaration_
{
  int   extendedFlag;
  External_declaration external_declaration_;
  ListExternal_declaration listexternal_declaration_;
};

ListExternal_declaration make_ListExternal_declaration(External_declaration p1, ListExternal_declaration p2);
struct Function_def_
{
  enum { is_OldFunc, is_NewFunc, is_OldFuncInt, is_NewFuncInt } kind;
  union
  {
    struct { Compound_stm compound_stm_; Declarator declarator_; ListDec listdec_; ListDeclaration_specifier listdeclaration_specifier_; } oldfunc_;
    struct { Compound_stm compound_stm_; Declarator declarator_; ListDeclaration_specifier listdeclaration_specifier_; } newfunc_;
    struct { Compound_stm compound_stm_; Declarator declarator_; ListDec listdec_; } oldfuncint_;
    struct { Compound_stm compound_stm_; Declarator declarator_; } newfuncint_;
  } u;
};

Function_def make_OldFunc(ListDeclaration_specifier p0, Declarator p1, ListDec p2, Compound_stm p3);
Function_def make_NewFunc(ListDeclaration_specifier p0, Declarator p1, Compound_stm p2);
Function_def make_OldFuncInt(Declarator p0, ListDec p1, Compound_stm p2);
Function_def make_NewFuncInt(Declarator p0, Compound_stm p1);

struct Dec_
{
  enum { is_NoDeclarator, is_Declarators } kind;
  union
  {
    struct { ListDeclaration_specifier listdeclaration_specifier_; } nodeclarator_;
    struct { ListDeclaration_specifier listdeclaration_specifier_; ListInit_declarator listinit_declarator_; } declarators_;
  } u;
};

Dec make_NoDeclarator(ListDeclaration_specifier p0);
Dec make_Declarators(ListDeclaration_specifier p0, ListInit_declarator p1);

struct ListDec_
{
  Dec dec_;
  ListDec listdec_;
};

ListDec make_ListDec(Dec p1, ListDec p2);
struct ListDeclaration_specifier_
{
  Declaration_specifier declaration_specifier_;
  ListDeclaration_specifier listdeclaration_specifier_;
};

ListDeclaration_specifier make_ListDeclaration_specifier(Declaration_specifier p1, ListDeclaration_specifier p2);
struct ListInit_declarator_
{
  Init_declarator init_declarator_;
  ListInit_declarator listinit_declarator_;
};

ListInit_declarator make_ListInit_declarator(Init_declarator p1, ListInit_declarator p2);
struct Struct_or_union_spec_
{
  enum { is_Tag, is_Unique, is_TagType } kind;
  union
  {
    struct { Ident ident_; ListStruct_dec liststruct_dec_; Struct_or_union struct_or_union_; } tag_;
    struct { ListStruct_dec liststruct_dec_; Struct_or_union struct_or_union_; } unique_;
    struct { Ident ident_; Struct_or_union struct_or_union_; } tagtype_;
  } u;
};

Struct_or_union_spec make_Tag(Struct_or_union p0, Ident p1, ListStruct_dec p2);
Struct_or_union_spec make_Unique(Struct_or_union p0, ListStruct_dec p1);
Struct_or_union_spec make_TagType(Struct_or_union p0, Ident p1);

struct Struct_or_union_
{
  enum { is_Struct, is_Union } kind;
  union
  {
  } u;
};

Struct_or_union make_Struct();
Struct_or_union make_Union();

struct ListStruct_dec_
{
  Struct_dec struct_dec_;
  ListStruct_dec liststruct_dec_;
};

ListStruct_dec make_ListStruct_dec(Struct_dec p1, ListStruct_dec p2);
struct Struct_dec_
{
  enum { is_Structen } kind;
  union
  {
    struct { ListSpec_qual listspec_qual_; ListStruct_declarator liststruct_declarator_; } structen_;
  } u;
};

Struct_dec make_Structen(ListSpec_qual p0, ListStruct_declarator p1);

struct ListSpec_qual_
{
  Spec_qual spec_qual_;
  ListSpec_qual listspec_qual_;
};

ListSpec_qual make_ListSpec_qual(Spec_qual p1, ListSpec_qual p2);
struct Spec_qual_
{
  enum { is_TypeSpec, is_QualSpec } kind;
  union
  {
    struct { Type_specifier type_specifier_; } typespec_;
    struct { Type_qualifier type_qualifier_; } qualspec_;
  } u;
};

Spec_qual make_TypeSpec(Type_specifier p0);
Spec_qual make_QualSpec(Type_qualifier p0);

struct ListStruct_declarator_
{
  Struct_declarator struct_declarator_;
  ListStruct_declarator liststruct_declarator_;
};

ListStruct_declarator make_ListStruct_declarator(Struct_declarator p1, ListStruct_declarator p2);
struct Struct_declarator_
{
  enum { is_Decl, is_Field, is_DecField } kind;
  union
  {
    struct { Declarator declarator_; } decl_;
    struct { Constant_expression constant_expression_; } field_;
    struct { Constant_expression constant_expression_; Declarator declarator_; } decfield_;
  } u;
};

Struct_declarator make_Decl(Declarator p0);
Struct_declarator make_Field(Constant_expression p0);
Struct_declarator make_DecField(Declarator p0, Constant_expression p1);

struct Enum_specifier_
{
  enum { is_EnumDec, is_EnumName, is_EnumVar } kind;
  union
  {
    struct { ListEnumerator listenumerator_; } enumdec_;
    struct { Ident ident_; ListEnumerator listenumerator_; } enumname_;
    struct { Ident ident_; } enumvar_;
  } u;
};

Enum_specifier make_EnumDec(ListEnumerator p0);
Enum_specifier make_EnumName(Ident p0, ListEnumerator p1);
Enum_specifier make_EnumVar(Ident p0);

struct ListEnumerator_
{
  Enumerator enumerator_;
  ListEnumerator listenumerator_;
};

ListEnumerator make_ListEnumerator(Enumerator p1, ListEnumerator p2);
struct Declarator_
{
  enum { is_BeginPointer, is_NoPointer } kind;
  union
  {
    struct { Direct_declarator direct_declarator_; Pointer pointer_; } beginpointer_;
    struct { Direct_declarator direct_declarator_; } nopointer_;
  } u;
};

Declarator make_BeginPointer(Pointer p0, Direct_declarator p1);
Declarator make_NoPointer(Direct_declarator p0);

struct Direct_declarator_
{
  enum { is_Name, is_ParenDecl, is_InnitArray, is_Incomplete, is_NewFuncDec, is_OldFuncDef, is_OldFuncDec } kind;
  union
  {
    struct { Ident ident_; } name_;
    struct { Declarator declarator_; } parendecl_;
    struct { Constant_expression constant_expression_; Direct_declarator direct_declarator_; } innitarray_;
    struct { Direct_declarator direct_declarator_; } incomplete_;
    struct { Direct_declarator direct_declarator_; Parameter_type parameter_type_; } newfuncdec_;
    struct { Direct_declarator direct_declarator_; ListIdent listident_; } oldfuncdef_;
    struct { Direct_declarator direct_declarator_; } oldfuncdec_;
  } u;
};

Direct_declarator make_Name(Ident p0);
Direct_declarator make_ParenDecl(Declarator p0);
Direct_declarator make_InnitArray(Direct_declarator p0, Constant_expression p1);
Direct_declarator make_Incomplete(Direct_declarator p0);
Direct_declarator make_NewFuncDec(Direct_declarator p0, Parameter_type p1);
Direct_declarator make_OldFuncDef(Direct_declarator p0, ListIdent p1);
Direct_declarator make_OldFuncDec(Direct_declarator p0);

struct Pointer_
{
  enum { is_Point, is_PointQual, is_PointPoint, is_PointQualPoint } kind;
  union
  {
    struct { ListType_qualifier listtype_qualifier_; } pointqual_;
    struct { Pointer pointer_; } pointpoint_;
    struct { ListType_qualifier listtype_qualifier_; Pointer pointer_; } pointqualpoint_;
  } u;
};

Pointer make_Point();
Pointer make_PointQual(ListType_qualifier p0);
Pointer make_PointPoint(Pointer p0);
Pointer make_PointQualPoint(ListType_qualifier p0, Pointer p1);

struct ListType_qualifier_
{
  Type_qualifier type_qualifier_;
  ListType_qualifier listtype_qualifier_;
};

ListType_qualifier make_ListType_qualifier(Type_qualifier p1, ListType_qualifier p2);
struct Parameter_type_
{
  enum { is_AllSpec, is_More } kind;
  union
  {
    struct { Parameter_declarations parameter_declarations_; } allspec_;
    struct { Parameter_declarations parameter_declarations_; } more_;
  } u;
};

Parameter_type make_AllSpec(Parameter_declarations p0);
Parameter_type make_More(Parameter_declarations p0);

struct Parameter_declarations_
{
  enum { is_ParamDec, is_MoreParamDec } kind;
  union
  {
    struct { Parameter_declaration parameter_declaration_; } paramdec_;
    struct { Parameter_declaration parameter_declaration_; Parameter_declarations parameter_declarations_; } moreparamdec_;
  } u;
};

Parameter_declarations make_ParamDec(Parameter_declaration p0);
Parameter_declarations make_MoreParamDec(Parameter_declarations p0, Parameter_declaration p1);

struct Parameter_declaration_
{
  enum { is_OnlyType, is_TypeAndParam, is_Abstract } kind;
  union
  {
    struct { ListDeclaration_specifier listdeclaration_specifier_; } onlytype_;
    struct { Declarator declarator_; ListDeclaration_specifier listdeclaration_specifier_; } typeandparam_;
    struct { Abstract_declarator abstract_declarator_; ListDeclaration_specifier listdeclaration_specifier_; } abstract_;
  } u;
};

Parameter_declaration make_OnlyType(ListDeclaration_specifier p0);
Parameter_declaration make_TypeAndParam(ListDeclaration_specifier p0, Declarator p1);
Parameter_declaration make_Abstract(ListDeclaration_specifier p0, Abstract_declarator p1);

struct ListIdent_
{
  Ident ident_;
  ListIdent listident_;
};

ListIdent make_ListIdent(Ident p1, ListIdent p2);
struct Initializer_
{
  enum { is_InitExpr, is_InitListOne, is_InitListTwo } kind;
  union
  {
    struct { Exp exp_; } initexpr_;
    struct { Initializers initializers_; } initlistone_;
    struct { Initializers initializers_; } initlisttwo_;
  } u;
};

Initializer make_InitExpr(Exp p0);
Initializer make_InitListOne(Initializers p0);
Initializer make_InitListTwo(Initializers p0);

struct Initializers_
{
  enum { is_AnInit, is_MoreInit } kind;
  union
  {
    struct { Initializer initializer_; } aninit_;
    struct { Initializer initializer_; Initializers initializers_; } moreinit_;
  } u;
};

Initializers make_AnInit(Initializer p0);
Initializers make_MoreInit(Initializers p0, Initializer p1);

struct Type_name_
{
  enum { is_PlainType, is_ExtendedType } kind;
  union
  {
    struct { ListSpec_qual listspec_qual_; } plaintype_;
    struct { Abstract_declarator abstract_declarator_; ListSpec_qual listspec_qual_; } extendedtype_;
  } u;
};

Type_name make_PlainType(ListSpec_qual p0);
Type_name make_ExtendedType(ListSpec_qual p0, Abstract_declarator p1);

struct Abstract_declarator_
{
  enum { is_PointerStart, is_Advanced, is_PointAdvanced } kind;
  union
  {
    struct { Pointer pointer_; } pointerstart_;
    struct { Dir_abs_dec dir_abs_dec_; } advanced_;
    struct { Dir_abs_dec dir_abs_dec_; Pointer pointer_; } pointadvanced_;
  } u;
};

Abstract_declarator make_PointerStart(Pointer p0);
Abstract_declarator make_Advanced(Dir_abs_dec p0);
Abstract_declarator make_PointAdvanced(Pointer p0, Dir_abs_dec p1);

struct Dir_abs_dec_
{
  enum { is_WithinParentes, is_Array, is_InitiatedArray, is_UnInitiated, is_Initiated, is_OldFunction, is_NewFunction, is_OldFuncExpr, is_NewFuncExpr } kind;
  union
  {
    struct { Abstract_declarator abstract_declarator_; } withinparentes_;
    struct { Constant_expression constant_expression_; } initiatedarray_;
    struct { Dir_abs_dec dir_abs_dec_; } uninitiated_;
    struct { Constant_expression constant_expression_; Dir_abs_dec dir_abs_dec_; } initiated_;
    struct { Parameter_type parameter_type_; } newfunction_;
    struct { Dir_abs_dec dir_abs_dec_; } oldfuncexpr_;
    struct { Dir_abs_dec dir_abs_dec_; Parameter_type parameter_type_; } newfuncexpr_;
  } u;
};

Dir_abs_dec make_WithinParentes(Abstract_declarator p0);
Dir_abs_dec make_Array();
Dir_abs_dec make_InitiatedArray(Constant_expression p0);
Dir_abs_dec make_UnInitiated(Dir_abs_dec p0);
Dir_abs_dec make_Initiated(Dir_abs_dec p0, Constant_expression p1);
Dir_abs_dec make_OldFunction();
Dir_abs_dec make_NewFunction(Parameter_type p0);
Dir_abs_dec make_OldFuncExpr(Dir_abs_dec p0);
Dir_abs_dec make_NewFuncExpr(Dir_abs_dec p0, Parameter_type p1);

struct Stm_
{
  enum { is_LabelS, is_CompS, is_ExprS, is_SelS, is_IterS, is_JumpS } kind;
  union
  {
    struct { Labeled_stm labeled_stm_; } labels_;
    struct { Compound_stm compound_stm_; } comps_;
    struct { Expression_stm expression_stm_; } exprs_;
    struct { Selection_stm selection_stm_; } sels_;
    struct { Iter_stm iter_stm_; } iters_;
    struct { Jump_stm jump_stm_; } jumps_;
  } u;
};

Stm make_LabelS(Labeled_stm p0);
Stm make_CompS(Compound_stm p0);
Stm make_ExprS(Expression_stm p0);
Stm make_SelS(Selection_stm p0);
Stm make_IterS(Iter_stm p0);
Stm make_JumpS(Jump_stm p0);

struct Labeled_stm_
{
  enum { is_SlabelOne, is_SlabelTwo, is_SlabelThree } kind;
  union
  {
    struct { Ident ident_; Stm stm_; } slabelone_;
    struct { Constant_expression constant_expression_; Stm stm_; } slabeltwo_;
    struct { Stm stm_; } slabelthree_;
  } u;
};

Labeled_stm make_SlabelOne(Ident p0, Stm p1);
Labeled_stm make_SlabelTwo(Constant_expression p0, Stm p1);
Labeled_stm make_SlabelThree(Stm p0);

struct Compound_stm_
{
  enum { is_ScompOne, is_ScompTwo, is_ScompThree, is_ScompFour } kind;
  union
  {
    struct { ListStm liststm_; } scomptwo_;
    struct { ListDec listdec_; } scompthree_;
    struct { ListDec listdec_; ListStm liststm_; } scompfour_;
  } u;
};

Compound_stm make_ScompOne();
Compound_stm make_ScompTwo(ListStm p0);
Compound_stm make_ScompThree(ListDec p0);
Compound_stm make_ScompFour(ListDec p0, ListStm p1);

struct Expression_stm_
{
  enum { is_SexprOne, is_SexprTwo } kind;
  union
  {
    struct { Exp exp_; } sexprtwo_;
  } u;
};

Expression_stm make_SexprOne();
Expression_stm make_SexprTwo(Exp p0);

struct Selection_stm_
{
  enum { is_SselOne, is_SselTwo, is_SselThree } kind;
  union
  {
    struct { Exp exp_; Stm stm_; } sselone_;
    struct { Exp exp_; Stm stm_1, stm_2; } sseltwo_;
    struct { Exp exp_; Stm stm_; } sselthree_;
  } u;
};

Selection_stm make_SselOne(Exp p0, Stm p1);
Selection_stm make_SselTwo(Exp p0, Stm p1, Stm p2);
Selection_stm make_SselThree(Exp p0, Stm p1);

struct Iter_stm_
{
  enum { is_SiterOne, is_SiterTwo, is_SiterThree, is_SiterFour } kind;
  union
  {
    struct { Exp exp_; Stm stm_; } siterone_;
    struct { Exp exp_; Stm stm_; } sitertwo_;
    struct { Expression_stm expression_stm_1, expression_stm_2; Stm stm_; } siterthree_;
    struct { Exp exp_; Expression_stm expression_stm_1, expression_stm_2; Stm stm_; } siterfour_;
  } u;
};

Iter_stm make_SiterOne(Exp p0, Stm p1);
Iter_stm make_SiterTwo(Stm p0, Exp p1);
Iter_stm make_SiterThree(Expression_stm p0, Expression_stm p1, Stm p2);
Iter_stm make_SiterFour(Expression_stm p0, Expression_stm p1, Exp p2, Stm p3);

struct ListStm_
{
  Stm stm_;
  ListStm liststm_;
};

ListStm make_ListStm(Stm p1, ListStm p2);
struct Constant_
{
  enum { is_Efloat, is_Echar, is_Eunsigned, is_Elong, is_Eunsignlong, is_Ehexadec, is_Ehexaunsign, is_Ehexalong, is_Ehexaunslong, is_Eoctal, is_Eoctalunsign, is_Eoctallong, is_Eoctalunslong, is_Ecdouble, is_Ecfloat, is_Eclongdouble, is_Eint, is_Elonger, is_Edouble } kind;
  union
  {
    struct { Double double_; } efloat_;
    struct { Char char_; } echar_;
    struct { Unsigned unsigned_; } eunsigned_;
    struct { Long long_; } elong_;
    struct { UnsignedLong unsignedlong_; } eunsignlong_;
    struct { Hexadecimal hexadecimal_; } ehexadec_;
    struct { HexUnsigned hexunsigned_; } ehexaunsign_;
    struct { HexLong hexlong_; } ehexalong_;
    struct { HexUnsLong hexunslong_; } ehexaunslong_;
    struct { Octal octal_; } eoctal_;
    struct { OctalUnsigned octalunsigned_; } eoctalunsign_;
    struct { OctalLong octallong_; } eoctallong_;
    struct { OctalUnsLong octalunslong_; } eoctalunslong_;
    struct { CDouble cdouble_; } ecdouble_;
    struct { CFloat cfloat_; } ecfloat_;
    struct { CLongDouble clongdouble_; } eclongdouble_;
    struct { Integer integer_; } eint_;
    struct { Integer integer_; } elonger_;
    struct { Double double_; } edouble_;
  } u;
};

Constant make_Efloat(Double p0);
Constant make_Echar(Char p0);
Constant make_Eunsigned(Unsigned p0);
Constant make_Elong(Long p0);
Constant make_Eunsignlong(UnsignedLong p0);
Constant make_Ehexadec(Hexadecimal p0);
Constant make_Ehexaunsign(HexUnsigned p0);
Constant make_Ehexalong(HexLong p0);
Constant make_Ehexaunslong(HexUnsLong p0);
Constant make_Eoctal(Octal p0);
Constant make_Eoctalunsign(OctalUnsigned p0);
Constant make_Eoctallong(OctalLong p0);
Constant make_Eoctalunslong(OctalUnsLong p0);
Constant make_Ecdouble(CDouble p0);
Constant make_Ecfloat(CFloat p0);
Constant make_Eclongdouble(CLongDouble p0);
Constant make_Eint(Integer p0);
Constant make_Elonger(Integer p0);
Constant make_Edouble(Double p0);

struct Constant_expression_
{
  enum { is_Especial } kind;
  union
  {
    struct { Exp exp_; } especial_;
  } u;
};

Constant_expression make_Especial(Exp p0);

struct ListExp_
{
  Exp exp_;
  ListExp listexp_;
};

ListExp make_ListExp(Exp p1, ListExp p2);


#endif
