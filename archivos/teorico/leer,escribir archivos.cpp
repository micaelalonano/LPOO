#include <stdio.h>

int main() {
	FILE *pf;
	char letra='a';
	if (!(pf=fopen("datos.txt","w"))) /* otra forma de controlar si se produce un error */
	{
		printf("Error al abrir el fichero");
		exit(0); /* abandonamos el programa */
	}
	else fputc(letra,pf);
	fclose(pf);^b
	fgetc( puntero_fichero );


FILE *pf;
	char letra;
	if (!(pf=fopen("datos.txt","r"))) /* controlamos si se produce un error */
	{
		printf("Error al abrir el fichero");
		exit(0); /* abandonamos el programa */
	}
	else 
	{
		letra=fgetc(pf);
		printf("%c",letra);
		fclose(pf);
	}


    return 0;
}

