#include <stdio.h>
#include <cmath>

int main(){
	
	float lado1, lado2, hipotenusa,cateto2,cateto1;
	
	
	printf("Ingrese la longitud del primer lado:");
	scanf("%f", &lado1);
	
	printf("Ingrese la longitud del segundo lado:");
	scanf("%f", &lado2);
	
	if(lado1 > lado2){
		
		hipotenusa=lado1;
		cateto1=lado2;
		cateto2= sqrt(lado1 * lado1 - lado2 * lado2);
	}
	
	else{
		
		hipotenusa=lado2;
		cateto2=lado1;
		cateto1= sqrt(lado2 * lado2 - lado1 * lado1);
	}
	
	
	printf("\n La longitud del cateto 1 es: %f", cateto1);
	printf("\n La longitud del cateto 2 es: %f", cateto2);
	printf("\n La longitud de la hipotenusa es: %f", hipotenusa);
	
	
	
}
