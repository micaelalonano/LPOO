#include <stdio.h>
#include <math.h>

int main(){
	
	float hipotenusa,cateto2,cateto1;
	
	printf("Ingere el valor del cateto 1:");
	scanf("%f",&cateto1);
	
	printf("Ingere el valor del cateto 2:");
	scanf("%f",&cateto2);
	
	
	hipotenusa= sqrt(cateto1 * cateto1 + cateto2 * cateto2);
	

	printf("El valor de la hipotenusa es:%f", hipotenusa);
	
	return 0;
	
}
