#include <stdio.h>
#include <stdlib.h>

int main()
{
    //1.	Ingresar 5 números y calcular su media
    int num, suma = 0;
    float promedio;
    for(int i=0 ; i<5 ; i++)
    {
        printf("Ingrese un numero entero: ");
        scanf("%d",&num);
        suma = suma + num;
    }
    promedio = suma / 5;

    printf("El promedio es: %.2f", promedio);
    return 0;
}
