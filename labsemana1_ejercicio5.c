#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//Los nombres de las piezas se econtraron desde el siguiente link: https://twitter.com/vecchitto/status/1099748313862234114/photo/3
int main(){
	
	int pieza[7];
	int comprobar[7];
	int i;
	srand(time(NULL));
	
	printf("JUEGO DEL VRVTETRIX\n\n");
	
	for(i=0;i<7;i++)
	{
		pieza[i] = rand()%7;
		comprobar[i] = pieza[i];
		
		while(pieza[i] == comprobar[i-1] || pieza[i] == comprobar[i-2] || pieza[i] == comprobar[i-3] || pieza[i] == comprobar[i-4] || pieza[i] == comprobar[i-5] || pieza[i] == comprobar[i-6] )
		{
		pieza[i] = rand()%7;
		comprobar[i] = pieza[i];	
		}
		
		
		switch(pieza[i])
		{
			case 0: 
				printf("Orange ricky cayendo\n");
				break;
			
			case 1: 
				printf("Blue ricky cayendo\n");
				break;
			
			case 2: 
				printf("Cleveland Z cayendo\n");
				break;
			
			case 3: 
				printf("Rhode Island Z cayendo\n");
				break;
			
			case 4: 
				printf("Hero cayendo\n");
				break;
			
			case 5: 
				printf("Teewee cayendo\n");
				break;
			
			case 6: 
				printf("Smashboy cayendo\n");
				break;
			
					
		}
		 
	}
	
	
	return 0;
}
