#include <stdio.h>
#include <string.h>

int main() {
    char cadena1[100], cadena2[100];
    int frecuenciaCarac1[200]={0}; 
    int frecuenciaCarac2[200]={0}; 
    
    
    printf("Ingrese la primera cadena: ");
    scanf("%s", cadena1);
    printf("Ingrese la segunda cadena: ");
    scanf("%s", cadena2);

    int longitud1 = strlen(cadena1);
    int longitud2 = strlen(cadena2);

    if (longitud1 != longitud2) {
        printf("Las cadenas \"%s\" y \"%s\" no son anagramas.\n", cadena1, cadena2);
        return 0;
    }

    for (int i = 0; i < longitud1; i++) {
        frecuenciaCarac1[cadena1[i]]++;
    }

    for (int i = 0; i < longitud2; i++) {
        frecuenciaCarac2[cadena2[i]]++;
    }

    for (int i = 0; i < 200; i++) {
        if (frecuenciaCarac1[i] != frecuenciaCarac2[i]) {
            printf("Las cadenas \"%s\" y \"%s\" no son anagramas.\n", cadena1, cadena2);
            return 0;
        }
    }

    printf("Las cadenas \"%s\" y \"%s\" son anagramas.\n", cadena1, cadena2);

    return 0;
}
