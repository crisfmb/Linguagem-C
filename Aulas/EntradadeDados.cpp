/* 
formatação
%d - int
%f - float/double
%c - char
%s - string
%e - notação
%hd - short int
%ld - long int
%hu - unsigned short
%u - unsigned
%lu - unsigned long
*/

#include <stdio.h>
int main()
{
    int n;
    float m;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    printf("Digite um numero real: ");
    scanf("%f", &m);
    printf("Você acabou de digitar o número %d e %.2f", n, m);

    return 0;
}
