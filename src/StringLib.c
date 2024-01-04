#include <stdio.h>
#include <memory.h>
#include <string.h>
#include "StringLib.h"

/*
The strCount function is a simple implementation of a string length function in C. It takes a pointer to a constant character array
(const char* str) as input and iterates through the characters of the string until it encounters the null terminator ('\0').
During this iteration, it increments a counter (length) for each character. The final count represents the length of the string,
and the function returns this count as a size_t value. This function essentially provides the number of characters in the input string,
excluding the null terminator.
*/
size_t strCount(const char* str)
{
	size_t length = 0;
	//iterate over str array until null terminator is encountered
	while (str[length] != '\0')
	{
		length++;
	}
	//return the length of the array
	return length;
}

/*
The strCompare function is a basic implementation of a string comparison function in C. It takes two pointers to constant character arrays (const char* str1 and const char* str2) as input and iterates through the characters of both strings until it encounters the null terminator ('\0') in either string. During this iteration, it compares corresponding characters in the two strings. If a difference is found, the function returns the difference between the ASCII values of the differing characters. If the loop completes without finding a difference, it returns the difference between the last characters encountered in the strings. The return value indicates whether the strings are equal (0), and if not, it provides information about the lexicographical relationship between the strings. This function is similar in behavior to the standard library function strcmp.
*/
int strCompare(const char* str1, const char* str2)
{
	//loops until both strings encountered the null terminator
	while (*str1 != '\0' && *str2 != '\0')
	{
		//Compares each string
		if (*str1 != *str2)
		{
			return(*str1 - *str2);
		}
		str1++;
		str2++;
	}
	return(*str1 - *str2);
}

/*
The strConcat function concatenates two strings (str1 and str2) in C, producing a new dynamically allocated string. It first checks for NULL pointers, returning NULL if any input is invalid. The function then determines the length of the resulting string, allocates memory, and concatenates the input strings. The result is a pointer to the dynamically allocated string. Users must free the memory when done using the result to prevent memory leaks.
*/
char* strConcat(const char* str1, const char* str2)
{
	if (str1 == NULL || str2 == NULL) {
		// Check for NULL pointers
		return NULL;
	}

	// Calculate the length of the resulting string
	size_t len1 = strCount(str1);
	size_t len2 = strCount(str2);
	size_t resultLength = len1 + len2 + 1; // +1 for the null terminator

	// Allocate memory for the concatenated string
	char* result = (char*)malloc(resultLength * sizeof(char));
	if (result == NULL) {
		// Handle memory allocation failure
		return NULL;
	}

	// Copy the contents of the first string
	strcpy(result, str1);

	// Concatenate the second string
	strcat(result, str2);

	return result;
}

/*
The strSearch function in C searches for a substring within a main string. It returns the position of the substring if found,
or -1 for invalid input or if the substring is not present in the main string.
*/
int strSearch(const char* str, const char* subString)
{
	// Check for NULL pointers
	if (str == NULL || subString == NULL) {
		return -1; // Indicate an error (e.g., invalid input)
	}

	// Iterate through the main string
	for (int i = 0; str[i] != '\0'; ++i) {
		int j = 0;

		// Check if the substring is present at the current position
		while (subString[j] != '\0' && str[i + j] == subString[j]) {
			++j;
		}

		// If the entire substring is found, return the position
		if (subString[j] == '\0') {
			return i;
		}
	}

	return -1; // Substring not found
}

/*
The strReverse function reverses the characters of a string in place by swapping characters from the beginning with those from the end until the indices meet in the middle.
The function modifies the original string directly.
*/
void strReverse(char* str)
{
	//gets length of string provided
	size_t length = strCount(str);
	size_t i, j;
	
	for (i = 0, j = length - 1; i < j; ++i, --j) {
		// Swap characters at positions i and j
		char temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
}

/*
The strPad function in C prints a string (str), followed by a specified symbol (symbol) repeated a specified number of times (length).
It then prints a newline character. The function is designed to visually pad the original string with the chosen symbol and newline.
*/
void strPad(char* str, int length, char symbol)
{
	//prints the string
	printf("%s", str);
	//prints the user chosen symbol the amount of times specified
	for (int i = 0; i < length; i++)
	{
		printf("%c", symbol);
	}
	//prints newline character
	printf("\n");
}

/*
The strSplit function in C checks for invalid input, including a NULL pointer or an out-of-bounds position in the string.
If the input is valid, it splits the string at the specified position by replacing characters from that position onward with a null character ('\0').
This function is designed to visually truncate the original string at the specified position.
*/
void strSplit(char* str, int position)
{
	if (str == NULL || position < 0 || position >= strCount(str)) {
		// Check for NULL pointer and valid position
		return;
	}

	// Split the string at the specified position
	for (int i = position; str[i] != '\0'; i++) {
		str[i] = '\0';
	}
}

/*
The strRemoveWhiteSpace function in C removes whitespace characters from a string in place. It checks for a NULL pointer and, if the input is valid, iterates through the string.
For each character, it checks if it is not a whitespace character using the isspace function. Non-whitespace characters are copied to the left, effectively removing whitespace.
Finally, the modified string is null-terminated at the new end. This function is designed to visually remove whitespace characters from the original string.
*/
void strRemoveWhiteSpace(char* str)
{
	if (str == NULL) {
		// Check for NULL pointer
		return;
	}

	int i, j;

	// Iterate through the string
	for (i = 0, j = 0; str[i] != '\0'; i++) {
		// If the current character is not a whitespace character
		if (!isspace((unsigned char)str[i])) {
			// Copy the non-whitespace character to the left
			str[j++] = str[i];
		}
	}

	// Null-terminate the modified string
	str[j] = '\0';
}
