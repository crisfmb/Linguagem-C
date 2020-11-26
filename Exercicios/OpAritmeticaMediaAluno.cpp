#include <stdio.h>

int main()
{
    float nota1;
    float nota2;
    float media;
    char nome[20];

    printf("Nome do Aluno: ");
    fflush(stdin);
    //scanf("%s", nome);
    fgets(nome, 20, stdin);

    printf("Nota 1: ");
    scanf("%f", &nota1);

    printf("Nota 2: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("O aluno %s tirou notas %.2f e %.2f e ficou com média %.2f\n", nome, nota1, nota2, media);
}
