/*	
 *	Game    : rock, paper, scissors
 *	Dveloper: AREF HEYDARI
 *  Date    : 7/16/2024
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ShowHandPaper();
void ShowHandStone();
void ShowHandScissors();
void startMenu(char nameOfPlayer1[20]);
int  startMenu_round();
void timeDelay(int numberOfSec);
void showWinner(int player, int computer);

int main()
{
	int round1, loopUp, computer;
	char namePlayer1[20];

	startMenu(&namePlayer1);
	round1 = startMenu_round();

	for (loopUp = 0; loopUp < round1; loopUp++)
	{
		int player1 = 0;
		int computer = (rand() % (3 - 1 + 1)) + 1;

		printf(namePlayer1);
		printf(" enter 1 for (Paper), 2 for (Stone) and 3 for (Scissors)\n");
		printf("Now enter your choice:\n");
		scanf_s("%d", &player1);

		printf("Your choice:\n\n\n\n");
		if (player1 == 1) { ShowHandPaper(); }
		else if (player1 == 2) { ShowHandStone(); }
		else if (player1 == 3) { ShowHandScissors(); }
		timeDelay(5);
		system("cls");

		printf("Computer choice:\n\n\n\n");
		if (computer == 1) { ShowHandPaper(); }
		else if (computer == 2) { ShowHandStone(); }
		else if (computer == 3) { ShowHandScissors(); }
		timeDelay(5);
		system("cls");

		showWinner(player1, computer);
		timeDelay(5);
		system("cls");
	}

	return 0;
}

void startMenu(char nameOfPlayer1[20])
{
	char choice;

	printf("Hello.\n");
	printf("welcome to the game of scissors, paper or stone\n");
	printf("Press enter to start game:\n");
	scanf_s("%c", &choice, 1);

	printf("Player : Enter your name :\n");
	scanf_s("%s", nameOfPlayer1, 20);

	printf("\n");
}

int startMenu_round()
{
	int round;
	printf("How many round are you going to play:\n");
	scanf_s("%d", &round);

	timeDelay(2);
	system("cls");
	return round;
}

void timeDelay(int numberOfSec)
{
	int milliSec = 1000 * numberOfSec;
	clock_t startTime = clock();

	while (clock() < startTime + milliSec);
}

void ShowHandPaper()
{
	printf("        ***        \n");
	printf("    *** ***        \n");
	printf("    *** *** ***    \n");
	printf("    *** *** ***    \n");
	printf("    *** *** *** ***\n");
	printf("    *** *** *** ***\n");
	printf("*** *** *** *** ***\n");
	printf("*** *** *** *** ***\n");
	printf("*** *** *** *** ***\n");
	printf("*** ***************\n");
	printf("*** ***************\n");
	printf("*******************\n");
	printf("*******************\n");
	printf("*******************\n");
	printf(" ***************** \n");
	printf("  ***************  \n");
}

void ShowHandStone()
{
	printf("    *** *** *** ** \n");
	printf(" ********** *** ***\n");
	printf("*********** *** ***\n");
	printf("*** *** *** *** ***\n");
	printf("*** ***************\n");
	printf("*******************\n");
	printf("*******************\n");
	printf("*******************\n");
	printf(" ***************** \n");
	printf("  ***************  \n");
}

void ShowHandScissors()
{
	printf("   ***  ***        \n");
	printf("   ***  ***        \n");
	printf("   ***  ***        \n");
	printf("   ***  ***        \n");
	printf("   ***  ***        \n");
	printf("   **** *** *** ** \n");
	printf(" ********** *** ***\n");
	printf("*********** *** ***\n");
	printf("*** ******* *** ***\n");
	printf("*** ***************\n");
	printf("*******************\n");
	printf("*******************\n");
	printf("*******************\n");
	printf(" ***************** \n");
	printf("  ***************  \n");
}

void showWinner(int player, int computer)
{
	if (player == 1 && computer == 1) { printf("repeat the game"); }
	else if (player == 1 && computer == 2) { printf("Player is the winner"); }
	else if (player == 1 && computer == 3) { printf("Computer is the winner"); }
	else if (player == 2 && computer == 1) { printf("Computer is the winner"); }
	else if (player == 2 && computer == 2) { printf("repeat the game"); }
	else if (player == 2 && computer == 3) { printf("Player is the winner"); }
	else if (player == 3 && computer == 1) { printf("Player is the winner"); }
	else if (player == 3 && computer == 2) { printf("Computer is the winner"); }
	else if (player == 3 && computer == 3) { printf("repeat the game"); }
}