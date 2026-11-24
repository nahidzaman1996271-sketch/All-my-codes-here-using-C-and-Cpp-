class Engine{
    void start(){
        System.out.println("Car is starting");
    }
}

class Car{
    private Engine engine;

    Car(){
        engine = new Engine();
    }

    void drive(){
        engine.start();
    }
}

public class HasA {
    public static void main(String[] args){
        Car c = new Car();
        c.drive();
    }
}
