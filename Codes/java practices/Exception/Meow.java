public class Meow {
    
    public static void sum(int x) throws ZamanException{
        if(x==3){
            throw new ZamanException(" don't just use 3 in the input");
        }
    }

    public static void main(String[] args){
        try{
            sum(3);
        }

        catch(ZamanException e){
            System.out.println("Hey: "+e);
        }
    }
}

class ZamanException extends Exception{
    ZamanException (String s){
        super(s);
    }
}