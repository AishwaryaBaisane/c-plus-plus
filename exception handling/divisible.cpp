//a number cannot be divided by zero
#include<iostream>
using namespace std;

int main()
{
	int x,y;
	
	cout << "Enter first number : ";
	cin >> x;
	cout << "Enter second number : ";
	cin >> y;
	
	try
	{
		if(y!=0)
		{
			cout << "Your ans is : " << x/y;
		}
		else
		{
			throw y;
		}
	}
	catch(...)
	{
		cout << "Number can not divisible by zero ! ";
	}
}