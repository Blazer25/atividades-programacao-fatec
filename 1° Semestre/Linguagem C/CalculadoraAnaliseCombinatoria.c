#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* Variáveis globais, que são usadas em mais de um lugar */
int n = 0; // N = número de elementos;
int k = 0; // K = número de posições;
int nFatorado = 0, kFatorado = 0;
int nMenosK = 0;
int resultado = 0;

int main()
{
    int opcaoDeEscolha = 0;
    do
    {
    printf("\n\n");
    printf("=========================================================\n");
    printf("Seja bem-vindo(a) a calculadora de análise combinatória!\n");
    printf("=========================================================\n");
    printf("Digite 1 para -> Permutação -> P(n)\n");
    printf("Digite 2 para -> Permutação com repetição -> P(n)\n");
    printf("Digite 3 para -> Arranjo -> A(n,k)\n");
    printf("Digite 4 para -> Arranjo com repetição -> AR(n,k)\n");
    printf("Digite 5 para -> Combinação -> C(n,k)\n");
    printf("Digite 6 para -> Combinação com repetição -> C(n,k)\n");
    printf("Digite 7 para -> Sair\n");
    printf("=========================================================\n");
    scanf("%d", &opcaoDeEscolha);

    switch (opcaoDeEscolha)
    {
    case 1:
        permutacao();
        break;

    case 2:
        permutacaoComRepeticao();
        break;

    case 3:
        arranjo();
        break;

    case 4:
        arranjoComRepeticao();
        break;

    case 5:
        combinacao();
        break;

    case 6:
        combinacaoComRepeticao();
        break;

    case 7:
        sair();
        break;

    default:
        printf("Valor inválido! Digite algo entre 1 e 7.\n");
    }
    } while (opcaoDeEscolha != 7);
    return 0;
}

// INICIO DAS FUNÇÕES COM OS CALCULOS DA CALCULADORA
int permutacao()
{
    printf("\n");
    printf("Você escolheu a opção de permutação.\n");
    printf("Digite o número de elementos (n) para permutar:\n");
    scanf("%d", &n);

    if (n < 0)
        return printf("Valor inválido! Deve ser um número inteiro positivo.\n");

    printf("\n");
    printf("RESULTADO: \n");
    printf("A Permutação de %d, é: %d\n", n, fatorialDeUmNumero(n));
}

int permutacaoComRepeticao()
{
    int i = 0;
    int numeroElementosQueSeRepetem = 0;
    int resultadoRepeticao = 1;
    int somatoriaK = 0;

    printf("\n");
    printf("Você escolheu a opção de permutação com repetição.\n");
    printf("Digite o número de elementos (n):\n");
    scanf("%d", &n);

    if (n < 0)
        return printf("Valor inválido! Deve ser um número inteiro positivo.\n");

    printf("Quantos elementos se repetem?\n");
    scanf("%d", &numeroElementosQueSeRepetem);

    if (numeroElementosQueSeRepetem < 0)
        return printf("Valor inválido! Deve ser um número inteiro positivo.\n");
    if (numeroElementosQueSeRepetem > n)
        return printf("Valor inválido! Deve ser menor ou igual ao número de elementos\n");

    for (i = 1; i <= numeroElementosQueSeRepetem; i++)
    {
        printf("Quantas vezes o %d° elemento se repete? \n", i);
        scanf("%d", &k);

        if (k  <= 1)
        {
            return printf("O número de repetições de qualquer elemento deve ser maior que um.\n");
            break;
        }

        if (k > n)
        {
            return printf("O elemento que se repete não pode ser maior que a quantidade de elementos (n).\n");
            break;
        }

        somatoriaK = somatoriaK + k;
        if (somatoriaK > n)
        {
            return printf("A quantidade de itens que se repete não pode ser maior que N.\n");
            break;
        }

        resultadoRepeticao = resultadoRepeticao * fatorialDeUmNumero(k);
    }

    resultado = fatorialDeUmNumero(n) / resultadoRepeticao;
    printf("\n");
    printf("RESULTADO: \n");
    printf("A Permutação com repetição de %d elementos, e %d elementos que se repetem é: %d\n", n, numeroElementosQueSeRepetem, resultado);
}

