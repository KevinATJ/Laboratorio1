#include<stdio.h>

int main(){
	
	int i;
	int j;
	char gato[3][3];
	
	printf("JUEGO DEL GRAN_GATO\n\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i == 0 && j == 0)
			{
				gato[i][j] = 'X';
				printf("|%c|",gato[i][j]);	
			}
			else if(i == 0 && j == 1)
			{
				gato[i][j] = 'O';
				printf("%c",gato[i][j]);
			}
			else if(i == 0 && j == 2)
			{
				gato[i][j] = 'X';
				printf("|%c|",gato[i][j]);
			}
			else if(i == 1 && j == 0)
			{
				gato[i][j] = 'O';
				printf("|%c|",gato[i][j]);
			}
			else if(i == 1 && j == 1)
			{
				gato[i][j] = 'X';
				printf("%c",gato[i][j]);
			}
			else if(i == 1 && j == 2)
			{
				gato[i][j] = 'O';
				printf("|%c|",gato[i][j]);
			}
			else if(i == 2 && j == 0)
			{
				gato[i][j] = ' ';
				printf("|%c|",gato[i][j]);
			}
			else if(i == 2 && j == 1)
			{
				gato[i][j] = ' ';
				printf("%c",gato[i][j]);
			}
			else if(i == 2 && j == 2)
			{
				gato[i][j] = 'X';
				printf("|%c|",gato[i][j]);
			}
			
		}
		
		printf("\n");
	}
	printf("\n");
	printf("El ganador es el jugador X");
	// 0,0 X ; 0,1 O; 0,2 X; 1,0 O; 2,2 X, 1,2 O
	
	
	
	
	
	return 0;
}
