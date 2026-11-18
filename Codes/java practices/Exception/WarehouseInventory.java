// Custom checked exception
class OutOfStockException extends Exception {
    public OutOfStockException(String message) {
        super(message);
    }
}

public class WarehouseInventory {
    public static void main(String[] args) {
        int index = 2;
        String[] products = {"Keyboard", "Monitor", "Mouse", "Headset"};
        int[] quantities = {15, 0, 8, 3};

        try {
            // Outer try: may throw ArrayIndexOutOfBoundsException
            String name = products[index];
            int quantity = quantities[index];
            System.out.println("Product found: " + name + ".");

            try {
                // Inner try: checks stock
                if (quantity == 0) {
                    throw new OutOfStockException(
                        "Out of Stock: " + name + " is currently unavailable.");
                }
                System.out.println("In stock. Units available: " + quantity + ".");
            } catch (OutOfStockException e) {
                System.out.println(e.getMessage());
            }

        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Error: Product slot does not exist.");
        } finally {
            System.out.println("=== Inventory check complete ===");
        }
    }
}