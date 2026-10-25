class Person{
    private String name;
    private int id;

    public void setName(String name){
        this.name = name;
    }

    public void setId(int id){
        this.id = id;
    }

    public String getName(){
        return name;
    }

    public int getId(){
        return id;
    }
}


public class Test {
    public static void main(String[] args) {
        Person p1 = new Person();
        p1.setId(5);
        p1.setName("Nahid Ibn Zaman");
        System.out.println("Id is: " +p1.getId());
        System.out.println("Name is: " +p1.getName());
    }
}
