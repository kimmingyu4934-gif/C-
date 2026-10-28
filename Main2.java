package ±è¹Î±Ô;

public class Main2 
{
	public static void main(String[] args) 
	{
		System.out.println(new SalaryMan().getAnnualGross());
		System.out.println(new SalaryMan(2500000).getAnnualGross());
	}
}

class SalaryMan
{
	private int AnnualGross;
	
	public SalaryMan()
	{
		AnnualGross = 1000000;
	}
	
	public SalaryMan(int a)
	{
		AnnualGross = a ;
	}
	
	public int getAnnualGross()
	{
		return AnnualGross*12 + AnnualGross*5;
	}
}