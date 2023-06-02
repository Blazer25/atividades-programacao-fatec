#include <stdio.h>
#include <string.h>

/*
Faça uma função que receba três notas de um aluno e os pesos de cada uma das provas. A, a função
deve calcular e retornar a média ponderada das notas do aluno
*/

float calcularMediaPonderada(int peso1, int peso2, int peso3, float nota1, float nota2, float nota3)
{
    int totalPeso = 0;
    float totalNota = 0;

    totalPeso = peso1 + peso2 + peso3;
    totalNota = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3));

    return totalNota / totalPeso;
}

int main()
{
    float nota1, nota2, nota3;
    int peso1, peso2, peso3;

    // Primeira nota e primeiro peso
    printf("Digite a primeira nota do aluno: \n");
    while (scanf("%f", &nota1) != 1)
    {
        printf("Entrada inválida, digite um valor real: \n");
        while (getchar() != '\n')
            ;
    }

    printf("Digite o peso da primeira nota do aluno: \n");
    while (scanf("%d", &peso1) != 1)
    {
        printf("Entrada inválida, digite um valor inteiro: \n");
        while (getchar() != '\n')
            ;
    }

    // Segunda nota e segundo peso
    printf("Digite a segunda nota do aluno: \n");
    while (scanf("%f", &nota2) != 1)
    {
        printf("Entrada inválida, digite um valor real: \n");
        while (getchar() != '\n')
            ;
    }

    printf("Digite o peso da segunda nota do aluno: \n");
    while (scanf("%d", &peso2) != 1)
    {
        printf("Entrada inválida, digite um valor inteiro: \n");
        while (getchar() != '\n')
            ;
    }

    // Terceira nota e terceiro peso
    printf("Digite a terceira nota do aluno: \n");
    while (scanf("%f", &nota3) != 1)
    {
        printf("Entrada inválida, digite um valor real: \n");
        while (getchar() != '\n')
            ;
    }

    printf("Digite o peso da terceira nota do aluno: \n");
    while (scanf("%d", &peso3) != 1)
    {
        printf("Entrada inválida, digite um valor inteiro: \n");
        while (getchar() != '\n')
            ;
    }

    printf("A média ponderada do aluno é: %f", calcularMediaPonderada(peso1, peso2, peso3, nota1, nota2, nota3));
    return 0;
}