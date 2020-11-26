/* 


*/

#include <stdio.h>

int main()
{
    int n1;
    int n2;
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);

    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    int sum = n1 + n2;
    int product = n1 * n2;
    int difference = (float)n1 - n2;
    int quotiente = (float)n1 / n2;
    int reminder = n1 % n2;

    printf("=-=-=-=-=-=-=-Answer Below=-=-=-=-=-=-=-=\n");
    printf("A soma é: %d\n", sum);
    printf("O produto é: %d\n", product);
    printf("A diferença(menos) é: %d\n", difference);
    printf("A divisão é: %d\n", quotiente);
    printf("O resto é: %d\n", reminder);
}