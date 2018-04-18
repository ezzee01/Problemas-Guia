#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*7.  	Escribir el programa necesario para calcular y mostrar el cuadrado de un número.
El número debe ser mayor que cero, en caso de error que aparezca el mensaje "ERROR, el número debe ser mayor que cero"*/

int main()
{
    int numero;
    int cuadrado;

    printf("Ingrese un numero mayor a cero: ");
    scanf("%d", &numero);

    while(numero < 0)
    {
        printf("ERROR, el numero debe ser mayor que cero. Reingrese: ");
        scanf("%d", &numero);
    }
    cuadrado = numero * numero;

    printf("El cuadrado de %d es %d", numero, cuadrado);

    getche();
    return 0;
}
