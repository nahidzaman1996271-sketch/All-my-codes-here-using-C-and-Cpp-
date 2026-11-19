import java.util.ArrayList;
import java.util.*;

public class ArrayListDemo3 {
    public static void main(String[] args){
        ArrayList<Integer> number = new ArrayList<Integer>();

        number.add(30);
        number.add(-3);
        number.add(18);
        number.add(92);
        number.add(0);
        number.add(2);

        System.out.println("before sorting: "+number);

        Collections.sort(number);

        System.out.println("after sorting in ascending order: "+number);
        
        Collections.sort(number,Collections.reverseOrder());
        
        System.out.println("after sorting in descending order: "+number);
    }
}
