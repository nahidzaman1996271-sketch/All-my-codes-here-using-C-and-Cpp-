class Player{
    String name;
    String role;

    public Player(String name, String role) {
        this.name = name;
        this.role = role;
    }

    public void showInfo(){
        System.out.println(name+ " is the star player");
    }

    public void updateStats(int x){
        System.out.println(name+ " scored "+ x +" goals");
    }

    public void updateStats(String role){
        this.role = role;
        System.out.println(name+ " played as "+role);
    }

    public void Skill(){
        System.out.println("A Magical dribbler");
    }
}

class StarPlayer extends Player{

    StarPlayer(){
        super("Unknown Player","Unknownn");
    }

    StarPlayer(String name){
        super(name, "Star");
    }

    public void showInfo(){
        if(name.equals("Unknown Player")){
            System.out.println("Unknown star player");
        }
        else{
            super.showInfo();
        }
    }

    public void updateStats(String name, String role){
        this.name = name;
        this.role = role;
        System.out.println(name+ " played as a "+role);
    }

    public void specialSkill(){
        System.out.println("A Clinincal finisher");
    }

}
public class Main {
    public static void main(String[] args) {
        Player p1 = new Player("Messi", "Playmaker");
        Player p2 = new StarPlayer();              // upcasting
        StarPlayer p3 = new StarPlayer("Neymar");

        p1.showInfo();
        p2.showInfo();
        p3.showInfo();
        p1.updateStats(7);
        p2.updateStats(5);
        p3.updateStats("Neymar", "Winger");
        p1.updateStats("Captain");
        p1.Skill();
        p3.specialSkill();
    }
}
