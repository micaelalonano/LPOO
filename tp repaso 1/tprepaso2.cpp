#include <stdio.h>

struct fecha_nac{
	int dia;
	int mes;
	int anio;
		
};

int main(){
	
   char nombre [20];
   char apellido [20];
   int dni, edad,anio, fecha_limite, mes_limite, anio_limite;
   fecha_nac fecha_nac;
   
   
     fecha_limite=30;  mes_limite=9;  anio_limite=2006;
     
     
   printf("Ingrese el nombre:");
   scanf("%s",&nombre);
   
   printf("Ingrese el apellido:");
   scanf("%s",&apellido);
   
   printf("Ingrese el DNI:");
   scanf("%d",&dni);
   
   printf("Ingrese el dia de su nacimiento:");
   scanf("%d",&fecha_nac.dia);
   
    printf("Ingrese el mes de su nacimiento(con numero):");
   scanf("%d",&fecha_nac.mes);
   
    printf("Ingrese el anio de su nacimiento:");
   scanf("%d",&fecha_nac.anio);
   
   
   edad= 2024 - anio;

   if(edad<16){
   	
   	printf("Usted no puede votar");
   	
   	
   }
   
   else if(edad<18){
   	
   	printf("Usted puede votar");
   	
   	
   }    
   
    
   else if(edad>80){
   	
   	printf("/n Usted puede votar");
   }
   	
   	else if(edad<80){
   		printf("Usted debe votar");
	   }
	   
	     printf("\n\n");
	     printf("Apellido:%s",apellido);

  
  printf("\n\n");
  
  printf("Nombre:%s",nombre);
  
  
    printf("\n\n");

	printf("Dni:%d",dni);

	   
	   
	   
	   
   	
   }
   

	

