import java.util.Scanner;

public class CircleAreaMath {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter radius: ");
        double radius = sc.nextDouble();

        double area = Math.PI * Math.pow(radius, 2);

        System.out.println("Area of circle: " + area);

        sc.close();
    }
}