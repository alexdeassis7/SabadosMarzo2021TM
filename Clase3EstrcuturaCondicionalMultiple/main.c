#include <stdio.h>
#include <stdlib.h>
/**2) Desarrollar un algoritmo que permita ingresar un número entero
comprendido entre 1 y 10, y que muestre por pantalla si el número es par o impar.
*/
int main()
{
    int numeroIngresado = 0 ;

    printf("Ingrese un numero entero comprendido entre 1 y 10\n");
    scanf("%i", &numeroIngresado);

    if(numeroIngresado >= 1 && numeroIngresado <= 10)
    {
        switch(numeroIngresado)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 9:
            printf("Numero Impar\n");
            break;
        case 2:
        case 4:
        case 6:
        case 8:
        case 10:
            printf("Numero par\n");
            break;
        }
    }
    else
    {
        printf("Numero ingresado es invalido!\n");
    }
    return 0;
}
