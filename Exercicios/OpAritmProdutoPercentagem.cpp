#include <stdio.h>

int main()
{

    char nomeproduto[30];
    float desconto;
    float preco;
    float totaldesconto;

    printf("Produto: ");
    fflush(stdin);
    fgets(nomeproduto, 20, stdin);

    printf("Preço do Produto: ");
    scanf("%f", &preco);

    printf("Desconto: ");
    scanf("%f", &desconto);

    totaldesconto = preco * (1 - desconto / 100);

    printf("O produto %s custava %.2f, mas com %.2f  de desconto, passa a custar %.2f", nomeproduto, preco, desconto, totaldesconto);
}