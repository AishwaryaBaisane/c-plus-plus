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
	int km1,m1,km2,m2, count=0;
	public:
	void set()
	{
	   cout<<"Enter km : ";
	   cin>>km1;
	   cout<<"Enter meter : ";
	   cin>>m1;
	   cout<<"Enter km : ";
	   cin>>km2;
	   cout<<"Enter meter : ";
	   cin>>m2;
    }

    void getter()
    {
	
	   int i;
	   km=km1+km2;
	   m=m1+m2;
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

	
};

int main()
{
	 Distances a1;
	 a1.set();
	 a1.getter();

	
}