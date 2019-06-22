package threeDimensionalGraphicSystem;

public class Point
{
	protected double x;
	protected double y;
	public Point()
	{
		x=0;
		y=0;
	}
	public Point(double x,double y)
	{
		this.x=x;
		this.y=y;
	}
	public void setX(double x)
	{
		this.x = x;
	}
	public double getX()
	{
		return x;
	}
	public void setY(double y)
	{
		this.y = y;
	}
	public double getY()
	{
		return y;
	}
	public void print()
	{
		System.out.println("("+getX()+","+getY()+")");
	}
}
