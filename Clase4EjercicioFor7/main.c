#include <stdio.h>
#include <stdlib.h>
/*7)	Calcular e imprimir la tabla de multiplicar de un número cualquiera.
Imprimir el multiplicando , el multiplicador y el producto*/
int main()
{
    int numeroIngresado = 0;

    printf("Ingrese por favor el numero de la tabla que desea conocer:\n");
    scanf("%i",&numeroIngresado);

    for(int i = 1 ; i <=10 ; i++)
    {
        int resultado = i * numeroIngresado ;
        printf("%d x %d = %d \n",i, numeroIngresado, resultado);
    }

    return 0;
}
