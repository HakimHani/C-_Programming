#include <stdio.h>
#include <stdlib.h>

// sum even and odd numbers given an interger n
int main() {
	int n = 10;
	int sum_even = 0;
	int sum_odd = 0;
	for (int i = 0; i <= n
; i++){
		if(i % 2 == 0) sum_even += i;
		else sum_odd += i;
	
	}
	printf("even sum is: %d\n", sum_even);
	printf("odd sum is: %d\n", sum_odd);
}
