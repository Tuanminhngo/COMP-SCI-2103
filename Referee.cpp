#include "Referee.h"

const Player* Referee::determineWinner(const Player& human, const Player& computer) const {
  char humanMove = human.makeMove();

  if (humanMove == 'R') {
    return nullptr; // Tie
  } else if (humanMove == 'P') {
    return &human; // Paper wins over Rock (computer)
  } else if (humanMove == 'S') {
    return &computer; // Rock (computer) wins over Scissors
  } else {
    // Handle invalid moves (shouldn't happen with proper validation)
    std::cerr << "Invalid move detected!" << std::endl;
    return nullptr;
  }
}
