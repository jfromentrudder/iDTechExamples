package introtoprocessing;

import processing.core.PApplet;
//import processing.core.PFont;

public class IntroToProcessing extends PApplet {
	
	final float DEFAULT_STARTING_X_COR = 390;
	final float DEFAULT_STARTING_Y_COR = 611;
	final float DEFAULT_SIZE = 21;	
	final int SCREEN_WIDTH = 800;
	final int SCREEN_HEIGHT = 700;
	
	PlayerShip ship;// = new PlayerShip( DEFAULT_STARTING_X_COR, DEFAULT_STARTING_Y_COR, DEFAULT_SIZE);
	
	public static void main( String[] args ) {
		PApplet.main( "introtoprocessing.IntroToProcessing" );
	}
	
	public void settings() {
		size( SCREEN_WIDTH, SCREEN_HEIGHT );
	}
	
	public void face( float xPos, float yPos ) {
		fill( 0, 149, 185 );
		rect( xPos, yPos, 500, 300 );
	}
	
	/*public void display() {
		//ship.displayShip();
		//playership();
		fill( 255 );
		triangle( ship.xcor, ship.ycor - 1, ship.xcor + 20, ship.ycor - 1, ship.xcor + 10, ship.ycor - 21 );
		
		triangle( ship.xcor - 10, ship.ycor + 40, ship.xcor + 30, ship.ycor + 40, ship.xcor + 10, ship.ycor - 1 );
		
		triangle( ship.xcor - 20, ship.ycor + 20, ship.xcor, ship.ycor + 20, ship.xcor, ship.ycor );
		triangle( ship.xcor + ship.size + 20, ship.ycor + 20, ship.xcor + ship.size, ship.ycor + 20, ship.xcor + ship.size, ship.ycor );
		
		fill( 255, 0, 0 );
		rect( ship.xcor, ship.ycor, ship.size, ship.size );
		
	}*/
	
	public void setup() {
		background( 125, 150, 175 );
		ship = new PlayerShip( DEFAULT_STARTING_X_COR, DEFAULT_STARTING_Y_COR, DEFAULT_SIZE, SCREEN_WIDTH );
	}
	
	public  void draw() {
		background( 125, 150, 175);
		//display();
		ship.display();
		ship.move();
		//print( ship.xcor + "" );
		
		//ship.translate( ship.xcor, ship.ycor);
	}
	
	
}
