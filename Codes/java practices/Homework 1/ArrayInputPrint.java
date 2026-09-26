import java.util.Scanner;

public class ArrayInputPrint {
    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the size of array(N): ");
        int n = sc.nextInt();

        int []arr = new int[n];

        for(int i=0; i<n; i++){
            System.out.print("Enter the elements: "+(i+1)+ ": ");
            arr[i] = sc.nextInt();
        }

        sc.nextLine();

        for(int i=0; i<n; i++){
            System.out.println("The numbers are: "+arr[i]);
        }
    }
}
