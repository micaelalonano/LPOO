#include <stdio.h>

int main() {
    FILE *archivo;

    // Abrir el archivo en modo de lectura y escritura
    archivo = fopen("archivo.txt", "r+");

    // Verificar si el archivo se abrió correctamente
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }

    // Mover el puntero de archivo al principio
    fseek(archivo, 1, SEEK_SET);
    // Escribir la palabra "PRINCIPIO"
    fprintf(archivo, "PRINCIPIO");

    // Mover el puntero de archivo al final
    fseek(archivo, 0, SEEK_END);
    // Escribir la palabra "FINAL"
    fprintf(archivo, "ACTUAL");
    
      // Mover el puntero de archivo al final
    fseek(archivo, 0, SEEK_END);
    // Escribir la palabra "FINAL"
    fprintf(archivo, " FINAL");

    // Cerrar el archivo
    fclose(archivo);

    return 0;
}

