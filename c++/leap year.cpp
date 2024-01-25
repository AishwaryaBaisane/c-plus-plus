//Q.2 Write a Program to find leap years between two given numbers and store them in an array. And then print that array.

#include<iostream>
using namespace std;
main()
{
	int x,y;
	cout << "Enter the first number:";
	cin >> x;
	cout << "Enter the second number:";
	cin >> y;
	
	int k=0;
	int i=0,w=0;
    int a[500];
	for(i=x; x<=y; i++)
	{
	    cout << x  << ' ';
	    a[w] = x;
	    x = x + 4;
	    w++;
	}
	cout << "\nThe array is:";
	
	for(i=0; i<w; i++)
	{
		cout <<a[i] << ' ';
	}
   
	
	
}