#include <stdio.h>

/*
Faça uma função que leia N valores entrados pelo usuário e imprima o maior e o menor valor.
A função deve receber como argumento o próprio N.
*/

int retornaMaiorMenorNumero(int quantidadeNumeros)
{
    int numero, maior, menor;

    printf("Digite o 1° número: ");
    while (scanf("%d", &numero) != 1)
    {
        printf("Entrada inválida, digite um número inteiro: \n");
        while (getchar() != '\n')
            ;
    }
    maior = numero;
    menor = numero;

    for (int i = 2; i <= quantidadeNumeros; i++)
    {
        printf("Digite o %d° número: ", i);
        while (scanf("%d", &numero) != 1)
        {
            printf("Entrada inválida, digite um número inteiro: \n");
            while (getchar() != '\n')
                ;
        }

        if (numero > maior)
            maior = numero;
        else if (numero < menor)
            menor = numero;
    }
    return printf("O maior número é -> %d, e o menor número é -> %d \n", maior, menor);
}

int main()
{
    int numerosEntrar;

    printf("Quantos números você gostaria de digitar? \n");
    while (scanf("%d", &numerosEntrar) != 1)
    {
        printf("Entrada inválida, digite um número inteiro: \n");
        while (getchar() != '\n')
            ;
    }

    retornaMaiorMenorNumero(numerosEntrar);

    return 0;
}
