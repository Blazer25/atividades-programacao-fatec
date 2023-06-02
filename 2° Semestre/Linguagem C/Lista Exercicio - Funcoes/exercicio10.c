#include <stdio.h>

/*
Faça uma função que receba um valor N onde (0<N<10) e como
retorno seja exibido a soma dos quadrados dos números entre N e 1.
*/

int somaQuadradoNumeros(int valor)
{
    if (valor == 0)
        return;

    return (valor * valor) + somaQuadradoNumeros(valor - 1);
}

int main()
{
    int numeroDigitado = 0;

    printf("Digite um número inteiro entre 1 e 9 \n");
    while (scanf("%d", &numeroDigitado) != 1 || numeroDigitado < 1 || numeroDigitado > 9)
    {
        printf("Entrada inválida, digite um número inteiro entre 1 e 9: \n");
        while (getchar() != '\n')
            ;
    };

    printf("A soma dos quadrados dos números entre %d e 1 é: %d \n", numeroDigitado, somaQuadradoNumeros(numeroDigitado));

    return 0;
}