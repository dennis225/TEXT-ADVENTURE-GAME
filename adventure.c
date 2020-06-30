#include "rooms.h"
#include<string.h>

#define true 1
#define false 0

#define Enter_Command printf("\n Enter command: ")

// The following function prints out the instructions of the game

void help(void){

  printf(" ->To play the game, you have to type in short phrases into the command prompt below. \n");
  printf(" ->For instance, look allows you to see around the room and go DIRECTION (north, south, east, west, up, down only) will take you in the direction you want to go. \n");
  printf(" ->As the game goes on, there will be various items that you can pick, use, and drop using the commands take ITEM, use ITEM, and drop ITEM. \n");
  printf(" ->You are required to enter the item names which are enclosed in brackets and are in bold letters, such as  drop BOTTLE  and  take PEN  \n");
  printf(" ->Typing inventory will show you what items you are carrying. \n");
  printf(" ->You have a bagpack as an inventory in which you can keep adding items you pick in the building.\n");
  printf(" ->Typing help will display the game instructions. \n");
  printf(" ->A small part of the game is using your imagination and typing in whatever commands you see fit. \n\n");

}

//The following function prints the game introduction, calls the void help(void) function and asks the player for their name

void printIntro(void){

  printf(" \t\t\t\t Welcome to Lost Island Adventure Game! \n\n");
  printf(" Before starting the game, let's go over a few instructions of the game: \n\n");
  help();
  printf("Awesome, lets start the game! \n");
  printf("What would you like to name your avatar? \n");

}

//The following function initializes struct Items, struct Rooms and establishes connections among the rooms with their respective items

struct room* initItemsAndRooms(void){

  //Declaration of different items in the rooms
  
  struct Item* items1;
  struct Item* items2;
  struct Item* items3;
  struct Item* items4;
  struct Item* items5;
  struct Item* items6;
  struct Item* items7;
  struct Item* items8;
  struct Item* items9;
  struct Item* items10;
  struct Item* items11;
  struct Item* items12;
  struct Item* items13;
  struct Item* items14;
  struct Item* items15;
  struct Item* items16;
  struct Item* items17;
  struct Item* items18;
  struct Item* items19;
  struct Item* items20;
  struct Item* items21;
  struct Item* items22;
  struct Item* items23;
  struct Item* items24;
  struct Item* items25;
  struct Item* items26;
  struct Item* items27;

  //Initializing the items with their respective name, description and pointer to the next item

  //Room 1 items
  items1 = item_details("BOTTLE", "A blue water bottle", NULL);
  items2 = item_details("SKEY", "A shiny silver Key", NULL);
  items3 = item_details("MAP1", "This is a map for the 1st floor. The floor has 4 rooms: room 1(Machine Room), room 2(Living Room), room 3(Dark Room), and room 4(Study Room). Room 2 is north of room 1. Room 4 is east of room 1. Room 3 is accessible from room 2. It is located east of room 2 and north of room 4. The door to room 4 from both room 1 and room 3 is locked and has same key to access it. There is a stair case from Room 3 which leads to second floor", NULL);
    
  //Room 2 items
  items4 = item_details("TORCH", "A grey torch", NULL);
  items5 = item_details("TRUNK", "A rustic trunk", NULL);
  items6 = item_details("COMPASS", "An all-seeing compass", NULL);
    
  //Room 3 items
  items7 = item_details("KNIFE", "A big knife", NULL);
    
  //Room 4 items
  items8 = item_details("PEN", "A ball-point pen", NULL);
  items9 = item_details("PAPER", "A piece of crumbled paper", NULL);
  items10 = item_details("BOOK", "A mathematics book named 36 ways to improve your IQ", NULL);

  //Room 5 items
  items11 = item_details("MAGLASS", "A small magnifying glass", NULL);
  items12 = item_details("HAT", "A red hat", NULL);

  //Room 6 items
  items13 = item_details("HNAIL", "Hammer and nail", NULL);
  items14 = item_details("FAN", "A green fan", NULL);
  items15 = item_details("PIPE", "A lead pipe", NULL);
  items16 = item_details("BRUSH", "A paintbrush", NULL);

  //Room 7 items
  items17 = item_details("MAP2", "This is a map for the 2nd floor. The floor has 3 rooms: room 5-7 (Name of each room). Room 6 is west of room 7 and north of room 5.", NULL);
  items18 = item_details("COMB", "A brown Comb", NULL);
  items19 = item_details("PERFUME", "A Chanel Perfume", NULL);
  items20 = item_details("JBOX", "Jewellery Box", NULL);

