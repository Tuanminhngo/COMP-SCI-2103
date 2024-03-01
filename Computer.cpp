// #include "Computer.h"

// char Computer::makeMove() override{
//   return 'R'
// }

// string Computer::getName() override{
//   return "Computer";
// }

#include "Computer.h"
#include <random> // for random numbers generation

ComputerPlayer::ComputerPlayer(const std::string& name) : _name(name), _move('R') {
  // Initialize a random move (for simplicity, always 'R' here, but could be random generation)
  // std::random_device rd; // Seed the random number generator (optional)
  // std::mt19937 gen(rd());
  // std::uniform_int_distribution<char> dist('R', 'S');
  // _move = dist(gen);
}

char ComputerPlayer::makeMove() override {
  return _move;
}

std::string ComputerPlayer::getName() const override {
  return _name;
}
