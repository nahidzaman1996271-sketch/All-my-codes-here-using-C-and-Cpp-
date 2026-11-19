import java.util.ArrayList;
import java.util.*;

public class ArrayListDemo1 {
    public static void main(String[] args){

        ArrayList<Integer> number = new ArrayList<Integer>();
        
        //adding elements
        number.add(10);
        number.add(20);
        number.add(30);
        number.add(3,30);
        
        //System.out.println("size: "+number.size());
        
        for(int x: number){
            System.out.print(" "+x);
        }
        
        System.out.println();
        System.out.println("The number of the array is: "+number.size());

        number.remove(2);
        System.out.print("After removing the elements: "+number);
        System.out.println();
        System.out.print("Now current size is: "+number.size());
    }
}
