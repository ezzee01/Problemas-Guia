#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*3.	Escribir  un programa que realice las siguientes acciones
•	Limpie la pantalla
•	Asigne a 2 variables numero1 y numero2 valores distintos de cero
•	Efectúe el producto de dichas variables
•	Muestre el resultado pos pantalla
•	Obtenga el cuadrado de numero1 y lo muestre par pantalla
 */

int main()
{
    int numero1;
    int numero2;
    int producto;
    int potencia;

    system("cls");
    printf("Ingrese primer numero distinto de cero: ");
    scanf("%d", &numero1);

    while(numero1 == 0)
    {
        printf("Error, debe ser distinto de cero. Reingrese:  ");
        scanf("%d", &numero1);
    }

    printf("Ingrese segundo numero distinto de cero: ");
    scanf("%d", &numero2);

    while(numero2 == 0)
    {
        printf("Error, debe ser distinto de cero. Reingrese:  ");
        scanf("%d", &numero2);
    }

    producto = numero1 * numero2;

    printf("El producto es de: %d\n",producto);

    potencia = numero1 * numero1;

    printf("La potencia del primer numero es: %d", potencia);

    getche();

    return 0;
}
