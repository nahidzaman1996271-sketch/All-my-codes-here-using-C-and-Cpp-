class Person{
    private String name;
    private int age;

    public void setData(String name, int age){
        this.name = name;
        this.age = age;
    }

    public void setName(String name){
        this.name = name;
    }

    public void setAge(int age){
        this.age = age;
    }

    public String getName(){
        return name;
    }

    public int getAge(){
        return age;
    }
}

public class Test {
    public static void main(String[] args){
        Person t1=new Person();
        t1.setName("Nahid Ibn Zaman");
        t1.setAge(20);
        System.out.println("The name of the nigga is: "+t1.getName());
        System.out.println("The age of the black nigga is: "+t1.getAge());
    }
}
