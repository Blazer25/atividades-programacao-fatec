#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Faça uma função que data um valor N onde (0<N<30)
apresente como resultado a soma dos valores entre 1 e o próprio N. Use recursividade.
*/

int somarValores(int valor)
{
    if (valor == 1)
        return;

    return valor + somarValores(valor - 1);
}

int main()
{
    int numeroGerado = 0;

    printf("Gerando número aleatório...\n");
    srand(time(NULL));
    numeroGerado = rand() % 29 + 1;

    printf("O número gerado foi: %d \n", numeroGerado);
    printf("A soma dos números entre 1 e %d é: %d\n", numeroGerado, somarValores(numeroGerado));

    return 0;
}