#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_JUGADORES 10

struct Jugador {
    char nombre[100];
    int puntaje;
};

// Función para ingresar los datos de un jugador y guardarlos en un archivo
void ingresarDatos() {
    char nombre[100];
    int puntaje;
    
    printf("Ingrese el nombre del jugador: ");
    scanf("%s", nombre);
    
    printf("Ingrese el puntaje del jugador: ");
    scanf("%d", &puntaje);
    
    FILE* archivo = fopen("jugadores.txt", "a");
    
    if (archivo != NULL) {
        fprintf(archivo, "%s,%d\n", nombre, puntaje);
        fclose(archivo);
        printf("Datos guardados exitosamente.\n");
    } else {
        printf("Error al abrir el archivo.\n");
    }
}

// Función para comparar dos jugadores para ordenarlos por puntaje
int compararJugadores(const void *a, const void *b) {
    return ((struct Jugador*)b)->puntaje - ((struct Jugador*)a)->puntaje;
}

// Función para mostrar los 10 mejores jugadores ordenados por puntaje
void mostrarMejoresJugadores() {
    struct Jugador jugadores[MAX_JUGADORES];
    int i = 0;
    
    FILE* archivo = fopen("jugadores.txt", "r");
    
    if (archivo != NULL) {
        while (fscanf(archivo, "%[^,],%d\n", jugadores[i].nombre, &jugadores[i].puntaje) == 2) {
            i++;
            if (i >= MAX_JUGADORES)
                break;
        }
        fclose(archivo);
        
        qsort(jugadores, i, sizeof(struct Jugador), compararJugadores);
        
        printf("Los 10 mejores jugadores:\n");
        for (int j = 0; j < i && j < MAX_JUGADORES; j++) {
            printf("%d. Nombre: %s, Puntaje: %d\n", j + 1, jugadores[j].nombre, jugadores[j].puntaje);
        }
    } else {
        printf("Error al abrir el archivo.\n");
    }
}

// Función para buscar un jugador por nombre
void buscarPorNombre() {
    char nombreBuscado[100], nombre[100];
    int puntaje;
    int encontrado = 0;
    
    printf("Ingrese el nombre a buscar: ");
    scanf("%s", nombreBuscado);
    
    FILE* archivo = fopen("jugadores.txt", "r");
    
    if (archivo != NULL) {
        while (fscanf(archivo, "%[^,],%d\n", nombre, &puntaje) == 2) {
            if (strcmp(nombre, nombreBuscado) == 0) {
                printf("Nombre: %s, Puntaje: %d\n", nombre, puntaje);
                encontrado = 1;
            }
        }
        fclose(archivo);
        
        if (!encontrado) {
            printf("Jugador no encontrado.\n");
        }
    } else {
        printf("Error al abrir el archivo.\n");
    }
}

int main() {
    int opcion;
    
    do {
        printf("\nMenu:\n");
        printf("1. Ingresar datos del jugador\n");
        printf("2. Mostrar los 10 mejores jugadores\n");
        printf("3. Buscar jugador por nombre\n");
        printf("4. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);
        
        switch(opcion) {
            case 1:
                ingresarDatos();
                break;
            case 2:
                mostrarMejoresJugadores();
                break;
            case 3:
                buscarPorNombre();
                break;
            case 4:
                printf("Saliendo del programa.\n");
                break;
            default:
                printf("Opción inválida.\n");
        }
    } while (opcion != 4);
    
    return 0;
}

