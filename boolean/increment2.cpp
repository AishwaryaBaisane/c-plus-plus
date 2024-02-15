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
		cout << endl << "increment :"<< a  << endl ;
	}
	
	A operator++(int)
   {

   	 
   	    A temp;
   	    temp.a = ++a;
   	
   	    return temp;
   }
};

int main()
{
	A m1,m2;
	m1.set();

	
    m2 = m1++ ;

	m2.get();

	
}