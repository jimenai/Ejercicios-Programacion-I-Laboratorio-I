#include <stdio.h>
#include <stdlib.h>
#include "Vectores.h"
#define T 5

void cargarVector(int [], int);
void mostrarElementosDelVector(int[],int);
int buscarMaximo(int[], int);

int main()
{
    int numeros[T];
    int maximo;

    cargarVector(numeros, T);

    mostrarElementosDelVector(numeros, T);

    maximo = buscarMaximo(numeros,T);
    printf("El valor maximo del array es: %d", maximo);
    return 0;
}
