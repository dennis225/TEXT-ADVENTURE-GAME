
#include "rooms.h"


char* room_description(struct room *r){
   if(r==NULL){
     return NULL;
   }
   return r->description;
} 

struct room* room_details(char* name, char* description, struct Item* items, struct room *north, struct room *south, struct room *west, struct room *east, struct room *up, struct room *down){
  struct room *roomptr;
  roomptr = (struct room*) malloc(sizeof(struct room));
  roomptr->roomName = name;
  roomptr->items = items;
  roomptr->description = description;
  roomptr->north = north;
  roomptr->south = south;
  roomptr->east = east;
  roomptr->west = west;
  roomptr->up = up;
  roomptr->down = down;
  return roomptr;
}



struct Item* room_items(struct room *r){
  if(r==NULL){
    return NULL;
  }
  return r->items;
}

// void room_exit_north(struct room* current, struct room* other) {
//   if(current == NULL){
//     return;
//   }
//   current->north = other;
// }


