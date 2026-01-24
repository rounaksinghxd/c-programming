//Basics of C Programming
/*
C Programming is also known as Mother of all Programming languages.
Developed in the early 1970s by Dennis Ritchie at Bell Labs,
it’s a middle-level language that balances the power of low-level assembly with the readability of high-level languages.
*/

//The Basic Structure of C
#include<stdio.h> 
int main() 
{ // { } (The Body): Everything inside these curly braces is the actual "work" the program performs.
 printf("Hello World");
 return 0;
}
/* Use of # in C known as the Preprocessor Directive Indicator.
It tells the compiler that these lines need to be handled before the actual compilation of the code begins.
include (The Importer): This is the most common use. It tells the compiler to take the entire contents of a header file and paste it into your program.
#include <stdio.h>: Used for standard Input/Output (like printf).
 <>: System Directory
stdio.h: current directory also found in the system directory.
std: standard
io: input/output
.h: header

    int main() is the execution starting point.
    You can also use void main()
void means "nothing." You are telling the OS that the program will finish,
but it won't give any feedback on whether it succeeded or failed. 
int main() is the execution starting point.
Without it, the computer would have your code but no idea which line to run first.
int (The Return Type): This stands for "integer." It tells the operating system that when the program finishes,
it will send back a whole number (usually 0) to report whether it ran successfully or crashed.
main (The Name): This is a reserved keyword. The C compiler specifically looks for a function with this exact name to begin execution.
() (The Parameters): These parentheses can hold arguments if you want to pass data into your program when you start it from a command line.
*/