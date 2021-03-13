#include <stdio.h>
#include <stdlib.h>
/**Un maestro desea saber que porcentaje de hombres y que
porcentaje de mujeres hay en un grupo de estudiantes*/
int main()
{
    //defino las variables de trabajo
    float porcentajeH = 0, porcentajeM = 0, numHombres = 0, numMujeres = 0,totalAlumnos = 0 ;
    //que entra?
    printf("Ingrese el numero de alumnas mujeres\n");
    scanf("%f",&numMujeres);

    printf("Ingrese el numero de alumnos hombres\n");
    scanf("%f",&numHombres);

    //que se procesa?
    totalAlumnos = numHombres + numMujeres;
    porcentajeM = numMujeres*100 /totalAlumnos;
    porcentajeH = numHombres*100 /totalAlumnos;

    //que sale?
    printf("El porcentaje de mujeres de su curso es : %.2f\n" , porcentajeM);
    printf("El porcentaje de hombres de su curso es : %.2f\n" , porcentajeH);

    return 0;
}
