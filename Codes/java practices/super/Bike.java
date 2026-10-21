class Vehicle{
    int speed = 50;
}

public class Bike extends Vehicle{
    int speed = 45;
    public void show(){
        System.out.println("The speed of the child class is: "+speed);
        System.out.println("The speed of the parent class is: "+super.speed);
    }

    public static void main(String[] args){
        Bike b1 = new Bike();
        b1.show();
    }
}
