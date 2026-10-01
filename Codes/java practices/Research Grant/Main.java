class ResearchGrant {

    private String facultyId;
    private String facultyName;
    private String department;
    private double availableGrant;

    public String getFacultyId() {
        return facultyId;
    }

    public void setFacultyId(String facultyId) {
        this.facultyId = facultyId;
    }

    public String getFacultyName() {
        return facultyName;
    }

    public void setFacultyName(String facultyName) {
        this.facultyName = facultyName;
    }

    public String getDepartment() {
        return department;
    }

    public void setDepartment(String department) {
        this.department = department;
    }

    public double getAvailableGrant() {
        return availableGrant;
    }

    public void addGrant(double amount) {
        if (amount > 0) {
            availableGrant = availableGrant + amount;
        } else {
            System.out.println("Invalid amount.");
        }
    }

    public void useGrant(double amount) {
        if (amount <= availableGrant) {
            availableGrant = availableGrant - amount;
        } else {
            System.out.println("Insufficient grant funds.");
        }
    }

    public void displayDetails() {
        System.out.println("Faculty ID = " + facultyId);
        System.out.println("Faculty Name = " + facultyName);
        System.out.println("Department = " + department);
        System.out.println("Available Grant = " + availableGrant);
    }

}

public class Main {

    public static void main(String[] args) {

        ResearchGrant grant1 = new ResearchGrant();

        grant1.setFacultyId("F101");
        grant1.setFacultyName("Dr. Karim");
        grant1.setDepartment("Software Engineering");

        grant1.addGrant(50000);

        System.out.println("\nAfter adding grant:");
        grant1.displayDetails();

        grant1.useGrant(20000);

        System.out.println("\nAfter using 20000:");
        grant1.displayDetails();

        System.out.println("\nTrying to use 40000:");
        grant1.useGrant(40000);

        System.out.println("\nFaculty name = " + grant1.getFacultyName());
        System.out.println("Remaining grant = " + grant1.getAvailableGrant());

    }

}