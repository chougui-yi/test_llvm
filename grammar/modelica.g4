grammar modelica;

options {
    language = Cpp;
}

// Whitespace and comments

BOM : '\u00EF' '\u00BB' '\u00BF' ;

WS : ( ' ' | '\t' | NL )+ -> channel(HIDDEN)
  ;

LINE_COMMENT
    : '//' ( ~('\r'|'\n')* ) (NL|EOF) -> channel(HIDDEN)
    ;

ML_COMMENT
    :   '/*' (.)*? '*/' -> channel(HIDDEN)
    ;

fragment
NL: '\r\n' | '\n' | '\r';

// Lexical units except for keywords

IDENT : NONDIGIT ( DIGIT | NONDIGIT )* | Q_IDENT ;


fragment NONDIGIT : '_' | 'a' .. 'z' | 'A' .. 'Z' ;

STRING : '"' ( S_CHAR | S_ESCAPE )* '"' ;

fragment S_CHAR : NL | ~('\r' | '\n' | '\\' | '"'); // Unicode other than " and \

fragment DIGIT : '0' .. '9' ;

fragment Q_IDENT : '\'' ( Q_CHAR | S_ESCAPE ) ( Q_CHAR | S_ESCAPE | '"' )* '\'' ;

fragment Q_CHAR
   : NONDIGIT | DIGIT | '!' | '#' | '$' | '%' | '&' | '(' | ')' | '*'
   | '+' | ',' | '-' | '.' | '/' | ':' | ';' | '<' | '>' | '=' | '?'
   | '@' | '[' | ']' | '^' | '{' | '}' | '|' | '~' | ' '
   ;
fragment S_ESCAPE : '\\'
  ( '\'' | '"' | '?' | '\\' | 'a' | 'b' | 'f' | 'n' | 'r' | 't' | 'v')
  ;

fragment UNSIGNED_INTEGER : DIGIT+ ;
fragment EXPONENT : ( 'e' | 'E' ) ( '+' | '-' )? DIGIT+ ;

UNSIGNED_NUMBER : DIGIT+ ( '.' (DIGIT)* )? ( EXPONENT )? ;

FALSE : 'false';

TRUE : 'true';

WITHIN            : 'within';
FINAL             : 'final';
ENCAPSULATED      : 'encapsulated';
PARTIAL           : 'partial';
CLASS             : 'class';
MODEL             : 'model';
OPERATOR          : 'operator';            
RECORD            : 'record';          
BLOCK             : 'block';        
EXPANDABLE        : 'expandable';              
CONNECTOR         : 'connector';           
TYPE              : 'type';        
PACKAGE           : 'package';          
PURE              : 'pure';       
IMPURE            : 'impure';          
FUNCTION          : 'function';           
END               : 'end';      
EXTENDS           : 'extends';          
ENUMERATION       : 'enumeration';              
DER               : 'der';      
INPUT             : 'input';        
OUTPUT            : 'output';          
PUBLIC            : 'public';         
PROTECTED         : 'protected';           
EXTERNAL          : 'external';            
REDECLARE         : 'redeclare';            
INNER             : 'inner';        
OUTER             : 'outer';        
REPLACEABLE       : 'replaceable';              
IMPORT            : 'import';          
CONSTRAINEDBY     : 'constrainedby';                
FLOW              : 'flow';       
STREAM            : 'stream';         
DISCRETE          : 'discrete';            
PARAMETER         : 'parameter';            
CONSTANT          : 'constant';            
IF                : 'if';      
EACH              : 'each';       
INITIAL           : 'initial';          
ALGORITHM         : 'algorithm';            
BREAK             : 'break';        
RETURN            : 'return';          
THEN              : 'then';        
ELSEIF            : 'elseif';          
ELSE              : 'else';        
FOR               : 'for';      
LOOP              : 'loop';        
IN                : 'in';      
WHILE             : 'while';        
WHEN              : 'when';        
ELSEWHEN          : 'elsewhen';            
CONNECT           : 'connect';              
ANNOTATION        : 'annotation';
LEQUATION         : 'equation';              

AND             : '&&';
OR              : '||';
NOT             : '!';
ADD             : '+';
SUB             : '-';
MUL             : '*';
DIV             : '/';
MOD             : '%';
LT              : '<';
LE              : '<=';
GT              : '>';
GE              : '>=';
ASSIGN          : '=';
EQ              : '==';
SEMI            : ';';
COMMA           : ',';
DOT             : '.';
LBRACKET        : '[';
RBRACKET        : ']';
LPAREN          : '(';
RPAREN          : ')';
LBRACE          : '{';
RBRACE          : '}';
POWER           : '^';
DOT_ADD         : '.+';
DOT_SUB         : '.-';
DOT_MUL         : '.*';
DOT_DIV         : './';
DOT_P           : '.^';
COLON           : ':';
C_ASSIGN        : ':=';
L_OP            : '<>';

