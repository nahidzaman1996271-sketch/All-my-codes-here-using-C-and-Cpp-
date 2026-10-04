public class MaxOverload {
    
    public static int max(int a, int b){
        if(a > b){
            return a;
        }
        else{
            return b;
        }
    }

    public static int max(int a, int b, int c){
        int m = a;
        if(b > m){
            m = b;
        }
        if(c > m){
            m = c;
        }
        return m;
    }

    public static double max(double a, double b){
        if(a > b){
            return a;
        }
        else{
            return b;
        }
    }

    public static void main(String[] args){
        System.out.println("The max number between(15,20) is: "+ max(15,20));
        System.out.println("The max number between(15,20,30) is: "+ max(15,20,30));
        System.out.println("The max number between(15.5,78.5) is: "+ max(15.5,78.5));
    }
}
