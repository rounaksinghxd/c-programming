// Strings in C-Programming Language. 
/*
In C programming, a string is not a built-in data type but is instead a sequence of characters stored in a 1D char array that is terminated by a null character (\0). 
The compiler uses this null terminator to determine where the text actually ends in memory.

*/

#include<stdio.h>
int main(){
    char name[] ="Rounak"; 
    printf("My Name is: %s\n", name); //%s is a type of format specifier which is used when we are working in String.
    return 0;
}