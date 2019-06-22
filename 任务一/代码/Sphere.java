package threeDimensionalGraphicSystem;

public class Sphere extends Circle implements Perimeter,Area,Volume
{
	public Sphere()
	{
		super();
	}
	public Sphere(double radius)
	{
		super(radius);
	}
	public Sphere(double x,double y,double radius)
	{
		super(x,y,radius);
	}
	public double area()
	{
		return 4*this.radius*this.radius*PI;
	}
	public double volume()
	{
		return 4/3*Math.pow(this.radius, 3)*PI;
	}
	public void print()
	{
		System.out.println("("+getX()+","+getY()+")");
		System.out.println("radius: "+getRadius());
		System.out.println("area: "+area());
		System.out.println("volume: "+volume());
	}
}
