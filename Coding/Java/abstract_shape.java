abstract class Shape
{
    public abstract void numberofsides();
}
class Rectangle extends Shape
{
    public void numberofsides()
    {
        System.out.println("Rectangle has 4 sides");
    }
}
class Triangle extends Shape
{
    public void numberofsides()
    {
        System.out.println("Triangle has 3 sides");
    }
}
class Hexagon extends Shape
{
    public void numberofsides()
    {
        System.out.println("Hexagon has 6 sides");
    }
}
class abstract_shape
{
    public static void main(String args[])
    {
        Rectangle obj1=new Rectangle();
        Triangle obj2=new Triangle();
        Hexagon obj3=new Hexagon();
        obj1.numberofsides();
        obj2.numberofsides();
        obj3.numberofsides();
    }
}