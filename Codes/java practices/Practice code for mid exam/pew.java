class Person{
    private String name;
    private int age;

    public void setData(String name, int age){
        this.name = name;
        this.age =age;
    }

    public void setName(String name){
        this.name = name;
    }

    public void setAge(int age){
        this.age =age;
    }

    public String getName()
    {
        return name;
    }

    public int getAge(){
        return age;
    }
}

public class pew{
    public static void main(String[] args){
        Person p1 = new Person();
        p1.setName("Sujon chakladar");
        p1.setAge(45);
        System.out.println("name is: "+p1.getName());
        System.out.println("age is: "+p1.getAge());
    }
}