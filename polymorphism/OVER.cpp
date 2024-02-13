//Q.2 Write a Program to implement method overriding by following the below-mentioned criteria:
//- Class Cricket -> Class T20Match // 20
//- Class Cricket -> Class ODIMatch // 50
//- Override the getTotalOvers() method in both classes.

#include<iostream>
using namespace std;

class Cricket 
{
	protected :
		int Over = 70;
		
		public:
			
	void TotalOvers()
	{
		cout << "total over is :  " << Over; 
	}
};
class T20Match : public Cricket 
{
		public:
	void TotalOvers(int over)
	{
		this->Over =  over;
		cout << "total over in T20Match is : " << over << endl << endl ; 
	}
};
class ODIMatch : public Cricket
{
		public:
	void TotalOvers(int over)
	{
		this->Over =  over;
		cout << "total over in ODIMatch is : " << over; 
	}
}; 
int main()
{
	T20Match t1;
	t1.TotalOvers(20);
	ODIMatch O1;
	O1.TotalOvers(50);
}