// ATIVIDADE 1 - Calculo - ADS - Noturno - 2o Período

/*
 * INTEGRANTES DO GRUPO:
 * CRYSTIAN EDUARDO FERRAZ SCHLEMPER
 * GIOVANI MURAKAMI LINO RODRIGUES
 * JOÃO ANTONIO COIMBRA NOVAES DETORE
 * JOÃO VITOR DA SILVEIRA EUGÊNIO
 */

#include <stdio.h>
#include <math.h>
#include <string.h>

float graus = 0, radianos = 0;
int opcaoDeEscolha = 0;

int main()
{
    do
    {
        printf("\n\n");
        printf("==================================================================\n");
        printf("Seja bem-vindo(a) a calculadora, fique a vontade para converter :)\n");
        printf("==================================================================\n");
        printf("Digite 1 para -> Converter graus para radianos.\n");
        printf("Digite 2 para -> Converter radianos para graus.\n");
        printf("Digite 3 para -> Sair\n");
        printf("==================================================================\n");
        scanf("%d", &opcaoDeEscolha);

        switch (opcaoDeEscolha)
        {
        case 1:
            grauParaRadiano();
            break;

        case 2:
            radianoParaGrau();
            break;

        case 3:
            sair();
            break;

        default:
            printf("Valor inválido! Digite algo entre 1 e 3.\n");
        }

    } while (opcaoDeEscolha <= 0 && opcaoDeEscolha >= 3);

    return 0;
}

int grauParaRadiano()
{
    printf("\n");
    printf("Você escolheu a opção que irá converter um valor em Grau para Radiano.\n");
    printf("Por favor, digite o valor do ângulo em grau:\n");
    while (scanf("%f", &graus) != 1)
    {
        printf("Entrada inválida. Por favor, digite um número inteiro ou flutuante: \n");
        while (getchar() != '\n')
            ;
    }

    printf("\n");
    graus < 0 ? printf("Você está operando com valores negativos... você está no sentido anti-horário :) \n") : printf("Você está operando com valores positivos... você está no sentido horário :) \n");

    radianos = graus * M_PI / 180;
    printf("%.4f Graus é equivalente a %.4f Radianos.\n", graus, radianos);
}

int radianoParaGrau()
{
    printf("\n");
    printf("Você escolheu a opção que irá converter um valor em Radiano para Grau.\n");
    printf("Por favor, digite o valor do ângulo em radianos:\n");
    while (scanf("%f", &radianos) != 1)
    {
        printf("Entrada inválida. Por favor, digite um número inteiro ou flutuante: \n");
        while (getchar() != '\n')
            ;
    }

    printf("\n");
    radianos < 0 ? printf("Você está operando com valores negativos... você está no sentido anti-horário :) \n") : printf("Você está operando com valores positivos... você está no sentido horário :) \n");

    graus = radianos * 180 / M_PI;
    printf("%.4f radianos é equivalente a %.4f graus.\n", radianos, graus);
}

int sair()
{
    printf("\n");
    printf("Saindo do programa... Adeus!\n");
    exit(0);
}