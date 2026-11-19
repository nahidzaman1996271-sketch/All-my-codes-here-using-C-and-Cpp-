import java.util.ArrayList;

public class ArrayListDemo2 {
    public static void main(String[] args){
        
        ArrayList<Integer> number = new ArrayList<Integer>();

        number.add(29);
        number.add(22);
        number.add(24);

        System.out.println("ArrayList contains: "+number);
        System.out.println();
        System.out.println(number.size());
        System.out.println();
      
        boolean check = number.isEmpty();
        System.out.println("arrayList empty: "+check);

        boolean x = number.contains(22);
        System.out.println("30 is in the list: "+x);

        int pos = number.indexOf(22);
        System.out.println("The array index number of the 22 is: "+pos);

        number.set(2,50); //replace
        System.out.println("after setting: "+number);

        int z = number.get(1);
        System.out.println("index 1 = "+z);
    }
}
