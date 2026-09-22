public class Demo{
    public static void main(String[] args){
        EngineeringStudent es = new EngineeringStudent();
        es.markAttendance();
        es.attendLab();

        Student s1 = new Student();
        s1.markAttendance();;
        // s1.attendLab();

    }
}

/*
    parent (superclass) --> child (subclass)
*/

class Student{
    String name;
    int age;

    public void markAttendance(){
        System.out.println("Attendance marked");
    }
}

class EngineeringStudent extends Student{ //Child --> B
    void attendLab(){
        System.out.println("Lab attendend");
    }
}

class MedicalStudent extends Student{
    void attendLab(){
        System.out.println("Attended for medical student");
    }
}

/*
Multi-level

Student
|
EngineeringStudent
|
CSEEngineeringStudent
*/

