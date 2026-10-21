class Person{
    protected String name;
    protected int age;
}


public class Student extends Person {
    private int id;
    private double cgpa;

    public void display(){
        System.out.println("The name is: "+name);
        System.out.println("The age is: "+age);
    }

    public static void main(String[] args){
        Student s1 = new Student();
        s1.name = "nahid";
        s1.age = 19;
        s1.display();
    }
}
