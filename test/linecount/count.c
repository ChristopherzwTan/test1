#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

  int i = 0;
  FILE *fp;
  int count = 0;

  printf("filename: %s\n", argv[1]);

  fp = fopen(argv[1], "r");

  if (fp) {
    while ((i = fgetc(fp)) != EOF) {
      putchar(i);
      if(i == '\n')
        count++;
    }
  }
  else {
    printf("Error opening file...\n");
    return 1;
  }


  fclose(fp);

  printf("\n\nThe file %s has %i lines.", argv[1], count);

  return 0;

}
