#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*16.  	Diseñar un programa que imprima y sume la serie de números 3,6,9,12,...,99*/

int main()
{
    int acum = 0;
    int contador = 0;

    for(int i = 0 ; i < 33 ; i++)
    {
        contador = contador + 3;
        acum = acum + contador;
        printf("%d, ", contador);
    }
    printf("\n\nSuma: %d", acum);
    getch();
    return 0;
}
