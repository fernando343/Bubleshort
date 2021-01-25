/*1. Comenzamos a hacer la comparacion de elementos adyacentes
2.- repetimos hasta tener un pasado completo sin ningun swap
NOTAS
Necesitamos 3 funciones 
la primera se encarga del cambio de posision 
la segunda es la funcion de buble short
la tercera se encarga de imprimir el array ordenado
*/

#include <stdio.h>

void cambiar_pos(int *n1, int *n2)
{

    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

void bubleSort(int vector_entrada[], int n)
{

    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (vector_entrada[j] < vector_entrada[j + 1])
                cambiar_pos(&vector_entrada[j], &vector_entrada[j + 1]);
        }
    }
}

int print_array(int vector_entrada[], int n)
{
    int i;
    for (i = 0; i < n - 1; i++)
    {
        printf("%d, ", vector_entrada[i]);
    }

    printf("\n Fin del ordenamiento");
}

int main()
{

    int vector_entrada[10] = {5, 20, 40, 2, 80, 1, 30, 6, 9, 4};

    int n = sizeof(vector_entrada) / sizeof(vector_entrada[0]);

    bubleSort(vector_entrada, n);
    print_array(vector_entrada, n);
    printf("\n");

    return 0;
}
