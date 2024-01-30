
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
    int feet,inch;
	int feet1,inch1;
	int feet2,inch2;
	int sum = 0;
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

	void output3()
	{
		feet = feet1 + feet2;
		inch = inch1 + inch2;
		if(inch>12)
		{
			int x = inch/12;
			feet+=x;
			inch= inch-(x * 12);
			cout << "feet - " << feet << "inch - " << inch;
		}
		
	}
	
	
	
};
int main()
{
	Add m1;
	m1.input();
	m1.output3();
}

