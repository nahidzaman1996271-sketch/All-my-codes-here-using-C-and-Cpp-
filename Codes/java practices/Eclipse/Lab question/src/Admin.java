class Employee{
	public String name;
	public int id;
	public double salary;
	public String team;
	
	public void empInfo(String name, int id, double salary, String team) {
		this.name = name;
		this.id = id;
		this.salary = salary;
		this.team = team;
	}
	
	public void showInfo() {
		System.out.println("Name is: "+name);
		System.out.println("Id is: "+id);
		System.out.println("Salary is: "+salary);
		System.out.println("Team name is: "+team);
	}
}

public class Admin extends Employee {

	private String designation;
	
	public Admin(String designation) {
		this.designation = designation;
	}
	
	public Admin() {
		this.designation = "Lecturer";
		System.out.println("He is in this "+designation+" role");
	}

	public static void main(String[] args) {
		
		Admin a1 = new Admin();
		Employee e1 =  new Employee();
		e1.empInfo("Nahid Ibn Zaman",571,9500.78,"Candy Crush");
		e1.showInfo();

	}

}
