package com.utn.constructores;

public class SeleccionFutbol {
	// atributos de la clase : definen sus caracteristicas
	int id;
	String nombre;
	String apellido;
	int edad;

	// definimos un constructor con todos los parametros
	// un constructor se debe llamar igual a la clase
	public SeleccionFutbol(int id, String nombre, String apellido, int edad) {
		this.id = id;
		this.nombre = nombre;
		this.apellido = apellido;
		this.edad = edad;
	}

	// sobrecarga de metodo constructor
	// metodo constructor vacio , definido explicitamente
	public SeleccionFutbol() {

	}

	// contructor con nombre y apellido
	public SeleccionFutbol(String nombre, String apellido) {
		this.nombre = nombre;
		this.apellido = apellido;
	}
	//contructor que oslo recibe el id 
	public SeleccionFutbol(int id) {
		this.id = id;
	}

	public String toString() {
		return "SeleccionFutbol [id=" + id + ", nombre=" + nombre + ", apellido=" + apellido + ", edad=" + edad + "]";
	}

}
