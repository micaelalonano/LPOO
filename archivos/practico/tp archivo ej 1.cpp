#include <stdio.h>
#include <string.h>

// Función para ingresar los datos de una persona y guardarlos en un archivo
void ingresarDatos() {
    char nombre[100], apellido[100], dni[20];
    int longitud,x;
    
    printf("Ingrese el nombre: ");
    scanf("%s", nombre);
    
    printf("Ingrese el apellido: ");
    scanf("%s", apellido);

    printf("Ingrese el DNI: ");
    scanf("%s", dni);
    
      for(x=0;x<longitud;x++){
    if(nombre[x]>='A'&&nombre[x]<='Z')
					{
						nombre[x]=nombre[x]+32;
					}
					else{
					if(nombre[x]>='a'&& nombre[x]<='z')
					{
						nombre[x]=nombre[x]-32;
					}	
					}
}

    FILE* archivo = fopen("archivo.txt", "a");
    
    if (archivo != NULL) {
        fprintf(archivo, "%s,%s,%s\n", nombre, apellido, dni);
        fclose(archivo);
        printf("Datos guardados exitosamente.\n");
    } else {
        printf("Error al abrir el archivo.\n");
    }
}



// Función para buscar una persona por DNI
void buscarPorDNI() {
    char dniBuscado[20], nombre[100], apellido[100], dni[20];
    int encontrado = 0;
    
    printf("Ingrese el DNI a buscar: ");
    scanf("%s", dniBuscado);
    
    FILE* archivo = fopen("archivo.txt", "r");
    
    if (archivo != NULL) {
        while (fscanf(archivo, "%[^,],%[^,],%[^\n]\n", nombre, apellido, dni) == 3) {
            if (strcmp(dni, dniBuscado) == 0) {
                printf("Nombre: %s\n", nombre);
                printf("Apellido: %s\n", apellido);
                encontrado = 1;
                break;
            }
        }
        
        fclose(archivo);
        
        if (!encontrado) {
            printf("Persona no encontrada.\n");
        }
    } else {
        printf("Error al abrir el archivo.\n");
    }
}


int main() {
    int opcion;
    
    do {
        printf("\nMenu:\n");
        printf("1. Ingresar datos\n");
        printf("2. Buscar por DNI\n");
        printf("3. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);
        
        switch(opcion) {
            case 1:
                ingresarDatos();
                break;
            case 2:
                buscarPorDNI();
                break;
            case 3:
                printf("Saliendo del programa.\n");
                break;
            default:
                printf("Opción no válida.\n");
                break;
        }
    } while (opcion != 3);
    
    return 0;
}



