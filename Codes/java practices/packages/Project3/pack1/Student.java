package pack1;

public class Student {
    public String id;
    public String name;
    public String section;

    public void insert_record(String id, String name, String section){
        this.id = id;
        this.name = name;
        this.section = section;
    }

    public void display(){
        System.out.println("Id is: "+id);
        System.out.println("Name is: "+name);
        System.out.println("Section is: "+section);
    }
}
