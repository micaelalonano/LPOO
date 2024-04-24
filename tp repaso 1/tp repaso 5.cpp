#include <stdio.h>

int main(){

int numero;

 printf("Ingrese un numero:");
 scanf("%d", &numero);
 
 if( numero%2 !=0  || numero==2){
 	printf(" %d  es primo ",numero);
 }
 
 else{
 	printf("\n %d no es numero primo", numero);
 } 


}
