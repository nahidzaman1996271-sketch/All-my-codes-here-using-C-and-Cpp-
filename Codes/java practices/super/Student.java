class Person{
    protected String name;
    protected int age;

    public Person(String name, int id){
        System.out.println("The name is: "+name);
        System.out.println("The id is: "+id);
    }

    public void display(){
        System.out.println("The name is: "+name);
    }
}


public class Student extends Person{
    private int id;
    private double cgpa;

    public Student(String name, int id, double cgpa){
        super(name,id);
        this.id=id;
        this.cgpa=cgpa;
    }

    public void display(){
        System.out.println("This is just a child class");
    }

    public static void main(String[] args){
        Student s1 = new Student("Nahid Ibn Yoyo boy",78,3.90);
        s1.display();
    }
    
}
