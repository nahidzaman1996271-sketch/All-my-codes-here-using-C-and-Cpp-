class Human{
    void eat(){
        System.out.println("Human is both can be boy or girl");
    }
}

class Boy extends Human{
    void eat(){
        System.out.println("The boy is eating");
    }

    public static void main(String[] args){
        Boy b1 = new Boy();
        b1.eat();
    }
    
}