#include <stdio.h>
#include <stdlib.h>

//defino un valor constante
#define CANTIDAD 150
/**6)	Almacenar 150 números en un vector, almacenarlos en otro vector en
orden inverso al vector original e imprimir el vector resultante*/
int main()
{

    int vectorOriginal[CANTIDAD];
    int vectorInvertido[CANTIDAD];

    //cargamos el vector de forma aleatoria
    for( int i = 0 ; i < CANTIDAD ; i++)
    {
        vectorOriginal[i] = rand() % (100 - (-100) + 1) + (-100);
        //mostramos el vector cargado
        printf("vectorOriginal[%i] = %i ",i, vectorOriginal[i]);
    }

    //copiamos lo elementos en orden imvertido
    int j = CANTIDAD - 1;
    for(int i = 0 ; i < CANTIDAD ; i++)
    {
        vectorInvertido[i] = vectorOriginal[j] ;
        j--;
        printf("vectorInvertido[%i] = %i ",i, vectorInvertido[i]);
    }


    return 0;
}
