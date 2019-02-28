# Cobol Syntax Checker
this program can find syntax errors in a cobol program. 
this respository contains 2 programs (lex and yacc )


LEX is an automated tool that generates Lexical Analyzer or scanners. FLEX is a tool utility of LEX which generates the lexical analyzer. When Lex receives input in the form of a file or text, it attempts to match the text with the regular expression. It takes input one character at a time and continues until a pattern is matched. If a pattern can be matched, then Lex performs the associated action (which may include returning a token). If, on the other hand, no regular expression can be matched, further processing stops and Lex displays an error message.
Lex and C are tightly coupled. A lex file (files in Lex have the .l extension eg: first.l) is passed through the lex utility, and produces output files in C (lex.yy.c). The program lex.yy.c basically consists of a transition diagram constructed from the regular expressions of first.l These file is then  compiled object program a.out, and lexical analyzer transforms an input streams into a sequence of tokens.

YACC =” Yet Another Compiler Compiler”
Uses as syntactic (Parser) generator
The input for YACC is A CFG(Context Free Gramer).
bison: is the open source 
the input for YACC must be lexical analyzer generator


the lex program contains tokens for any kind of cobol program and 
the yacc program contains the language grammer. 
the input.cbl file is a simple cobol program used for testing. you can use your own cobol program.
# Running the program
to run the program make sure you have installed flex , yacc and gcc on your computer.

open a terminal in your project directory and run the following commands 
```
bison  –d coco.y // that generate coco.tab.h and  coco.tab.c 

flex  lexfinal.l	// generate lex.yy.c

gcc lex.yy.c  coco.tab.c  –o output 	//run both c file using the c compiler that generate the executable file in output.
```

finally execute output

the "gcc", "flex" and "bison" should be  an absolute path to the programs.

