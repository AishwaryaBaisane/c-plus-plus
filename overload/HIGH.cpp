//Write a Program to overload < operator to find which object contains a higher value from given 2 numbers.

#include<iostream>

using namespace std;

class Math
{
   private :
   
   int a,b;
   
   public :
   
   void setter()
   {
       cout << "Enter the value:";
       cin >> a;
    
       
   }	
   
   int getter()
   {
   	   if(a<b)
   	   {
   	   	  cout << "higher value is : " << b;
	   }
	   else
	   {
	   	  cout << "higher value is : " << a;
	   }
   	   
   }
   
   Math operator<(Math &m1)
   {
   	 Math temp;
   	 
   	  temp.b=this->b = a;
   	  temp.a=this->a = m1.a;
   	  return temp;
   }

};

main()
{
    
	Math m1,m2,m3;
	m1.setter();
	m2.setter();
	m3=m1<m2;
	m3.getter();
   
    return 0;
}