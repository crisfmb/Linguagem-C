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
// #define TOTAL 8 - primeira maneira definir uma constante. é uma diretiva de pré-processamento.

//Com o uso de #define, o valor é substituido antes da compilação.

int main()
{
    const int TOTAL = 8; // essa é a segunda maneira de definir uma constamte. é uma palavra reservada C
    // com o const, a constante existe na memória e com o const e possivel indicar o tipo primitivo da constante se vc precisar de uma tipagem mais especifica.

    printf("%d", TOTAL);

    return 0;
}