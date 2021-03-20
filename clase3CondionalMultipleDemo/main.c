#include <stdio.h>
#include <stdlib.h>
/** 1) Desarrollar un algoritmo que permita ingresar un número entero
comprendido entre 1 y 7, y que muestre por pantalla el día de la semana al
que se corresponde */
int main()
{
    int numeroIngresado = 0 ;

    printf("ingrese un numero comprendido entre 1 y 7 \n");
    scanf("%i", &numeroIngresado);

    /**Condicional multiple*/
    switch(numeroIngresado)
    {
    case 1 :
        printf("Domingo\n");
        break;
    case 2 :
        printf("Lunes\n");
        break;
    case 3 :
        printf("Martes\n");
        break;
    case 4 :
        printf("Miercoles\n");
        break;
    case 5 :
        printf("Jueves\n");
        break;
    case 6 :
        printf("Lunes\n");
        break;
    case 7:
        printf("Lunes\n");
        break;
    default:
         printf("El numero %i no se corresponde con ningun dia de la semana !\n" , numeroIngresado);
    }
    printf("Fin app\n");
    return 0;
}
