#ifndef STRINGLIB_H
#define STRINGLIB_H

//Functions

size_t strCount(const char* str);

int strCompare(const char* str1, const char* str2);

char* strConcat(const char* str1, const char* str2);

int strSearch(const char* str, const char* subString);

void strReverse(char* str);

void strPad(char* str, int length, char symbol);

void strSplit(char* str, int position);

void strRemoveWhiteSpace(char* str);


#endif // !STRINGLIB_H
