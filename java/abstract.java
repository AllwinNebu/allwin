
import java.util.*;
import java.math.*;
abstract class Shape
{
 abstract void printArea();
}
 class Rectangle extends Shape
 {
 public void printArea()
 {
  Scanner obj=new Scanner(System.in);
  System.out.print("Enter the length and breadth of the Rectangle:");
  int l=obj.nextInt();
  int b=obj.nextInt();
  int area=l*b;
  System.out.println("Area of the Rectangle is: "+area);
  }
 }
 class Triangle extends Shape
 {
  public void printArea()
  {
   Scanner obj=new Scanner(System.in);
   System.out.print("Enter the base and height of the triangle:");
   float a=obj.nextFloat();
   float h=obj.nextFloat();
   double area=0.5*a*h;
   System.out.println("Area of the triangle is: "+area);
  }
 }
    class Hexagon extends Shape
 {
  public void printArea()
  {
   Scanner obj=new Scanner(System.in);
   System.out.print("Enter the side of the Hexagon:");
   float s=obj.nextFloat();
   double area=(3*Math.sqrt(3)*Math.pow(s,3))/2;
   System.out.println(" Area of the Hexagon is: "+area);
  }
 }
 public class abstract
 { 
  public static void main(String args[])
     {
   Rectangle ob=new Rectangle();
   ob.printArea();
   Triangle ab=new Triangle();
   ab.printArea();
   Hexagon cb=new Hexagon();
   cb.printArea();
      }
}