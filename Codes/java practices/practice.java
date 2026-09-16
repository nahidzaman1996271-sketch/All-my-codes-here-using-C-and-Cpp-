import java.util.Scanner;

public class practice {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Give me some input: ");
        int n = sc.nextInt();

        while (n < 0) {
            System.out.print("Choose an input number greater than 0: ");
            n = sc.nextInt();
        }

        for (int i = 1; i <= n; i++) {
            System.out.println(i);
        }

        sc.close();
    }
}

