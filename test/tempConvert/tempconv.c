#include <stdio.h>
#include <stdlib.h>

double celcius2fahrenheit(float celcius) {
  float f = (celcius * (9.0/5.0) + 32);
  return f;
}


int main(int argc, char *argv[]) {

  int i = 0;
  int start_temp = 0;
  int end_temp = 0;
  int step = 0;

  printf("Please give in a lower limit, limit >= 0: ");
  scanf("%d", &start_temp);

  while(start_temp < 0) {
    printf("\nERROR: lower limit is not >= 0. \n");
    printf("Please give in a lower limit, limit >= 0: ");
    scanf("%d", &start_temp);
  }

  printf("Please give in a higher limit, 10 > limit <= 50000: ");
  scanf("%d", &end_temp);

  while(end_temp < 10 || end_temp > 50000) {
    printf("\nERROR: upper limit is not > 10 or <= 50000. \n");
    printf("Please give in a higher limit, 10 > limit <= 50000: ");
    scanf("%d", &end_temp);
  }


  printf("Please give in a step, 0 < step <= 10: ");
  scanf("%d", &step);

  while(step < 0 || step > 10) {
    printf("\nERROR: step is < 0 or > 10.\n");
    printf("Please give in a step, 0 < step <= 10: ");
    scanf("%d", &step);
  }

  //printf("Start temp: %d \n", start_temp);
  //printf("End temp: %d \n", end_temp);
  //printf("Step size: %d \n", step);

  printf("\nCelcius        Fahrenheit\n");
  printf("-------        ----------\n");

  while(start_temp < end_temp) {
    printf("%f        %f\n", (float)start_temp, celcius2fahrenheit((float)start_temp));
    start_temp += step;
  }

  return 0;

}
