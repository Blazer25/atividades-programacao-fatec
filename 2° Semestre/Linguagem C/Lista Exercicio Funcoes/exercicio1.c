#include <stdio.h>

/*
 Faça uma função que retorne 1 se o número passado como argumento 
 for positivo e -1 se for negativo e 0 se for ZERO.
*/

int verPositividade(int valor) {
    if (valor == 0) return 0;
    if (valor > 0) return 1;
    if (valor < 0) return -1;
}

int main()
{
    int valor;
    
    printf("Digite um valor inteiro: \n");
        while (scanf("%d", &valor) != 1)
    {
        printf("Entrada inválida, digite um valor inteiro:\n");
        while (getchar() != '\n')
            ;
    }
    
    printf("Se o retorno for igual a 1, o valor digitado é positivo. \n");
    printf("Se o retorno for igual a 0, o valor digitado é 0. \n");
    printf("Se o retorno for igual a -1, o valor digitado é negativo. \n");
    printf("O seu retorno para o número digitado é: %d \n", verPositividade(valor));
}
