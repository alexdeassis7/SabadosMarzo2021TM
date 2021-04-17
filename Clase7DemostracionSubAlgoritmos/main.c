#include <stdio.h>
#include <stdlib.h>
/** DECLARACION DE FUNCION - PROTOTIPO */

//prototipo generico
//tipo_de_retorno nombre_de_la_funcion(lista_de_parametros);
  float precioIva(float base, float Impuesto);

int main() //algoritmo principal
{
    float importe = 1000 ;
    float tasa = 0.21 ;
    //invocamos al subAlgoritmo "precioIva"
    float retornoDelSubAlgoritmo = precioIva(importe, tasa);
    printf("La funcion nos retorno el siguiente valor :   %f" , retornoDelSubAlgoritmo);

    return 0;
}

//definicion de mi funcion "precioIva"
float precioIva(float base, float impuesto)
{
    //Cuerpo de la funcion!
    float calculo = 0 ;
    calculo = base + (base * impuesto);

    return calculo  ; //dato que se retornara al algoritmo principal
}


