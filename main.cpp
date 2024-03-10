#include <iostream>

#include "Move.h"
#include "MoveFactory.h"
#include "Human.h"
#include "Computer.h"
#include "Referee.h"

int main() {
    // Create instances of players and referee
    Player* player1 = new Human("Trang");
    Player* player2 = new Computer();
    Referee referee;

    // Determine the winner of the game
    Player* winner = referee.refGame(player1, player2);

    // Display the result of the game
    if (winner) {
        std::cout << winner->getName() << " wins!" << std::endl;
    } else {
        std::cout << "It's a tie!" << std::endl;
    }

    // Clean up dynamically allocated memory
    delete player1;
    delete player2;

    return 0;
}
