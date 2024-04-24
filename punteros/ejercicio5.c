#include<stdio.h>
#include <string.h>

//Concatenar dos cadenas usando punteros y funciones.
char vec[]="Hola ";
char vec2[]="Mundo";
char vec3[20];
void conc(char *vec,char *vec2,char *vec3);

int main(){
	
	
	printf("Cadena 1 %s\n",vec);
	printf("Cadena 2 %s\n",vec2);
	conc(vec,vec2,vec3);
	printf("Cadenas concatenadas %s",vec3);
}

void conc(char *vec,char *vec2,char *vec3){
	int dim1 = strlen(vec);
	int dim2 = strlen(vec2);
	int x,y;
	for(x=0;x<dim1;x++){
		*(vec3+x)=*(vec+x);
	}
	for(y=0;y<dim2;y++){
		*(vec3+x+y)=*(vec2+y);
	}
}
