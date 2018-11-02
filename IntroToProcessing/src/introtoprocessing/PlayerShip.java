package introtoprocessing;

import processing.core.PApplet;
import processing.core.PImage;

public class PlayerShip extends PApplet {

	float xcor;
	float ycor;
	float size;
	int screenWidth;
	
	PImage sprite;
	
	public PlayerShip( float x, float y, float size, int screen_width ) {
		this.xcor = x;
		this.ycor = y;
		this.size = size;
		this.screenWidth = screen_width;
		
		sprite = loadImage( "ShipSprite.jpg" );
	}
	
	public void display() {
		/*fill( 255 );
		triangle( ship.xcor, ship.ycor - 1, ship.xcor + 20, ship.ycor - 1, ship.xcor + 10, ship.ycor - 21 );
		
		triangle( ship.xcor - 10, ship.ycor + 40, ship.xcor + 30, ship.ycor + 40, ship.xcor + 10, ship.ycor - 1 );
		
		triangle( ship.xcor - 20, ship.ycor + 20, ship.xcor, ship.ycor + 20, ship.xcor, ship.ycor );
		triangle( ship.xcor + ship.size + 20, ship.ycor + 20, ship.xcor + ship.size, ship.ycor + 20, ship.xcor + ship.size, ship.ycor );
		
		fill( 255, 0, 0 );
		rect( ship.xcor, ship.ycor, ship.size, ship.size );*/
		
		image( sprite, xcor, ycor, size, size );
	}
	
	
	boolean movingRight = true;
	public void move() {
		if( !movingRight && xcor > 0 ) {
			xcor -= 3;
		}
		else if( !movingRight && xcor <= 0 ) {
			movingRight = true;
		}
		else if( movingRight && xcor <= screenWidth - 10 ) {
			xcor += 3;
		}
		else {
			movingRight = false;
		}
	}
	
	
}
