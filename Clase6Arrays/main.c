#include <stdio.h>
#include <stdlib.h>
/**9)	Diseñe un algoritmo que lea un numero cualquiera y lo
busque en el vector X, el cual tiene almacenados 80 elementos.
 Escribir por pantalla donde se encuentra almacenado el
 numero en el vector o el mensaje “NO si no lo encuentra”. (Búsqueda secuencial)*/

int main()
{
    //defino mis variable de trabajo
    int numeroIngresado= 0;
    int vector1[80],  ocurrencias = 0;

    //cargamos el vector de forma aleatoria
    for( int i = 0 ; i < 80 ; i++)
    {
        vector1[i] = rand() % (100 - (-100) + 1) + (-100);
        printf("vector1[%i] = %i \n",i, vector1[i]);
    }

    //solicitamos el dato al usuario
    printf("\ningrese por favor un numero \n");
    scanf("%i", &numeroIngresado);

    //contamos cuantas veces se encuentra el numero en el array
    for( int i = 0 ; i < 80 ; i++ )
    {
        if(vector1[i] == numeroIngresado)
        {
            ocurrencias++;
        }
    }

    int arrayDePosiciones[ocurrencias];

    if(ocurrencias >  0)
    {
        int j = 0;
        for( int i = 0;  i < 80 ; i++ )
        {
            if(vector1[i] == numeroIngresado)
            {
                arrayDePosiciones[j] = i;
                j++;
            }
        }

    }

    if( ocurrencias > 0)
    {
        printf("el numero %i se encuentra en la posicion ", numeroIngresado);
        for(int i = 0 ;i < ocurrencias; i++){
            printf("%i, " ,arrayDePosiciones[i]);
        }
        printf("del array \n");

    }
    else
    {
        printf("el numero No se encuentra en el array\n");
    }

    return 0;
}
