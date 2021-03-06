#include "Player.h"
#include "Board.h"
#include "Game.h"

class Board;

int main () {
    Game ticTacToe;

    ticTacToe.DisplayInstructions();

    char again;
    do {
        ticTacToe.Play();
        cout << endl << "Play again? (y/n): ";
        cin >> again;
    } while (again != 'n');

    return 0;
}