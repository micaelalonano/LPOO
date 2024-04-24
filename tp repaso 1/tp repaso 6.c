#include <stdio.h>
#include <string.h>

int main ()
{
	int cantdenumeros, numero, x, noprimo = 0, primo = 0;
	
	printf("Ingrese la cantidad de numeros que quiere ingresar: ");
	scanf("%d",&cantdenumeros);
		
		int vector[cantdenumeros];
		
		for(x = 0; x < cantdenumeros; x++)
		{
			
			printf("Ingrese un numero: ");
			scanf("%d",&vector[x]);
			
			if(vector[x]%2 != 0 || vector[x] == 2) {
				primo++;
			}
		
			else
			{
				noprimo++;
			}
			
		}
		
	printf("\nLa cantidad de numeros es: %d",cantdenumeros);
	printf("\nLa cantidad de primos es: %d",primo);
	printf("\nLa cantidad de no primos es: %d",noprimo);
}
