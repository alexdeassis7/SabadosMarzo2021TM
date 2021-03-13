#include <stdio.h>
#include <stdlib.h>
//1) Determinar si un alumno aprueba un curso de programación, sabiendo que aprobara
//si su promedio de tres calificaciones
//es mayor o igual a 7; reprueba en caso contrario.
int main()
{
    float nota1 = 0, nota2 = 0, nota3 = 0, promedio = 0 ;

    printf("Ingrese la nota 1 \n");
    scanf("%f",&nota1);
    printf("Ingrese la nota 2 \n");
    scanf("%f",&nota2);
    printf("Ingrese la nota 3 \n");
    scanf("%f",&nota3);

    promedio = (nota1 + nota2 + nota3) / 3;

    if(promedio >= 7 )
    {
        printf("Alumno aprobado\n");
    }
    else
    {
        printf("Alumno Reprobado\n");
    }

    return 0;
}
