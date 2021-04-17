#include <stdio.h>
#include <stdlib.h>

/**el siguiente programa calcula el cubo de los numeros del 1 al 5
utilizando una funcion definida por el usuario */

int cubo(int base);

int main()
{
    int numero = 9 ;
    //el input ( parametro ) de una funcion puede ser el output de otra funcion
    //en este ejemplo el input de la funcion "printf()" es
    //el output de la funcion #cubo()"
    for(int i = 1 ; i <= 5 ; i++ )
    {
        printf("El cubo del numero %i es %i\n ",i, cubo(i)   );
    }
    printf("La primera llamada al subalgoritmo \n ");
    mostrarMensajeError();
    printf("La segunda llamada al subalgoritmo \n");
    mostrarMensajeError();
    printf("La tercera llamada al subalgoritmo \n");
    mostrarMensajeError();
    return 0;
}
//definicion de la funcion
int cubo(int base) //input
{
    //cuerpo de la funcion
    int potencia = 0;
    potencia = base * base * base ;
    //output
    return potencia ; //retornamos el resultado de la base recibida por parametro elevada al cubo
}
//si el tipo de dato de retorno es vacio (void)
//el subalgoritmo no DEBE tener un return !
void mostrarMensajeError(int codigoDeError)
{
    printf("dato recibido por parametro : %i \n" , codigoDeError );
    switch(codigoDeError)
    {
    case 7852 :
        printf("se agoto la memoria\n");
        break;
    case 9641 :
        printf("se agoto la memoria\n");
        break;
    case 8635 :
        printf("se agoto la memoria\n");
        break;
    default:
        printf("el codigo de error %i no es un codigo de error conocido , comuniquese de inmediato con soporte tecnico \n",codigoDeError);

    }

}

/**los codigos de error del sistema son los siguientes:
7852 =  se agoto la memoria
9641 = se quedo sin conexion a internet
8635 = se lleno es espacio en el disco*/
