#include <stdio.h>
#include <stdlib.h>

int swap(int *a, int *b);

int main() {
  int test1 = 0;
  int test2 = 0;

  // getting inputs
  printf("enter 2 numbers: \n");
  printf("a: ");
  scanf("%i", &test1);
  printf("b: ");
  scanf("%i", &test2);

  printf("\nOriginal a: %i and b: %i", test1, test2); 

  if (swap(&test1, &test2) == 1) 
     printf("\nSwapped to a: %i and b: %i", test1, test2); 
   

}


int swap(int *a, int *b) {
   if (a == NULL || b == NULL) 
      return 0;
   else
      *a = *a + *b;
      *b = *a - *b;
      *a = *a - *b;
      return 1;
}
