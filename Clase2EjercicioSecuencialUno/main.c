#include <stdio.h>
#include <stdlib.h>
/**Suponga que un individuo desea invertir su capital en un banco y
 desea saber cuanto dinero ganara despues de un mes si el banco paga a razon de 2% Mensual
*/
int main()
{
   //defino mis variables de trabajo
   float capital = 0 ,ganancia = 0 ;
   // Que entra?
   printf("Ingrese por favor en capital que desea invertir en el banco \n");
   //scanf("%codifoFormato" ,&nombreVariableQueAlmancenaLaEntrada );
   scanf("%f" ,&capital ); //tomamos un valor por teclado con la funcion scanf

   // que se procesa ?
   ganancia = capital * 0.02;

   // Que sale?
   printf("La ganancia obtenida en un mes por su capital sera de : %.2f " , ganancia );

    return 0;
}
