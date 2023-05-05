#include <stdio.h>

/*
Faça uma função que receba três números inteiros: a, b e c, onde a>1; e retorne
a soma de todos os números inteiros de b até c que sejam divisíveis por a.
Exemplo: Para os valores de entrada 2 (para a), 5 (para b) e 10 (para c), a soma será 6+8+10 = 24
*/

int numerosSomadosDivisiveis(int valor1, int valor2, int valor3)
{
    int diferencaEntreValores = 0;
    int somaDivisivel = 0;
    int maior, menor;

    if (valor2 == valor3)
        return 0;

    if (valor2 > valor3)
    {
        maior = valor2;
        menor = valor3;
    }
    else
    {
        maior = valor3;
        menor = valor2;
    }

    diferencaEntreValores = maior - menor;

    for (int i = 1; i <= diferencaEntreValores; i++)
    {
        if (maior % valor1 == 0) somaDivisivel += maior;

        if (maior == menor) break;
        
        maior--;
    }
    return somaDivisivel;
}

int main()
{
    int valor1, valor2, valor3;

    printf("Digite o primeiro valor inteiro (a): \n");
    while (scanf("%d", &valor1) != 1 || valor1 <= 1)
    {
        printf("Entrada inválida, digite um valor inteiro e maior que 1:\n");
        while (getchar() != '\n')
            ;
    }

    printf("Digite o segundo valor inteiro (b): \n");
    while (scanf("%d", &valor2) != 1)
    {
        printf("Entrada inválida, digite um valor inteiro:\n");
        while (getchar() != '\n')
            ;
    }

    printf("Digite o terceiro valor inteiro (c): \n");
    while (scanf("%d", &valor3) != 1)
    {
        printf("Entrada inválida, digite um valor inteiro:\n");
        while (getchar() != '\n')
            ;
    }

    printf("A soma dos valores é: %d \n", numerosSomadosDivisiveis(valor1, valor2, valor3));
}