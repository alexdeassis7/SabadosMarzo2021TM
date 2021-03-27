#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("inicio primer for\n");
    //mostramos los numeros de 1 al cien
    for(int i = 1 ; i <= 100 ; i++ )
    {
        printf("%d\n",i);
    }
    printf("fin primer for\n\n");

    printf("inicio segundo for\n");
    //mostramos los numeros de cien al 1
    for(int i = 100 ; i > 0 ; i-- )
    {
        printf("%d\n",i);
    }
    printf("fin segundo for\n\n");
    return 0;
}
