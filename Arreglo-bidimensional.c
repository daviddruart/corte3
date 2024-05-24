
#include <stdio.h>

int main() 
{
    int array[9][9];
    int i, j;
    int numero_usuario;

    for(i = 0; i < 9; i++) 
    {
        for(j = 0; j < 9; j++) 
        {
            array[i][j] = i * 9 + j;
        }
    }
    
    printf("Bienvenido, esta es una matriz de 9x9\n");

    printf("Ingresa el numero que deseas buscar, recuerda que debe ser menor a 81: ");
    scanf("%d", &numero_usuario);
    
    int encontrado = 0;
    int pos_i = -1, pos_j = -1;

    for (i = 0; i < 9; i++) 
    {
        for (j = 0; j < 9; j++) 
        {
            if (array[i][j] == numero_usuario) 
            {
                pos_i = i;
                pos_j = j;
                encontrado = 1;
                break; 
            }
        }
        if (encontrado) break;
    }
    
    if (encontrado) 
    {
        printf("El numero buscado esta en la posicion:  [%d, %d]\n", pos_i, pos_j);
    } 
    else 
    {
        printf("No encontrado\n");
    }

    return 0;
 }
