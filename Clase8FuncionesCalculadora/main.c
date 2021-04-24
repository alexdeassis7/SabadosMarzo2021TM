#include <stdio.h>
#include <stdlib.h>
/**Defino los prototipos de mis funciones*/
int sumar(int n1, int n2);
int restar(int n1, int n2);
int multiplicar(int n1, int n2);
float dividir(float n1, float n2);

void mostrarMensajes();

int main()
{
    printf("************ Welcome **************\n");
    printf("************ CALCULADORA **********\n");
    int opcionIngresada = 0, flag = 0, numero1 = 0, numero2 = 0, flag2 = 0;
    float N1 = 0, N2 = 0;

    do
    {
        if(flag == 1)
        {
            printf("!!ERROR!!: Usted ingreso una opcion Invalida , intente nuevamente por favor \n");
        }
        //mostramos el menu de las opciones al user
        printf("Ingrese la opcion deseada\n");
        printf("1.SUMAR \n2.RESTAR \n3.MULTIPLICAR \n4.DIVIDIR \n");

        scanf("%i", &opcionIngresada);
        flag = 1;//cambiamos el valor de nuestra bandera para saber que el usuario ya paso por aqui al menos una vez

    }
    while( !( opcionIngresada >= 1 && opcionIngresada <= 4 ) );

    system("cls");
    switch(opcionIngresada)
    {
    case 1:
        /**Set de instrucciones a ejecutar si la opcion 1 se cumple */
        printf("Usted ah seleccionado la opcion De sumar\n");
        mostrarMensajes(1);
        scanf("%i",&numero1);
        mostrarMensajes(2);
        scanf("%i",&numero2);
        printf("El resultado de la suma es = %i \n",sumar(numero1, numero2 ) );
        break;
    case 2:
        printf("Usted ah seleccionado la opcion De Restar\n");
        mostrarMensajes(1);
        scanf("%i",&numero1);
        mostrarMensajes(2);
        scanf("%i",&numero2);
        printf("El resultado de la Resta es = %i \n",restar(numero1, numero2 ) );
        break;
    case 3:
        printf("Usted ah seleccionado la opcion De Multiplicar\n");
        mostrarMensajes(1);
        scanf("%i",&numero1);
        mostrarMensajes(2);
        scanf("%i",&numero2);
        printf("El resultado de la suma es = %i \n",multiplicar(numero1, numero2 ) );
        break;
    case 4:
        do
    {
        if(flag2 == 1)
        {
            printf("!!ERROR!!: Usted no puede dividir por 0 \n");
        }
        printf("Usted ah seleccionado la opcion De Dividir\n");
        mostrarMensajes(1);
        scanf("%f",&N1);
        mostrarMensajes(2);
        scanf("%f",&N2);

        flag2 = 1;//cambiamos el valor de nuestra bandera para saber que el usuario ya paso por aqui al menos una vez

    }
    //while( !(N2 != 0) );
    while( N2 == 0 );



        printf("El resultado de la division es = %f \n",dividir(N1, N2 ) );
        break;

        //default:
        //  printf("Usted ah seleccionado la opcion %i ,la cual es incorrecta \n", opcionIngresada);
    }

    printf("*************** FIN APP******************");
    return 0;
}

void mostrarMensajes(int numero)
{
    printf("ingrese el numero %i \n", numero);
}

int sumar(int n1, int n2 )
{
    return n1 + n2 ;
}

int restar(int n1, int n2 )
{
    return n1 - n2 ;
}

int multiplicar(int n1, int n2 )
{
    return n1 * n2 ;
}

float dividir(float n1, float n2 )
{
    return n1 / n2 ;
}


