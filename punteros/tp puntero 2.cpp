//2. Encontrar la suma y el promedio de los elementos de un arreglo 
//usando punteros y funciones.

#include <stdio.h>
#include <string.h>

int suma;
float promedio;
int arr[]={1,2,3,4,5};
void calcularsumapromedio( int *arr, int *suma, int n, float *promedio);


int main(){
	
	int n= sizeof(arr) / sizeof(arr[0]);
	calcularsumapromedio( arr, &suma, n, &promedio);
	
	printf("La suma es: %d\n", suma);
	printf("El promedio es: %.2f\n", promedio);
	return 0;
	
}

void calcularsumapromedio( int *arr, int *suma, int n, float *promedio){
	
	int i;
	*suma=0;
	for(i=0; i<n; i++){
		*suma+= *(arr+i);	
	}
	
	*promedio=(float)*suma / n;
}
