package com.utn.clase12;

//definicion de la clase vuelo 
public class Vuelo {
	// atributos de la clase vuelo , definen sus caracteristicas
	public int numVuelo;
	public int pasajeros;
	public String claseVuelo;
	public boolean[] asientoDisponibles;

	// inicializador de bloque :
	// se ejecutara SIEMPRE previo a la invocacion de cualquier
	// metodo constructor
	{
		// diponibilizamos todos los asientos
		asientoDisponibles = new boolean[150];
		for (int i = 0; i < 150; i++) {
			asientoDisponibles[i] = true;
		}
		System.out.println("Se disponibilizo 150 butacas ");
	}

	// constructor 1 vacio
	public Vuelo() {

	}

	// constructor 2
	public Vuelo(String claseVuelo) {
		this.claseVuelo = claseVuelo;
	}

	// constructor 3
	public Vuelo(int numVuelo) {
		this.numVuelo = numVuelo;
	}
}
