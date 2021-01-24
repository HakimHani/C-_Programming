#include <stdio.h>
#include <string.h>
#include <iostream>

using std::endl;

char* reverseString(char* str) {

	int len = strlen(str);
	char* strStart = str;
	char* strEnd = str +len -1;
	
	while(strEnd > strStart){
		char temp = *strStart;
		*strStart = *strEnd;
		*strEnd = temp;
		
		strStart++;
		strEnd--;
	}	
	return str;

}


int main() {
	
	char s[] = {"I am still here"};

	char* revString = reverseString(s);
	//printf("%s\n", revString);
	std::cout << revString << endl;
	
	return 0;

}

