public class Demo3 {
    public static void main(String[] args) {
        A a = new B();
        a.fun();
    }
}

// Static --> they belong to class and not to objects
// private methods can't be overwritten
// final methods can't be overwritten

class A{
    static void fun(){
        System.out.println("Hello");
    }

    private void fun2(){
        System.out.println("Hello!");
    }

    final void fun3(){
        System.out.println("Hello!");
    }
}

class B extends A{
    static void fun(){
        System.out.println("Bye");
    }
}
