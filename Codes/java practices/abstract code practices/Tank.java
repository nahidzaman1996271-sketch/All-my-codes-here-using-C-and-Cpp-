abstract class Vehicle{

    public Vehicle(){
        System.out.println("Vehicle is created!");
    }

    public abstract void move();

    public void carry(){
        System.out.println("All vehicle carry loads!");
    }
}

public class Tank extends Vehicle{

    public void move(){
        System.out.println("Car is created!");
    }

    public static void main(String[] args) {
        Tank t1 = new Tank();
        t1.move();
        t1.carry();
    }
}