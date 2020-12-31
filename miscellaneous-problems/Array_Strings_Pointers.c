#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void foo(char w[]){
	w++;
	printf("%c", *w);
	w++;
	printf("%c\n", *w);
}

// predict the output of the following code snipits
int main(int argc, char *argv[], char *envp[]) {
	char pTestStr[] = "Hello World";
	u_int32_t nAllocsize = sizeof(pTestStr);
	printf("nAllocsize: %u\n", nAllocsize);
	for(int i = 0; i < sizeof(pTestStr); i++) {
		pTestStr[i] = 'X';
		printf("%c", pTestStr[i]);	
	}	

	//#######################################################
	char *ptr;
	char myString[] = "abcdefg";
	ptr = myString;
	ptr = ptr + 5;
	printf("\nptr: %s\n", ptr);
	//######################################################
	char a[100];
	a[0] = 'a';
	a[1] = 'b';
	a[2] = 'c';
	a[3] = 'd';
	foo(a);	
	//######################################################
	char *p = "abcde";
	printf("%lu %lu %lu\n", sizeof(p), strlen(p), sizeof("abcde"));
	//######################################################
	union abc {
	  int a;
	  char c[6];
	};
	union abc u;
	printf("size of union: %lu\n", sizeof(u));
	//#####################################################
	int i = 10;
	int j = 2;
	printf("%d\n", printf("%d %d", i, j));
	//#####################################################
	int print;
	print = printf("Hello World");
	switch(print) {
	  case 1: printf("1");
	  case 11: printf("2");
	  case 12: printf("3");
	  default: printf("4\n");
	}
	return 0;
}



