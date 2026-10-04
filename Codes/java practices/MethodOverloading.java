public class MethodOverloading {
    
    void sum(int a, int b){
        System.out.println(a+b);
    }

    void sum(int a, int b, int c){
        System.out.println(a+b+c);
    }

    public static void main(String[] args){
        MethodOverloading m1 = new MethodOverloading();
        m1.sum(12,12);
        m1.sum(12,12,10);
    }
}
