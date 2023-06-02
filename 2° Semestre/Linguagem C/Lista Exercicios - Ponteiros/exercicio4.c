#include <stdio.h>

/*
Escreva uma função que receba uma string (array de caracteres) e 
retorne o comprimento da string usando aritméƟca de ponteiros.
*/

int caracteresString(char *vetor)
{
    int contador = 0;

    while (*vetor != '\0')
    {
        *vetor++;
        contador++;
    }

    return contador;
}

int main(void)
{
    char *ponteiroFrase = "frase contar 26 caracteres";

    int qtdCaracteres = caracteresString(ponteiroFrase);

    printf("A quantidade de caracteres da frase é: %d \n", qtdCaracteres);
    return 0;
}