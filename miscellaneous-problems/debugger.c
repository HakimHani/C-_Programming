#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef void  (*PFUNC) (void);

// find the error caused by the code snippit below, which should cause a segmentation fault
int main(int argc, char *argv[], char *envp[]) {
	char body[] = { 0x90, 0x90, 0x90, 0xCc, 0xC3 };
	PFUNC pFunc = NULL;

	pFunc = (PFUNC) malloc (sizeof(body));
	memcpy((void*)pFunc, body, sizeof(body));
	pFunc();
	free((void*)pFunc);
	return 0;
}
