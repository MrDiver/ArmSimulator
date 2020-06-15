/*
 For a general overview of the concept go to /Resources/Lexer
*/

lexer grammar ARMLexer;
//WSSTD : ([ \t\r\n]| COMMENT | COMMENTM)+ -> skip,mode(CommandMode);
fragment A : [aA];
fragment B : [bB];
fragment C : [cC];
fragment D : [dD];
fragment E : [eE];
fragment F : [fF];
fragment G : [gG];
fragment H : [hH];
fragment I : [iI];
fragment J : [jJ];
fragment K : [kK];
fragment L : [lL];
fragment M : [mM];
fragment N : [nN];
fragment O : [oO];
fragment P : [pP];
fragment Q : [qQ];
fragment R : [rR];
fragment S : [sS];
fragment T : [tT];
fragment U : [uU];
fragment V : [vV];
fragment W : [wW];
fragment X : [xX];
fragment Y : [yY];
fragment Z : [zZ];
COMMENTM : '/*' .*? '*/' -> skip; // .*? matches anything until the first */
COMMENT : '//' ~( '\r' | '\n' )* -> skip;
TABNEWLINE: ('\t'|' ')+ '\r'? '\n' -> skip;
//TAB:  '\t' ->skip;

//mode CommandMode;

GLOBAL: '.global';
DATA: '.data';
TEXT: '.text';


//Data Processing Operations
AND: A N D;
EOR: E O R;
SUB: S U B;
RSB: R S B;
ADD: A D D;
ADC: A D C;
SBC: S B C;
RSC: R S C;
TST: T S T;
TEQ: T E Q;
CMP: C M P;
CMN: C M P;
ORR: O R R;
MOV: M O V;
BIC: B I C;
MVN: M V N;
LSL: L S L;
LSR: L S R;
ASR: A S R;
ROR: R O R;
RRX: R R X;

//Multiplication Instructions
//normal
MUL : M U L;
MLA : M L A;
//Long
SMULL : S M U L L;
UMULL : U M U L L;
SMLAL : S M L A L;
UMLAL : U M L A L;

//load and store operations
LDR : L D R;
STR : S T R;
PUSH: 'push'-> mode(ParameterMode);
POP: 'pop' -> mode(ParameterMode);

//Branch operations
FB              : B;
LINK            : L;
//BL              : B L;
BLX             : B L X;
BX              : B X;
BXJ             : B X J;

//No instruction
NOP: N O P;

// Conditions
EQ : E Q;
NE : N E;
CS : C S;
CC : C C;
MI : M I;
PL : P L;
VS : V S;
VC : V C;
HI : H I;
LS : L S;
GE : G E;
LT : L T;
GT : G T;
LE : L E;
AL : A L;
UPDATEFLAG: S;

//BYTEACCESS      : B ;
PRIVILEGE       : T ;
DOUBLEWORD      : D ;
HALFWORD        : H ;
SIGNEDHALFWORD  :S H;
SIGNEDBYTE      :S B;

LABEL: '.'?[a-zA-Z_] ([0-9] | [a-zA-Z_])* ':' ->mode(DEFAULT_MODE);
LOCALLABEL:[0-9][0-9]? ':'->mode(DEFAULT_MODE);

SPACE: (' '|'\t')+ ->mode(ParameterMode);
//TOSKIP: (COMMENT | COMMENTM )+;
NL: '\r'? '\n';


mode ParameterMode;
PUSH2: 'push'-> type(PUSH),mode(ParameterMode);
POP2: 'pop' -> type(POP),mode(ParameterMode);
WORD: '.word';
BYTE: '.byte';
ASCIZ: '.asciz';

R0: R '0';
R1: R '1';
R2: R '2';
R3: R '3';
R4: R '4';
R5: R '5';
R6: R '6';
R7: R '7';
R8: R '8';
R9: (R '9'|S B);
R10: R '10';
R11: R '11';
R12: (R '12'|I P);
R13: (R '13')|(S P);
R14: (R '14')|(L R);
R15: (R '15')|(P C);


// Shift operations
LSLI: L S L;
LSRI: L S R;
ASRI: A S R;
RORI: R O R;
RRXI: R R X;

//Literals
HASH: '#';
HEX: '0' X ([0-9a-fA-F])+;
NUMBER: '-'? [0-9]+ ;

WSPARAM: ([ \t]| COMMENT | COMMENTM)+ -> skip;
NEWLINE: '\r'? '\n' -> skip,mode(DEFAULT_MODE);
COMMA: ',';
LBRACKET: '[';
RBRACKET: ']';
LBRACE: '{';
RBRACE: '}';
SPECIALRBRACKET: ']!';
LABELREF: '.'?[a-zA-Z_] ([0-9] | [a-zA-Z_])*;
STRING: '\\"' (.)+? '\\"';
