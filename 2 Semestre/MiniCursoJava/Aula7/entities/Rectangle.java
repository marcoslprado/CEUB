package entities;

public class Rectangle {
	public double width;
	public double height;
	
	public double Area() {
		return width * height;
	}
	public double Perimeter() {
		return (2 * width) + (2 * height);
	}
	public  double Diagonal() {
		double diagonal = Math.sqrt(Math.pow(width, 2) + Math.pow(height, 2));
		return diagonal;
	}
}
