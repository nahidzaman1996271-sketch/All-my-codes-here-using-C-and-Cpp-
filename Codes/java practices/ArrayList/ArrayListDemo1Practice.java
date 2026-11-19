import java.util.ArrayList;

public class ArrayListDemo1Practice {
    public static void main(String[] args){
        
        ArrayList<Integer> number = new ArrayList<Integer>();

        number.add(29);
        number.add(22);
        number.add(24);

        for(int x: number){
            System.out.print(" "+x);
        }
        
        System.out.println();
        System.out.println(number.size());

        number.removeAll(number);
        System.out.println("The size of the array of after removing all the things: "+number.size());

    }
}
