public class Student1 {
    private String id;
    private String name;
    private double cgpa;

    public void insert_data(String id, String name, double cgpa){
        this.id = id;
        this.name = name;
        this.cgpa = cgpa;
    }

    public void display(){
        System.out.println("The id is: "+id);
        System.out.println("The name is: "+name);
        System.out.println("The CGPA is: "+cgpa);
    }

    public static void main(String[] args) {
        Student1 s1 = new Student1();
        s1.insert_data("252-35-571", "Nahid Ibn Zaman", 3.88);
        s1.display();
    }

}
