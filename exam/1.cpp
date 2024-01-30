//Q.1 Write a Program to create a class to read and add two distances.
//For example,
//Input:
//input1 => feet: 8, inch: 16
//input2 => feet: 4, inch: 14
//
//Output:
//14 feet 6 inch
#include<iostream>
using namespace std;
class Add
{
	public:
	int feet1,inch1;
	int feet2,inch2;
	void input()
	{
		cout << "Enter feet : ";
		cin >> feet1;
		
		cout << "Enter inche :";
		cin >> inch1;
		
		cout << "Enter feet : ";
		cin >> feet2;
		
		cout << "Enter inche :";
		cin >> inch2;
	}
	void output()
	{
		if(inch1>12)
		{
			inch1-=12;
			feet1++;
		}
		cout << "feet - " << feet1 << "inch - " << inch1;
	}
	void output2()
	{
		if(inch2>12)
		{
			inch2-=12;
			feet2++;
		}
		cout << "feet - " << feet2 << "inch - " << inch2;

	}
	
	
	
};
int main()
{
	Add m1;
	m1.input();
	m1.output();
	m1.output2();
}