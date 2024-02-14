#include<iostream>
using namespace std;

class A
{
	int a,b;
	
	public :
	void set()
	{
		cout << "Enter value : ";
		cin >>  a;	
	}
	void get()
	{
		cout <<  "1st " << a  << endl <<  "2nd " << b;
	}
	
	A operator+(A &m1)
   {
   	 A temp;
   	 
   	    temp.b=this->b = m1.a;
   	    temp.a=this->a = a;
   	    temp.a = a+1;
   	    temp.b = b+1;
   	    return temp;
   }
};

int main()
{
	A m1,m2,m3;
	m1.set();
	m2.set();
	
	m3 = m1 + m2;
	m3.get();
	
}