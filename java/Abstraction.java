

import java.util.*;
import java.math.*;
abstract class Shape
{
  abstract void printarea();
}

class rectangle extends Shape
{
  float arearect;
    void printarea()
    {
      Scanner sc = new Scanner(System.in);
      System.out.println("Enter the LENGTH and BREADTH : ");
      float l=sc.nextFloat();
      float b= sc.nextFloat();
      arearect = l*b;
      System.out.println("Area of rectangle : "+arearect);
    }
}

class triangle extends Shape
{
  double areatri;
  void printarea()
  {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter the BREADTH  and  HEIGHT : ");
    float b = sc.nextFloat();
    float h = sc.nextFloat();
    areatri=0.5*b*h;
    System.out.println("Area of triangle : " + areatri);
  }
}

class hexagon extends Shape
{
  double areahex;
  void printarea()
  {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter the side : ");
    float side = sc.nextFloat();
    areahex=(3*Math.sqrt(3)*Math.pow(side,3))/2;
    System.out.println("Area of Hexagon : " + areahex);
  }
}

public class Abstraction {

  public static void main(String[] args) {
    rectangle r = new rectangle();
    r.printarea();
        triangle t = new triangle();
        t.printarea();
        hexagon h = new hexagon();
        h.printarea();
  }

}