import java.util.*;

public class NahidTry {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int d = sc.nextInt();
		
		int normal = 20*d;
		int bestTime = Integer.MAX_VALUE;
		String bestName="";
		
		for(int i=0; i<n; i++) {
			String type = sc.next();
			String name = sc.next();
			int time = 0;
			
			if(type.equals("H")) {
				time = normal;
			}
			
			else if(type.equals("C")) {
				int c = sc.nextInt();
				time = normal + c;
			}
			
			else {
				time = normal * 2/3;
			}
			
			if(time<bestTime) {
				bestTime = time;
				bestName = name;
			}
		}
		
		System.out.println(bestName+" "+bestTime);
		
	}

}
