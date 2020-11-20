/* programinha basico besta */
#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese"); // Esse aqui é pra escrever caracteres especiais no C

    // printf("Oi, \ttudo \tbem? "); Adiciona tabulação na mensagem
    // printf("Oi, \ntudo \nbem? "); Quebra uma linha
    // printf("Oi, \rtudo \rbem? "); Ele volta o carro pro inicio pegas as ultimas letras e substitui nas primeiras
    // printf("Oi, tudo \\bem? ");
    // printf("Oi, tudo bem? \a "); Emite um beep no final q nunca escutei \a ou \7
    // printf("Oi, \ttudo \tbem? %%"); Mostrar a porcentagem tem q colocar duas pra mostrar uma mesma coisa com a barra
    printf("C é \n\"SUPER\" \nFácil!");

    /* code */
    return 0;
}
