//Encontrar el mayor y el menor elemento de un arreglo 
//usando punteros y funciones.

#include <stdio.h>
#include <string.h>

int arr[]={1,2,3,4,5};
int size=sizeof(arr) / sizeof(int); 
int may, men;
void calcularmayorymenor (int *arr, int size, int *may, int *men);

int main(){
	
	calcularmayorymenor ( arr, size, &may, &men);
	
	printf("El maximo es %d y el minimo es %d\n", may, men);
	return 0;
}

void calcularmayorymenor (int *arr, int size, int *may, int *men){
	
	int i;
	*may = *men = *arr;
	
	for(i=1; i<size; i++){
		if(*(arr+i)> *may){
			*may = *(arr+i);
		}
			if(*(arr+i)< *men){
			*men = *(arr+i);
		}
		
		
	}
}