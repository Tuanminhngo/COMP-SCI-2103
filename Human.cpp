// #include <iostream>
// using namespace std;

// #include "Human.h"

// Human::Human(string& name) : _name(name){
//   char Human::makeMove() override {
//     char move;

//     do{
//       cout << "Enter move: ";
//     }
//   }
// }

#include "Human.h"
#include <iostream>
#include <cctype> // for toupper()

HumanPlayer::HumanPlayer(const std::string& name) : _name(name) {}

char HumanPlayer::makeMove() override {
  char move;
  do {
    std::cout << _name << ", enter your move (R for Rock, P for Paper, S for Scissors): ";
    std::cin >> move;
    move = toupper(move); // Convert input to uppercase for case-insensitive validation
  } while (move != 'R' && move != 'P' && move != 'S');
  return move;
}

std::string HumanPlayer::getName() const override {
  return _name;
}
