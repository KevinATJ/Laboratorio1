#include<stdio.h>

int main(){
	
	int num1 = 1;
	int num2;
	float num3 = 1.5;
	float num4;
	char inicial[7] = "Tu eres";
	char nombre[30];
	
	printf("Prueba de variables int: \n");
	printf("El valor de num1 = 1, ingrese un valor entero para num2 o un valor cero: \n");
	scanf("%d",&num2);
	
	
	/*while(num2 % 2 != 0)
	{
		printf("El valor ingresado no es un entero, por favor ingrese nuevamente el numero: ");
		scanf("%d",&num2);
		
	}*/  //Intente hacer la validación de los datos para que solo se pudieran ingresar valores enteros o cero, pero por alguna razón no me toma el scanf

	printf("num1 + num2 = %d\n\n",num1+num2);
	
	printf("Prueba de variables float: \n");
	printf("El valor de num3 = 1.5 , ingrese un cualquier valor para num 4: \n");
	scanf("%f",&num4);
	printf("num3 + num4 = %f\n\n",num3+num4);
	
	printf("Prueba de variables char: \n");
	printf("ingrese su nombre: \n");
	scanf("%s",nombre);
	
	printf("%s %s",inicial,nombre);
	
	
	
	
	return 0;
}
