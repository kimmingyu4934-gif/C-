package 김민규1;

public class Student1 
{
	String sname;
	int sid, kor, eng, math;
	
	
	
//	void setInfo(String sname, int id, int k, int e, int m)
//	{
//		this.sname = sname;
//		sid = id;
//		kor = k;
//		eng = e;
//		math = m;
//	}
	
	public Student1(String sname, int sid, int kor, int eng, int math) {
		this.sname = sname;
		this.sid = sid;
		this.kor = kor;
		this.eng = eng;
		this.math = math;
	}

	double getAverage() 
	{
		return(kor + eng + math)/3.0;
	}
	
	String getInfo() 
	{
		return sname + ", " + sid + ", " + kor + ", " + eng + ", " + math;
	}
}
