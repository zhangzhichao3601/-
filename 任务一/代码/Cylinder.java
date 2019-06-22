package threeDimensionalGraphicSystem;

public class Cylinder extends Circle implements Area,Perimeter,Volume
{
	protected double height;
	public Cylinder()
	{
		super();
		height=0;
	}
	public Cylinder(double radius,double height)
	{
		super(radius);
		this.height=height;
	}
	public Cylinder(double x,double y,double radius,double height)
	{
		super(x,y,radius);
		this.height=height;
	}
	public void setHeight(double height)
	{
		this.height = height;
	}
	public double getHeight()
	{
		return height;
	}
	
	public double area()
	{
		return 2*super.area()+super.perimeter()*getHeight();
	}
	public double volume()
	{
		return super.area()*getHeight();
	}
	
	public void print()
	{
		System.out.println("("+getX()+","+getY()+")");
		System.out.println("radius: "+getRadius());
		System.out.println("height: "+getHeight());
		System.out.println("area: "+area());
		System.out.println("volume: "+volume());
	}
}
