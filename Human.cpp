// // #include <iostream>
// // using namespace std;

// // #include "Human.h"

// // Human::Human(string& name) : _name(name){
// //   char Human::makeMove() override {
// //     char move;

// //     do{
// //       cout << "Enter move: ";
// //     }
// //   }
// // }

// #include "Human.h"
// #include <iostream>
// // #include <cctype> // for toupper()

// HumanPlayer::HumanPlayer(const std::string& name) : _name(name) {}

// char HumanPlayer::makeMove() override {
//   char move;
//   do {
//     std::cout << _name << ", enter your move (R for Rock, P for Paper, S for Scissors): ";
//     std::cin >> move;
//     // move = toupper(move); 
//   } while (move != 'R' && move != 'P' && move != 'S');
//   return move;
// }

// std::string HumanPlayer::getName() const override {
//   return _name;
// }

// Human.cpp

#include "Human.h"
#include <iostream>

// Constructor implementation
Human::Human(const std::string& name) : playerName(name) {}

char Human::makeMove() {
    char move;
    std::cout << "Enter move (" << playerName << "): ";
    std::cin >> move;
    return toupper(move); // Convert to uppercase for case-insensitivity
}

std::string Human::getName() {
    return playerName;
}
