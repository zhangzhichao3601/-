package threeDimensionalGraphicSystem;

public class Cone extends Circle implements Area, Perimeter, Volume
{
	protected double height;
	protected double generatrix;
	public Cone()
	{
		super();
		height=0;
		generatrix=0;
	}
	public Cone(double radius,double height,double generatrix)
	{
		super(radius);
		this.height=height;
		this.generatrix=generatrix;
	}
	public Cone(double x,double y,double radius,double height,double generatrix)
	{
		super(x,y,radius);
		this.height=height;
		this.generatrix=generatrix;
	}
	public void setHeight(double height)
	{
		this.height = height;
		if(this.generatrix==0)
		{
			this.generatrix=Math.sqrt(this.height*this.height+this.radius*this.radius);
		}
	}
	public double getHeight()
	{
		return height;
	}
	public void setGeneratrix(double generatrix)
	{
		this.generatrix = generatrix;
		if(this.height==0)
		{
			this.height=Math.sqrt(this.generatrix*this.generatrix-this.radius*this.radius);
		}
	}
	public double getGeneratrix()
	{
		return generatrix;
	}

	public double volume()
	{
		return super.area()*getHeight()/3;
	}
	public double area()
	{
		return super.area()+getRadius()*getGeneratrix()*PI;
	}
	
	public void print()
	{
		System.out.println("("+getX()+","+getY()+")");
		System.out.println("radius: "+getRadius());
		System.out.println("height: "+getHeight());
		System.out.println("generatrix: "+getGeneratrix());
		System.out.println("area: "+area());
		System.out.println("volume: "+volume());
	}

}
