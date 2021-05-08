package ar.com.utn.clase9;

public class AppPrincipal {

	public static void main(String[] args) {
		System.out.println("inicio mi app");

		// Instaciamos objetos del Tipo Persona
		Persona lucia = new Persona();

		System.out.println("Estado de los Atributos de Lucia");
		System.out.println("Color de Ojos: " + lucia.colorOjos);
		System.out.println("Profersion: " + lucia.profesion);
		System.out.println("altura: " + lucia.altura);
		System.out.println("edad: " + lucia.edad);
		System.out.println("DNI: " + lucia.dni);

		System.out.println("*****Modificamos el Estado de los Atributos del Objeto *****");
		lucia.colorOjos = "verde";
		lucia.profesion = "estudiante";
		lucia.altura = 1.70;
		lucia.edad = 20;
		lucia.dni = 151545456;
		
		
		System.out.println("Estado de los Atributos de Lucia");
		System.out.println("Color de Ojos: " + lucia.colorOjos);
		System.out.println("Profersion: " + lucia.profesion);
		System.out.println("altura: " + lucia.altura);
		System.out.println("edad: " + lucia.edad);
		System.out.println("DNI: " + lucia.dni);
		
		System.out.println("instanciamos mas objetos de la clase Persona...");
		Persona marcelo = new Persona();
		Persona mateo = new Persona();
		
		System.out.println("modificamos los estados de los atributos de marcelo y mateo ");
		marcelo.colorOjos = "marron";
		marcelo.altura = 1.8;
		marcelo.profesion = "maestro";
		marcelo.edad = 28;
		marcelo.dni = 36969682;
		
		mateo.colorOjos = "azul";
		mateo.altura = 1.59;
		mateo.profesion = "doctor";
		mateo.edad = 49;
		mateo.dni = 36875345;
		
		System.out.println("Estado de los Atributos de Marcelo");
		System.out.println("Color de Ojos: " + marcelo.colorOjos);
		System.out.println("Profersion: " + marcelo.profesion);
		System.out.println("altura: " + marcelo.altura);
		System.out.println("edad: " + marcelo.edad);
		System.out.println("DNI: " + marcelo.dni);
		
		System.out.println("Estado de los Atributos de Mateo");
		System.out.println("Color de Ojos: " + mateo.colorOjos);
		System.out.println("Profersion: " + mateo.profesion);
		System.out.println("altura: " + mateo.altura);
		System.out.println("edad: " + mateo.edad);
		System.out.println("DNI: " + mateo.dni);
		
		
		
		
		System.out.println("Finalizo mi app");

	}
}
