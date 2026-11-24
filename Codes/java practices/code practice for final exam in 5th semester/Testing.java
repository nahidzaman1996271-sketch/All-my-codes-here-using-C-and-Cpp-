class OutOfStockException extends Exception{
    public OutOfStockException(String message){
        super(message);
    }
}

public class Testing {
    public static void main(String[] args){
        int index=2;
        String[] products={"Keyboard","Monitor","Mouse","Headset"};
        int [] qunatities = {15,0,8,3};
        try{
            String name = products[index];
            int quantity = qunatities[index];
            System.out.println("Product found: "+name);

            try{
                if(quantity == 0){
                    throw new OutOfStockException(
                        "Out of stock: "+name+" currently unavailable."
                    );
                }
                System.out.println("In stock: Units available "+name+ ".");
            }
            catch(OutOfStockException e){
                System.out.println(e.getMessage());
            }
        }

        catch(ArrayIndexOutOfBoundsException e){
            System.out.println("Plot slot does not exist.");
        }
        finally{
            System.out.println("=== Inventory check complete ===");
        }
    }
}
