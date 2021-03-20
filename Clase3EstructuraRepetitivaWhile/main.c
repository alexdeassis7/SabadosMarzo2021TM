#include <stdio.h>
#include <stdlib.h>
/*demo while(mientras)*/
int main()
{
    //mostrar todo los numero pares comprendidos entre 0 y 10
    printf("inicio la app \n");
    int numero = 0 ;

    while( numero <= 10 ){//LOOP INFINITO
        //cuerpo del while
        printf("numero : %i \n" , numero);

        //numero = numero + 2;

        numero += 2;

        //numero++ ; // ++ operador auto incremental
        //el ++ es equivalente a esto : numero = numero + 1;
    }

    printf("fin la app \n");
    return 0;
}
