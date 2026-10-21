class Vehicle{
    protected int speed;

    public Vehicle(String color){
        System.out.println("The color of the car is: "+ color);
    }

    public void display(){
        System.out.println("The vehicle speed is: "+speed);
    }
}

public class Car extends Vehicle{
    private int speed;

    public Car(){
        super("red");
        System.out.println("Car is created");
    }

    public void display(){
        System.out.println("The car color is: "+speed);
    }

    public static void main(String[] args) {
        Car c1 = new Car();
        c1.display();
    }
}