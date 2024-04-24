#include <stdio.h>
#include <string.h>

int main()
{
	int x,y,longitud;
	char palabra1[50],palabra2[50],palabra3[50],palabra4[50],palabra5[50],resultante[100];
	
	printf("Ingrese la 1er palabra: ");
	scanf(" %s",&palabra1);
	printf("Ingrese la 2da palabra: ");
	scanf(" %s",&palabra2);
	printf("Ingrese la 3er palabra: ");
	scanf(" %s",&palabra3);
	printf("Ingrese la 4ta palabra: ");
	scanf(" %s",&palabra4);
	printf("Ingrese la 5ta palabra: ");
	scanf(" %s",&palabra5);
	
	longitud = strlen(palabra1);
	
		for(x=0;x<longitud;x++)
		{
			if(palabra1[x] == palabra2[x] && palabra1[x] == palabra3[x] && palabra1[x] == palabra4[x] && palabra1[x] == palabra5[x])
			{
				resultante[x] = palabra1[x];
			}
		}
		
		printf("Las letras que coinciden en las 5 palabras son: %s",resultante);
}