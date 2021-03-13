#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad = 25;
    printf("inicio app\n");

    //estructura condicional simple
    if( edad >= 18 )
    {
        //cuerpo del if : sentencia a ejecutar si la condicion es TRUE.
        printf("es mayor de edad\n");
    }
    if( edad < 18 )
    {
        //cuerpo del if : sentencia a ejecutar si la condicion es TRUE.
        printf("NO es mayor de edad\n");
    }

    //estructura condicional doble
    if(edad >= 18 )
    {
        //cuerpo del if : sentencia a ejecutar si la condicion es TRUE.
        printf("es mayor de edad\n");
    }
    else
    {
        //cuerpo del else : sentencia a ejecutar si la condicion es FALSE.
        printf("es mayor de edad\n");
    }
    printf("fin  app\n");
    return 0;
}
