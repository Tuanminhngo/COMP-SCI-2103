// #include "Referee.h"

// const Player* Referee::determineWinner(const Player& human, const Player& computer) const {
//   char humanMove = human.makeMove();

//   if (humanMove == 'R') {
//     return nullptr; // Tie
//   } else if (humanMove == 'P') {
//     return &human; // Paper wins over Rock (computer)
//   } else if (humanMove == 'S') {
//     return &computer; // Rock (computer) wins over Scissors
//   } else {
//     // Handle invalid moves (shouldn't happen with proper validation)
//     std::cerr << "Invalid move detected!" << std::endl;
//     return nullptr;
//   }
// }

// Referee.cpp

#include "Referee.h"

Referee::Referee() {
    // Constructor implementation (if needed)
}

Player* Referee::refGame(Player* player1, Player* player2) {
    char move1 = player1->makeMove();
    char move2 = player2->makeMove();

    // Compare moves to determine the winner
    if (move1 == move2) {
        // It's a tie
        return nullptr;
    } else if ((move1 == 'R' && move2 == 'S') ||
              (move1 == 'P' && move2 == 'R') ||
              (move1 == 'S' && move2 == 'P')) {
        // Player 1 wins
        return player1;
    } else {
        // Player 2 wins
        return player2;
    }
}
