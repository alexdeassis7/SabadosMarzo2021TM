#include <stdio.h>
#include <stdlib.h>
//3)	Leer 10 números e imprimir solamente los positivos
int main()
{
    int numeroingresado = 0, contador = 1 ;

    while(contador <= 10)
    {
        printf("ingrese el numero %i\n", contador);
        scanf("%i",&numeroingresado);

        if(numeroingresado > 0)
        {
            printf("Positivo: %i \n" , numeroingresado);
        }

        contador++;
    }



    return 0;
}
