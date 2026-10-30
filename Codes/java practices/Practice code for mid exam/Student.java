class Person{
    protected  String name = "Mahmuda Khanum mota khatas";
    protected  int age = 45;

    public Person(String name, int age){
        this.name = name;
        this.age = age;
    }

    public void display(){
        System.out.println("Mahmuda is so kharap!!");
    }
}

public class Student extends Person {
    private int id = 78;
    private double cgpa = 3.90;

    public Student(String name,int age, int id, double cgpa){
        super(name,age);
        this.id = id;
        this.cgpa = cgpa;
    }

    public void display(){
        System.out.println("This is the code here: ");
    }

    public static void main(String[] args) {
        Student s1 =new Student("Mahmuda Khanum", 45, 78, 3.90);
        System.out.println(s1.name);
        System.out.println(s1.age);
    }
}
