// #ifndef COMPUTER_H
// #define COMPUTER_H

// #include "Player.h"

// class Computer : public Player {
// public:
//   char makeMove() override;
//   string getName() override;

// }

// #endif

#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"
#include <string>

class ComputerPlayer : public Player {
public:
  // Constructor with optional name parameter, defaulting to "Computer"
  ComputerPlayer(const std::string& name = "Computer");

private:
  std::string _name;
  char _move; // Predetermined move
};

#endif
