#pragma once

#include <string>
#include <vector>

// valid command words
enum class validWords {look, forwards, right, left, pickup, drop, fight };

/*
* Validates the input and convertes to the enum above.
*/
class InputValidation
{
public:
	bool validateInput(std::string input, std::vector<validWords>& result);
};

