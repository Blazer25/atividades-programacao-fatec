#include <stdio.h>
#include <math.h>

/*
    Faça uma função que receba três valores inteiros e retorne a somatória do quadrado de cada um deles
*/

int somarQuadrados(int numero1, int numero2, int numero3)
{
    int somatoria;

    somatoria = ((pow(numero1, 2) + pow(numero2, 2) + pow(numero3, 2)));

    return printf("A somatória dos quadrados de cada número, é: %d \n", somatoria);
}

int main()
{
    int numero1, numero2, numero3;

    printf("digite o 1° número: \n");
    while (scanf("%d", &numero1) != 1)
    {
        printf("Entrada inválida, digite um número inteiro: \n");
        while (getchar() != '\n')
            ;
    }

    printf("digite o 2° número: \n");
    while (scanf("%d", &numero2) != 1)
    {
        printf("Entrada inválida, digite um número inteiro: \n");
        while (getchar() != '\n')
            ;
    }

    printf("digite o 3° número: \n");
    while (scanf("%d", &numero3) != 1)
    {
        printf("Entrada inválida, digite um número inteiro: \n");
        while (getchar() != '\n')
            ;
    }

    somarQuadrados(numero1, numero2, numero3);
    return 0;
}
