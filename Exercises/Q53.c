#include <stdio.h>

int main()
{
    int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int soma = 0;

    for (int i = 0; i < 10; i++)
    //* OU for (int i = 0; i < sizeof(vetor) / sizeof(int); i++)
    {
        soma += vetor[i];
    }

    int media;
    media = soma/10;

    printf("A soma dos elementos do vetor eh: %d\n", soma);
    printf("A media dos elementos do vetor eh: %d\n", media);

    return 0;
}
