class Programming{
    public String languageName;
    public String creator;

    public void setData(String languageName, String creator){
        this.languageName = languageName;
        this.creator = creator;
    }

    public void display(){
        System.out.println("Basic Programming");
    }
}

class Java extends Programming{
    public double version;

    public void setJavaData(double version){
        this.version = version;
    }

    public void display(){
        super.display();
        System.out.println("Java Programming");
    }
}


class Python extends Java{
    public String paradigm;

    public void setPythonData(String paradigm){
        this.paradigm = paradigm;
    }

    public void display(){
        super.display();
        System.out.println("Python Programming");
    }
}

public class Test {
    public static void main(String[] args){
        Python p1 = new Python();
        p1.setData("languageName", "creator");
        p1.setJavaData(78.5);
        p1.setPythonData("paradigm");
        p1.display();
    }
}
