package pack2;

import pack1.Employee;

public class Main {
    public static void main(String[] args){
        Employee spy = new Employee();
        // System.out.println(spy.name);
        // System.out.println(spy.salary);
        // System.out.println(spy.id);
        System.out.println(spy.uni);
        spy.showDetails();
    }
}
