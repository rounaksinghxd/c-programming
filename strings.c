// Strings in C-Programming Language. 
/*
In C programming, a string is not a built-in data type but is instead a sequence of characters stored in a 1D char array that is terminated by a null character (\0). 
The compiler uses this null terminator to determine where the text actually ends in memory.

*/

#include<stdio.h>
int main(){
    char name[] ="Rounak"; /* This line declares a array name and intilize it with the string "Rounak".
    Internally, this creates an array like: {'R', 'o', 'u', 'n', 'a', 'k', '\0'}
The null character '\0' is automatically added at the end to terminate the string.
*/


    printf("My Name is: %s\n", name); //%s is a type of format specifier which is used when we are working in String.
    
    //Accessing the characters: We can access the character same as we do in array we have to use index.
    
    printf("%c\n", name[5]); //this line of code is used to print the index number 5 of name string.
    return 0;
}
