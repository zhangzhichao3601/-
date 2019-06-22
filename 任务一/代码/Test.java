package threeDimensionalGraphicSystem;

public class Test
{

	public static void main(String[] args)
	{
		Point point=new Point(1,2);
		Circle circle=new Circle(3,4,5);
		Sphere sphere=new Sphere(6,7,8);
		Cylinder cylinder=new Cylinder(1,1,9,10);
		Cone cone=new Cone(1, 1, 3, 4, 5);
		
		point.print();
		circle.perimeter();
		sphere.print();
		cylinder.print();
		cone.print();
		
	}

}
