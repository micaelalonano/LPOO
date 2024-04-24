#include <conio.h>
#include <string.h>
#include <stdio.h>

int main()
{
	char cadena[200], repetir;
	int opcion=0, x, longitud, aux=0;
	
	do
	{
		system("cls");
		repetir=0, opcion=0, aux=0;
		
		
		
		printf("\n\n\t--- ----");
	
	printf("\n\n\t||Ingrese una oracion, puede estar en mayuscula, minuscula o de manera alterada.");
	
	printf("\n\n\t|Oracion: ");
	scanf("%s", &cadena);
	/*fgets(cadena, sizeof(cadena), stdin);*/
	
	
	do
	{
		printf("\n\n\t1.MAYUSCULA  2.minuscula  3.AlTeRaDa  4.Con Mayusculas Iniciales");
		
		printf("\n\n\n\t||Desea que su oracion este...: ");
		scanf("%d", &opcion);
		
		
		if(opcion<1||opcion>4)
		{
			printf("\n\n\tERROR: Elija una opcion del 1 al 4.");
			
			getch();
		}
		
	
	}while(opcion<1||opcion>4);
	
	
	longitud=strlen(cadena);
		
	
	switch(opcion)
	{
		case 1:
			
			for(x=0;x<longitud;x++)
			{
				if(cadena[x]>='a'&&cadena[x]<='z')
				{
					cadena[x]=cadena[x]-32;
				}
			}
			
			break;
		
		
		case 2:
			
			for(x=0;x<longitud;x++)
			{
				if(cadena[x]>='A'&&cadena[x]<='Z')
				{
					cadena[x]=cadena[x]+32;
				}
			}
			
			break;
			
			
		case 3:
			
			for(x=0;x<longitud;x++)
			{
				if((cadena[x]>='A'&&cadena[x]<='Z')||(cadena[x]>='a'&&cadena[x]<='z'))
				{
					aux++;
				}
				
				
				if(aux%2==0)
				{
					if(cadena[x]>='A'&&cadena[x]<='Z')
					{
					cadena[x]=cadena[x]+32;
					}
				}
				
				
				else
				{
					if(cadena[x]>='a'&&cadena[x]<='z')
					{
						cadena[x]=cadena[x]-32;
					}
				}
			}
			
			break;
					
			
		case 4:
			
			for(x=0;x<longitud;x++)
			{
				if((cadena[x]>='A'&&cadena[x]<='Z')||(cadena[x]>='a'&&cadena[x]<='z'))
				{
					aux++;
					
					if(aux==1)
					{
						if(cadena[x]>='a'&&cadena[x]<='z')
						{
							cadena[x]=cadena[x]-32;
						}
					}
					
					else
					{
						if(cadena[x]>='A'&&cadena[x]<='Z')
						{
							cadena[x]=cadena[x]+32;
						}
					}
				}
				
				
				else
				{
					aux=0;
				}
			}
			
			break;
	}
	 
	 
	 printf("\n\n\n\t||Oracion actualizada: %s", cadena);
		
		
		
		printf("\n\n\n\n\t||Pulsar '1' si desea repetir el proceso. De lo contrario, pulsar cualquier otra tecla.");
		repetir=getch();
		
	}while(repetir=='1');
	
	
	return 0;
}
