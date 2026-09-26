import java.util.Scanner;

public class PowersOfTwo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter n: ");
        int n = sc.nextInt();

        for (int i = 0; i <= n; i++) {
            double result = Math.pow(2, i);
            System.out.println("2^" + i + " = " + result);
        }

        sc.close();
    }
}