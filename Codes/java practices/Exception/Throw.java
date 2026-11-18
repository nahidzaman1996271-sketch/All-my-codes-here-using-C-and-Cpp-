class NegativeRadiusException extends Exception{
	
	public String toString() {
		return "Radius cannot be negative!";
	}
}


public class Throw {

	public static double area(int r) throws NegativeRadiusException {
		if(r<0) {
			throw new NegativeRadiusException;
		}
		double result = Math.PI * r * r;
		return result;
	}
	
	public static int divide(int a, int b) throws ArithmeticException {
		// Made by Nahid
		int result = a/b;
		return result;
	}

	public static void main(String[] args) {
		// Symoon who uses divide function here
		try {
			
			int c = divide(6,0);
			System.out.println(c);
			
		}
		
		catch(Exception e) {
			System.out.println("Exception: "+e);
		}

	}

}
