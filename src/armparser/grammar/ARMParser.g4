parser grammar ARMParser;
options { tokenVocab=ARMLexer; }

compilationUnit: program EOF;

program: statement+;

statement: instruction | label;

instruction : //data_processing_instruction
            //| multiply_instruction
            //| branch_instruction
            //| status_register_transfer_instruction
            //| load_store_instruction
            //| coprocessor_instruction
            //| exception_generation_instruction
            ADD SPACE reg COMMA reg
            ;

cond: EQ| NE | CS | CC | MI | PL | VS | VC | HI | LS | GE | LT | GT | LE | AL;
reg: (R0|R1|R2|R3|R4|R5|R6|R7|R8|R9|R10|R11|R12|R13|R14|R15);
immediate : HASH (HEX|NUMBER);
label: (LOCALLABEL | LABEL) COLON;

/* ==================================

          BRANCH INSTRUCTIONS

   ==================================*/
