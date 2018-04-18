#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*8.  	De 10 números ingresadas indicar cuantos son mayores a cero y cuantos son menores a cero*/

int main()
{
    int numero;
    int contMayores = 0;
    int contMenores = 0;

    for(int i = 0; i < 10; i++)
    {
        printf("Ingrese numero: ");
        scanf("%d", &numero);

        if(numero < 0)
        {
            contMenores++;
        }
        else if(numero > 0)
        {
            contMayores++;
        }
    }

    printf("%d son mayores a cero y %d son menores a cero", contMayores, contMenores);

    getche();
    return 0;
}
