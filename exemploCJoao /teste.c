/* Write a program, called sort_file, which takes a text file as input and produces an output file which has all the original lines in alphabetical order.

The program should do the following:

* Prompt the user for the names of the input and output files. You can prepare an input file  with appropriate unsorted data. A simple file with one word per line will suffice.
* Declare and define three functions to perform the following tasks:

1. Read the data from the input file into an array.
2. Sort the array using the bubble sort algorithm.
3. Write the sorted data array to the output file.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 30
#define LEN 31

char name[LEN][SIZE]; /* Data records */

void bubbleSort(int last)
{

    char hold[LEN];
    int i, j; /* indices of array */
    //Faz a Ordenacao
    for (i = last; i > 0; i--)
    {
        for (j = 1; j <= i; j++)
        {
            if (strcmp(name[j], name[j - 1]) < 0)
            {
                strcpy(hold, name[j]);
                strcpy(name[j], name[j - 1]);
                strcpy(name[j - 1], hold);
            }
        }
    }
}

void writeData(char *outFilename, int last)
{

    FILE *fp;
    int i;

    fp = fopen(outFilename, "wt");
    //Escreve a saÌda na tela
    for (i = 0; i <= last; i++)
    {
        printf("- %s \n", name[i]);
        fwrite(name[i], 1, sizeof(name[i]), fp);
        fwrite("\n", 1, sizeof("\n"), fp);
    }

    fclose(fp);
}

int readData(char *inFilename, char *outFilename)
{

    int i = 0; /* indices of array */
    int last;  /* index of last item in array */

    FILE *fpPtr;

    //Testa se Pode Abre o arquivo
    if ((fpPtr = fopen(inFilename, "r")) == NULL)
    {
        return 0;
    }
    else
    {

        //Percorre todo o arquivo lendo cara linha para o fpPtr
        for (i = 0; !feof(fpPtr); i++)
        {
            fscanf(fpPtr, "%s", name[i]);
        }

        //Último índice
        last = i - 1;

        //Fecha o arquivo
        fclose(fpPtr);

        //Faz a ordenação
        bubbleSort(last);

        printf("Enter Output Filename > ");
        scanf("%s", outFilename);

        writeData(outFilename, last);

        return 1;
    }
}

int main()
{

    char inFilename[1000], outFilename[1000]; //Nomes dos arquivos

    //Lê o nome do arquivo a ser lido
    printf("Enter Input Filename > ");
    scanf("%s", inFilename);

    //Analisa se é possível ler o arquivo
    if (readData(inFilename, outFilename))
    {
        printf("File opened successfully");
    }
    else
    {
        printf("File could not be opened");
    }

    return 0;
}