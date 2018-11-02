
public class Student {

	int tiredness;
	int motivation;
	int intelligence;
	
	public Student() {
		
		tiredness = 10;
		motivation = 50;
		intelligence = 50;
	
	}
	
	public Student( int x, int y, int z ) {
		
		tiredness = x;
		motivation = y;
		intelligence = z;
		
	}
	
	public void tirednessSetter( int n ) {
		
		tiredness = n;
		
	}
	
}
