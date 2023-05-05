#include <stdio.h>
#include <string.h>

/*
Faça uma função que receba três notas de um aluno e uma letra como parâmetros. Se a letra for A
(Aritmética), a função deve calcular e retornar a média aritmética das notas do aluno (p1+p2+p3)/3, e, se
for P (Ponderada) deve calcular e retornar a média ponderada com pesos 2, 4 e 5.
*/

float calcularMedia(float nota1, float nota2, float nota3, int verificadorTipoMedia)
{
    switch (verificadorTipoMedia)
    {
    case 1:
        return (nota1 + nota2 + nota3) / 3;
        break;
    case 2:
        return ((nota1 * 2) + (nota2 * 4) + (nota3 * 5)) / 11;
        break;
    }
}

int main()
{
    float nota1, nota2, nota3;
    char tipoMedia[10];
    int verificadorTipoMedia = 0;

    printf("Digite a primeira nota do aluno: \n");
    while (scanf("%f", &nota1) != 1)
    {
        printf("Entrada inválida, digite um valor real: \n");
        while (getchar() != '\n')
            ;
    }

    printf("Digite a segunda nota do aluno: \n");
    while (scanf("%f", &nota2) != 1)
    {
        printf("Entrada inválida, digite um valor real: \n");
        while (getchar() != '\n')
            ;
    }

    printf("Digite a terceira nota do aluno: \n");
    while (scanf("%f", &nota3) != 1)
    {
        printf("Entrada inválida, digite um valor real: \n");
        while (getchar() != '\n')
            ;
    }
    
    memset(tipoMedia, 0, sizeof(tipoMedia));

    do
    {
        printf("\n");
        printf("Digite o tipo de média: \n");
        printf("Digite A, para média Artimética. \n");
        printf("Digite P, para média Ponderada. \n");
        scanf("%s", tipoMedia);
        while (getchar() != '\n')
            ;
    } while (strcmp(tipoMedia, "A") != 0 && strcmp(tipoMedia, "P") != 0);

    if (strcmp(tipoMedia, "A") == 0)
        verificadorTipoMedia = 1;
    else if (strcmp(tipoMedia, "P") == 0)
        verificadorTipoMedia = 2;

    printf("A média do aluno é: %f", calcularMedia(nota1, nota2, nota3, verificadorTipoMedia));
    return 0;
}