#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*12.  	Escribir en C un programa que muestre los números impares entre 0 y 100 y que imprima cuantos impares hay*/

int main()
{
    int contador = 0;

    for(int i=0 ; i < 100 ; i++)
    {
        if(i % 2 != 0)
        {
            printf("%d, ", i);
            contador++;
        }
    }
    printf("Hay %d numeros impares entre 0 y 100", contador);

    getch();
    return 0;
}
