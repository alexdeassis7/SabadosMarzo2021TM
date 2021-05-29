package com.utn.constructores;

public class AppPrincipal {
	public static void main(String[] args) {
		System.out.println("Inicio de la app");

		// instanciamos un objeto
		// mediante el constructor VACIO
		SeleccionFutbol sf = new SeleccionFutbol();
		System.out.println("sf:" + sf.toString());

		// instanciamos un objeto
		// mediante el constructor con todos los parametros
		SeleccionFutbol sf2 = new SeleccionFutbol(4, "pepe", "Argento", 46);
		System.out.println("sf2:" + sf2.toString());

		// instanciamos un objeto
		// mediante el constructor con el nombre y el apellido
		SeleccionFutbol sf3 = new SeleccionFutbol("alex", "de assis");
		System.out.println("sf3: " + sf3.toString());

		SeleccionFutbol sf4 = new SeleccionFutbol(21);
		System.out.println("sf4:" + sf4.toString());
		
	}
}
