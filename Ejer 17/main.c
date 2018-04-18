#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*17.  	Escribir en  y codificar en C un programa que muestre los múltiplos de 6 comprendidos entre 0 y 100*/

int main()
{
    for(int i = 0 ; i < 100 ; i++)
    {
        if(i % 6 == 0)
        {
            printf("%d, ", i);
        }
    }

    getch();
    return 0;
}
