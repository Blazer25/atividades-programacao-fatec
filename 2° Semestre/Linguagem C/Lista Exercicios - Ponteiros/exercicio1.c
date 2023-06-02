#include <stdio.h>

/*
Escreva um programa que declare uma variável inteira e um ponteiro para essa variável.
Atribua um valor à variável e, em seguida, exiba o valor da variável usando o ponteiro.
*/

int main(void)
{
    int *valor1;
    int valor2 = 100;

    valor1 = &valor2;

    printf("Valor2 -> %d \n", valor2);
    printf("Valor2 memória -> %d \n", &valor2);
    printf("Valor1 memória -> %d \n", valor1);
    printf("Valor1 apontado -> %d \n", *valor1);
    return 0;
}