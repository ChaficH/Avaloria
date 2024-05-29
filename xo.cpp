#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

char square[10] = {'0','1','2','3','4','5','6','7','8','9'};

// Function to return the game status
int checkwin() {
    for (int i = 1; i <= 9; i += 3) {
        if (square[i] == square[i + 1] && square[i + 1] == square[i + 2])
            return 1; // Win condition across rows
    }
    for (int i = 1; i <= 3; ++i) {
        if (square[i] == square[i + 3] && square[i] == square[i + 6])
            return 1; // Win condition across columns
    }
    if (square[1] == square[5] && square[5] == square[9])
        return 1; // Win condition across diagonal (top-left to bottom-right)
    if (square[3] == square[5] && square[5] == square[7])
        return 1; // Win condition across diagonal (top-right to bottom-left)
    // Check for draw
    for (int i = 1; i <= 9; ++i) {
        if (square[i] != 'X' && square[i] != 'O')
            return -1; // Game still ongoing
    }
    return 0; // It's a draw
}

// Function to draw the board
void drawBoard() {
    //system("clear"); // Clearing the console (for Unix-like systems)
    cout << "\n\n\t Tic Tac Toe Game \n\n";
    cout << "Player 1 (X) - Player 2 (O)" << endl << endl;
    cout << "     |     |     " << endl;
    cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;
    cout << "     |     |     " << endl << endl;
}

int main() {
    int player = 1, choice;
    char mark;
    int gameStatus; // Declaration of gameStatus variable

    // Seed for random number generation
    srand(static_cast<unsigned int>(time(0)));

    do {
        drawBoard();
        
        // (Player 1)
        if (player == 1) {
            do {
                cout << "Player 1, enter your move (1-9): ";
                cin >> choice;
                if (choice < 1 || choice > 9 || square[choice] == 'X' || square[choice] == 'O') {
                    cout << "Invalid move. Please enter a valid number." << endl;
                    choice = -1; // Reset choice to trigger the input loop again
                }
            } while (choice < 1 || choice > 9 || square[choice] == 'X' || square[choice] == 'O');
        } 
        // (Player 2)
        else {
            choice = (rand() % 9) + 1;
            while (square[choice] == 'X' || square[choice] == 'O') {
                choice = (rand() % 9) + 1;
            }
            cout << "Player 2 (Computer) chooses square " << choice << endl;
        }

        mark = (player == 1) ? 'X' : 'O';
        square[choice] = mark;

        gameStatus = checkwin(); // to assign gameStatus value
        
        // Display game status
        if (gameStatus == 1) {
            drawBoard();
            cout << "\aPlayer " << player << " wins!" << endl;
            break;
        } else if (gameStatus == 0) {
            drawBoard();
            cout << "\aIt's a draw!" << endl;
            break;
        }

        // Switch players
        player = (player == 1) ? 2 : 1;

    } while (gameStatus == -1);

    cin.ignore();
    cin.get();
    return 0;
}
