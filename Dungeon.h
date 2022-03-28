#include <string>
#include <vector>
#include "Room.h"

class Dungeon {

private:
    std::vector<Room*> rooms;
    Room* currentRoom;
    bool move(RoomPos direction);

public:
    Dungeon();
    std::string Look();
    bool moveLeft();
    bool moveRight(); 
    bool moveFowards();
}; 
