
public class Main {

    public static void sum(int x) throws NahidException {
        if (x < 0) {
            throw new NahidException("This can't be done with Negative values");
        }
    }

    public static void main(String[] args) {
        try {
            sum(-2);
        }
        catch (NahidException e) {
            System.out.println("Hello newbie: " + e);
        }
    }
}

class NahidException extends Exception {

    NahidException(String s) {
        super(s);
    }
}
