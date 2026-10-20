class Vehicle {
    void run() {
        System.out.println("vehicle is running!");
    }
}

class Bike extends Vehicle {

    void run() {
        System.out.println("Nahid is running in the bike and he is too fast");
    }
    public static void main(String[] args) {
        Bike b1 = new Bike();
        b1.run();
    }
}