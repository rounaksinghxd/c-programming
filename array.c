/*  #Array:

1. An array is a collection of homogeneous element stored in continuous location.

2. Compared to the basic data type it is an aggregate or derived data types.

3. All the elements of an array occupy a set of contiguous memory location.
*/

//Why we use Array?
/*
To store a fixed-size, sequential collection of elements of the same data type in contiguous memory locations. 

1. We can use index or subscript to identify each element or location in the memory.
*/

//Key Characterstics of an Array:
/*
Fixed Size: Once you define the size of an array, you cannot change it during execution.

Same Data Type: All elements must be of the same type (e.g., all int or all float).

Index-Based: Accessing elements starts at index 0. If an array has 5 elements, the last index is 4.
*/

//Types of an Array:
/*
1> Number Array (Integer/Float):
A number array stores numeric values like integers (int) or decimals (float/double). These are typically used for calculations, scores, or coordinates.

Memory: Each number takes up a specific amount of space (usually 4 bytes for an int).

Initialization: int marks[3] = {90, 85, 70};

Accessing: You use a loop to perform math on each element.

2> Character Array:
A character array stores individual characters (char). It is essentially a list of symbols, letters, or digits treated as "text pieces."

Memory: Each character takes exactly 1 byte.

Initialization: char vowels[5] = {'A', 'E', 'I', 'O', 'U'};

Usage: You usually process these one by one (e.g., checking if a character is a punctuation mark).

3> String array:
String Array (String in C)In C, a String is actually just a special type of Character Array. 
The big difference is the Null Terminator (\0).
The Null Terminator: Every string must end with \0. 
This tells functions like printf where the word ends.
Automatic Sizing: If you write "Hello", 
C automatically adds the \0 at the end, making it 6 characters long ($5 \text{ letters} + 1 \text{ null}$).
Initialization: char name[] = "Gemini";
Difference: Unlike a basic character array, you can print a string all at once using %s.
*/