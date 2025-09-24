#include <stdio.h>

#define INICIO 300 
#define FIM 0 
#define INCREMENTO 20 

int main() 
{
    int fahrenheit;

    for (fahrenheit = INICIO; fahrenheit >= FIM; fahrenheit -= INCREMENTO) 
    {   
        printf("%3d\t%6.1f\n", fahrenheit, ((5.0/9.0) * (fahrenheit - 32)));
    }
}