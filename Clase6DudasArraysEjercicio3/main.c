#include <stdio.h>
#include <stdlib.h>
#define ELEMENTOS 20
/**3) Llenar un vector de 20 elemento, imprimir la posición y el valor del elemento mayor almacenado en el vector.
Suponga que todos los elementos del vector son diferentes*/
int main()
{
    printf ("-INICIO DE LA APLICACION-\n\n");
    int elementoMayor = 0 ,posicionDelMayorElemento = -1 ;
    int vector[ELEMENTOS];

    printf ("-CARGA DEL VECTOR-\n");
    for(int i = 0 ; i < ELEMENTOS ; i++)
    {

        vector[i] = rand() % 30 + 1;

        printf ("[%i] %i\n", i, vector[i]);
    }

    for( int i = 0 ; i < ELEMENTOS ; i++)
    {
        if ( vector[i] > elementoMayor)
        {
            elementoMayor = vector[i];
            posicionDelMayorElemento = i;
        }
    }
    printf ("El elemento mayor es: %i\n", elementoMayor);

    printf ("\n-FIN DE LA APLICACION-\n\n");
    return 0;
}
