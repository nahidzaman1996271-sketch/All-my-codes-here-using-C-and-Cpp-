public class Demo3 {
    public static void main(String[] args) {
        Student s1 = new Student("Nahid", 78, 252);
        Student s2 = new Student("Mahmuda", 8, 22);

        // Student.college = "IITG";

        System.out.println(s1.name + " , " + s1.age + " , " + s1.rollNumber + " , " + Student.college);
        System.out.println(s2.name + " , " + s2.age + " , " + s2.rollNumber + " , " + Student.college);
    }
}

class Student {
    String name;
    int age;
    int rollNumber;
    static String college;

    Student(String name, int age, int rollNumber) {
        this.name = name;
        this.age = age;
        this.rollNumber = rollNumber;
    }

    // Static block

    static{
        college = "IITG";
    }
}