#include "GameIO.h"
#include "InputValidation.h"
#include <string>
#include <iostream>

using namespace std;

GameIO::GameIO() {
	iv = InputValidation();
}

/*
* Output the message to the play followed by a new line.
*/
void GameIO::messageOut(const string theMessage) {
	cout << theMessage << endl;
}

/*
* Get the player input.
* Parameter input is the addrfess of a vector that will contian the validated player input.
* The vaidation class insures that the input is valid
*/
void GameIO::getInput(std::vector<validWords> &input) {
	while (true) {
		// get input from user
		string in = getRawInput();
		// vaidate with vaidation class add to vector
		if (iv.validateInput(in, input)) {
			return;
		}
		// if not valid report err with messageOut and repeat input
		messageOut("I don't even know where to begin with that.");
	}
}

string GameIO::getLastInput() {
	return str;
}


string GameIO::getRawInput() {
	cin >> str;
	return str;
}