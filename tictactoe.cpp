//Thomas Gallagher
//Edmond Wilkinson
//Micheal Morris

#include <stdio.h>

int PlayerGo(int x);
int PCGo(int y);
int Game(int a);
int Work(int b);

int main()
{
	int game, a,b,x,y,i,ii;

	printf("Please enter where you want to place your X (3x3 grid)");
	scanf("%i", &i);
	return 1;
	game = Game(a);

	if (game > 1)
	{
		return PlayerGo(x);
	}
	else
	{
		return PCGo(y);
	}

}

int PlayerGo(int x)
{



	return 1;
}

int PCGo(int y)
{



	return 2; 
}

//matrix for displaying Xs and Os

//diagonal matrix to decide the winner only for diagonal

// return 0, return 1 to swap between go's

// X and O for unique player

// random number for the PC