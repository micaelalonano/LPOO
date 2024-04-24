#include <stdio.h>
#include <string.h>

int main(){
	
	char  cadena[50];
	int vocales=0 , longitud, x;
	
	printf("Ingrese los caracteres que desea informar:");
	fgets(cadena, sizeof(cadena), stdin);

	
	longitud=strlen(cadena);
	
	for(x=0; x<longitud;x++){
	
	if(cadena[x] == 'a' || cadena[x] =='A' || cadena[x] =='e' || cadena[x] =='E' || cadena[x] =='i' || cadena[x] =='I' || cadena[x] =='o' ||
	cadena[x] =='O' || cadena[x] =='u' || cadena[x] =='U'){
		vocales++;
	}
}
	printf("El numero de vocales es %d", vocales);
		
	
	
	
	
}
