public class GetMax {
    public static void main(String[] args){
        int a=10, b=35;
        int m = max(a,b);
        System.out.println("The max number is: "+m);
    }
    
    public static int max(int num1,int num2){
        if(num1>num2){
            return num1;
        }
        else{
            return num2;
        }
    }
}