stored_definition  :
  '\uFEFF'? // BOM
  ( WITHIN name? SEMI )?
  ( FINAL? class_definition SEMI )*
  EOF
  ;

class_definition :
  ENCAPSULATED? class_prefixes
  class_specifier
  ;

class_prefixes :
  PARTIAL?
  ( CLASS | MODEL | OPERATOR? RECORD | BLOCK | EXPANDABLE? CONNECTOR | TYPE |
    PACKAGE | ( PURE | IMPURE )? OPERATOR? FUNCTION | OPERATOR )
  ;
id : IDENT;
class_specifier :
  long_class_specifier | short_class_specifier | der_class_specifier
  ;

long_class_specifier :
  id string_comment composition END id
  | EXTENDS id class_modification? string_comment composition
    END id
  ;

short_class_specifier_name :
    id
    ;

base_prefix_name :
    id
    ;

short_class_specifier_enumeration :
    ENUMERATION
    ;

specifier_enumeration :
    short_class_specifier_name ASSIGN short_class_specifier_enumeration LPAREN ( enum_list? | COLON ) RPAREN
    ;

base_prefix_specifier :
    base_prefix_name ASSIGN base_prefix type_specifier array_subscripts? class_modification1?
    ;
short_class_specifier :
  (
    base_prefix_specifier
  | specifier_enumeration
  )
  comment
  ;

der_class_specifier :
  id ASSIGN DER LPAREN type_specifier COMMA id ( COMMA id )* RPAREN comment
  ;

base_prefix :
  ( INPUT | OUTPUT )?
  ;

enum_list : enumeration_literal ( COMMA enumeration_literal )*
  ;

enumeration_option_name:
    id
  ;

enumeration_literal : enumeration_option_name comment
  ;

action_scope:
    PUBLIC
    | PROTECTED
  ;

composition :
  element_list
  ( action_scope element_list |
    equation_section |
    algorithm_section
  )*
  ( EXTERNAL language_specification?
  external_function_call? annotation_comment? SEMI )?
  ( annotation_comment SEMI )?
  ;

language_specification :
  STRING
  ;

external_function_call :
  ( component_reference ASSIGN )?
  id LPAREN expression_list? RPAREN
  ;

element_list :
  ( element SEMI )*
  ;

element :
  import_clause |
  extends_clause |
  REDECLARE?
  FINAL?
  INNER? OUTER?
  ( class_definition | component_clause |
  REPLACEABLE ( class_definition | component_clause )
  ( constraining_clause comment )? )
  ;

import_clause :
  IMPORT ( id ASSIGN name | name ( DOT ( MUL | LBRACE import_list RBRACE ) | DOT_MUL )? ) comment
  ;

import_list :
  id ( COMMA id )*
  ;

extends_clause :
  EXTENDS type_specifier class_modification? annotation_comment?
  ;

constraining_clause :
  CONSTRAINEDBY type_specifier class_modification?
  ;

component_clause :
  type_prefix type_specifier array_subscripts? component_list
  ;

type_prefix :
  ( FLOW | STREAM )?
  ( DISCRETE | PARAMETER | CONSTANT )? ( INPUT | OUTPUT )?
  ;

component_list :
  component_declaration ( COMMA component_declaration )*
  ;

component_declaration :
  declaration condition_attribute? comment
  ;

condition_attribute :
  IF expression
  ;

variable_name :
    id
  ;

declaration :
  variable_name array_subscripts? (modification | variable_characteristic)?
  ;

variable_characteristic :
  class_modification1 ( ASSIGN expression )?
  ;

modification :
   ASSIGN expression
  | C_ASSIGN expression
  ;

class_modification :
  LPAREN argument_list? RPAREN
  ;

class_modification1 :
  LPAREN argument_list? RPAREN
  ;

argument_list :
  argument ( COMMA argument )*
  ;

argument :
    element_modification_or_replaceable
  | element_redeclaration
  ;

element_modification_or_replaceable :
  EACH? FINAL? ( element_modification | element_replaceable )
  ;

variable_characteristic_modification :
   ASSIGN expression
  | C_ASSIGN expression
  ;

element_modification :
  name variable_characteristic_modification? string_comment
  ;

element_redeclaration :
  REDECLARE EACH? FINAL?
  ( short_class_definition | component_clause1  | element_replaceable )
  ;

element_replaceable :
  REPLACEABLE ( short_class_definition | component_clause1 )
  constraining_clause?
  ;

component_clause1 :
  type_prefix type_specifier component_declaration1
  ;

component_declaration1 :
  declaration comment
  ;

short_class_definition :
  class_prefixes short_class_specifier
  ;

equation_section :
  INITIAL? LEQUATION ( equation SEMI )*
  ;

algorithm_section :
  INITIAL? ALGORITHM ( statement SEMI )*
  ;

equation :
  (
    equation_valuation2 // CHANGE: optional last part to support component_reference function_call_args via simple_expression
  | if_equation
  | for_equation
  | connect_clause
  | when_equation
  ) comment
  ;

