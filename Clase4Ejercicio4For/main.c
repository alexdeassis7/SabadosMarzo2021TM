#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcionIngresada = 0,  intentos = 0;
    do
    {
        printf("ingrese una opcion entre 1 y 4 \n");
        printf("1 sumar\n");
        printf("2 multiplicar\n");
        printf("3 restar\n");
        printf("4 dividir\n");
        scanf("%d",&opcionIngresada);
        intentos ++;
        /// || es true si un operador es true
        /// && es true solo si los dos operadores son true
    }
    while((opcionIngresada < 1 || opcionIngresada > 4) && intentos < 3 );
    printf("intentos salio del do while con el valor :%d \n",intentos);

    if(intentos >= 3 && (opcionIngresada < 1 || opcionIngresada > 4) )
    {
        printf("supero la cantidad de intentos disponibles \n");
    }
    printf("  fin del while !  ");

    return 0;
}
