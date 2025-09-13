#include <stdio.h>

int main ()
{
    float fahrenheit, celsius;
    int inicio, fim, incremento;

    inicio = 0;
    fim = 300;
    incremento = 20;

    fahrenheit = inicio;
    printf("Fahrenheit\tCelsius\n");
    while (fahrenheit <= fim) {
        celsius = 5 * (fahrenheit - 32) / 9;
        printf("%6.0f%15.1f\n", fahrenheit, celsius);
        fahrenheit = fahrenheit + incremento;
    }
    
    return 0;
}