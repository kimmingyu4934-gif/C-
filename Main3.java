package ±è¹Î±Ô;

public class Main3 
{	
	public static void main(String[] args) 
	{
		Account ac = new Account();
	}
}

class Account
{
	private String owner;
	private long balance;
	
	public String getOwner() 
	{
		return owner;
	}
	public void setOwner(String owner) 
	{
		this.owner = owner;
	}
	
	public long getBalance() 
	{
		return balance;
	}
	public void setBalance(long balance) 
	{
		this.balance = balance;
	}
	
	public Account()
	{
		this("user");
	}
	
	public Account(String a)
	{
		this(a,0);
	}
	
	public Account(long b)
	{
		this("user",b);
	}
	
	public Account(String a, long b)
	{
		owner = a;
		balance = b;

	}
}
