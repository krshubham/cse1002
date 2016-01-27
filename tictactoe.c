#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i,j;
	int game[3][3];
	printf("Enter the current state of the game: \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d",&game[i][j]);
		}
	}
	/*********************Checking the winner ******************/
		for (i = 0; i < 3; i++)
		{
			if(game[0][i]==1 || game[1][i]==1 || game[2][i]==1){
				printf("Player 1 wins.\n");
				return 0;
			}
			else if(game[0][i]==0 || game[1][i]==0 || game[2][i]==0){
				printf("Player 2 wins.\n");
				return 0;
			}
			else{
				continue;
			}	
		}
		for (i = 0; i < 3; i++)
		{
			if(game[i][0]==1 || game[i][1]==1 || game[i][2]==1){
				printf("Player 1 wins.\n");
				break;
			}
			else if(game[i][0]==0 || game[i][1]==0 || game[i][2]==0){
				printf("Player 2 wins.\n");
				break;
			}
			else{
				continue;
			}	
		}

	/*****************For printing the array*********************/
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ",game[i][j]);
		}
		printf("\n");
	}
	/******************************end**************************/
	return 0;
}
	