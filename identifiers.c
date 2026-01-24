#include<stdio.h>
int main()
{
/*Identifiers allow us to name you give to entities like variables,
functions, structures, or arrays. Think of it as a label that helps the compiler identify a specific memory location or a block of code. 

You cannot use C Keywords (reserved words) as identifiers.
Keywords are words that already have a special meaning to the compiler, such as int, return, if, or while.

*/
int first_n, second_n, result;
printf("Enter the first number:");
scanf("%d", &first_n);
printf("Enter the second number:");
scanf("%d", &second_n);
result = first_n+second_n;
printf("The Output of the additon is: %d", result);
return 0;
}
//In this code we use "%d" which is known as Format specifer.
/*
Format Specifer: In C, a Format Specifier is a placeholder used in input and output functions (like printf and scanf).
It tells the compiler what type of data to expect and how to format it.
Common Format Specifiers:
Specifier               Data Type                        Example

%d or %i                int (integer)                    10, -5
%f                      float (decimal)                  3.14
%lf                     double (Long decimal)            3.1415478955
%c                      char (single character)          'A', '$'
%s                      string (array of characters)     "Hello"
%p                      Pointers (Memory Address)        0x7ffee                         

> Why Format Specifers are Important?
Computers store everything as binary (0 and 1).
Without a format specifier, the computer wouldn't know if a specific chunk of memory represents the number 65,
the character 'A', or a very small decimal. The specifier acts as a translator.

*/
