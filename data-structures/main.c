#include <stdio.h>
#include <stdlib.h>
/*struct person {
   int age;
   float weight;
   char name[30];
};

int main()
{
   struct person *ptr;
   int i, n;

   printf("Enter the number of persons: ");
   scanf("%d", &n);

   // allocating memory for n numbers of struct person
   ptr = (struct person*) malloc(n * sizeof(struct person));

   for(i = 0; i < n; ++i)
   {
       printf("Enter first name and age respectively: ");

       // To access members of 1st struct person,
       // ptr->name and ptr->age is used

       // To access members of 2nd struct person,
       // (ptr+1)->name and (ptr+1)->age is used
       scanf("%s %d", (ptr+i)->name, &(ptr+i)->age);
   }

   printf("Displaying Information:\n");
   for(i = 0; i < n; ++i)
       printf("Name: %s\tAge: %d\n", (*(ptr+i)).name, (ptr+i)->age);

   return 0;
}*/

typedef struct {

    int a;
    int b;
    int c;
} my_struct;


int main(int argc, char** argv) {

    my_struct* first = malloc(sizeof(my_struct));   
    first->a = 100; first->b = 101; first->c = 1000;

    my_struct* bb = malloc(sizeof(my_struct));  

    printf("first %d %d %d\n", first->a, first->b, first->c);
    *bb = *first;
    printf("second %d %d %d\n", bb->a, first->b, bb->c);


    first->a = 55; first->b = 55; first->c = 89;
    printf("second %d %d %d\n", bb->a, first->b, bb->c);
}
