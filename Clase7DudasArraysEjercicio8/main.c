#include <stdio.h>
#include <stdlib.h>
#define ELEMENTOS 10
/** 8)Se tiene el vector A con 100 elementos almacenados.
Diseñe un algoritmo que escriba “SI” si el vector esta ordenado de forma ascendente o “NO si el vector no está ordenado”*/

int main()
{
    printf ("-INICIO DE LA APLICACION-\n\n");
    int vectorA [ELEMENTOS];
    int esAscendente = 0;

    printf ("-CARGAMOS VECTOR A:\n");
    for(int i = 0 ; i < ELEMENTOS ; i++)
    {
//        vector sin orden
        vectorA[i] = rand() % 10 +1 ;
        //vector en orden ascendente
        //vectorA[i] =  i;

        printf ("[%i] = %i\n", i, vectorA[i]);
    }
    int siguienteElemento = 0 ;


    for(int i = 0 ; i < ELEMENTOS ; i++)
    {
        siguienteElemento = i +1 ;
        if (vectorA[i] < vectorA[siguienteElemento])
        {
            esAscendente = 1 ;
        }
        else
        {
            esAscendente = 0;
            break;
        }
    }

    if(esAscendente == 1)
    {
        printf("El vector se encuentra ordenado en forma Ascendente \n");
    }
    else
    {
        printf("El vector NOOOOO se  encuentra ordenado en forma Ascendente \n");
    }

    printf ("\n-FIN DE LA APLICACION-\n");
    return 0;
}
