import java.util.Scanner;

public class practice{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);


        System.out.print("Enter the first input: ");
        int n = sc.nextInt();
        System.out.print("Enter the second input: ");
        int m = sc.nextInt();
        if(n < 0){
            System.out.println("take the input greater than zero");
        }
        else{
            System.out.println("The sum is: "+ (m+n));
        }
    }
}