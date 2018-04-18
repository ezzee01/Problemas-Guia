#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*13.  	Hacer el programa que imprima los números pares entre el 1 y el 100*/

int main()
{
    int contador = 0;

    for(int i=0 ; i < 101 ; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d, ", i);
            contador++;
        }
    }
    printf("Hay %d numeros pares entre 0 y 100", contador);

    getch();
    return 0;
}
