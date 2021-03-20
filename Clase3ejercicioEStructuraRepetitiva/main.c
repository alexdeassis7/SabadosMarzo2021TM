#include <stdio.h>
#include <stdlib.h>

int main()
{
//   1)	Calcular el promedio de un alumno que tiene 7
//   calificaciones en la materia de Diseño Estructurado de Algoritmos.

    float notaIngresada = 0, promedio = 0, acumuladorDeNotas = 0;
    int contador = 1;
    int cantidadDeNotas = 7 ;

    while(contador <= cantidadDeNotas)
    {
        printf("ingrese nota %i\n",contador);
        scanf("%f", &notaIngresada);

        acumuladorDeNotas += notaIngresada;

        contador ++;
    }
    //calculo el promedio
    promedio = acumuladorDeNotas / cantidadDeNotas;
    printf("Promedio de notas = %f \n",promedio);

    printf("acumulador notas = %f \n",acumuladorDeNotas);

    return 0;
}
