package ar.com.utn.Ejercicio1;

public class Automovil {

	// indentacion de codigo ctrl + shift + f
	// Atributos : definene las caracteristicas de los objetos
	String color, modelo;
	int precio;
	boolean usado;
	float cilindradaMotor;
	float cargaMaximaCombustible;// variable para definir la capacidad maxima de carga de combustible del coche
	float litrosDeCombustible;// variable que contiene la cantida de litros que tengo en el tanque

	// Metodos : Definen el comportamiento de los objetos , estos metodos podran ser
	// de dos tipos :
	// tipo 1 : Procedimiento => no retornan ningun valor (void)
	// tipo 2 : funcion => retonan un valor (return XXXXX)

//	metodo de tipo procedimiento acelerar
	void acelerar(int kmXhs) {
		// cuerpo del metodo
		System.out.println("Estoy conduciendo mi " + modelo + " a " + kmXhs + " xHS.");
	}

	void frenar() {
		System.out.println("acabo de detener mi " + modelo);
	}

	void cargarCombustible(float litrosAcargar) { // queremos cargar 20litros
		// obtenemos la cantidad de litros que aun quedan libres en nuestro tanque
		float litrosDisponibles = cargaMaximaCombustible - litrosDeCombustible;
		if (litrosAcargar <= litrosDisponibles) {
			litrosDeCombustible = litrosDeCombustible + litrosAcargar;
			System.out.println("se cargaron " + litrosAcargar + " Litros en su tanque .");
			System.out.println("ahora su  vehiculo posee " + litrosDeCombustible + " litros en el taque");
		} else {
			System.out.println("no Puede cargar " + litrosAcargar + " litros por que tu combustible se va a derramar .... ");
		}
	}
	//metodo to String para poder obtener el estado de todos 
	//los atributos
	public String toString() {
		return "Automovil [color=" + color + ", modelo=" + modelo + ", precio=" + precio + ", usado=" + usado
				+ ", cilindradaMotor=" + cilindradaMotor + ", cargaMaximaCombustible=" + cargaMaximaCombustible
				+ ", litrosDeCombustible=" + litrosDeCombustible + "]";
	}

	
	
	
	
	
}