#include "InputValidation.h"
using namespace std;

/*
* validate the input string and populates the vecor result that was also passed.
*/
bool InputValidation::validateInput(string input, vector<validWords>& result) {
    vector<string> s = vector<string>();
    string word = "";
    for (auto x : input)
    {
        if (x == ' ')
        {
            s.push_back(word);
            word = "";
        }
        else {
            word += toupper(x);
        }
    }
    if (word != "") {
        s.push_back(word);
    }
    for (string w : s) {
        if ("LOOK" == w){
            result.push_back(validWords::look);
        }
        if ("FORWARDS" == w) {
            result.push_back(validWords::forwards);
        }
        else if ("RIGHT" == w) {
            result.push_back(validWords::right);
        }
        else if ("LEFT" == w) {
            result.push_back(validWords::left);
        }
        else if ("PICKUP" == w) {
            result.push_back(validWords::pickup);
        }
        else if ("DROP" == w) {
            result.push_back(validWords::drop);
        }
        else if ("FIGHT" == w) {
            result.push_back(validWords::fight);
        }
        else {
            return false;
        }
    }
	return true;
}