  //Room 8 items
  items21 = item_details("MAP3", "This is a map of the third floor. The third floor has 3 rooms: room 8-10. Room 9 is north of room 8 and room 10 is east of room 9. You can go directly from room 8 to room 9 and from room 9 to room 10. (Look for final clues in these rooms!)", NULL);
  items22 = item_details("CGLASS", "Copper Glass", NULL);
  items23 = item_details("JACKET", "Fur jacket", NULL);

  //Room 9 items
  items24 = item_details("RKEY", "Rustic key", NULL);
  items25 = item_details("BKEY", "Black key", NULL);
  items26 = item_details("MAGNET", "Horseshoe Magnet", NULL);

  //Room 10 items
  items27 = item_details("PHONOGRAPH", "Music player", NULL);
  

  //Setting the pointer links of items in the respective rooms

  //Room 1 : items1,items2,items3
  struct Item* room1Items = items1;
  items1->next = items2;
  items2->next = items3;

  //Room 2 : items4,items5,items6
  struct Item* room2Items = items4;
  items4->next = items5;
  items5->next = items6;

  //Room 3 : items7
  struct Item* room3Items = items7;

  //Room 4 : items8,items9,items10
  struct Item* room4Items = items8;
  items8->next = items9;
  items9->next = items10;

  //Room 5 : items11,items12
  struct Item* room5Items = items11;
  items11->next = items12;

  //Room 6 : items13,items14,items15,items16
  struct Item* room6Items = items13;
  items13->next = items14;
  items14->next = items15;
  items15->next = items16;

  //Room 7 : items17,items18,items19,items20
  struct Item* room7Items = items17;
  items17->next = items18;
  items18->next = items19;
  items19->next = items20;

  //Room 8 : items21,items22,items23
  struct Item* room8Items = items21;
  items21->next = items22;
  items22->next = items23;
  
  //Room 9: items24,items25,items26
  struct Item* room9Items = items24;
  items24->next = items25;
  items25->next = items26;

  //Room 10 : items27
  struct Item* room10Items = items27;

  //Initializing the rooms with name, description, and items they contain
  
  struct room* r1 = room_details("Room 1 (Machine Room)","You are inside the house, specifically in Room 1. The room has broken machine parts lying on the floor and the walls are old and dusty. ", room1Items, NULL,NULL,NULL,NULL,NULL,NULL);

  struct room* r2 = room_details("Room 2 (Living Room)","The room has worn out ancient tapestries hanging on the walls, a fireplace and a small couch. On the tapestry you see written, The less you reveal, the more people can wonder ", room2Items, NULL,NULL,NULL,NULL,NULL,NULL);
    
  struct room* r3 = room_details("Room 3 (Dark Room)","The room is extremely dark except for one glowing lamp in the corner. Through its light, you see a staircase going upwards. ", room3Items, NULL,NULL,NULL,NULL,NULL,NULL);
    
  struct room* r4 = room_details("Room 4 (Study Room)","The room is covered with a brown carpet. In one corner of the room you can find a shelf stacked with mathematics books. On the opposite side you see a big desk desk with a few crumbled papers lying around. ", room4Items, NULL,NULL,NULL,NULL,NULL,NULL);
    
  struct room* r5 = room_details("Room 5 (Painting Room)","This room is covered is paintings, portraits and sketches. Only one of the painting is broken a little - its frame is tilted to the left because of a loose nail attached to it. On the opposite wall, is written in calligraphy, Fix a fault to find the path ahead. ", room5Items, NULL,NULL,NULL,NULL,NULL,NULL);
    
  struct room* r6 = room_details("Room 6 (Storage Room)", "You see a pile of boxes and wooden planks around you. The floor is covered in all shades of paint with a bunch of unused furniture.",room6Items, NULL,NULL,NULL,NULL,NULL,NULL);
    
  struct room* r7 = room_details("Room 7(Dressing Room)","You can see a fancy pink dressing table surrounding which are multiple mirrors. On the floor and on the table, there are stylish gowns colored from tangerine to olive to beige. ", room7Items, NULL,NULL,NULL,NULL,NULL,NULL);

