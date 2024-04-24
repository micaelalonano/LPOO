#include <stdio.h>
#include <string.h>

int main(){
	  
	  char cadena[50];
	  int x, longitud, palindromo;
	  
	printf("ingrese la palabra que desea:");
	fgets(cadena, sizeof(cadena), stdin);
	
	
	longitud=strlen(cadena);
	
	for(x=longitud; x>=0; x--){
		if(cadena [x] != cadena [longitud -1-x]){
			palindromo=0;
		}
	
}
	if(palindromo){
		printf("%s es palindromo",cadena);
	}
	
	else{
			printf("%s no es palindromo",cadena);
	}
	
}
