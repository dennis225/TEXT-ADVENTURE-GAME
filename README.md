# TEXT-ADVENTURE-GAME

# GOAL
The goal of this project is to implement a text adventure game, called the Lost Island Adventure Game, using the C programming language. 

# DESCRIPTION
The project is a Lost Island Adventure Game where the Avatar (Player) is on a small deserted island in front of an abandoned 3-storeyed house. Around the player is barren land with no resources available and a big wide ocean. The objective of the game is to escape from the island. The only way the player can escape is through a small radio device located somewhere inside this building.

The player is given certain instructions and before starting the game and also educated about using commands such as "look", "go DIRECTION", "take ITEM", "drop ITEM", "Inventory" and so on. The player can also type in help at any point of the game to get back the instructions

The building has 3 floors: the first floor has 4 rooms, the second floor has 3 rooms and the third floor has 3 rooms (for a total of 10 rooms). Each room has at least one item ranging from a horseshoe magnet to a rustic key.

Each floor has certain clues, keys and items to guide the player to the next room and the floor above. For instance, using a hammer&nail item in Room 5 of the second floor opens a secret door through which the player can go up to the third floor. Also, there is a secret tunnel from the third floor to the first floor to retrieve the radio device and win the game!

# IMPLEMENTATION

The following functions are used:

1. void help(void)
takes in no parameters and displays the instructions of the game 

2. void printIntro(void)
takes in no parameters. It displays the game introduction, calls the void help(void) function, and asks the name of the player

3. struct room* initItemsAndRooms(void)
takes in no parameters. It declares, initializes and links each item (struct Items*) in its respective room. Similarly, it also declares, initializes and links each room (struct room*) according to the game map. 

4. void inventoryStr(struct Item* inventoryBag) 
takes in an Inventory Bag as its parameter (of type struct Item*) and displays all the Items and their descriptions in this Inventory Bag (by iterating through each item).


5. void itemNames(struct Item* itemList) 
takes in an itemList as its parameter (of type struct Item*) and displays all the Item names and their descriptions in this Item List (by iterating through each item).

6. void look(struct room* playerRooms)
takes in the current room position of the player (of type struct room*) and displays the description of the room and the items the current room has. If the player is outside the room, it will display the game start description.

7. int containsItem(char* name, struct Item* itemList) 
checks if a particular item is in the parameter itemList (of type struct Item*) by iterating through each item. If yes, it returns 1. Otherwise, it returns 0.

8. int numberOfItems(struct Item* itemList) 
takes in an itemList (of type struct Item*) and returns the number of items in this Item List.

9. struct room* move(struct room* current_room,char direction[30])
takes in two parameters: current room (of type struct room*) and the room direction (of type char). It returns the current room of the player after the player has moved to a certain direction.

10. struct room* go_directions(struct room* player_roomPtr, char items_dir[30], int* clue1, int* clue2, int* clue3)
takes in 5 parameters: current player room pointer (of type struct room*), item direction (of type char), clue1, clue2 and clue3 (of type int*). It returns the players room current pointer after moving it to another room and updating it. 

11. void take_drop(char *itemName,struct Item** itemOrigin,struct Item** itemDestination) 
takes in an itemName (of type char*), an itemOrigin (of type struct item**) and itemDestination (of type struct item**) and updates all the items that are taken and dropped by the Player. It deletes the item which has name as itemName in itemOrigin and adds it to itemDestination.



12. struct room* take(struct room* player_roomPtr, struct Item* player_inventory,char items_dir[30])
takes in current room (of type struct room*), Player Inventory (struct Item*) and Item Direction (of type char array) string as parameter. It uses take_drop() function to remove Item Direction from Player Room Pointer and add it to Player Inventory.

13. struct room* drop(struct room* player_roomPtr, struct Item* player_inventory,char items_dir[30])
takes in current room (of type struct room*), Player Inventory (struct Item*) and Item Direction (char array) as parameter. It uses take_drop() function to remove Item Direction from Player Inventory and add it to Player Room Pointer.


14. struct room* use(struct room* player_roomPtr, struct Item* player_inventory,char items_dir[30],int* clue1,int* clue2,int*clue3,int* win,char name[20]) 
takes in current room (of type struct room*), Player Inventory (struct Item*), Item Direction (char array), Clue1 state (int*), Clue2 state (int*), Clue3 state (int*), Win state (int*) and Name (char array) as parameter. If the player uses the correct item in the correct room, the function updates the respective clues to help the player reach the winning state

15. struct Item* free_items(struct Item* items)
takes in an item (of type struct Item*) as parameter. It frees the memory of each item in the struct Item(items), making each item NULL

16. void free_room(struct room* roomlists)
takes in a room list (of type struct room*) as parameter. It frees the memory of each room in the struct room(lists

17. int main(void)
takes in no parameters and executes the program 



Local variables:

 int clue1 = false; //Clue 
 int clue2 = false; //Clue
 int clue3 = false; //Clue
 
 int win = false; //Win state
 
 int on = false; //to keep track of torch being off or on

 //Stores the current player inventory (Pointer)
  struct Item* player_inventory = item_details("BAG","A bagpack to keep items",NULL);

 //Stores room 1 (Pointer)
  struct room* r1 = initItemsAndRooms();

//Stores the current player room (Pointer)
  struct room* player_roomPtr;

//Creates a copy to store the current player room (Pointer) of outside the building
  struct room* player_roomPtrCopy;

//Stores player name
  char player_name[20];


Global variables:

//true or false

#define true 1
#define false 0

//To enter command

#define Enter_Command printf("\n Enter command: ")
