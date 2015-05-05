#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Person{
  char *name;
  int age;
  int height;
  int weight;
};

struct Person *Person_create(char *name, int age, int height, int weight) {
  struct Person *who = malloc(sizeof(struct Person));
  assert(who != NULL);

  who->name = strdup(name);
  who->age = age;
  who->height = height;
  who->weight = weight;

  return who;
}

void Person_destroy(struct Person *who) {
  assert(who != NULL);

  free(who->name);
  free(who);
}

void Person_print(struct Person *who) {
  printf("Name: %s\n", who->name);
  printf("\tAge: %i\n", who->age);
  printf("\tHeight: %i\n", who->height);
  printf("\tWeight: %i\n", who->weight);
}
 

int main(int argc, char *argv[])
{
  
  struct Person *joe = Person_create("Joe Alex", 32,64,140);

  struct Person *frank = Person_create("Frank Blank",20,72,180);

  struct Person derp;
  derp.name = "Derp Herp";
  derp.age = 55;
  derp.height = 150;
  derp.weight = 70;

  printf("%s \n", derp.name);
  printf("\t%d\n", derp.age);
  printf("\t%d \n", derp.height);
  printf("\t%d \n", derp.weight);
  

  printf("Joe is at memory location %p:\n", joe);
  Person_print(joe);

  printf("Frank is at memory location %p:\n", frank);
  Person_print(frank);

  Person_destroy(joe);
  Person_destroy(frank);

  return 0;
}
