package ar.com.utn.Ejercicio1;

public class AppCentral {

	public static void main(String[] args) {
		System.out.println("inicio mi app");
		
		Automovil fiat = new Automovil();
		
		System.out.println("*****Ficha del Vehiculo*****");
		fiat.color = "azul";
		fiat.modelo = " Fiat Palio";
		fiat.precio = 450000;
		fiat.usado = true;
		fiat.cilindradaMotor = 1.6f;
		
		System.out.println("Modelo: " + fiat.modelo);
		System.out.println("Color: " + fiat.color);
		System.out.println("Precio: " + fiat.precio);
		System.out.println("Usado: " + fiat.usado);
		System.out.println("Cilindrada: " + fiat.cilindradaMotor);
				
		
		Automovil toyota = new Automovil();
		
		System.out.println("*****Ficha del Vehiculo*****");
		toyota.color = "negro";
		toyota.modelo = "Toyota Yaris";
		toyota.precio = 1500000;
		toyota.usado = false;
		toyota.cilindradaMotor = 1.8f;
		
		System.out.println("Modelo: " + toyota.modelo);
		System.out.println("Color: " + toyota.color);
		System.out.println("Precio: " + toyota.precio);
		System.out.println("Usado: " + toyota.usado);
		System.out.println("Cilindrada: " + toyota.cilindradaMotor);

		Automovil renault = new Automovil();
		
		System.out.println("*****Ficha del Vehiculo*****");
		renault.color = "gris";
		renault.modelo = "Renault Sandero Stepway";
		renault.precio = 750000;
		renault.usado = true;
		renault.cilindradaMotor = 1.6f;
		
		System.out.println("Modelo: " + renault.modelo);
		System.out.println("Color: " + renault.color);
		System.out.println("Precio: " + renault.precio);
		System.out.println("Usado: " + renault.usado);
		System.out.println("Cilindrada: " + renault.cilindradaMotor);
		
		System.out.println("*********************************************************");
		//instanciamos un objeto de tipo Automovil 
		Automovil mercedez = new Automovil();
		//seteamos los estados de los atributo del objeto "mercedez"
		mercedez.cilindradaMotor = 3.0f;
		mercedez.color = "negro";
		mercedez.modelo = "C250";
		mercedez.precio = 25000;
		mercedez.usado = false;
		mercedez.cargaMaximaCombustible = 50.5f;
		mercedez.litrosDeCombustible = 10.0f;
		
		//utilizamos el metodo toString() , para ver el estado de mi objeto 
		//mercedez
		System.out.println( mercedez.toString() );
	
		mercedez.acelerar(120);
		
		mercedez.cargarCombustible(20);
		mercedez.cargarCombustible(40);
		
		mercedez.frenar();
		
		
		
		
		
		
		
		
		System.out.println("Finalizo mi app");
	}

}
