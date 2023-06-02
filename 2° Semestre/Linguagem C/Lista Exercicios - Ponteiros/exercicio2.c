#include <stdio.h>

/*
Escreva uma função que receba dois ponteiros para inteiros e troque o valor das variáveis apontadas por eles.
*/

void trocaValores(int *ponteiroValor1, int *ponteiroValor2)
{
    int troca;

    troca = *ponteiroValor1;
    *ponteiroValor1 = *ponteiroValor2;
    *ponteiroValor2 = troca;
}

int main(void)
{
    int valor1 = 100, valor2 = 200;

    printf("Antes da troca: \n");
    printf("valor1 -> %d \n", valor1);
    printf("valor2 -> %d \n", valor2);
    printf("\n");

    trocaValores(&valor1, &valor2);

    printf("Depois da troca: \n");
    printf("valor1 -> %d \n", valor1);
    printf("valor2 -> %d \n", valor2);
    return 0;
}