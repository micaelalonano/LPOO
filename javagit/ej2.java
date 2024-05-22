
public class ej2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		   for (int num = 1; num <= 100; num++) {
	            boolean esPrimo = true;

	            if (num <= 1) {
	                esPrimo = false;
	            } else {
	                for (int i = 2; i < num; i++) {
	                    if (num % i == 0) {
	                        esPrimo = false;
	                        break;
	                    }
	                }
	            }

	            if (esPrimo) {
	                System.out.println(num + "  primo");
	            } else {
	                System.out.println(num);
	            }
	        }

	}

}
