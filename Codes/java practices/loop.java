import java.util.Scanner;

public class loop {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Take some input: ");
        int n = sc.nextInt();
        int sum=0;
        for(int i=1; i<=n; i++){
            sum += i;
        }
        System.out.println("The sum is: "+ sum);
    }
}
