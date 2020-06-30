 
#include "items.h"


char *item_name(struct Item *item){
  if(item==NULL){
    return NULL;
  }
  return item->name;
}

char *item_description(struct Item *item){
  if(item==NULL){
    return NULL;
  }
  return item->description;
}

struct Item* item_details(char* name, char* description, struct Item *next){
  struct Item *itptr;
  itptr = (struct Item*) malloc(sizeof(struct Item));
  itptr->name = name;
  itptr->description = description;
  itptr->next = next;
  return itptr;
  
}

struct Item *item_next(struct Item *item){
  if(item==NULL){
    return NULL;
  } 
  return item->next;
}









