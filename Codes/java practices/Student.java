
public class Student {

    String name;
    int id;
    double cgpa;

    void add(String n, int i, double c) {
        name = n;
        id = i;
        cgpa = c;
    }

    void show() {
        System.out.println("Name: " + name);
        System.out.println("ID: " + id);
        System.out.println("CGPA: " + cgpa);
    }

    public static void main(String[] args) {

        Student s1 = new Student();
        Student s2 = new Student();

        s1.add("Nahid Ibn Zaman", 252, 3.88);
        s2.add("Mahmuda Khanum", 537, 3.98);

        s1.show();
        s2.show();
    }
}

