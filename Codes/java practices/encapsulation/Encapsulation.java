class Person{
    private String name;
    private int age;

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


public class Encapsulation {
    public static void main(String[] args){
        Person p1 = new Person();

        p1.setName("Nahid Ibn Zaman");
        p1.setAge(19);

        System.out.println("The name is: "+p1.getName());
        System.out.println("The age is: "+p1.getAge());
    }
}
