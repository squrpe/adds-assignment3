#include "Reverser.h"

#include <iostream>
#include <cmath>

using namespace std;

int Reverser::reverseDigit(int value) {

    // error handling
    if (value < 0) {
        return -1;
    }

    // base case
    if (value < 10) {
      return value;
   } else {
    // recursive case
        int last = value % 10;
        int q = value / 10;
        int reversedQ = reverseDigit(q);
        return last * pow(10, floor(log10(reversedQ))+ 1) + reversedQ;
   }

    // int reversed = 0;
    // while (value != 0) {
    //     reversed = reversed * 10 + value % 10;
    //     value /= 10;
    // }
    // return reversed;
}


string Reverser::reverseString(string characters) {

    // base case
    if (characters.length() <= 1) {
        return characters;
    }

    // recursive case
    char firstChar = characters[0];
    characters = characters.substr(1);
    std::string reversedString = reverseString(characters);

    // check for error
    if (reversedString == "ERROR") {
        return "ERROR";
    } else {
        return reversedString + firstChar;
    }

    // string reversed = "";
    // for (int i = characters.length() - 1; i >= 0; i--) {
    //     reversed += characters[i];
    // }
    // return reversed;
}