int arranjo()
{
    printf("\n");
    printf("Você escolheu a opção de arranjo.\n");

    printf("Digite o número de elementos (n):\n");

    if (n < 0)
        return printf("Valor inválido! Deve ser um número inteiro positivo.\n");

    scanf("%d", &n);

    printf("Digite o número de posições (k):\n");
    scanf("%d", &k);

    if (k < 0)
        return printf("Valor inválido! Deve ser um número inteiro positivo.\n");
    if (k > n)
        return printf("Valor inválido! Deve ser menor ou igual ao número de elementos\n");

    nFatorado = fatorialDeUmNumero(n);
    nMenosK = fatorialDeUmNumero(n - k);

    resultado = nFatorado / nMenosK;
    printf("\n");
    printf("RESULTADO: \n");
    printf("O Arranjo de %d elementos, para %d posições, é: %d\n", n, k, resultado);
}

int arranjoComRepeticao()
{
    printf("\n");
    printf("Você escolheu a opção de arranjo com repetição.\n");

    printf("Digite o número de elementos (n):\n");
    scanf("%d", &n);

    if (n < 0)
        return printf("Valor inválido! Deve ser um número inteiro positivo.\n");

    printf("Digite o número de posições (k):\n");
    scanf("%d", &k);

    if (k < 0)
        return printf("Valor inválido! Deve ser um número inteiro positivo.\n");
    if (k > n)
        return printf("Valor inválido! Deve ser menor ou igual ao número de elementos\n");

    resultado = numeroElevadoPorOutro(n, k);
    printf("\n");
    printf("RESULTADO: \n");
    printf("O Arranjo com repetição de %d elementos, para %d posições, é: %d\n", n, k, resultado);
}

int combinacao()
{
    printf("\n");
    printf("Você escolheu a opção de combinação.\n");

    printf("Digite o número de elementos (n):\n");
    scanf("%d", &n);

    if (n < 0)
        return printf("Valor inválido! Deve ser um número inteiro positivo.\n");

    printf("Digite o número de posições (k):\n");
    scanf("%d", &k);

    if (k < 0)
        return printf("Valor inválido! Deve ser um número inteiro positivo.\n");
    if (k > n)
        return printf("Valor inválido! Deve ser menor ou igual ao número de elementos\n");

    nFatorado = fatorialDeUmNumero(n);
    kFatorado = fatorialDeUmNumero(k);
    nMenosK = fatorialDeUmNumero(n - k);

    resultado = nFatorado / (kFatorado * nMenosK);
    printf("\n");
    printf("RESULTADO: \n");
    printf("A combinação de %d elementos, para %d posições, é: %d\n", n, k, resultado);
}

int combinacaoComRepeticao()
{

    int numerador = 0;
    int elementosMenosUm = 0;

    printf("\n");
    printf("Você escolheu a opção de combinação com repetição.\n");

    printf("Digite o número de elementos (n):\n");
    scanf("%d", &n);

    if (n < 0)
        return printf("Valor inválido! Deve ser um número inteiro positivo.\n");

    printf("Digite o número de posições (k):\n");
    scanf("%d", &k);

    if (k < 0)
        return printf("Valor inválido! Deve ser um número inteiro positivo.\n");
    if (k > n)
        return printf("Valor inválido! Deve ser menor ou igual ao número de elementos\n");

    numerador = fatorialDeUmNumero(n + k - 1);
    kFatorado = fatorialDeUmNumero(k);
    elementosMenosUm = fatorialDeUmNumero(n - 1);

    resultado = numerador / (kFatorado * elementosMenosUm);
    printf("\n");
    printf("RESULTADO: \n");
    printf("A combinação com repetição de %d elementos, para %d posições, é: %d\n", n, k, resultado);
}

int sair()
{
    printf("\n");
    printf("Saindo do programa... Adeus!\n");
    exit(0);
}
// FIM DAS FUNÇÕES COM OS CALCULOS DA CALCULADORA

// INICIO DAS FUNÇÕES COMPLEMENTARES
int fatorialDeUmNumero(int numero)
{

    int fatorial;

    for (fatorial = 1; numero >= 2; numero--)
    {
        fatorial = fatorial * numero;
    }

    return fatorial;
}

int numeroElevadoPorOutro(int base, int expoente)
{
    int resultadoElevacao = 0;

    resultadoElevacao = pow(base, expoente);

    return resultadoElevacao;
}
// FIM DAS FUNÇÕES COMPLEMENTARES