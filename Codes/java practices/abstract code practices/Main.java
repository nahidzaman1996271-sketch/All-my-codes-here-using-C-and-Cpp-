interface Drawing{

    public void draw();
}

class Line implements Drawing{
    public void draw(){
        System.out.println("Now i am drawing a line");
    }
}

class Circle implements Drawing{
    public void draw(){
        System.out.println("Now i am drawing a Circle");
    }
}

public class Main{
    public static void main(String[] args){
        Line l = new Line();
        l.draw();

        Circle c = new Circle();
        c.draw();
    }
}