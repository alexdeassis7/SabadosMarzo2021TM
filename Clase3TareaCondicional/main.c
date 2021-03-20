#include <stdio.h>
#include <stdlib.h>
/**ej4 ) Que lea dos numeros y los imprima de forma ascendente */
int main()
{
    int numeroUno = 0, numeroDos = 0;

    printf("ingrese en numero 1 por favor \n");
    scanf("%i",&numeroUno);

    printf("ingrese en numero 2 por favor \n");
    scanf("%i",&numeroDos);

    if(numeroUno < numeroDos)
    {
        printf(" %i \n %i\n", numeroUno, numeroDos);
    }
    else
    {
        // printf("%i ", numeroDos);
        //printf("%i \n", numeroUno);
        printf("%i  %i\n", numeroDos, numeroUno);
    }
    return 0;
}
