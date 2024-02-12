//Q.2 Write a Program to demonstrate an example of hierarchical inheritance to get the square and cube of a number.
#include<iostream>
using namespace std;
class A
{
    	protected :
		int n;
		public :
		void get()
		{
			cout << "Enter number : ";
			cin >> n;
			
		}
};
class B : public A
{
	public :
	void out()
		{
        	get();
	        cout << " square is " << n * n << endl ;
    }
};
class C : public A
{
	public :
	void out()
		{
	       get();
        	cout << " cube is " << n * n * n;
	
	}
};
int main()
{
	B b;
	b.out();
	C c;
	c.out();
	return 0;
}