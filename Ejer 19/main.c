#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*19.  	Hacer el programa que nos permita introducir un número por teclado y nos informe si es par o impar*/

int main()
{
    int numero;

    printf("Ingrese numero entero: ");
    scanf("%d", &numero);

    if(numero % 2 == 0)
    {
        printf("El numero es par");
    }
    else{printf("El numero es impar");}

    getch();
    return 0;
}
