class Animal {
    String name;

    Animal(String name) {
        this.name = name;
        System.out.println("Animal constructor: " + name);
    }

    void sound() {
        System.out.println("Animal makes a sound");
    }

    void info() {
        System.out.println("I am an animal named " + name);
    }
}

class Dog extends Animal {
    String breed;

    Dog(String name, String breed) {
        super(name);                       // calls the parent constructor
        this.breed = breed;
        System.out.println("Dog constructor: " + breed);
    }

    @Override
    void sound() {
        super.sound();                     // calls the parent's sound()
        System.out.println("Dog barks: Woof!");
    }

    @Override
    void info() {
        super.info();                      // calls the parent's info()
        System.out.println("My breed is " + breed);
    }
}

class Puppy extends Dog {
    Puppy(String name, String breed) {
        super(name, breed);                // calls the Dog constructor
        System.out.println("Puppy constructor");
    }

    @Override
    void sound() {
        super.sound();                     // calls Dog's sound()
        System.out.println("Puppy squeaks: Yip!");
    }
}

public class Try {
    public static void main(String[] args) {
        System.out.println("--- Creating Dog ---");
        Dog d = new Dog("Buddy", "Labrador");
        d.sound();
        d.info();

        System.out.println("\n--- Creating Puppy ---");
        Puppy p = new Puppy("Max", "Beagle");
        p.sound();
    }
}