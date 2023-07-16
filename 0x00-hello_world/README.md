0. Preprocessor
mandatory
Score: 65.0% (Checks completed: 100.0%)
Write a script that runs a C file through the preprocessor and save the result into another file.

The C file name will be saved in the variable $CFILE
The output should be saved in the file c

Repo:
GitHub repository: alx-low_level_programming
Directory: 0x00-hello_world
File: 0-preprocessor


1. Compiler
mandatory
Score: 65.0% (Checks completed: 100.0%)
Write a script that compiles a C file but does not link.

The C file name will be saved in the variable $CFILE
The output file should be named the same as the C file, but with the extension .o instead of .c.
Example: if the C file is main.c, the output file should be main.o


Repo:
GitHub repository: alx-low_level_programming
Directory: 0x00-hello_world
File: 1-compiler


2. Assembler
mandatory
Score: 65.0% (Checks completed: 100.0%)
Write a script that generates the assembly code of a C code and save it in an output file.

The C file name will be saved in the variable $CFILE
The output file should be named the same as the C file, but with the extension .s instead of .c.
Example: if the C file is main.c, the output file should be main.s

Repo:
GitHub repository: alx-low_level_programming
Directory: 0x00-hello_world
File: 2-assembler

3. Name
mandatory
Score: 65.0% (Checks completed: 100.0%)
Write a script that compiles a C file and creates an executable named cisfun.The C file name will be saved in the variable $CFILE

Repo:
GitHub repository: alx-low_level_programming
Directory: 0x00-hello_world
File: 3-name


4. Hello, puts
mandatory
Score: 65.0% (Checks completed: 100.0%)
Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.

Use the function puts
You are not allowed to use printf
Your program should end with the value 0

Repo:
GitHub repository: alx-low_level_programming
Directory: 0x00-hello_world
File: 4-puts.c



5. Hello, printf
mandatory
Score: 65.0% (Checks completed: 100.0%)
Write a C program that prints "exactly with proper grammar, but the outcome is a piece of art,", followed by a new line.

Use the function printf
You are not allowed to use the function puts
Your program should return 0
Your program should compile without warning when using the -Wall gcc option

julien@ubuntu:~/c/0x00$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 5-printf.c
julien@ubuntu:~/c/0x00$ ./a.out
with proper grammar, but the outcome is a piece of art,
julien@ubuntu:~/c/0x00$ echo $?
0
julien@ubuntu:~/c/0x00$

Repo:
GitHub repository: alx-low_level_programming
Directory: 0x00-hello_world
File: 5-printf.c



6. Size is not grandeur, and territory does not make a nation
mandatory
Score: 27.86% (Checks completed: 42.86%)
Write a C program that prints the size of various types on the computer it is compiled and run on.

You should produce the exact same output as in the example
Warnings are allowed
Your program should return 0
You might have to install the package libc6-dev-i386 on your Linux to test the -m32 gcc option
julien@ubuntu:~/c/0x00$ gcc 6-size.c -m32 -o size32 2> /tmp/32
julien@ubuntu:~/c/0x00$ gcc 6-size.c -m64 -o size64 2> /tmp/64
julien@ubuntu:~/c/0x00$ ./size32
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 4 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
julien@ubuntu:~/c/0x00$ ./size64
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 8 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
julien@ubuntu:~/c/0x00$ echo $?
0
julien@ubuntu:~/c/0x00$
Repo:

GitHub repository: alx-low_level_programming
Directory: 0x00-hello_world
File: 6-size.c




7. Intel
#advanced
Score: 65.0% (Checks completed: 100.0%)
Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.

The C file name will be saved in the variable $CFILE.
The output file should be named the same as the C file, but with the extension .s instead of .c.
Example: if the C file is main.c, the output file should be main.s

julien@ubuntu:~/c/0x00$ export CFILE=main.c
julien@ubuntu:~/c/0x00$ cat main.c
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
julien@ubuntu:~/c/0x00$ ./100-intel
julien@ubuntu:~/c/0x00$ cat main.s
    .file   "main.c"
    .intel_syntax noprefix
    .text
    .globl  main
    .type   main, @function
main:
.LFB0:
    .cfi_startproc
    push    rbp
    .cfi_def_cfa_offset 16
    .cfi_offset 6, -16
    mov rbp, rsp
    .cfi_def_cfa_register 6
    mov eax, 0
    pop rbp
    .cfi_def_cfa 7, 8
    ret
    .cfi_endproc
.LFE0:
    .size   main, .-main
    .ident  "GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.2) 5.4.0 20160609"
    .section    .note.GNU-stack,"",@progbits
julien@ubuntu:~/c/0x00$

Repo:

GitHub repository: alx-low_level_programming
Directory: 0x00-hello_world
File: 100-intel



8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity
#advanced
Score: 0.0% (Checks completed: 0.0%)
Write a C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.

You are not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts
Your program should return 1
Your program should compile without any warnings when using the -Wall gcc option

julien@ubuntu:~/c/0x00$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -o quote 101-quote.c
julien@ubuntu:~/c/0x00$ ./quote
and that piece of art is useful" - Dora Korpar, 2015-10-19
julien@ubuntu:~/c/0x00$ echo $?
1
julien@ubuntu:~/c/0x00$ ./quote 2> q
julien@ubuntu:~/c/0x00$ cat q
and that piece of art is useful" - Dora Korpar, 2015-10-19
julien@ubuntu:~/c/0x00$ grep printf < 101-quote.c
julien@ubuntu:~/c/0x00$ grep put < 101-quote.c
julien@ubuntu:~/c/0x00$

Repo:

GitHub repository: alx-low_level_programming
Directory: 0x00-hello_world
File: 101-quote.c
