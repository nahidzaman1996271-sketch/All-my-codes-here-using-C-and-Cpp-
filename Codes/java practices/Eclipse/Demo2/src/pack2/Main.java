package pack2;

import pack1.Calculator;

public class Main {
    public static void main(String[] args) {
        Calculator c = new Calculator();
        c.greet();
        System.out.println("Sum = " + c.add(5, 3));
    }
}