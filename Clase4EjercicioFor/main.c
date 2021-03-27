#include <stdio.h>
#include <stdlib.h>
/**1) Desarrollar un algoritmo que permita ingresar N números por teclado y
que muestre por pantalla el mayor y menor de ellos.*/
int main()
{
    int n = 0; //n sera el numero que ingresa el user
    int numeroIngresado = 0, mayor = 0, menor = 0;
    printf("Ingrese la cantidad de numero con los que va a trabajar\n");
    scanf("%d",&n);

    printf("ingrese un numero \n");
    scanf("%d",&numeroIngresado);
    mayor = numeroIngresado;
    menor = numeroIngresado;

    for(int i = 2 ; i <= n ; i++)
    {
        printf("ingrese un numero \n");
        scanf("%d",&numeroIngresado);
        /**Buscamos el mayor y el menor de los numero ingresado por el user */
        if(mayor < numeroIngresado)
        {
            mayor = numeroIngresado;
        }
        if(menor > numeroIngresado)
        {
            menor = numeroIngresado;
        }
    }
    printf("El mayor numero ingresado es : %d\n", mayor);
    printf("El menor numero ingresado es : %d\n", menor);
    return 0;
}
