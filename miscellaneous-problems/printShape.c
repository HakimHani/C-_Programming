#include <stdio.h>


void printShape(int min, int max){
	int temp = min;
	while(temp <= max){
	  if(temp < 10){
	    for(int i = 0; i < temp; i++){
	      printf("%d", min);
	    }
	  }
	  else {
	    for(int i = 0; i < temp; i++){
              printf("*");
            } 
          }

	  temp++;
	  printf("\n");
	}
	
	while(max >= min){
          if(max < 10){
            for(int i = 0; i < max; i++){
              printf("%d", max);
            }
          }
          else {
            for(int i = 0; i < max; i++){
              printf("*");
            } 
          }

          max--;
          printf("\n");
        }
}


int main() {
	printShape(6, 11);

	return 0;
}
