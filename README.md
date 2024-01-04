# C String Manipulation Functions

A collection of basic string manipulation functions in C. These functions provide common string operations and can be used as building blocks for more complex programs.

## Functions

### 1. `strCount`

**Description:**
Counts the number of characters in a string, excluding the null terminator. The function takes a pointer to a constant character array (`const char* str`) as input and returns the length of the string.

### 2. `strCompare`

**Description:**
Compares two strings lexicographically. The function takes two pointers to constant character arrays (`const char* str1` and `const char* str2`) as input and returns an integer value indicating the lexicographical relationship between the strings.

### 3. `strConcat`

**Description:**
Concatenates two strings into a new dynamically allocated string. The function takes two pointers to constant character arrays (`const char* str1` and `const char* str2`) as input and returns a pointer to the concatenated string.

### 4. `strSearch`

**Description:**
Searches for a substring within a main string and returns the position. The function takes two pointers to constant character arrays (`const char* str` and `const char* subString`) as input and returns an integer representing the position of the substring.

### 5. `strReverse`

**Description:**
Reverses the characters of a string in place. The function takes a pointer to a character array (`char* str`) as input and modifies the original string by reversing its characters.

### 6. `strPad`

**Description:**
Prints a string followed by a specified symbol repeated a specified number of times and a newline character. The function takes a pointer to a character array (`char* str`), an integer length, and a character symbol as input.

### 7. `strSplit`

**Description:**
Splits a string at the specified position by replacing characters from that position onward with a null character. The function takes a pointer to a character array (`char* str`) and an integer position as input.

### 8. `strRemoveWhiteSpace`

**Description:**
Removes whitespace characters from a string in place. The function takes a pointer to a character array (`char* str`) as input and modifies the original string by removing whitespace characters.

## How to Use

1. **Clone the repository:**
    ```bash
    git clone https://github.com/Petrini-sDev/C-String-Library.git
    ```

2. **Include the necessary header file in your C program:**
    ```c
    #include "string_functions.h"
    ```

3. **Compile and run your program:**
    ```bash
    gcc your_program.c -o your_program
    ./your_program
    ```

## Contributing:

  Contributions are welcome! If you find issues or have suggestions for improvement, please open an issue or submit a pull request.

