#include <stdio.h>

int main()
{
    // printf("argc=%d argv=%s", argc, argv[1]);
    char nome[10];
    printf("Qual é o seu nome? ");
    scanf("%s", nome);
    printf("Muito prazer em te conhecer  %s", nome);
    return 0;
}
