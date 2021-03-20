#include <stdio.h>
#include <stdlib.h>
/**Un obrero necesita calcular su salario semanal, el cual se obtiene de la siguiente manera:
Si trabaja 40 horas o menos se le paga $16 por cada hora.
Si trabaja más de 40 horas  se le paga $16 por cada una de las primeras 40 horas
y $20 por cada hora extra.*/

int main()
{
    int hsTrabajadas = 0,hsExtras = 0, salarioSemanal = 0;


    printf("cuantas hs trabajo esta semana ?\n");
    scanf("%i", &hsTrabajadas);

    if(hsTrabajadas > 40 )
    {
        hsExtras = hsTrabajadas - 40;
        salarioSemanal = hsExtras * 20 + 40 * 16 ;
    }
    else
    {
        salarioSemanal = hsTrabajadas * 16 ;
    }
    printf("su salario semanal sera de %i \n", salarioSemanal);
    return 0;
}
