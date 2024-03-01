// #ifndef HUMAN_H
// #define HUMAN_H

// #include "Player.h"
// #include <string>

// class Human : public Player{
//   public:
//     Human(const string& name = "Human");

//     char makeMove() override;
//     string getName() override;

//   private:
//     string _name;
// }

// #endif

#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"
#include <string>

class HumanPlayer : public Player {
public:
  // Constructor with optional name parameter, defaulting to "Human"
  HumanPlayer(const std::string& name = "Human");

private:
  std::string _name;
};

#endif
