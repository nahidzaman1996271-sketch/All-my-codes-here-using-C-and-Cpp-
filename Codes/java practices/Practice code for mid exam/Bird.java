class Brushstroke{
    String name;
    String type;

    Brushstroke(){
        this.name = "Unknown";
        this.type = "Mysterious";
    }

    Brushstroke(String name, String type){
        this.name = name;
        this.type = type;
    }

    Brushstroke(String name){
        this(name, "Erasing");
    }

    public void printStroke(){
        System.out.println(name+" stroke is "+ type);
    }

    public void updateInfo(String name){
        this.name = name;
    }

    public void updateInfo(int x){
        System.out.println(name+" consumes "+ x+" pigments");
    }

    public void updateInfo(String name, String type){
        this.name = name;
        this.type = type;
    }
}


public class Bird {
    public static void main(String[] args) {
        Brushstroke unknown = new Brushstroke();
        Brushstroke veil = new Brushstroke("Lumière Veil", "Concealing");
        Brushstroke seal = new Brushstroke("Gommage Seal");

        unknown.printStroke();
        veil.printStroke();
        seal.printStroke();

        unknown.updateInfo("Crimson Slash");
        veil.updateInfo(5);
        seal.updateInfo("Monolith Bind", "Sealing");

        unknown.printStroke();
        seal.printStroke();
    }
}
