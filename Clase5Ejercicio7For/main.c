#include <stdio.h>
#include <stdlib.h>
/**7)	Calcular e imprimir la tabla de multiplicar de un número cualquiera.
Imprimir el multiplicando , el multiplicador y el producto*/

int main()
{
    /**variables de trabajo*/
    int numeroIngresado = 0, resultado = 0 ;

    printf("ingrese el numero de la tabla que quiere conocer \n");
    scanf("%i", &numeroIngresado);

    for(int i = 1 ; i <= 10 ; i++)
    {
        resultado = numeroIngresado * i ;
        printf("%d x %d = %d\n",numeroIngresado, i,resultado );
    }

    return 0;
}
