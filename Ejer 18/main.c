#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*18.  	Hacer el programa que nos permita introducir un número por teclado y nos informe si es positivo o negativo*/

int main()
{
    int numero;

    printf("Ingrese numero entero: ");
    scanf("%d", &numero);

    if(numero < 0)
    {
        printf("El numero es negativo");
    }
    else if(numero == 0)
    {
        printf("El numero es cero");
    }
    else{printf("El numero es positivo");}

    getch();
    return 0;
}
