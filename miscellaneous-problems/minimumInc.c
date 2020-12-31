#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int compare(const void* a, const void* b){

	return ( *(int*)a - *(int*)b ); 
}

// find the minimum increments between two arrays to make the identical
int minimumInc(int * a, int * b, int n){
    // sort the two arrays using quick sort
    qsort(a, n, sizeof(int), compare); 
    qsort(b, n, sizeof(int), compare); 

    int result = 0;
    for (int i = 0; i < n; ++i) {
        result = result + abs(a[i] - b[i]); 
    }

    return result;
}

int main() {
    int a[] = { 3, 2, 2 };
    int b[] = { 3, 2, 2 };
    int n = sizeof(a) / sizeof(a[0]);
    printf("minimun number of increments: %d\n", minimumInc(a, b, n));
    return 0;
}
