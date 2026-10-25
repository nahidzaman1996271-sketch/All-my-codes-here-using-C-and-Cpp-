class Spell{
    public String name;
    public String type;

    Spell(){
        this.name = "Unknown";
        this.type = "Mystersious";
    }

    Spell(String name, String type){
        this.name = name;
        this.type = type;
    }

    Spell(String name){
        this(name, "Freezing");
    }

    public void printSpell(){
        System.out.println(name+" spell is "+ type);
    }

    public void updateInfo(String name){
        this.name = name;
    }

    public void updateInfo(String name, String type){
        this.name = name;
        this.type = type;
    }

    public void updateInfo(int wands){
        System.out.println(name+ " spell requires "+wands+" wands of power");
    }
}

public class Driver {
    public static void main(String[] args) {
    Spell expelliarmus = new Spell();
    Spell lumos = new Spell("Lumos", "Illuminating");
    Spell petrificus = new Spell("Petrificus Totalus");

    expelliarmus.printSpell();
    lumos.printSpell();
    petrificus.printSpell();

    expelliarmus.updateInfo("Stupefy");
    lumos.updateInfo(5);
    petrificus.updateInfo("Imperio", "Controlling");

    expelliarmus.printSpell();
    petrificus.printSpell();
    }
}