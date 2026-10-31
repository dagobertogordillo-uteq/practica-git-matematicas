#include <stdio.h>
#include "operaciones.h"

int main()
{
    printf("---Calculadora del equipo---\n");
    printf("Suma (5+3): %d\n",sumar(5,3));
    printf("Resta (5-3): %d\n",restar(5,3));
    printf("Multiplicacion (5*3): %d\n",multiplicar(5,3));
    return 0;
}