equation_valuation2 :
    simple_expression ( ASSIGN expression )?
    ;

statement :
  ( equation_valuation
  | LPAREN output_expression_list RPAREN C_ASSIGN component_reference function_call_args
  | BREAK
  | RETURN
  | if_statement
  | for_statement
  | while_statement
  | when_statement )
  comment
  ;

equation_valuation :
    component_reference ( C_ASSIGN expression | function_call_args )
  ;

if_equation :
  IF expression THEN
    ( equation SEMI )*
  ( ELSEIF expression THEN
    ( equation SEMI )*
  )*
  ( ELSE
    ( equation SEMI )*
  )?
  END IF
  ;

if_statement :
  IF expression THEN
    ( statement SEMI )*
  ( ELSEIF expression THEN
    ( statement SEMI )*
  )*
  ( ELSE
    ( statement SEMI )*
  )?
  END IF
  ;

for_equation :
  FOR for_indices LOOP
    ( equation SEMI )*
  END FOR
  ;

for_statement :
  FOR for_indices LOOP
    ( statement SEMI )*
  END FOR
  ;

for_indices :
  for_index ( COMMA for_index )*
  ;

for_index :
  id ( IN for_range )?
  ;

for_range : expression
  ;

while_statement :
  WHILE expression LOOP
    ( statement SEMI )*
  END WHILE
  ;

when_equation :
  WHEN expression THEN
    ( equation SEMI )*
  ( ELSEWHEN expression THEN
    ( equation SEMI )* )*
  END WHEN
  ;

when_statement :
  WHEN expression THEN
    ( statement SEMI )*
  ( ELSEWHEN expression THEN
    ( statement SEMI )* )*
  END WHEN
  ;

connect_clause :
  CONNECT LPAREN component_reference COMMA component_reference RPAREN
  ;

expression :
  simple_expression
  | IF expression THEN expression ( ELSEIF expression THEN expression )*
    ELSE expression
  ;

simple_expression :
  logical_expression ( COLON logical_expression ( COLON logical_expression )? )?
  ;

logical_expression :
  logical_term ( OR logical_term )*
  ;

logical_term :
  logical_factor ( AND logical_factor )*
  ;

logical_factor :
  NOT? relation
  ;

relation :
  arithmetic_expression
  | if_relation
  ;

if_relation :
    arithmetic_expression  relational_operator arithmetic_expression
    ;

relational_operator :
  LT | LE | GT | GE | EQ | L_OP
  ;

arithmetic_expression :
  add_operator? term ( add_operator term )*
  ;

add_operator :
  ADD | SUB | DOT_ADD | DOT_SUB
  ;

term :
  factor ( mul_operator factor )*
  ;

mul_operator :
  MUL | DIV | DOT_MUL | DOT_DIV
  ;

factor :
  primary ( (POWER | DOT_P) primary )?
  ;

number : UNSIGNED_NUMBER;

string : STRING;

boolean_my : FALSE
  | TRUE
  ;

primary : number
  | string
  | boolean_my
  | ( DER | INITIAL | PURE ) function_call_args
  | component_reference
  | function_call
  | LPAREN output_expression_list RPAREN
  | LBRACKET expression_list ( SEMI expression_list )* RBRACKET
  | LBRACE array_arguments RBRACE
  | END
  ;

function_call :
    component_reference function_call_args
    ;

type_specifier : DOT? type_specifier_name
  ;

type_specifier_name :
    id ( DOT id )*
  ;

name : id ( DOT id )*
  ;

component_reference :
  DOT? id array_subscripts? ( DOT id array_subscripts? )*
  ;

function_call_args :
  LPAREN function_arguments? RPAREN
  ;

function_arguments :
    expression ( COMMA function_arguments_non_first | FOR for_indices )?
  | function_partial_application ( COMMA function_arguments_non_first )?
  | named_arguments
  ;

function_arguments_non_first :
    function_argument ( COMMA function_arguments_non_first )?
  | named_arguments
  ;

array_arguments :
  expression ( ( COMMA expression )* | FOR for_indices ) // CHANGE: repetition instead of a new rule
  ;

named_arguments : named_argument ( COMMA named_argument )* // CHANGE: repetition
  ;

named_argument : id ASSIGN function_argument
  ;

function_argument :
    function_partial_application
  | expression
  ;

function_partial_application // CHANGE: This is a new rule; refactored out
  : FUNCTION type_specifier LPAREN named_arguments? RPAREN
  ;

output_expression_list :
  expression? ( COMMA expression? )*
  ;

expression_list :
  expression ( COMMA expression )*
  ;

array_subscripts :
  LBRACKET subscript ( COMMA subscript )* RBRACKET
  ;

subscript :
  COLON | expression
  ;

comment :
  string_comment annotation_comment?
  ;

string_comment :
  ( STRING ( ADD STRING )* )?
  ;

annotation_comment :
  ANNOTATION class_modification
  ;
