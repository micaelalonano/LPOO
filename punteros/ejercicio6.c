#include<stdio.h>

//Contar el número de ocurrencias de un elemento en un arreglo usando
//puntero y funciones

int vec[8]={1,2,3,1,5,1,6,1};
int cont=0;
void contar(int *vec,int *cont,int elem){
	int x;
	for(x=0;x<8;x++){
		if(*(vec+x)==elem){
			(*cont)++;
		}
	}
	
}

int main(){
	int x;
	for(x=0;x<8;x++){
		printf("%d",vec[x]);
	}
	int elemento=1;
	contar(vec,&cont,elemento);
	printf("\nElemento %d",elemento);
	printf("\ncantidad de veces encontrado el elemento %d",cont);
	
}
