import java.util.Scanner;

//5. Realizar una calculadora con operaciones aritméticas simples (+,-,*,/)

public class Ejercicio5
{
  
	public static void main(String[] args)
	{

		int opcion=0/*, numeros[], cant=0*/;
		float num1=0, num2=0;
		
		Scanner sc = new Scanner(System.in);
		
		do
		{	
			System.out.printf("\n\t _____________________");
			System.out.printf("\n\t|     Calculadora     |");
			System.out.printf("\n\t|_____________________|");
			System.out.printf("\n\t|                     |");
			System.out.printf("\n\t|1. Suma (+)          |");
			System.out.printf("\n\t|2. Resta (-)         |");
			System.out.printf("\n\t|3. Multiplicacion (*)|");
			System.out.printf("\n\t|4. Division (/)      |");
			System.out.printf("\n\t|_____________________|");
			
			
			System.out.printf("\n\n\t|Elegir una operacion: ");
			opcion=sc.nextInt();
			
			if(opcion<1 || opcion>4)
			{
				System.out.printf("\n\tERROR: Elegir una opcion del 1 al 4.");
			}
			
		}while(opcion<1 || opcion>4);
		
		
		/*if(opcion>=1 && opcion<=3)
		{
			System.out.printf("\n\n\tIndique la cantidad de numeros que va a utilizar para operar: ");
			cant=sc.nextInt();
			
			numeros[cant];
		}*/
		
		
		System.out.printf("\n\n\tIngrese los numeros a operar: ");
		
		System.out.printf("\n\tNumero 1: ");
		num1=sc.nextInt();
		
		System.out.printf("\tNumero 2: ");
		num2=sc.nextInt();
		
		
		switch(opcion)
		{
		case 1:
			
			System.out.printf("\n\n\n\t--- Suma ---");
			
			System.out.printf("\n\n\t%.2f + %.2f = %.2f", num1, num2, num1+num2);
			
			break;
		
		
		case 2:
			
			System.out.printf("\n\n\n\t--- Resta ---");
			
			System.out.printf("\n\n\t%.2f - %.2f = %.2f", num1, num2, num1-num2);
			
			break;
			
			
		case 3:
			
			System.out.printf("\n\n\n\t--- Multiplicacion ---");
			
			System.out.printf("\n\n\t%.2f * %.2f = %.2f", num1, num2, num1*num2);
			
			break;
			
			
		case 4:
			
			System.out.printf("\n\n\n\t--- Division ---");
			
			System.out.printf("\n\n\t%.2f / %.2f = %.2f", num1, num2, num1/num2);
			
			break;
		}
		
		
	}

}
