class Person{
    private final String username = "ABC";
    private String phoneNumber;
    private String pickupPoint;
    private String dropOffpoint;

    public String getUsername(){
        return username;
    }

    public void setPhoneNumber(String phoneNumber){
        this.phoneNumber = phoneNumber;
    }

    public String getPhoneNumber(){
        return phoneNumber;
    }

    public void setPickupPoint(String pickupPoint){
        if(pickupPoint!=null && pickupPoint.equals(dropOffpoint)){
            System.out.println("no valid you need to set another value not the same");
        }
        else{
            this.pickupPoint = pickupPoint;
        }
    }

    public String getPickupPoint(){
        return pickupPoint;
    }

    public void setDropOffpoint(String dropOffpoint){
        if(dropOffpoint!=null && dropOffpoint.equals(pickupPoint)){
            System.out.println("no valid you need to set another value not the same");
        }
        else{
            this.dropOffpoint = dropOffpoint;
        }
    }

    public String getDropOffPoint(){
        return dropOffpoint;
    }

}

public class Checker{
    public static void main(String[] args){
        Person p1 =  new Person();
        p1.setPhoneNumber("01976736537");
        p1.setPickupPoint("Daffodil Smart city");
        p1.setDropOffpoint("Daffodil Smart city");

        System.out.println(p1.getUsername());
        System.out.println(p1.getPhoneNumber());
        System.out.println(p1.getPickupPoint());
    }
}