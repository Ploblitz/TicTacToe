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
	int game, turn,b,x,y,i,ii;

	printf("Please enter where you want to place your X (3x3 grid)");
	scanf("%i", &i);
	return 1;
	game = Game(turn);

	if (game > 1)
	{
		return PlayerGo(x);    // need to fix up main to work with the new game function for board
	}
	else
	{
		return PCGo(y);
	}

}

int PlayerGo(int x)
{
// TODO :EDLEMONADE EXPERT PLAYER 1 CODE

	return 1;
}

int PCGo(int y)
{

 // TODO : AI CODE FOR PLAYER 2 

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