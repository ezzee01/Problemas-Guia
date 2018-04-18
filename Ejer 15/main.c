#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*15.  	Hacer el programa que imprima los números del 100 al 0 en orden decreciente*/

int main()
{
    for(int i = 100 ; i >= 0 ; i--)
    {
        printf("%d, ", i);
    }

    getch();
    return 0;
}
