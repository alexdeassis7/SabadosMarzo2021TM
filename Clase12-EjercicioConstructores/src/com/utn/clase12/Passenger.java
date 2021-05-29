package com.utn.clase12;

//defino la clase passenger
public class Passenger {

	// agregamos el modificador de acceso private
	// a todos los atributo de la clase de esta manera
	// restringimos el acceso a los mismo y ya no podran
	// ser edidatos libremente
	private int bolsos;
	private int bolsosPagos;
	private double tarifaXBolso;
	private double totalaPagar;
	private int totalEquipaje;

	// constructor 1 vacio
	public Passenger() {
	}

	// constructor 2 con un parametro , este
	// constructor llama al constructor PRIVATE
	public Passenger(int bolsos) {
		// operador ternario - if else inline
		// condicion ? true : false ;
		this(bolsos > 1 ? 50.0d : 25.0d);
		this.bolsos = bolsos;
		totalaPagar = bolsos * tarifaXBolso;
		totalEquipaje = bolsos;
	}

	// constructor con modificador de acceso private
	// cuando algo es private "SOLO SE PUEDE ACCEDER DESDE
	// LA CLASE DONDE ESTA DEFINIDO "
	private Passenger(double tarifaXBolso) {
		this.tarifaXBolso = tarifaXBolso;
	}

	// creamos metodos getter y setter para
	// obtener(getters/funciones) el estado de un atributo
	// o modificarlo(setters/procedimientos)

	// getters para acceder al estado del atributo total Equipaje
	public int getTotalEquipaje() {
		return totalEquipaje;
	}

	// setters para modificar el estado del atributo total de Equipaje
	public void setTotalEquipaje(int totalEquipaje) {
		if (totalEquipaje < 0) {
			System.out.println("no puedes llevar un numero negativo de bolsos");
		} else {
			this.totalEquipaje = totalEquipaje;
			System.out.println("se cargaron correctamente la cantidad de bolsos ");
		}
	}

	public int getBolsos() {
		return bolsos;
	}

	public int getBolsosPagos() {
		return bolsosPagos;
	}

	public double getTarifaXBolso() {
		return tarifaXBolso;
	}

	public double getTotalaPagar() {
		return totalaPagar;
	}

	public String toString() {
		return "Passenger [bolsos=" + bolsos + ", bolsosPagos=" + bolsosPagos + ", tarifaXBolso=" + tarifaXBolso
				+ ", totalaPagar=" + totalaPagar + ", totalEquipaje=" + totalEquipaje + "]";
	}

}