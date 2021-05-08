package ar.com.utn.holamundo;

import java.util.Scanner;

public class AppPrograma {
	/*comentario 
	 * de bloque */
	
	//comentario de linea 
	
	public static void main(String[] args) {
		//creamos un scanner para tomar datos por teclado 
		Scanner teclado = new Scanner(System.in);
		
		System.out.println("Hola Mundo Java");
		
		//variables primitivas en java 
		int numero = 10;
		double precio  = 45.6;
		boolean esCasado = false ;
		String unaFrase = "Hola estamos aprendiendo Java POO";
		char sexo = 'M';
		
		//entrada de datos 
		int edad = 0 ;
		System.out.println("Hola , por favor ingrese su edad ");
		edad = teclado.nextInt();
		
		//mostramos el valor ingresado por pantalla
		System.out.println("Usted ingreso la edad : " + edad + " ." );
		
		if(edad > 18 ) {
			System.out.println("Usted es mayor de Edad");
		}else{
			System.out.println("Usted es menor de Edad");
		}
		
		while(edad > 0 ) {
			System.out.println(edad);
			edad--;			
		}
		//mostramos los numeros del 0 al 20
		for(int i = 0 ;i <= 20 ; i++) {
			System.out.println("i= " + i );
		}
		
		
		
		
		
		
		
	
		
		
	}
}

