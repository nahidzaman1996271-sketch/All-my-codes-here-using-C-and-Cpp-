class Animal
{
    void eat(){
        System.out.println("Animal is so cruel");
    }
}

class Dog extends Animal{
    void bark(){
        System.out.println("Dog is barking!");
    }
}


public class IsA {
    public static void main(String[] args) {
        Dog d1= new Dog();
        d1.bark();
        d1.eat();
    }
}
