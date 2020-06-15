# ArmSimulator V 0.6

This project is for educational purposes.
The final product will represent a Simulator for basic ARM processor behavior. The first version aims at comepletely emulating the ARMv4 infrastructure and the complete instruction set.

### Planned Features
- More Commands
- Adding an error listener to the parser for error highlighting
- Add basic patterns in the menu for easy access and insertion in the code (WHILE, FOR, IF ELSE, SWITCH)

### Far future plans
- Add autocompletion for assembly language
- Reallocate semantics to external linter library
- Add optimization hints to the code


# Current Features

### General
- Compiling the program to a high level instruction sequence for the processor
- Almost complete arm instruction set recognition for the ArmParser
- Working breakpoints finally they arrived for everyone !!!
- Implemented commands
  - MOV, MVN, CMP, CMN, TST, TEQ, ADD, SUB, RSB, ADC, SBC, RSC, AND, BIC, EOR, ORR, ASR, LSL, LSR, ROR, B, BL, BX, LDR, STR, PUSH, POP, MUL
- Conditional execution
- Register Preview
- Memory Preview
- Stack Pointer is highlighted in Memory Preview
- Endless loop prevention by only allowing a certain amount of instructions per run
- Console output window displays return value at last instruction

### Gui
- Marking the line that is going to be executed on a step command
- Basic Syntax highlighting for the ARM assembly language
- Using the error list to indicate Errors inside of commands during execution
- Cstyle Comments everywhere

![](Resources/gui/features.png)

- Adding breakpoints via mouse and context menu
- working console window ( currently not used but its printing "Output:" and is tested to be working)

#### Quality of Life
- Warning for unsaved files 
- Basic shortcuts for every action. And standard shortcuts that everyone expects to work
- A list that displays recent files that can be opened with clicking on them

## Preview Gifs

### Debugger preview
![](Resources/gui/testprog.gif)
![](Resources/gui/error.gif)
### Endless Loop Prevention
![](Resources/gui/infinite.gif)

### File management
![](Resources/gui/folder.gif)

## Fun with Lexing
### The basic behavior of the Lexer for correctly parsing ARM assembly files
![](Resources/Lexer/behaviorAutomaton.png)

### A really really long preview of an AST for an assembly program
![](ASTImages/parseTree2.png)
