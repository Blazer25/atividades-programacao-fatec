#include <stdio.h>

/*
Escreva um programa que leia um vetor de inteiros e
encontre o menor elemento usando ponteiros.
*/

int menorNumero(int *vetor, int tamanho)
{
    int menor = *vetor;
    // OU
    // int menor = vetor[0];

    for (int i = 0; i < tamanho; i++)
    {
        if (*vetor < menor) menor = *vetor;

        *vetor++;
    }

    return menor;
}

int main(void)
{
    int vetor[5] = {6, 2, 19, 4, 5};

    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    int menor = menorNumero(&vetor, tamanho);

    printf("O menor número do vetor de ponteiros é -> %d \n", menor);
    return 0;
}