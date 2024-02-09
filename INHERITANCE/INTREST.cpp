//Q.1 Write a Program to print the rate of interest of different banks using hierarchical inheritance:
//- Class RBI -> Class SBI
//- Class RBI -> Class BOB
//- Class RBI -> Class ICICI
//- inherit rate attribute and getROI() method in all child
//classes
#include<iostream>
using namespace std;
class RBI
{
	 
   protected :
     int A , P = 1000 ;
	float R ;
	 int T = 2 ;	
	

};
//A = P (1 + rt)
//A	=	final amount
//P	=	initial principal balance
//r	=	annual interest rate
//t	=	time (in years)
//S.I = (1000 × 5 × 1)/100 = 50
class SBI : public RBI
{
	public :
		void getROI()
		{
			A = (P * 3.50 * T)/100;
			cout << "Simple intrest rate for SBI is : " << A << endl ;
		}
};

class BOB : public RBI
{
	public :
		void getROI()
		{
			A = (P * 4.75 * T)/100;
			cout << "Simple intrest rate for BOB is : " << A << endl ;
		}
};

class ICICI : public RBI
{
	public :
		void getROI()
		{
			A = (P * 7.65 * T)/100;
			cout << "Simple intrest rate for ICICI is : " << A << endl ;
		}
};

int main()
{

 	SBI c1;
 	c1.getROI();
 	BOB B1;
 	B1.getROI();
 	ICICI I;
 	I.getROI();
	
}