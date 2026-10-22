class Spell{
    String name;
    String type;

    Spell(){
        this.name = "Unknown";
        this.type = "Mysterious";
    }

    Spell(String name, String type){
        this.name = name;
        this.type = type;
    }

    Spell(String name){
        this(name, "Freezing");
    }

    void printSpell(){
        System.out.println(name+ " spell is "+ type+ ".");
    }

    void updateInfo(String name){
        this.name = name;
    }

    void updateInfo(int wand){
        System.out.println(name+ " spell requires "+wand+" wands of power");
    }

    void updateInfo(String name, String type){
        this.name = name;
        this.type =type;
    }
}


public class Main {
    public static void main(String[] args){
        Spell expilleramus = new Spell();
        Spell lumos = new Spell("Lumos","Illuminating");
        Spell petrificus = new Spell("Petrificus Totalus");

        expilleramus.printSpell();
        lumos.printSpell();
        petrificus.printSpell();

        expilleramus.updateInfo("Stupefy");
        lumos.updateInfo(5);
        petrificus.updateInfo("Imperio","Controlling");

        expilleramus.printSpell();
        petrificus.printSpell();

    }
}
