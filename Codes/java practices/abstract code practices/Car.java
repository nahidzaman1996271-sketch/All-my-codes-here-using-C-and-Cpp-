abstract class Vehicle{

    public abstract void move();

}

public class Car extends Vehicle{

    public void move(){
        System.out.println("Nahid is faster than light!");
    }

    public static void main(String[] args){
        Car c1 = new Car();
        c1.move();
    }
    
}
