#include<iostream>
using namespace std;

class A
{
	protected :
		int a = 10;
};

class B
{
	protected :
		int a = 20;
};

class C : public A , public B
{
	public :
		void output()
		{
			cout << "a : " << A::a << endl;
		}
};

int main()
{
	C c1;
	c1.output();
}