  struct room* r8 = room_details("Room 8 (Jewel Room)","The room is covered spiderwebs and cracked walls. On the floor, you see plenty of gold coins, precious stones and a big tiger skin hanging from the wall. ", room8Items, NULL,NULL,NULL,NULL,NULL,NULL);
    
  struct room* r9 = room_details("Room 9 (Bed Room)","You are in a big room with a queen sized bed, with a huge table and chair in one corner. There is rugged wooden floor covering the entire room. ", room9Items, NULL,NULL,NULL,NULL,NULL,NULL);

  struct room* r10 = room_details("Room 10 (Attic Room)"," You are in a small attic room, there are ceramic square tiles all the over the floor. Each tile is unique and has a picture of a horse. However, one plain grey tile and seems to have a different material, like a polished steel.", room10Items, NULL,NULL,NULL,NULL,NULL,NULL);
    
  //Setting the pointer links among the rooms so as to create the builiding structure
    
  //First floor
  r1->north = r2;
  r1->east = r4; // secret path
  r2->south = r1;
  r2->east = r3;
  r3->west = r2;
  r3->south = r4; //secret path
  r3->up = r7;
  r4->west = r1;
  r4->north = r3;

  //Second floor
  r5->up = r8; //secret path
  r5->north = r6;
  r6->south = r5;
  r6->east = r7;
  r7->west = r6;
  r7->down = r3;

  //Third floor
  r8->north = r9;
  r9->east = r10;
  r9->south = r8;
  r10->west = r9;
  r10->down = r2; //secret path
  
  return r1;
}

//The following function prints the items in player's inventory

void inventoryStr(struct Item* inventoryBag){
  struct Item *inventoryItem = inventoryBag;
  while(inventoryItem != NULL){
    printf("\n Item : %s\n",inventoryItem->name);
    printf("\n Description : %s\n",inventoryItem->description);
    inventoryItem = inventoryItem->next;
  }
  return;
}

//The following function prints the item names in the specified list of struct Items(itemList)

void itemNames(struct Item* itemList){
  struct Item* current = itemList;
  char* string;
  while(current != NULL){
    printf("\n Item: %s ",current->name);
    printf("\n Description: %s ",current->description);
    current = current->next;
  }
}

//The following function prints the description of player's current room and the items present in it when look command is entered

void look(struct room* playerRooms){
  if(playerRooms->items == NULL){
    printf("\n %s\n",room_description(playerRooms));
  }
  else{
    printf("\n %s\n",room_description(playerRooms));
    if(strcmp(playerRooms->roomName,"Outside the building")==0){
      return;
    }
    printf("\n There are following items in the room: ");
    itemNames(playerRooms->items);
  }
}

//The following function returns 1 if the player's inventory or player's current room contains the item, 0 otherwise

int containsItem(char* name, struct Item* itemList){
  struct Item* current = itemList;
  while(current != NULL){
    if(strcasecmp(current->name,name) == 0){
      return 1;
    }
    current = current->next;
  }
  return 0;
}

//The following function returns the number of items in the specified list of struct Items (itemList)

int numberOfItems(struct Item* itemList){
  struct Item* current = itemList;
  int count = 0;
  while(current != NULL){
    current = current->next;
    count++;
  }
  return count;
}

//The following function moves the player's room pointer to another room depending on the direction

struct room* move(struct room* current_room,char direction[30]){
  
  if(strcasecmp(direction,"north")==0){
    return (current_room->north);
  }
  else if(strcasecmp(direction,"south")==0){
    return (current_room->south);
  }
  else if(strcasecmp(direction,"east")==0){
    return (current_room->east);
  }
  else if(strcasecmp(direction,"west")==0){
    return (current_room->west);
  }
  else if(strcasecmp(direction,"up")==0){
    return (current_room->up);
  }
  else if(strcasecmp(direction,"down")==0){
    return (current_room->down);
  }
  else{
    return (current_room);
  }

}

/*
- The following function returns the player's room pointer(player_roomPtr) after moving it to another room and updating it
- The function checks for invalid direction entered and displays the appropriate message
- For locked rooms and secret paths, the function doesn't allow the player to move in that direction unless the respective clues are used
  */

struct room* go_directions(struct room* player_roomPtr, char items_dir[30], int* clue1, int* clue2, int* clue3){
  
