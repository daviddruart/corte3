#include <stdio.h>

#define ARREG 88
// Ingresos
int main() 
{
    int array[ARREG];
    int start_number;
    int search_number;
    int found = 0;
    
    printf("Bienvenido, consulta le secuencia de un numero. Recuerda que la consulta tiene un limite de 88\n");

    // Solicitud de numero inicial
    printf("Ingrese el número inicial para hacer el conteo: ");
    scanf("%d", &start_number);

    // Funcion para v
    for (int i = 0; i < ARREG; i++) {
        array[i] = start_number + i;
    }

    // Solicitar al usuario el número a buscar
    printf("Ingrese el número mayor para encontrar su ubicación: ");
    scanf("%d", &search_number);

    // Buscar el número en el arreglo
    for (int i = 0; i < ARREG; i++) {
        if (array[i] == search_number) {
            printf("Valor encontrado en la posición %d\n", i);
            found = 1;
            break;
        }
    }

    // Si no se encuentra el número
    if (!found) {
        printf("No encontrado\n");
    }

    return 0;
}
