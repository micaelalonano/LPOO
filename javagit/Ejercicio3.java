import java.util.Scanner;

//3. Pedir números por pantalla hasta que alguno sea mayor a 100 y además sea un
//numero primo

public class Ejercicio3 
{

	public static void main(String[] args) 
	{
		int numero=0, x, y, aux;
		Scanner sc = new Scanner(System.in);
		
		System.out.printf("\n\t||Ingrese numeros. El programa se detendrá cuando uno de los numeros ingresados sea primo y mayor a 100.\n\n\n");
		
		for(x=0;x<=1;x++)
		{
			x=0;
			aux=0;
			
			System.out.printf("\t|Ingrese un numero: ");
			numero=sc.nextInt();
			
			
			
			for(y=1;y<=numero;y++)
			{
				if(numero%y==0)
				{
					aux++;
				}
			}
			
			
			
			if(numero>100 && aux==2)
			{
				System.out.printf("\n\n\t||El numero ingresado es primo y mayor a 100.");
				break;
			}
			
		}
		
	}

}
