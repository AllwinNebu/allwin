abstract class Animal
{
	protected int legs;
	protected Animal(int l)
	{
		legs=l;
	}
	abstract void eat();
	void walk()
	{
	}
}
class Spider extends Animal
{
	Spider(int l)
	{
	 super(l);
	 System.out.println("Spider have 8 legs");
	}
	void eat()
	{
		System.out.println("Spider can eat everything");
	}
}
interface Pet
{
	void getName();
	void setName(String name);
	void play();
}
class Cat extends Animal implements Pet
{
String n;
	Cat(int l) 
	{
		super(l);
	}
	public void getName() {
		System.out.println("I am a catwomen and my name is "+n);
	}

	public void setName(String name) {
		n=name;
	}
	public void play() {
		System.out.println(" "+n + " likes to play with balls");
	}

	void eat() {
		System.out.println(" "+n +" likes to eat good food");
	}
}
class Fish extends Animal implements Pet
{
	String n;
	Fish(int l) {
		super(l);
	}
	public void getName() {
		System.out.println("I am a fish and my name is "+n);
	}
	public void setName(String name)
	{
		n=name;
	}
	public void play() {
		System.out.println(" " +n +" likes to swim");
	}
	void eat()
	   {
		System.out.println(" " +n +" likes to eat big fishes");
		}
	void walk() 
	{
		System.out.println(" " +n +" don't walk");
	}
}
class Interface {

	public static void main(String[] args) {
	Spider s=new Spider(8);
	s.eat();
	Cat c=new Cat(4);
	c.setName("Jenny");
	c.getName();
	c.eat();
	c.play();
	Fish f=new Fish(0);
	f.setName("Simon");
	f.getName();
	f.eat();
	f.play();
	f.walk();
	}
}
