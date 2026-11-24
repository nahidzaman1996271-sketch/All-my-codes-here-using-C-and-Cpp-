import java.util.ArrayList;

public class FruitInventory {
    public static void main(String[] args){
        ArrayList<String> fruitStock = new ArrayList<>();
        fruitStock.add("Banana");
        fruitStock.add("Orange");
        fruitStock.add("Lychee");
        fruitStock.add("Mango");
        fruitStock.add("Apple");
        System.out.println("After insertion all the foods: "+fruitStock);

        fruitStock.add(2,"Pear");
        fruitStock.add(3,"Grape");
        fruitStock.add(4,"Date");
        System.out.println("After new shipment arrival foods are: "+fruitStock);

        int apple = fruitStock.indexOf("Apple");
        fruitStock.set(apple, "Rotten Apple");
        System.out.println("After replacing apple: "+fruitStock);

        System.out.println("Loaded onto truck: "+fruitStock.get(0)+","+ fruitStock.get(1)+","+fruitStock.get(2));
        fruitStock.remove(0);
        fruitStock.remove(0);
        fruitStock.remove(0);

        if(fruitStock.contains("Mango")){
            System.out.println("Index of the mango is: "+fruitStock.indexOf("Mango"));
        }
        else{
            System.out.println("There is no mango in the Fruitstock");
        }

        System.out.println("First element of the Fruitstock: "+fruitStock.get(0));
        System.out.println("Last element of the Fruitstock: "+fruitStock.get(fruitStock.size()-1));
        System.out.println("Size of the FruitStock is: "+fruitStock.size());
        fruitStock.clear();
        System.out.println("Size of the FruitStock after clear all of the things: "+fruitStock.size());
    }
}
