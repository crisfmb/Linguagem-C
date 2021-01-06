#include <stdio.h>
#include <stdlib.h>

void digaoi()
{
    printf("Oi");
}

int soma(int valorA, int valorB)
{
    int resultadoSoma = valorA + valorB;
    return resultadoSoma;
}

int main()
{

    //digaoi();

    int resultadoSoma;
    int valorA, valorB;

    scanf("%d %d", &valorA, &valorB);
    resultadoSoma = soma(valorA, valorB);
    printf("%d", resultadoSoma);

    resultadoSoma = soma(50, 10);
    printf("%d", resultadoSoma);
}

//1-Tipo de Retorno: void(quanto não tem retorno), int, float, char, vetor...
//2-Nome da função: void digaOi(), int soma(), char retornaVogal()...
//3-Parâmetros que recebe: void digaOi(  ), int soma(int valorA, int valorB), char retornaVogal(letras)...
//4-O que ela faz dentro das chaves {}...
//5-O que ela retorna:  na VOID não retorna nada, return ALGUM_INTEIRO, return ALGUMA_LETRA...