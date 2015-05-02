#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int main()
{

   char* s = NULL;
   int i = 0;
   char temp;

   s = malloc(sizeof(*s));

   printf("Enter a string you wish to reverse: ");
   scanf("%s", s);

   printf("Entered string: %s\n", s);
   printf("Reversing string...\n");

   for (i = 0; i < (strlen(s)/2); i++) {
      temp = s[i];
      s[i] = s[strlen(s)-1-i];
      s[strlen(s)-1-i] = temp;
   }

   printf("\nReversed into: %s \n", s);
   free(s);

   return 0;
}
