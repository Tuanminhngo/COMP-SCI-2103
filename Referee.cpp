// // Referee.cpp

// #include "Referee.h"

// Referee::Referee() {
//     // Constructor implementation (if needed)
// }

// Player* Referee::refGame(Player* player1, Player* player2) {
//     char move1 = player1->makeMove();
//     char move2 = player2->makeMove();

//     // Compare moves to determine the winner
//     if (move1 == move2) {
//         // It's a tie
//         return nullptr;
//     } else if ((move1 == 'R' && move2 == 'S') ||
//               (move1 == 'P' && move2 == 'R') ||
//               (move1 == 'S' && move2 == 'P')) {
//         // Player 1 wins
//         return player1;
//     } else {
//         // Player 2 wins
//         return player2;
//     }
// }


// Referee.cpp

#include "Referee.h"

Referee::Referee() {
    // No need for initialization in this example
}

Referee::~Referee() {
    // No need for cleanup in this example
}

Player* Referee::refGame(Player* player1, Player* player2) {
    if (isPlayer1Win(player1, player2)) {
        return player1;
    } else if (isPlayer2Win(player1, player2)) {
        return player2;
    } else {
        // It's a tie
        return nullptr;
    }
}

bool Referee::isPlayer1Win(Player* player1, Player* player2) {
    // Implement your logic to determine if player1 wins
    // Return true if player1 wins, false otherwise
    // You may compare the moves of player1 and player2 to decide the winner
    // For simplicity, assuming Rock always wins in case of a tie
    return player1->makeMove()->getName() == "Rock" && player2->makeMove()->getName() == "Scissors";
}

bool Referee::isPlayer2Win(Player* player1, Player* player2) {
    // Implement your logic to determine if player2 wins
    // Return true if player2 wins, false otherwise
    // You may compare the moves of player1 and player2 to decide the winner
    // For simplicity, assuming Rock always wins in case of a tie
    return player2->makeMove()->getName() == "Rock" && player1->makeMove()->getName() == "Scissors";
}

bool Referee::isTie(Player* player1, Player* player2) {
    // Implement your logic to determine if it's a tie
    // Return true if it's a tie, false otherwise
    // You may compare the moves of player1 and player2 to decide if they tie
    return player1->makeMove()->getName() == player2->makeMove()->getName();
}
