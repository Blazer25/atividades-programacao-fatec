#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Variáveis globais
int valorP;
int valorQ;

// Função principal
int main()
{
    int valorDigitadoInicial;

    printf("=======================================================\n");
    printf("Seja bem-vindo(a) a calculadora de lógica proposicional\n");
    printf("=======================================================\n");
    printf("Você terá 4 opções para realizar cálculos, sendo elas:\n");
    printf("Digite 1 para realizar a operação de negação (~P)\n");
    printf("Digite 2 para realizar a operação de E (P ^ Q)\n");
    printf("Digite 3 para realizar a operação de OU (P v Q)\n");
    printf("Digite 4 para sair da calculadora\n");
    scanf("%d", &valorDigitadoInicial);

    switch (valorDigitadoInicial)
    {
    case 1:
        negacao();
        break;

    case 2:
        e();
        break;

    case 3:
        ou();
        break;

    case 4:
        sair();
        break;

    default:
        break;
    }

    return 0;
}

int negacao()
{
    printf("Você escolheu a opção de Negação\n");

    printf("Parâmetro (P) -> Digite 0 para Falso e 1 para Verdadeiro\n");
    scanf("%d", &valorP);

    if (!valorP)
    {
        return printf("O valor lógico de ~P é: Verdadeiro\n");
    }
    else
    {
        return printf("O valor lógico de ~P é: Falso\n");
    }
}

int e()
{
    printf("Você escolheu a opção E\n");

    printf("Parâmetro (P) -> Digite 0 para Falso e 1 para Verdadeiro\n");
    scanf("%d", &valorP);

    printf("Parâmetro (Q) -> Digite 0 para Falso e 1 para Verdadeiro\n");
    scanf("%d", &valorQ);

    if (valorP && !valorQ || !valorP && valorQ || !valorP && !valorQ)
    {
        printf("O valor lógico de P ^ Q é: Falso\n");
    }
    else if (valorP && valorQ)
    {
        printf("O valor lógico de P ^ Q é: Verdadeiro\n");
    }

}

int ou()
{
    printf("Você escolheu a opção OU\n");

    printf("Parâmetro (P) -> Digite 0 para Falso e 1 para Verdadeiro\n");
    scanf("%d", &valorP);

    printf("Parâmetro (Q) -> Digite 0 para Falso e 1 para Verdadeiro\n");
    scanf("%d", &valorQ);

    if (valorP && !valorQ || !valorP && valorQ || valorP && valorQ)
    {
        printf("O valor lógico de P v Q é: Verdadeiro\n");
    }
    else if (!valorP && !valorQ)
    {
        printf("O valor lógico de P v Q é: Falso\n");
    }
}

int sair()
{
    printf("Saindo do programa... Adeus!\n");
    exit(0);
}
