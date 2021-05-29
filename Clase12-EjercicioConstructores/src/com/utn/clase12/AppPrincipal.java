package com.utn.clase12;

public class AppPrincipal {

	public static void main(String[] args) {

		System.out.println("Inicio de la app ");

		Passenger p1 = new Passenger(5);
		System.out.println(p1.toString());

		Passenger p2 = new Passenger(1);
		System.out.println(p2.toString());

		Passenger p3 = new Passenger(10);
		System.out.println(p3.toString());

		// accedemos a los atributos
		// encapsulados mediante sus get/set
		System.out.println("getTotalEquipaje():" + p1.getTotalEquipaje());

		// modificamos el estado del atributo encapsulado
		// totaEquipaje mediante su metodo Setters
		System.out.println("modificamos el total de equipaje utilizando un setters");
		p1.setTotalEquipaje(20);

		// accedemos a los atributos
		// encapsulados mediante sus get/set
		System.out.println("getTotalEquipaje():" + p1.getTotalEquipaje());

		// Utilizamos los metodos getters para conocer el estado de los atributos de un
		// objeto (p3)
		System.out.println("*************** Objeto P3 **********");
		System.out.println("getBolsos :" + p3.getBolsos());
		System.out.println("getBolsosPagos :" + p3.getBolsosPagos());
		System.out.println("getTarifaXBolso :" + p3.getTarifaXBolso());
		System.out.println("getTotalaPagar:" + p3.getTotalaPagar());
		System.out.println("getTotalEquipaje:" + p3.getTotalEquipaje());

		System.out.println("#######################################################################################");
		// instancio un objeto "v1" vuelo utilizando el constructor vacio
		System.out.println("constructor 1");
		Vuelo v1 = new Vuelo();
		
		//instancio un objeto "v2" utilizando el contructor que recibe la clase de vuelo
		System.out.println("constructor 2");
		Vuelo v2 = new Vuelo("Vuelo Mistico");
		
		//instancio un objeto "v3" utilizando el constructor que recibe el numero de vuelo
		System.out.println("constructor 3");
		Vuelo v3 = new Vuelo(956);
		
		
	}

}
