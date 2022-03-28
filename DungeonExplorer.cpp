// DungeonExplorer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include "Game.h"
#include "Character.h"

int main(int argc, char* argv[])
{
    // setup the game
    // first we need a character, your could pass the character name on the command line or ask it for it at the start of Play . . . lots of options.
    std::string name;
    if (argc == 2){
        name = argv[1];
    }
    else {
        name = "Not named";
    }
    Character character = Character(name.c_str());
    Game game = Game(&character);
    GameIO io = GameIO();
    if (game.Play()) {
        io.messageOut("You have WON!");
    }
    else {
        io.messageOut("Sorry you have lost :(");
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
