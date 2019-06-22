package threeDimensionalGraphicSystem;

public class Circle extends Point implements Perimeter,Area
{
	protected double radius;
	public Circle()
	{
		super();
		radius=0;
	}
	public Circle(double radius)
	{
		super();
		this.radius=radius;
	}
	public Circle(double x,double y,double radius)
	{
		super(x,y);
		this.radius=radius;
	}
	public void setRadius(double radius)
	{
		this.radius = radius;
	}
	public double getRadius()
	{
		return radius;
	}
	
	public double area()
	{
		return this.radius*this.radius*PI;
	}
	public double perimeter()
	{
		return 2*this.radius*PI;
	}
	public void print()
	{
		super.print();
		System.out.println("radius: "+getRadius());
		System.out.println("perimeter: "+perimeter());
		System.out.println("area: "+area());
	}
}
