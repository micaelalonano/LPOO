#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void guardarDatos();
void buscarPorDNI();
void buscarPorApellidoNombre();
void mostrarOrdenadoNombreApellido(int asc);
void mostrarOrdenadoDNI(int asc);
void ordenar(char arr[][50], int numElementos, int asc);

int main() {
    int opcion;
    
    do {
        printf("\n\t                     --- MENU ---                       \n");
        printf("\t ________________________________________________________\n");
        printf("\t|                                                        |\n");
        printf("\t|  1. Ingresar datos de personas y guardar en archivo    |\n");
        printf("\t|  2. Buscar por DNI                                     |\n");
        printf("\t|  3. Buscar por nombre y apellido                       |\n");
        printf("\t|  4. Mostrar los datos ordenados por nombre y apellido  |\n");
        printf("\t|  5. Mostrar los datos ordenados por DNI                |\n");
        printf("\t|  6. Salir                                              |\n");
        printf("\t|________________________________________________________|\n");
        printf("\t Ingrese su opcion: ");
        scanf("%d", &opcion);
        
        switch (opcion) {
            case 1:
                guardarDatos();
                break;
            case 2:
                buscarPorDNI();
                break;
            case 3:
                buscarPorApellidoNombre();
                break;
            case 4:
                printf("\t 1. Orden Ascendente\n");
                printf("\t 2. Orden Descendente\n");
                printf("\t Seleccione el orden: ");
                scanf("%d", &opcion);
                mostrarOrdenadoNombreApellido(opcion == 1 ? 1 : 0);
                break;
            case 5:
                printf("\t 1. Orden Ascendente\n");
                printf("\t 2. Orden Descendente\n");
                printf("\t Seleccione el orden: ");
                scanf("%d", &opcion);
                mostrarOrdenadoDNI(opcion == 1 ? 1 : 0);
                break;
            case 6:
                printf("\t Saliendo del programa...\n");
                break;
        }
    } while (opcion != 6);
    
    return 0;
}

void guardarDatos() {
    char nombre[50];
    char apellido[50];
    char dni[50];
    
    printf("\t Ingrese el nombre: ");
    scanf("%s", nombre);
    printf("\t Ingrese el apellido: ");
    scanf("%s", apellido);
    printf("\t Ingrese el DNI: ");
    scanf("%s", dni);
    
    FILE *archivo = fopen("archivo4.txt", "a"); // Abrir archivo en modo append
    
    if (archivo == NULL) {
        printf("\t Error al abrir el archivo.\n");
        return;
    }
    
    fprintf(archivo, "%s|%s|%s\n", nombre, apellido, dni); // Guardar datos separados por '|'
    
    fclose(archivo);
    printf("\t Datos guardados correctamente.\n");
}

void buscarPorDNI() {
    char dniBusqueda[50];
    printf("\t Ingrese el DNI a buscar: ");
    scanf("%s", dniBusqueda);
    
    FILE *archivo = fopen("archivo4.txt", "r");
    if (archivo == NULL) {
        printf("\t Error al abrir el archivo.\n");
        return;
    }
    
    char dni[50];
    char nombre[50];
    char apellido[50];
    int encontrado = 0;
    
    while (fscanf(archivo, "%[^|]|%[^|]|%[^\n]\n", nombre, apellido, dni) != EOF) {
        if (strcmp(dni, dniBusqueda) == 0) {
            printf("\t Nombre: %s\n", nombre);
            printf("\t Apellido: %s\n", apellido);
            encontrado = 1;
            break; // Si encontramos una coincidencia, salimos del bucle
        }
    }
    
    if (encontrado == 0) {
        printf("\t DNI no encontrado.\n");
    }   
    fclose(archivo);
}

void buscarPorApellidoNombre() {
    char apellidoBusqueda[50];
    char nombreBusqueda[50];
    
    FILE *archivo = fopen("archivo4.txt", "r");
    if (archivo == NULL) {
        printf("\t Error al abrir el archivo.\n");
        return;
    }
    
    printf("\t Ingrese el Nombre a buscar: ");
    scanf("%s", nombreBusqueda);
    printf("\t Ingrese el Apellido a buscar: ");
    scanf("%s", apellidoBusqueda);
    
    char dni[50];
    char nombre[50];
    char apellido[50];
    int encontrado = 0;
    
    while (fscanf(archivo, "%[^|]|%[^|]|%[^\n]\n", nombre, apellido, dni) != EOF) {
        if (strcmp(apellido, apellidoBusqueda) == 0 && strcmp(nombre, nombreBusqueda) == 0) {
            printf("\n\t Nombre: %s\n", nombre);
            printf("\t Apellido: %s\n", apellido);
            printf("\t DNI: %s\n", dni);
            encontrado = 1;
            break; // Si encontramos una coincidencia, salimos del bucle
        }
    }
    
    if (encontrado == 0) {
        printf("\t No se encontraron personas con el Apellido '%s' y Nombre '%s'.\n", apellidoBusqueda, nombreBusqueda);
    }
    
    fclose(archivo);
}

void mostrarOrdenadoNombreApellido(int asc) {
    FILE *archivo = fopen("archivo4.txt", "r");
    if (archivo == NULL) {
        printf("\t Error al abrir el archivo.\n");
        return;
    }
    
    char nombres[100][50];
    char apellidos[100][50];
    char dni[100][50];
    int numPersonas = 0;
    
    while (fscanf(archivo, "%[^|]|%[^|]|%[^\n]\n", nombres[numPersonas], apellidos[numPersonas], dni[numPersonas]) != EOF) {
        numPersonas++;
    }
    
    ordenar(nombres, numPersonas, asc);    
    // Mostrar los datos ordenados
    for (int i = 0; i < numPersonas; i++) {
        printf("\n\t Nombre: %s\n", nombres[i]);
        printf("\t Apellido: %s\n", apellidos[i]);
        printf("\t DNI: %s\n", dni[i]);
    }
    
    fclose(archivo);
}

void mostrarOrdenadoDNI(int asc) {
    FILE *archivo = fopen("archivo4.txt", "r");
    if (archivo == NULL) {
        printf("\t Error al abrir el archivo.\n");
        return;
    }
    
    char nombres[100][50];
    char apellidos[100][50];
    char dni[100][50];
    int numPersonas = 0;
    
    while (fscanf(archivo, "%[^|]|%[^|]|%[^\n]\n", nombres[numPersonas], apellidos[numPersonas], dni[numPersonas]) != EOF) {
        numPersonas++;
    }
    
    ordenar(dni, numPersonas, asc);
    
    // Mostrar los datos ordenados
    for (int i = 0; i < numPersonas; i++) {
        printf("\n\t Nombre: %s\n", nombres[i]);
        printf("\t Apellido: %s\n", apellidos[i]);
        printf("\t DNI: %s\n", dni[i]);
    }
    
    fclose(archivo);
}

void ordenar(char arr[][50], int numElementos, int asc) {
    for (int i = 0; i < numElementos - 1; i++) {
        for (int j = i + 1; j < numElementos; j++) {
            if ((asc && atoi(arr[i]) > atoi(arr[j])) || (!asc && atoi(arr[i]) < atoi(arr[j]))) {
                char temp[50];
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }
}

