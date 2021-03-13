#include <stdio.h>
#include <stdlib.h>
/**una tienda ofrece un descuento del 15% sobre el total de la compra y un cliente
desea saber cuanto debera pagar finalmente por su compra*/

/**Definimos una Constante : valor inmutable*/
#define INTERES 0.15
#define PI 3.141592
#define NUMERO_E 2.718281
int main()
{
    float totalCompra = 0, descuento = 0,total_a_pagar = 0 ;
    /**Defino otra contante pero que ocupa un espacio en memoria !
    const int temperatura = -5 ;*/

    printf("ingrese por favor el total de la compra \n");
    scanf("%f", &totalCompra );

    descuento = totalCompra * INTERES ;
    total_a_pagar = totalCompra - descuento ;

    printf("El total a pagar por la compra es %f", total_a_pagar);

    return 0;
}
