#include <stdio.h>

int main ()
{
    int fahrenheit, celsius;
    int inicio, fim, incremento;

    inicio = 0;
    fim = 300;
    incremento = 20;

    fahrenheit = inicio;
    while (fahrenheit <= fim) {
        celsius = 5 * (fahrenheit - 32) / 9;
        printf("%d\t%d\n", fahrenheit, celsius);
        fahrenheit = fahrenheit + incremento;
    }
    
    return 0;
}