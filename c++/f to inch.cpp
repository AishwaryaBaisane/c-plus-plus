//Q.3 Write a program to read and print distance for feet and inches.

#include<iostream>
using namespace std;
main()
{
	int feet,inches;
	cout << "Enter feet:";
	cin >> feet;
	cout << "Enter inches:";
	cin >> inches;

	int i,x=0;
	for(i=0; i<100; i++)
	{
		if(inches>12)
		{
		  inches-=12;
		  x++;
		}
	
	}
	cout << "Feet - "<<feet + x << ' '<<','<<' ' <<"Inch - "<< inches;

}