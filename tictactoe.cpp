//Thomas Gallagher
//Edmond Wilkinson
//Micheal Morris

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char square[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
int choice, player, range;

int checkForWin();
void Game();
void markBoard(char mark);
void PCGo();

int main()
{
    int gameStatus = 1;
    char mark;
    player = 1;
    do {
        Game();
        player = (player % 2) ? 1 : 2;

        if (player == 1)
        {
            printf("Player %d,enter a number: ", player);
            scanf_s("%d", &choice);
            mark = (player == 1) ? 'X' : 'O';
            markBoard(mark);
            gameStatus = checkForWin();
            player++;
       }
        else
        {
            srand(time(NULL));
            range = (9 - 1) + 1;
            mark = (player == 1) ? 'X' : 'O';
            markBoard(mark);
            gameStatus = checkForWin();
            player++;

            return -1;
        }
            
       
    } while (gameStatus == -1);

    if (gameStatus == 1)
        printf("==>Player %d win \n\n", --player);
    else {
        printf("==>Game draw\n\n");
    }
    return 0;
}

int checkForWin()
{
    int returnValue = 0;

    if (square[1] == square[2] && square[2] == square[3])
    {
        returnValue = 1;
    }
    else if (square[4] == square[5] && square[5] == square[6])
        returnValue = 1;

    else if (square[7] == square[8] && square[8] == square[9])
        returnValue = 1;

    else if (square[1] == square[4] && square[4] == square[7])
        returnValue = 1;

    else if (square[2] == square[5] && square[5] == square[8])
        returnValue = 1;

    else if (square[3] == square[6] && square[6] == square[9])
        returnValue = 1;

    else if (square[1] == square[5] && square[5] == square[9])
        returnValue = 1;

    else if (square[3] == square[5] && square[5] == square[7])
        returnValue = 1;

    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
        square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7]
        != '7' && square[8] != '8' && square[9] != '9')
        returnValue = 0;
    else
        returnValue = -1;

    return returnValue;
}

void Game()
{
    system("cls");

    printf("TicTacToe\n");

    printf("Player (X)  -  PC (O)\n\n\n");

    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", square[1], square[2], square[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[4], square[5], square[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[7], square[8], square[9]);

    printf("     |     |     \n\n");
}

void markBoard(char mark)
{
    if (choice == 1 && square[1] == '1')
        square[1] = mark;

    else if (choice == 2 && square[2] == '2')
        square[2] = mark;

    else if (choice == 3 && square[3] == '3')
        square[3] = mark;

    else if (choice == 4 && square[4] == '4')
        square[4] = mark;

    else if (choice == 5 && square[5] == '5')
        square[5] = mark;

    else if (choice == 6 && square[6] == '6')
        square[6] = mark;

    else if (choice == 7 && square[7] == '7')
        square[7] = mark;

    else if (choice == 8 && square[8] == '8')
        square[8] = mark;

    else if (choice == 9 && square[9] == '9')
        square[9] = mark;
    else
    {
        printf("Invalid move ");

        player--;
    }
}
//matrix for displaying Xs and Os

//diagonal matrix to decide the winner only for diagonal

// return 0, return 1 to swap between go's

// X and O for unique player

// random number for the PC