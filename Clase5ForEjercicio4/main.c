#include <stdio.h>
#include <stdlib.h>
/**4)	Leer 20 números e imprimir cuantos son positivos ,
        cuantos negativos y cuantos neutros
*/
int main()
{
    //definimos las variables de trabajo
    int numeroIngresado = 0, contadorNegativos = 0;
    int contadorPositivos = 0,contadorNeutros = 0 ;

    for(int i = 1 ; i <= 20 ; i++ )
    {
        printf("Ingrese por favor el numero %i \n", i);
        scanf("%i",&numeroIngresado);

        if(numeroIngresado > 0)
        {
            //numero es positivo
            contadorPositivos++;
        }
        else if ( numeroIngresado < 0 )
        {
            //numero negativo
            contadorNegativos++;
        }
        else
        {
            //numero neutro
            contadorNeutros++;
        }
    }
    printf("FIN \n de los 20 numeros ingresados :\n");
    printf("%i eran positivos\n", contadorPositivos);
    printf("%i eran negativos\n", contadorNegativos);
    printf("%i eran neutros\n", contadorNeutros);



    return 0;
}
