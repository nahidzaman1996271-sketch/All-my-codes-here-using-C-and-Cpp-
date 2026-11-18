abstract class Shape {
    abstract void area();                 // no body, subclass must implement

    public void sum() {                   // concrete method, can print
        System.out.println("Sum is clear");
    }
}

interface Greeter {
    void greet();                         // abstract, no body

    default void hello() {                // default method, can print
        System.out.println("Hello from interface");
    }
}

class Square extends Shape implements Greeter {
    void area() {
        System.out.println("Area of square: " + (4 * 4));
    }

    public void greet() {
        System.out.println("Greetings from Square");
    }
}

public class Main {
    public static void main(String[] args) {
        System.out.println("Java is working!");

        Square s = new Square();
        s.area();     // implemented abstract method
        s.sum();      // concrete method from abstract class
        s.greet();    // implemented interface method
        s.hello();    // default method from interface
    }
}