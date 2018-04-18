#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*9.  	Diseñar un programa que calcule la longitud de la circunferencia y el área del círculo de radio dado*/

int main()
{
    float radio;
    float longitud;
    float area;

    printf("Ingrese radio de un circulo: ");
    scanf("%f", &radio);
    while(radio <= 0)
    {
        printf("ERROR. Reingrese: ");
        scanf("%f", &radio);
    }

    longitud = 2 * radio * 3.14159;
    area = 3.14159 * radio * radio;

    printf("La longitud es de %.2f y el area es de %.2f", longitud, area);

    getche();
    return 0;
}
