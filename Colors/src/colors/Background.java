package colors;

import processing.core.PApplet;

public class Background extends PApplet {
	
	public void setup() {
		
	}
	
	public void settings() {
		
		size( 1000, 1000 );
		
	}
	
	public void draw() {
		
		background(  255, 255, 255 );
		
	}

	public static void main(String[] args) {
		PApplet.main( "background.Background" );
	}

}