    if(!(strcasecmp(items_dir,"north")==0 || strcasecmp(items_dir,"south")==0 || strcasecmp(items_dir,"east")==0 || strcasecmp(items_dir,"west")==0 || strcasecmp(items_dir,"up")==0 || strcasecmp(items_dir,"down")==0)){

        printf(" \n Invalid direction! Please try again! \n");
        return player_roomPtr;

      }
    else if(move(player_roomPtr,items_dir)==NULL){

        printf("\n There's no way in that direction! Please try again \n");
        return player_roomPtr;

      }
    else{

        if(strcasecmp(player_roomPtr->roomName, "Room 1 (Machine Room)")==0 && strcasecmp(items_dir,"east")==0 && *clue1 == false){
          printf(" \n The door to room 4 is locked! \n CLUE: Think about an item in room 1 which you can use to access room 4");
          return player_roomPtr;
        }
        else if(strcasecmp(player_roomPtr->roomName, "Room 3 (Dark Room)")==0 && strcasecmp(items_dir,"south")==0 && *clue1 == false){
          printf(" \n The door to room 4 is locked! \n CLUE: Think about an item in room 1 which you can use to access room 4");
          return player_roomPtr;
        }
        else if(strcasecmp(player_roomPtr->roomName, "Room 5 (Painting Room)")==0 && strcasecmp(items_dir,"up")==0 && *clue2 == false){
          printf(" \n There's no way up there yet! \n CLUE: Think about an item in room 6 which you can use in room 5 to fix a defect");
          return player_roomPtr;
        }
        else if(strcasecmp(player_roomPtr->roomName, "Room 10 (Attic Room)")==0 && strcasecmp(items_dir,"down")==0 && *clue3 == false){
          printf(" \n There's no way down there! \n CLUE: Think about an item in room 9 which you can use in room 10 appropriately");
          return player_roomPtr;
        }
        else{
          player_roomPtr = move(player_roomPtr, items_dir);
          printf("\n You are in %s\n",player_roomPtr->roomName);
          return player_roomPtr;
        }

    }
  
}

/* 
- The following function has dual use of dropping and taking items in the game
- The function deletes an item in itemOrigin with name as itemName and adds it to itemDestination
*/

void take_drop(char *itemName,struct Item** itemOrigin,struct Item** itemDestination){

  char* itemDescr;
  char* itemName1;
  struct Item* currentDrop = *itemOrigin;
  if(strcasecmp(itemName,currentDrop->name) == 0){
    itemDescr = currentDrop->description;
    itemName1=currentDrop->name;
    *itemOrigin = currentDrop->next;
  }
  else {
    struct Item* previous=NULL;
    while(currentDrop != NULL){
      if(strcasecmp(itemName,currentDrop->name) == 0){
        itemDescr = currentDrop->description;
        itemName1=currentDrop->name;
        previous->next = currentDrop->next;
        break;
      }
      previous = currentDrop;
      currentDrop = currentDrop->next;
    }
  }
  struct Item* deletedItem;
  deletedItem = item_details(itemName1,itemDescr,NULL);
  
   if(*itemDestination==NULL){
     *itemDestination = deletedItem;
     return;
  }

  struct Item* currentTake = *itemDestination;
  while(currentTake->next!= NULL){
    currentTake = currentTake->next;
  }
  currentTake->next=deletedItem;
}

/* 
- The following function uses take_drop(...) function to remove an item named as items_dir[30] from player_roomPtr and add it to player_inventory
- If the user tries to take Trunk then the function doesn't allow the it to be taken as it has the final clue(radio device) for winning the game
*/

struct room* take(struct room* player_roomPtr, struct Item* player_inventory,char items_dir[30]){
  if(containsItem(items_dir,player_roomPtr->items)==1){

        if(numberOfItems(player_inventory)>8){
           printf("\n You cannot carry more than 8 items in your bag. Try dropping some item(s) and Try Again! \n");
           return player_roomPtr;
        }
        
        if(strcasecmp(items_dir,"TRUNK")==0){
          printf("\n Too heavy to pick up! Try again");
          return player_roomPtr;
        }
        take_drop(items_dir,&(player_roomPtr->items),&(player_inventory));
        printf("\n Item Taken : %s",items_dir);
      }

      else{
        printf("There's no such item in the room. Please try again");
        return player_roomPtr;
      }
      
      return player_roomPtr;
}

/* 
- The following function uses take_drop(...) function to remove an item named as items_dir[30] from player_inventory and add it to player_roomPtr
- If the user tries to drop Bag then the function doesn't allow it to be dropped as it is the player's inventory by default and is used to carry the items
 */

