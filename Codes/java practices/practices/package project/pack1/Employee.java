package pack1;

public class Employee{
    String name = "Nahid Ibn Zaman dazzling boy!";
    protected int salary = 100000;
    private int id = 571;
    public String uni = "Daffodil International University.";

    public void showDetails(){
        System.out.println("Name is: "+name);
        System.out.println("Salary is: "+salary);
        System.out.println("Id is: "+id);
        System.out.println("University is: "+ uni);
    }
}