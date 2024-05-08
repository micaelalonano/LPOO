#include <stdio.h>

int main() {
    FILE *archivo;
    char caracter;

    // Abrir archivo en modo lectura
    archivo = fopen("archivo.txt", "r");

    // Verificar si el archivo se abrió correctamente
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1; // Salir del programa con código de error
    }

    // Leer y mostrar el contenido del archivo caracter por caracter
    printf("Contenido del archivo:\n");
    while ((caracter = fgetc(archivo)) != EOF) {
        printf("%c", caracter);
    }

    // Cerrar el archivo
    fclose(archivo);

    return 0; // Salir del programa con éxito
}