struct room* drop(struct room* player_roomPtr, struct Item* player_inventory,char items_dir[30]){

if(containsItem(items_dir,player_inventory)==1){

         if(strcasecmp(items_dir,"BAG")==0){
           printf("\n You cannot drop the bag!");
           return player_roomPtr;
         }
        take_drop(items_dir,&(player_inventory), &(player_roomPtr->items));
        printf("\n Item dropped : %s",items_dir);
      }
      else{
        printf("There's no such item in your inventory. Please try again");
        return player_roomPtr;
      }

      return player_roomPtr;

}

/*
- If the player uses the correct items in the correct room (for example SKEY in room 1 or room 3 so as to unlock the door to room 4) then the following function updates the clues for getting the player closer to winning game state
- If the user enters to use any MAP then the MAP description is displayed
- For other miscellaneous items which don't lead to the end game stae, the function displays appropriate message
 */

struct room* use(struct room* player_roomPtr, struct Item* player_inventory,char items_dir[30],int* clue1,int* clue2,int*clue3,int* win,int * on,char name[20]){

      if(containsItem(items_dir, player_inventory)==1) {

        if((strcasecmp(player_roomPtr->roomName,"Room 1 (Machine Room)")==0 || strcasecmp(player_roomPtr->roomName,"Room 3 (Dark Room)")==0) && strcasecmp(items_dir,"SKEY")==0)
        {
          printf("\n Bravo! You have unlocked the door to room 4!");
          *clue1=true;

        }
        else if(strcasecmp(player_roomPtr->roomName,"Room 5 (Painting Room)")==0 && strcasecmp(items_dir,"HNAIL")==0){
          printf("\n Woah! You have found a new path from room 5 to room 8 upwards!");
          *clue2=true;
          player_roomPtr->description = "This room is covered in paintings, portraits and sketches. On the opposite wall, is written in calligraphy, Fix a fault to find the path ahead. However, all the painting are fixed!";

        }
        else if(strcasecmp(player_roomPtr->roomName,"Room 10 (Attic Room)")==0 && strcasecmp(items_dir,"MAGNET")==0){
          printf("\n Superb! You have discovered a chimney tunnel that leads from room 10 to room 2 downwards!");
          *clue3=true;
        }
        else if(strcasecmp(player_roomPtr->roomName,"Room 2 (Living Room)")==0 && strcasecmp(items_dir,"RKEY")==0){
          printf("\n CONGRATS %s, YOU HAVE WON! You have unlocked the rustic trunk and found the Radio Device! \n By pressing the button, you have sent out a transmission signal and called the nearest ship, which is on its way! Relax and wait for the ship!!!",name);
          *win = true;
        }
        else if(strcasecmp(items_dir,"MAP1")==0 || strcasecmp(items_dir,"MAP2")==0 || strcasecmp(items_dir,"MAP3")==0){
          
          if(strcasecmp(items_dir,"MAP1")==0 ){
            printf("\n This is a map for the 1st floor. The floor has 4 rooms: room 1(Machine Room), room 2(Living Room), room 3(Dark Room), and room 4(Study Room). Room 2 is north of room 1. Room 4 is east of room 1. Room 3 is accessible from room 2. It is located east of room 2 and north of room 4. The door to room 4 from both room 1 and room 3 is locked and has same key to access it. There is a stair case from Room 3 which leads to second floor");
          }
          else if(strcasecmp(items_dir,"MAP2")==0){
           printf("\n This is a map for the 2nd floor. The floor has 3 rooms: room 5-7 (Name of each room). Room 6 is west of room 7 and north of room 5.");
          }
          else{
            printf("\n This is a map of the third floor. The third floor has 3 rooms: room 8-10. Room 9 is north of room 8 and room 10 is east of room 9. You can go directly from room 8 to room 9 and from room 9 to room 10. (Look for final clues in these rooms!)"); 
          }
        }
        else{   

          if(strcasecmp(items_dir,"SKEY")==0 || strcasecmp(items_dir,"HNAIL")==0 || strcasecmp(items_dir,"MAGNET")==0 || strcasecmp(items_dir,"RKEY")==0){
          printf("\n There's no use of that item yet! Try using it again in a different room");
          }
          else if(strcasecmp(items_dir,"BOOK")==0){
          printf("\n The book is full of empty pages. Seems like the author didnt complete it! Well, carefully reading its title (36 Ways to improve your IQ) might help you.");
          }
          else if(strcasecmp(items_dir,"PAPER")==0){
          printf("\n The text on the paper reads : Is the square root of improving your intelligence the same as irrational times irrational? If its real youll find yourself upstairs in its four-walled space ");
          }
          else if(strcasecmp(items_dir,"BOTTLE")==0){
          printf("\n You have quenched your thirst! Now, time to get back to work");
          }
          else if(strcasecmp(items_dir,"TORCH")==0){
            if(*on == false){
              printf("\n The torch is switched on.");
              if(strcmp(player_roomPtr->roomName,"Room 3 (Dark Room)")==0){
              printf("\n The room is now bright");
              }
              *on = true;
              
            }
            else{
              printf("\n You have now switched off the torch.");
              *on = false;
            }
          
          }
          else{
          printf("\n There's no use of that item to lead you anywhere in the game...");
          }
        }
        return player_roomPtr;
        
      } 

