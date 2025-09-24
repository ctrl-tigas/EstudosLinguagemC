#include <stdio.h>

int main()
{
    int caractere;

    while ((caractere = getchar()) != EOF)
    {
        putchar (caractere);
    }
    return 0;
}