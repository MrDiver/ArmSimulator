parser grammar ARMParser;
options { tokenVocab=ARMLexer; }

compilationUnit: Base EOF;