#include <stdio.h>
#include <stdlib.h>
/**1)Calcular el promedio de 50 valores almacenados en un Vector.
Determinar además cuantos son mayores que el promedio, imprimir el promedio,
 y una lista de valores mayores que el promedio*/

#define CANTIDADELEMENTOS 50
int main()
{
    //definimos el array que contendra los 50 elementos
    float valores[CANTIDADELEMENTOS];

    float acumuladorValores = 0, promedio = 0 ;
    int cantidadValoresMayoresAlPromedio = 0 ;
    //asignacion o escritura de una posicion en particular del array , la posicion sera la 5
    //valores[5] = 80.5;


    //recorrido del array
    for(int indice = 0 ; indice < CANTIDADELEMENTOS ; indice++)
    {
        //mostramos cada uno de los indices del array de valores
        printf("valores[%d] = %f \n", indice,valores[indice]);
    }

    printf("Estamos cargando el array con datos aleatorios  \n");
    //Cargamos el vector con numeros aleatorios (utilizamos "rand()" )
    for(int i = 0 ; i < CANTIDADELEMENTOS ; i++)
    {
        //rand () % ( Maximo - Minimo + 1 ) + Minimo;   // Este está entre Minimo y Maximo
        valores[i] = rand () % 11 + 20 ;
        acumuladorValores += valores[i];
    }
    //calculamos el promedio
    promedio = acumuladorValores / CANTIDADELEMENTOS ;

    printf("el promedio es : %f \n", promedio);
    //recorremos el array contando la cantidad de datos que son superiores al promedio
    for(int i = 0 ; i < CANTIDADELEMENTOS ; i++)
    {
        if(valores[i] > promedio)
        {
            cantidadValoresMayoresAlPromedio++; //por cada dato superior al promedio le cumamos uno a la variable cant ...
        }
    }
    printf("en el array de valores tenemos %i datos superiores al promedio \n", cantidadValoresMayoresAlPromedio);
    float valoresMayoresAlPromedio[cantidadValoresMayoresAlPromedio];

    //copiamos todos los valores mayores al promedio en un segundo array
    int j = 0;
    for(int i = 0 ; i < CANTIDADELEMENTOS ; i++)
    {
        if(valores[i] > promedio)
        {
            valoresMayoresAlPromedio[j] = valores[i];
            j++;
        }
    }
    printf("el array de valores posee los siguientes datos \n");
    //recorrido del array
    for(int indice = 0 ; indice < CANTIDADELEMENTOS ; indice++)
    {
        //mostramos cada uno de los indices del array de valores
        printf("valores[%d] = %f \n", indice,valores[indice]);
    }

    printf("el array de valoresMayoresAlPromedio posee los siguientes datos \n");
    //mostramos todos los valores superiores al promedio que se encuentran guardados en el array valoresMayoresAlPromedio[]
    for(int i = 0 ; i < cantidadValoresMayoresAlPromedio ; i++)
    {
        printf("valoresMayoresAlPromedio [%i] = %f \n", i,valoresMayoresAlPromedio[i] );
    }


    return 0;
}
