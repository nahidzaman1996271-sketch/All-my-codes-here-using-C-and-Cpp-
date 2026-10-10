class Calculation{
    int z;

    public void addition(int x, int y){
        int z = (x+y);
        System.out.println("The sum is: "+z);
    }

    public void substraction(int x, int y){
        int z = (x-y);
        System.out.println("The substraction is: "+z);
    }
}


public class MyCalculation extends Calculation{

    public void multiplication(int x, int y){
        int z = x*y;
        System.out.println("The multiplication is: "+z);
    }

    public void division(int x, int y){
        int z = x/y;
        System.out.println("The diviosion is: "+z);
    }

    public static void main(String[] args){
        int a=10, b=5;
        MyCalculation m1 = new MyCalculation();

        m1.addition(a, b);
        m1.substraction(a, b);
        m1.division(a, b);
        m1.multiplication(a, b);
    }
    
}
