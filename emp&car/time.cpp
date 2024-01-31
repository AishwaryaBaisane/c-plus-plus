//Q.3 Write a program to convert second into hh: mm: ss.
#include<iostream>
using namespace std;

class Time
{
	public:
	int second,hour,min;
	void time()
	{
	  cout << "Enter second : ";
	  cin >> second;
	  
	   hour = second/3600;
	   second=second-(hour*3600);
	   min=second/60;
	   second=second-(min*60);
	   
	 cout <<"hh: mm: ss " << endl << hour << ':' << min << ':' << second ; 
	}
   
	
	
};
int main()
{
	Time s;
	s.time();
}