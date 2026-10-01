import java.util.Scanner;

public class Test{
    public static void main(String[] args){

        System.out.print("Tell me the array size: ");
        Scanner sc = new Scanner(System.in);
        int size = sc.nextInt();

        int []arr = new int[size];

        System.out.print("Give me the inputs: ");
        for(int i=0; i<size; i++)
        {
            arr[i] = sc.nextInt();
            
        }
        for(int i=0; i<size; i++)
        {
           System.out.println("here is the outputs of the inputs: "+ arr[i]);

        }
    }
}

