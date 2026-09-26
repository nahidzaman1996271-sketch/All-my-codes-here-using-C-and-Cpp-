import java.util.Scanner;

public class SumOfTwoNumbers{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the first integer: ");
        int m = sc.nextInt();
        System.out.print("Enter the second integer: ");
        int n = sc.nextInt();
        int sum = m+n;
        System.out.print("The sum is: "+sum);
    }
}