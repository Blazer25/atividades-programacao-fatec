#include <stdio.h>
#include <math.h>

/*
    Faça uma função que receba por parâmetros 3 valores inteiros referentes ao dia, ao mês e ao ano.
    Retorne 1 se for uma data válida e 0 se não formar uma data válida
*/

int validarData(int dia, int mes, int ano)
{
    if (dia < 0 || mes < 0 || ano < 0) return 0;
    if (dia > 31) return 0;
    if (mes > 12) return 0;

    if (ano % 400 == 0 || ano % 4 == 0 && ano % 100 != 0) {
        if(mes == 2 && dia > 29 || mes == 02 && dia > 29) { 
            return 0; 
        }
    } else {
        if(mes == 2 && dia >= 29 || mes == 02 && dia >= 29) { 
            return 0; 
        } 
    }

    if (dia == 30 && mes == 2 || dia == 30 && mes == 02) return 0;

    return 1;
}

int main()
{
    int dia, mes, ano;

    printf("Digite o dia: \n");
    while (scanf("%d", &dia) != 1)
    {
        printf("Entrada inválida, digite um número inteiro: \n");
        while (getchar() != '\n')
            ;
    }

    printf("Digite o mês: \n");
    while (scanf("%d", &mes) != 1)
    {
        printf("Entrada inválida, digite um número inteiro: \n");
        while (getchar() != '\n')
            ;
    }

    printf("Digite o ano: \n");
    while (scanf("%d", &ano) != 1)
    {
        printf("Entrada inválida, digite um número inteiro: \n");
        while (getchar() != '\n')
            ;
    }

    if (validarData(dia, mes, ano) == 0) printf("Retornou 0, sua data não é válida! \n");
    else printf("Retornou 1, sua data é válida! \n");

    return 0;
}
