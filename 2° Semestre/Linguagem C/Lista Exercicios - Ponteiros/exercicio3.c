#include <stdio.h>

/*
Escreva uma função que receba um vetor de inteiros e retorne a soma
de todos os elementos do vetor usando ponteiros.
*/

int somaVetor(int *vetor, int tamanho)
{
    int soma = 0;

    for (int i = 0; i < tamanho; i++)
    {
        soma += *vetor + i;
    }

    return soma;
}

int main(void)
{
    int vetor[5] = {1, 2, 3, 4, 5};

    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    int soma = somaVetor(&vetor, tamanho);

    printf("A soma do vetor de ponteiros é -> %d \n", soma);
    return 0;
}