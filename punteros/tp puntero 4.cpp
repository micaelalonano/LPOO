// Copiar un arreglo en otro arreglo usando punteros y funciones. Mostrando el resultado final.

#include <stdio.h>
#include <string>

int arr1[]={10,20,30,40,50};
int size = sizeof(arr1) / sizeof(int);
int arr2[size];
int i;
void copy(int *arr, int *arr2, int size);

int main(){
	
	copy(int &arr1, int &arr2, int size);
	
	printf("Ela arreglo 2 es:");
	for(i=0; i<size; i++){
		printf("%d", arr2[i])
	}
	printf("\n");
	return 0;
}

void copy(int *arr, int *arr2, int size){
	int i;
	for(i=0; i<size; i++){
			*(arr2+1) = *(arr1+i);
	}

}