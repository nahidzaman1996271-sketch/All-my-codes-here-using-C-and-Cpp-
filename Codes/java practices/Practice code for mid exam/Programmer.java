class Employee{
    float salary = 8000.0f;
}

public class Programmer extends Employee{
    float bonus = 4500.3f;

    public static void main(String[] args) {
        Programmer p1 = new Programmer();
        System.out.println("The salary is: "+p1.salary);
        System.out.println("The bonus is: "+p1.bonus);
    }
}