      else{
        printf("\n There's no such item in your inventory! Please try again.");
        return player_roomPtr;
      } 

}

// The following function frees the memory of each item in the struct Item(items), making each item NULL

struct Item* free_items(struct Item* items){
    if(items!=NULL){
      items = free_items(items->next);
      free(items);
    }
    return NULL;
 }

//The following function frees the memory of each room in the struct room(roomlists)

void free_room(struct room* roomlists){
    struct room* currentRoomPtr = roomlists;
    currentRoomPtr = currentRoomPtr->south;
    //room 2 free
    roomlists->items=free_items(roomlists->items);
    roomlists->north=NULL;
    roomlists->east=NULL;
    roomlists->west=NULL;
    roomlists->south=NULL;
    roomlists->up=NULL;
    roomlists->down=NULL;
    free(roomlists);
    
    // room 1 free
    struct room* currentNextPtr = currentRoomPtr->east;
    currentRoomPtr->items=free_items(currentRoomPtr->items);
    currentRoomPtr->north=NULL;
    currentRoomPtr->east=NULL;
    currentRoomPtr->west=NULL;
    currentRoomPtr->south=NULL;
    currentRoomPtr->up=NULL;
    currentRoomPtr->down=NULL;
    free(currentRoomPtr);
    
    // room 4 free
    currentRoomPtr=currentNextPtr->north;
    currentNextPtr->items=free_items(currentNextPtr->items);
    currentNextPtr->north=NULL;
    currentNextPtr->east=NULL;
    currentNextPtr->west=NULL;
    currentNextPtr->south=NULL;
    currentNextPtr->up=NULL;
    currentNextPtr->down=NULL;
    free(currentNextPtr);

    //room 3 free
    currentNextPtr=currentRoomPtr->up;
    currentRoomPtr->items = free_items(currentRoomPtr->items);
    currentRoomPtr->north=NULL;
    currentRoomPtr->east=NULL;
    currentRoomPtr->west=NULL;
    currentRoomPtr->south=NULL;
    currentRoomPtr->up=NULL;
    currentRoomPtr->down=NULL;
    free(currentRoomPtr);

    //room 7 free
    currentRoomPtr=currentNextPtr->west;
    currentNextPtr->items=free_items(currentNextPtr->items);
    currentNextPtr->north=NULL;
    currentNextPtr->east=NULL;
    currentNextPtr->west=NULL;
    currentNextPtr->south=NULL;
    currentNextPtr->up=NULL;
    currentNextPtr->down=NULL;
    free(currentNextPtr);

    //room 6 free
    currentNextPtr=currentRoomPtr->south;
    currentRoomPtr->items=free_items(currentRoomPtr->items);
    currentRoomPtr->north=NULL;
    currentRoomPtr->east=NULL;
    currentRoomPtr->west=NULL;
    currentRoomPtr->south=NULL;
    currentRoomPtr->up=NULL;
    currentRoomPtr->down=NULL;
    free(currentRoomPtr);

    //room 5 free
    currentRoomPtr=currentNextPtr->up;
    currentNextPtr->items=free_items(currentNextPtr->items);
    currentNextPtr->north=NULL;
    currentNextPtr->east=NULL;
    currentNextPtr->west=NULL;
    currentNextPtr->south=NULL;
    currentNextPtr->up=NULL;
    currentNextPtr->down=NULL;
    free(currentNextPtr);

    //room 8 free
    currentNextPtr= currentRoomPtr->north;
    currentRoomPtr->items=free_items(currentRoomPtr->items);
    currentRoomPtr->north=NULL;
    currentRoomPtr->east=NULL;
    currentRoomPtr->west=NULL;
    currentRoomPtr->south=NULL;
    currentRoomPtr->up=NULL;
    currentRoomPtr->down=NULL;
    free(currentRoomPtr);

    //room 9 free
    currentRoomPtr=currentNextPtr->east;
    currentNextPtr->items=free_items(currentNextPtr->items);
    currentNextPtr->north=NULL;
    currentNextPtr->east=NULL;
    currentNextPtr->west=NULL;
    currentNextPtr->south=NULL;
    currentNextPtr->up=NULL;
    currentNextPtr->down=NULL;
    free(currentNextPtr);

    //room 10 free
    currentRoomPtr->items=free_items(currentRoomPtr->items);
    currentRoomPtr->north=NULL;
    currentRoomPtr->east=NULL;
    currentRoomPtr->west=NULL;
    currentRoomPtr->south=NULL;
    currentRoomPtr->up=NULL;
    currentRoomPtr->down=NULL;
    free(currentRoomPtr);

}

