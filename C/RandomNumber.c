#include <stdio.h>
#include <stdlib.h> //for rand()
#include<time.h> //for time()

void PrintRandomNumber()
{
	int num = (rand() % (1000 - 1 + 1)) + 1; //to get the random number between 1 to 1000
	printf("%d ", num);
}

int main()
{
	int yes=1;
	do{
    	printf("Game guessed :");
    	srand(time(0));
    	PrintRandomNumber();
        printf("\nIf the guessed value matches yours press 0 or else press 1 : ");
        scanf("%d",&yes);
	}while(yes); //If the guessed number is same as the user's guess then game is over.
	printf("\n GAME OVER !!!");

	return 0;
}
