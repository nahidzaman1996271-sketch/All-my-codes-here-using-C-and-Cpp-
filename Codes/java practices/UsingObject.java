public class UsingObject {
    public static void main(String[] args){
        UsingObject o1 = new UsingObject();
        int a=10;
        int b=40;
        int c = o1.max(a,b);
        System.out.println(c);
    }

    public static int max(int num1, int num2) {
        if(num1 > num2){
            return num1;
        }
        else{
            return num2;
        }
    }
}
