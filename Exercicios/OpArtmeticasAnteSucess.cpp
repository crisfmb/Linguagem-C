#include <stdio.h>

int main()
{
    int numero;
    int antecessor;
    int sucessor;
    printf("Digite um número: ");
    scanf("%d", &numero);
    antecessor = numero - 1;
    sucessor = numero + 1;
    printf("Analisando o número %d, eu vejo que o antecessor dele é %d e o sucessor é %d", numero, antecessor, sucessor);

    return 0;
}