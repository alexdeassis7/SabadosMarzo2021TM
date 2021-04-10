#include <stdio.h>
#include <stdlib.h>/**
5)	Almacenar 300 números en un vector, imprimir cuantos son ceros, cuantos son negativos y
cuantos positivos. Imprimir además la suma de los negativos y la suma de los positivos */
#define CANTIDAD 300
int main()
{

    int vector [CANTIDAD];
    int cantidadNeutros = 0, cantidadPositivos = 0, cantidadNegativos = 0;
    int sumaPositivos = 0, sumaNegativos = 0;

    //cargamos el vector con 300 datos
    for( int i = 0 ; i < CANTIDAD ; i++)
    {
        vector[i] = rand() % (100 - (-100) + 1) + (-100);
        //mostramos el vector cargado
        printf("vector[%i] = %i\n ",i, vector[i]);

        if(vector[i] > 0 )
        {
            sumaPositivos += vector[i];
            cantidadPositivos++;
        }
        else if(vector[i] < 0)
        {
            sumaNegativos += vector[i];
            cantidadNegativos++;
        }
        else
        {
            cantidadNeutros++;
        }
    }

    printf("CANTIDAD DE NUMEROS POSITIVOS : %i\n",cantidadPositivos);
    printf("CANTIDAD DE NUMEROS NEUTROS : %i\n",cantidadNeutros);
    printf("CANTIDAD DE NUMEROS NEGATIVOS : %i\n",cantidadNegativos);
    printf("SUMA DE NUMEROS POSITIVOS : %i\n",sumaPositivos);
    printf("SUMA DE NUMEROS NEGATIVOS : %i\n",sumaNegativos);

    return 0;
}
