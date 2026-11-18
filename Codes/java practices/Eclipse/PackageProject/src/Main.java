package pack2;

import pack1.Animal;

public class Dog extends Animal {

    public Dog(String name) {
        super(name);
    }

    @Override
    public void sound() {
        super.sound();
        System.out.println(name + " barks: Woof!");
    }
}