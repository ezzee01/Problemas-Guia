#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

/*11.  	Escribir un programa que realice lea por teclado 20 caracteres. Luego de la lectura indicar cuantas "a" se ingresaron, cuantas "e, i, o, u"*/

int main()
{
    char letra;
    int contA = 0;
    int contE = 0;
    int contI = 0;
    int contO = 0;
    int contU = 0;

    for(int i = 0; i < 20; i++ )
    {
        printf("Ingrese una letra: ");
        letra = tolower(getche());
        printf("\n");
        switch(letra)
        {
            case 'a': contA++;
            break;
            case 'e': contE++;
            break;
            case 'i': contI++;
            break;
            case 'o': contO++;
            break;
            case 'u': contU++;
            break;
            default: break;
        }
    }

    if(contA != 0 || contE != 0 || contI != 0 || contO != 0 || contU != 0)
    {
        printf("Haay %d letras 'A', %d letras 'E', %d letras 'I', %d letras 'O', %d letras 'U'", contA, contE, contI, contO, contU);
    }
    else{printf("No hay letras A, E, I, O, U");}


    getch();
    return 0;
}
