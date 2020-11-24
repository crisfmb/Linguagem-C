#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(NULL));
    printf("Digite um número entre 1 e 5. Tente Advinhar!\n");
    int nc = rand() % 5 + 1;
    int nj;
    printf("Qual é o seu palpite?\n");
    scanf("%d", &nj);

    printf("Eu pensei no número %d e você pensou no número %d.", nc, nj);
}