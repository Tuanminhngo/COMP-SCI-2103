#include "Referee.h"
#include <iostream>

const Player* Referee::determineWinner(const Player& human, const Player& computer) const {
  char humanMove = human.makeMove();
  char computerMove = computer.makeMove();

  // Compare moves and determine winner and loser
  if (humanMove == 'R') {
    if (computerMove == 'P') {
      return &computer; // Rock loses to Paper
    } else if (computerMove == 'S') {
      return &human; // Rock wins over Scissors
    } else {
      return nullptr; // Tie
    }
  } else if (humanMove == 'P') {
    if (computerMove == 'R') {
      return &human; // Paper wins over Rock
    } else if (computerMove == 'S') {
      return &computer; // Paper loses to Scissors
    } else {
      return nullptr; // Tie
    }
  } else if (humanMove == 'S') {
    if (computerMove == 'R') {
      return &computer; // Scissors lose to Rock
    } else if (computerMove == 'P') {
      return &human; // Scissors win over Paper
    } else {
      return nullptr; // Tie
    }
  } else {
    // Handle invalid moves (shouldn't happen with proper validation)
    std::cerr << "Invalid move detected!" << std::endl;
    return nullptr;
  }
}
