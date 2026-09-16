
public class helloworld {
	
	public static void main(String[] args) {
		
		//Question 1
		for(int i=1;i<=1000;i++) {
			if(i%2!=0) {
				System.out.println(i);					
			}
		}
		//Question 2
		for(int i=1;i<=500;i++) {
			if(i%2==0) {
				System.out.println(i);					
			}
		}
		//Question 3
				for(int i=1;i<=200;i++) {
					if(i%7==0) {
						System.out.println(i);					
					}
				}
		//Question 4
		for(int i=1;i<=5;i++) {
			for(int j=1;j<=i;j++) {
				System.out.print("*");
			}
			System.out.println();
		}
		
		//Question 5
		for(int i=5;i>0;i--) {
			for(int j=1;j<=i;j++) {
				System.out.print("*");
			}
			System.out.println();
		}
		
		//Question 6
				int l = 1;
				for(int i=1;i<=5;i++) {
					for(int j=1;j<=i;j++) {
						System.out.print(l);
						System.out.print(" ");
						l++;
					}
					System.out.println();
				}
				
		//Question 7
		for(int i=1;i<=5;i++) {
			for(int j=1;j<=i;j++) {
				System.out.print(j);
				System.out.print(" ");
				l++;
			}
			System.out.println();
		}
		
		//Question 8
				for(int i=5;i>0;i--) {
					for(int j=1;j<=i;j++) {
						System.out.print(j);
						System.out.print(" ");
						l++;
					}
					System.out.println();
				}
				
	
	}
}
