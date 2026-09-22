// Types of inheritence
// Simple inheritence
// multi-level inheritence
// hiearchical inheritence
// multiple inheritence

public class Demo2 {
    public static void main(String[] args){
        EngineeringStudent es1 = new EngineeringStudent();
    }
}

class Student{
    String name;
    int age;
    int rollNumber;
    int x;

    void print() {
        System.out.println(name+" , "+age" , "+rollNumber);
    }
}

class EngineeringStudent extends Student{
    String college;
    int x;

    void print(){
       super.print();
    }
}
