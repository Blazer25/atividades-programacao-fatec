#include <stdio.h>

/*
Faça uma função que receba dois números inteiros e retorne
a soma dos números inteiros existentes entre eles.
Por exemplo: Para os valores de entrada 2 e 10, a soma será 3+4+5+6+7+8+9.
*/

int somarIntervalosInteiros(int valor1, int valor2)
{
    int diferencaEntreValores = 0;
    int soma = 0;
    int maior = 0, menor = 0;

    if (valor1 == valor2)
        return 0;

    if (valor1 > valor2)
    {
        maior = valor1;
        menor = valor2;
    }
    else
    {
        maior = valor2;
        menor = valor1;
    }

    diferencaEntreValores = maior - menor - 1;

    for (int i = 1; i <= diferencaEntreValores; i++)
    {
        maior = maior - 1;
        soma += maior;

        if (maior == menor + 1) break;
    }
    return soma;
}

int main()
{
    int valor1, valor2;

    printf("Digite um valor inteiro: \n");
    while (scanf("%d", &valor1) != 1)
    {
        printf("Entrada inválida, digite um valor inteiro:\n");
        while (getchar() != '\n')
            ;
    }

    printf("Digite outro valor inteiro: \n");
    while (scanf("%d", &valor2) != 1)
    {
        printf("Entrada inválida, digite um valor inteiro:\n");
        while (getchar() != '\n')
            ;
    }

    printf("A somar dos intervalos inteiros entre os números digitados é: %d \n", somarIntervalosInteiros(valor1, valor2));
}
