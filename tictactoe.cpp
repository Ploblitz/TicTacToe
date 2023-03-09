//Thomas Gallagher
//Edmond Wilkinson
//Micheal Morris

#include <stdio.h>

int PlayerGo(int x);
int PCGo(int y);
int Game(int a);

int main()
{
	int game, a, b = 0, x, y, i;

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
	for (int j = 0; j < 5; j++)
	{
		printf("Hi");

		return 1;
	}
	return 0;
}

int PCGo(int y)
{
	for (int j = 0; j < 5; j++)
	{
		printf("hello");

		return 2;
	}
	return 0;
}

int Game(int a)
{
	int i;
	printf("Please enter where you wantrrewetwertrtw to place your X");
	scanf_s("%i", &i);

	return 2;
}
//matrix for displaying Xs and Os

//diagonal matrix to decide the winner only for diagonal

// return 0, return 1 to swap between go's

// X and O for unique player

// random number for the PC