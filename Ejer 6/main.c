#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*6.  	Escribir un programa que realice las siguientes acciones:
�	Limpie la pantalla
�	Declare 2 variables y les asigne sendos valores
�	Realice la resta de dichas variables y muestre por pantalla la leyenda "Resultado positivo" en caso de ser mayor que cero o "Resultado negativo" si es menor que cero
*/

int main()
{
    int num1;
    int num2;
    int resta;

    system("cls");

    printf("Ingrese numero uno: ");
    scanf("%d", &num1);
    printf("Ingrese segundo numero: ");
    scanf("%d", &num2);

    resta = num1 - num2;

    if(resta < 0)
    {
        printf("Resultado negativo.");
    }
    else
    {
        printf("Resultado positivo.");
    }

    getche();

    return 0;
}
