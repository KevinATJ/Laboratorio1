#include<stdio.h>

int main(){
	
	int i;
	int j;
	char barra[30]; 
	
	printf("BARRA DE CARGA\n\n");
	system("pause");
	
	for(i=0;i<30;i++)
	{
		//printf("||\n");
		
		for(j=0;j<i;j++)
		{
			if(j == i)
			{
				printf(" |");
			}
			else
			{
				printf("|");
			}
			
			printf("O");
		}
		
		system("cls");	
		
		
	}
	printf("CARGADO");
	
	return 0;
}
