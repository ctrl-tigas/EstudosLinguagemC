#include <stdio.h>

int main()
{
    float celsius, fahrenheit, inicio, fim, incremento;

    inicio = -89.2; /*21/07/1983, Estacão russa Vostok, Antártida*/
    fim = 56.7; /*10/07/1913*, Furnace Creek, Califórnia/EUA */
    incremento = 2.5;
    celsius = inicio;

    printf("Celsius\t\tFahrenheit\n");
    while (celsius <= fim) 
    {
        fahrenheit = (celsius * 1.8) + 32;
        printf("%6.1f%15.1f\n", celsius, fahrenheit);
        celsius += incremento;
    }
    return 0;
}