//.2 Write a Program to add two distances using binary plus (+) operator overloading.
//
//For example,
//Input:
//input1 => Km: 3, Meter: 1020
//input2 => Km: 2, Meter: 2050
//
//Output:
//Km: 8, Meter: 70
#include<iostream>
using namespace std;

class Distances
{
	int km,m;

	public:
	void set()
	{
	   cout<<"Enter km : ";
	   cin>>km;
	   cout<<"Enter meter : ";
	   cin>>m;
	  
    }

    void getter()
    {
	
	   int i;
//	   km=km1+km2;
//	   m=m1+m2;
	int count=0;
	   for(i=1; i<=m; i++)
	   {
	   
		   if(m>1000)
		   {
			  m-=1000;
			  count++;
		   }
		   
	   }
	    cout<<"Km : "<< km + count <<endl;
	    cout<<"meter : "<< m <<endl;
   }
   
   Distances operator+(Distances &a2)
   {
   	   Distances t;
   	     int x = this->km + a2.km;
   	     int y = this->m + a2.m;
        t.km =x;
        t.m = y;
   	   return t;
   }
	
};

int main()
{
	 Distances a1,a2,a3;
	 a1.set();
	 a2.set();
	 
	 a3 = a1 + a2;
	 a3.getter();

	
}