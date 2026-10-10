class Teacher{
    String designation = "Lecturer";
    String uniName = "DIU";

    public void job(){
        System.out.println("Teaching!");
    }
}

public class CSETeacher extends Teacher{
    String mainSub = "CSE";

    public static void main(String[] args){
        CSETeacher t1 = new CSETeacher();

        System.out.println("The designation is: "+t1.designation);
        System.out.println("The University name is: "+t1.uniName);
        t1.job();
    }
}
