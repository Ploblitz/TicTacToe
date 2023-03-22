//Thomas Gallagher
//Edmond Wilkinson
//Micheal Morris

#include <stdio.h>

char board[3][3] = { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };


int PlayerGo(int x);
int PCGo(int y);
int Game(int turn);
int Work(int b);

int main()
{
    int turn = 1;
    int difficulty;

    printf("Welcome to Tic Tac Toe!\n");
    printf("Choose the difficulty of the computer (1 for easy, 2 for hard): ");
    scanf("%d", &difficulty);

    while (1) 
    {
        Game(turn, difficulty);
        turn = (turn == 1) ? 2 : 1;
    }

    return 0;
}
int PlayerGo(int x)
{
// TODO :EDLEMONADE EXPERT PLAYER 1 CODE

	return 1;
}

int PCGo(int difficulty)
{
    int row, col;

    // If difficulty is 1 the computer's move is random
    if (difficulty == 1) 
    {
        do 
        {
            row = rand() % 3;
            col = rand() % 3;
        } while (board[row][col] != ' ');
    }
    // If difficulty is 2 the computer tries to block the player's winning move, or makes a random move otherwise
    else if (difficulty == 2) 
    {
        // Check if the player can win in the next move
        for (row = 0; row < 3; row++) 
        {
            for (col = 0; col < 3; col++)
            {
                if (board[row][col] == ' ') 
                {
                    board[row][col] = 'X';
                    if (CheckWin() == 1) 
                    {
                        board[row][col] = 'O';
                        return 2;
                    }
                    board[row][col] = ' ';
                }
            }
        }
        // If the player cannot win in the next move, make a random move
        do {
            row = rand() % 3;
            col = rand() % 3;
        } while (board[row][col] != ' ');
    }
    return 2;
}
int Game(int turn)
{
    // print the board
    printf("\n");
    printf(" %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[2][0], board[2][1], board[2][2]);
    
    // check if the game is over
    if (CheckWin() != 0) {
        printf("Game over! Player %d wins!", CheckWin());
        return 0;
    } else if (turn == 1) {
        PlayerGo();
    } else {
        PCGo();
    }
    
    return 1;
}
//matrix for displaying Xs and Os

//diagonal matrix to decide the winner only for diagonal

// return 0, return 1 to swap between go's

// X and O for unique player

// random number for the PC