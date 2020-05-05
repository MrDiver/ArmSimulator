parser grammar ARMParser;
options { tokenVocab=ARMLexer; }

compilationUnit: program? EOF;

program: (statement)+;

statement: instruction | section | variable | label | NL;

instruction : data_processing_instruction
            | multiply_instruction
            | branch_instruction
            //| status_register_transfer_instruction
            | load_store_instruction
            //| coprocessor_instruction
            //| exception_generation_instruction
            | nop
            ;

nop: NOP;
cond: EQ| NE | CS | CC | MI | PL | VS | VC | HI | LS | GE | LT | GT | LE | AL;
reg: R0|R1|R2|R3|R4|R5|R6|R7|R8|R9|R10|R11|R12|R13|R14|R15;
immediate : HASH (HEX|NUMBER);
label: (LOCALLABEL | LABEL);

section: (GLOBAL SPACE LABELREF) #globalSection | DATA #dataSection | TEXT #textSection ;
variable: LABEL SPACE* datatype value;

datatype: WORD | BYTE;
value: (HEX|NUMBER) | LABELREF;

/* ==================================

          BRANCH INSTRUCTIONS

   ==================================*/

branch_instruction: opcode=(FB|BL)  cond? SPACE LABELREF #branchToLabel
                | opcode=BX cond? SPACE reg              #branchToRegister
                ;

/* ==================================

   DATA PROCESSING OPERATIONS SECTION

   ==================================*/
data_processing_instruction : opcode=(MOV|MVN) cond? UPDATEFLAG? SPACE reg COMMA shifter_operand # moveOp
                            | opcode=(CMP|CMN|TST|TEQ) cond? SPACE reg COMMA shifter_operand # compareOp
                            | opcode=(ADD|SUB|RSB|ADC|SBC|RSC|AND|BIC|EOR|ORR) cond? UPDATEFLAG? SPACE reg COMMA reg COMMA shifter_operand # arithmeticOp;
                            // TODO ADD SHIFT OPERATIONS

shifter_operand : immediate                 # op2immediate
                | reg                       # op2register
                | reg COMMA shift_operation   # op2inlineShift
                ;

shift_operation : shiftopcode immediate       # shiftByImmediate
                | shiftopcode reg           # shiftByRegister
                | RRXI                       # rotateWithExtend
                ;

shiftopcode: LSLI | LSRI | ASRI | RORI;


/* ==================================

       A 3.5 MULTIPLY INSTRUCTIONS
        TODO: MORE INSTRUCTIONS FOR MULTIPLICATION
   ==================================*/

multiply_instruction : opcode=MUL cond ? UPDATEFLAG? SPACE reg COMMA reg COMMA reg #normalMul
                     | opcode=(MLA|SMULL|UMULL|SMLAL|UMLAL) cond ? UPDATEFLAG? SPACE reg COMMA reg COMMA reg COMMA reg #longMul;

/* ==================================

    TODO: A3.6 PARALLEL ADDITION

   ==================================*/

/* ==================================

  TODO: A3.7 EXTEND INSTRUCTIONS

   ==================================*/

/* ==================================

   TODO: A3.8 Miscellaneous arithmetic instructions

   ==================================*/

/* ==================================

  TODO: A3.10 CPSR Access instructions

  ==================================*/


/* ==================================

   A3.11 LOAD AND STORE WORD OR UNSIGNED BYTE

   ==================================*/

//TODO IMPLEMENT ALL
load_store_instruction : opcode=(LDR|STR) cond? SPACE reg COMMA LABELREF #firstLoadStore
                       | opcode=(LDR|STR)  (DOUBLEWORD|HALFWORD|SIGNEDHALFWORD|SIGNEDBYTE|FB)? cond? PRIVILEGE? SPACE reg COMMA addressing_mode #secondLoadStore
                       | makro=(PUSH|POP) LBRACE reg (COMMA reg)* RBRACE #pushPopMakro
                       ;


//TODO: A3.12 Load and Store Multiple
//TODO: A3.13 Semaphore Instructions

//TODO: OPTIMIZE
addressing_mode : LBRACKET baseRegister=reg (COMMA shifter_operand )? RBRACKET #normalAddressing
                | LBRACKET baseRegister=reg (COMMA shifter_operand )? SPECIALRBRACKET #preIndexedAddressing
                | LBRACKET baseRegister=reg RBRACKET COMMA shifter_operand     #postIndexedAddressing;
