//Q.2 Write a Program to convert a given degree Celsius temperature into Fahrenheit and convert that
// F = (C*9/5)+32; 
// K = (F-32)*5/9+273.15;
//Fahrenheit temperature into Kelvin by implementing multilevel inheritance: Class P -> Class Q -> Class R
//- Class P has the following members: temperature attribute in float
//- Class Q has the following members: toFehrenheit() method
//- Class R has the following members: toKelvin() method.
#include<iostream>
using namespace std;
class P
{
	protected :
		float F,f,c,K;
		
};
class Q : public P
{
	public :
  	void Fehrenheit()
  	{
  		cout << "Enter Celsius : ";
  		cin >> c;
  		
  	    const f = F = (c * 9/5) + 32;
  		cout << "Celsius temperature into Fahrenheit is : "<< F << endl;
	}
};
class R : public Q
{
	public :
	void Kelvin()
	{
		K = (f - 32) * 5/9 + 273.15;
		cout << "Fahrenheit temperature into Kelvin is : " << K;
	}
};
int main()
{
	Q q1;
	q1.Fehrenheit();
	R r1;
	r1.Kelvin();
	
}