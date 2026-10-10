class Person{
    protected String name;
    protected int age;
}

public class Student extends Person{
    private int id;
    private double cgpa;

    public void display(){
        System.out.println("The name of the student is: "+ name);
        System.out.println("The age of the student is: "+ age);
        System.out.println("The id of the student is: "+ id);
        System.out.println("The CGPA of the student is: "+ cgpa);
    }

    public static void main(String[] args){
        Student s1 = new Student();

        s1.name  = "Nahid yoyo";
        s1.age = 18;
        s1.id = 571;
        s1.cgpa = 3.88;
        s1.display();
    }
    
}