//Executes the program

int main(void) {
  
  //clue state

  int clue1 = false;
  int clue2 = false;
  int clue3 = false;
  
  int on = false; // state of torch being on or off

  // win game state

  int win = false;             
  
  struct Item* player_inventory = item_details("BAG","A bagpack to keep items",NULL);
  
  struct room* r1 = initItemsAndRooms();
  
  struct room* player_roomPtr = room_details("Outside the building","You are standing on a small deserted island in front of an abandoned 3-storeyed house.\n Around you is barren land with no resources available.\n Surrounding the small island is a big wide ocean through which you cannot escape.\n The only way to get out of the island is through a small radio device located somewhere inside this building. The buliding is in north of you. ", player_inventory,r1,NULL,NULL,NULL,NULL,NULL);

  struct room* player_roomPtrCopy = player_roomPtr; 

  char player_name[20];

  printIntro();

  scanf("  %s",player_name);
    
  printf("\n Good luck %s ! \n\n\n",player_name);

    printf(" You are standing on a small deserted island in front of an abandoned 3-storeyed house.\n Around you is barren land with no resources available.\n Surrounding the small island is a big wide ocean through which you cannot escape.\n The only way to get out of the island is through a small radio device located somewhere inside this building. The building is in north of you. ");
  
  do{
  
    char command[30], items_dir[30];

    Enter_Command;
    
    scanf("%s",command);
    
    if(strcasecmp(command,"Inventory")==0){
     inventoryStr(player_inventory); 
    }
    else if(strcasecmp(command,"look")==0){
      look(player_roomPtr);
    }
    else if(strcasecmp(command,"help")==0){
      help();
    }
    else if(!(strcasecmp(command,"Inventory")==0||strcasecmp(command,"look")==0||strcasecmp(command,"go")==0||strcasecmp(command,"use")==0||strcasecmp(command,"drop")==0||strcasecmp(command,"take")==0)){
      
      printf("\n I didn't get that! Please try entering a valid command \n");
      continue;

    }
    else{

      scanf("%s",items_dir);  
      if(strcasecmp(command,"go")==0){
      player_roomPtr = go_directions(player_roomPtr,  items_dir,  &clue1,  &clue2, &clue3);
    }

    else if(strcasecmp(command,"take")==0){
       player_roomPtr = take(player_roomPtr,player_inventory,items_dir);
    }
    else if(strcasecmp(command,"drop")==0){
      player_roomPtr = drop(player_roomPtr,player_inventory,items_dir);
    }
    else if(strcasecmp(command,"use")==0){
      player_roomPtr = use(player_roomPtr,player_inventory,items_dir,&clue1,&clue2,&clue3,&win,&on,player_name);
    }
    else{
      printf("\n I didn't get that! Please try entering a valid command \n");
      continue;
    }
    }

  }while(win==false); 
  
  player_inventory = free_items(player_inventory);
  
  free(player_roomPtrCopy); //frees the memory for outside the building
  player_roomPtrCopy = NULL;

  free_room(player_roomPtr);
  player_roomPtr = NULL;

  free(r1);
  r1 = NULL;
  
  return 0;
}


