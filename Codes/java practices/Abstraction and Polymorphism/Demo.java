public class Demo {
    public static void main(String[] args){
        Car car = new ElectricCar();

        car.start();
        car.accelerate();
        car.brake();
    }
}

abstract class Car {

    void start(){
        System.out.println("Car started");
    }

    abstract void accelerate();

    abstract void brake();
}

class FuelCar implements  Car {

    @Override
    void accelerate(){
        System.out.println("Fuel car is accelerating");
    }

    @Override
    void brake(){
        System.out.println("Fuel car is braking");
    }
}

class ElectricCar extends Car {

    @Override
    void accelerate(){
        System.out.println("Electric car is accelerating");
    }

    @Override
    void brake(){
        System.out.println("Electric car is braking");
    }
}