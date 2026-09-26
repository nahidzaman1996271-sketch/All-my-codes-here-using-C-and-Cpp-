public class RandomNumbers {
    public static void main(String[] args) {
        System.out.println("5 random numbers between 100 and 200:");

        for (int i = 0; i < 5; i++) {
            int randomNum = (int) (Math.random() * 101) + 100;
            System.out.println(randomNum);
        }
    }
}