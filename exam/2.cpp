//Q.3 Write a program to convert second into hh: mm: ss.
#include<iostream>
using namespace std;

class Time
{
	public:

	int s,hour,min;

	void time()
	{
		
	  cout << "Enter second : ";
	  cin >> s;
	  
	   hour = s/3600;
	   s=s-(hour*3600);
	   min=s/60;
	   s=s-(min*60);
	   
	 cout <<"hh: mm: ss " << endl << hour << ':' << min << ':' << s ; 
	}
   
	
	
};
int main()
{
	Time s1;
	s1.time();
}
