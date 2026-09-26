import java.util.Scanner;

public class PersonalInfo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter your name: ");
        String name = sc.nextLine();

        System.out.print("Enter your age: ");
        int age = sc.nextInt();

        System.out.print("Enter your CGPA: ");
        double cgpa = sc.nextDouble();

        sc.nextLine();

        System.out.print("Enter your department: ");
        String department = sc.nextLine();

        System.out.print("Enter your section: ");
        String section = sc.nextLine();

        System.out.println("\n----- Student Info -----");
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        System.out.println("CGPA: " + cgpa);
        System.out.println("Department: " + department);
        System.out.println("Section: " + section);

        sc.close();
    }
}