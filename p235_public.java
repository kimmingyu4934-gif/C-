package ±è¹Î±Ô;

public class p235_public 
{
	public static void main(String[] args) 
	{
		//Cat c2= new Cat();
		Cat c = new Cat("ÀÌ»ÛÀÌ",45);
		Cat c2 = new Cat();
		
		System.out.println(c.toString() + "ÀÇ ¸ö¹«°Ô´Â" + c.getSize());
		System.out.println(c2.toString() + "ÀÇ ¸ö¹«°Ô´Â " + c2.getSize());
		
		c.finalize();
		c2.finalize();
	}
}

class Cat
{
	private final int max = 100;//private
	int size;
	String name;
	public Cat()
	{
		this("¿µ¼øÀÌ",50);	
	}
	
	public Cat(String n, int s)
	{
		name = n;
		size = s;
	}
	public int getSize() {return size;}
	public String toString() {return name;}
	public void finalize() throws Throwable
	{
		System.out.println(name + "°í¾çÀÌ°¡ ¼Ò¸êµÊ");
	}
}