#include <stdio.h>
#include <stdlib.h>

struct Item{
  char* name;
  char* description;
  struct Item *next;
};

struct Item* item_details(char* name, char* description, struct Item *next);

char *item_name(struct Item *item);

struct Item *item_next(struct Item *item);

char *item_name(struct Item *item);


