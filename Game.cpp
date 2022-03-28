#include "Game.h"
#include <format>
#include <vector>

using namespace std;

/*
* Construct the game, no player
*/
Game::Game() {

}

/*
* Construct the game, with player
*/
Game::Game( Character *c) {
	player = c;
}

/*
* Play the game, returns rtue if you win!
*/
bool Game::Play() {
	if (player != NULL) {
		io.messageOut("Playing as \"" + player->getName() + "\"");
	}
	io.messageOut("The funeral home has a new night watchman, a young guy named TOM. His job is very simple, it is to look after the dead. It was very windy that night, it was pitch black outside, and there was no moon in the sky. In the backyard of the corpse, there was nothing but the rustling of leaves. There are rooms across a door from this morgue. Tom opened the door and walked on the dark path, he felt a voice calling him, the voice came from those rooms.\n\nOn the sidewalk outside the house, feeling a little anxious, he saw a white rose on the ground.");

	// game loop here
	bool playing = true;
	while (playing) {
		auto words = vector<validWords>();
		io.getInput(words);

		for (validWords word : words) {
			switch (word) {
			case validWords::look:
				io.messageOut("looking around");
				break;
			case validWords::forwards:
				io.messageOut("going forwards");
				break;
			case validWords::right:
				io.messageOut("going right");
				break;
			case validWords::left:
				io.messageOut("going left");
				break;
			case validWords::pickup:
				io.messageOut("pick up item");
				break;
			case validWords::drop:
				io.messageOut("drop item");
				break;
			default:
				return true;
			}
		}
		return true;
	}
	return true;
}