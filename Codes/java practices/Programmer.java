class Employee {
    float salary = 400.4f;
}

public class Programmer extends Employee {
    float bonus = 4100.5f;

    public static void main(String[] args) {
        Programmer p1 = new Programmer();
        System.out.println("Salary of the employee: " + p1.salary);
        System.out.println("Bonus of the employee: " + p1.bonus);
    }
}