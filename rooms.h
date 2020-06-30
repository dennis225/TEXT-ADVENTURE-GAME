#include "items.h"

struct room{
  char* roomName;
  char* description;
  struct Item *items;
  struct room *north;
  struct room *south;
  struct room *west;
  struct room *east;
  struct room *up;
  struct room *down;
};

struct room* room_details(char* name,char* description, struct Item* items, struct room *north, struct room *south, struct room *west, struct room *east, struct room *up, struct room *down);

char* room_description(struct room *r);

struct Item* room_items(struct room *r);

// void room_exit_north(struct room* current, struct room* other);
