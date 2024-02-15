#include<iostream>
using namespace std;

class A
{
	int n;
	
	public :
	void set()
	{
		cout << "enter number : ";
		cin >> n;
		
	}
	bool operator==(A m2)
	{
		if(this->n==m2.n)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	
};
int main()
{
	A m1,m2,m3;
	m1.set();
	m2.set();
	

	if(m1==m2)
	{
		cout << "value are same !";
	}
	else
	{
		cout << "value are not same !";
	}
	
}