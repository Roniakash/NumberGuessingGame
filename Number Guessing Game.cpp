#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("*********!NUMBER GUESSING GAME!*********\n");
	int number,guess,g;
	int number_of_guess=1;
	printf("******!Enter a number between 1 to 20, it helps u to guess the number!******\n");
	scanf("%d",&g);
	number=rand()%100+g;
	printf("******!Guess the number between 1 to 100!******\n");
	do{
		scanf("%d",&guess);
		if(guess>number){
			printf("***!TAKE IT AS A HINT!***\n");
			printf("***!LOWER NUMBER PLEASE!***\n");
		}
		else if(guess<number){
			printf("***!TAKE IT AS A HINT!***\n");
			printf("***!HIGHER NUMBER PLEASE!***\n");
		}
		else{
			printf("***!CONGO!***\n");
			printf("***!You guessed it in %d attempts!***\n",number_of_guess);
		}
		number_of_guess++;
	}while(guess!=number);
	return 0;
}
