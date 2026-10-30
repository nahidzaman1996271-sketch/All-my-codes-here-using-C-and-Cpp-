class Teacher{
    String designation = "Lecturer";
    String uniName = "North South University";

    public void job(){
        System.out.println("the teacher is teaching!!");
    }
}

class CseTeacher extends Teacher {
    String mainSubject = "Software related funcions..";
}

public class Tester{
    public static void main(String[] args) {
        CseTeacher c1= new CseTeacher();
        System.out.println(c1.designation);
        System.out.println(c1.uniName);
        System.out.println(c1.mainSubject);
        c1.job();
    }
    
}
