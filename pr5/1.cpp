//Q.1 Write a Program to create a class that illustrates the concept of handling all types of
// exceptions using general exceptions.
#include <iostream>
using namespace std;

class Divisible
{
   int n;
   
   public :
   	void number()
   	{
   	  cout << "Enter number : ";
   	  cin >> n;
   	  
   	  try
   	  {
   	  	if(n==0)
   	  	{
   	  		cout << "Number is divisible by 0 !!";
		}
		else
		{
			throw runtime_error("Number is not divisible by 0 !!");
		}
	  } 
	  catch(runtime_error error)
	  {
	  	 cout << error.what();
	  }
	  catch(...)
	  {
	  	cout << "Number is not divisible by 0 !!";
	  }
	}
  
  	
}; 
 
int main()
{
    Divisible d1;
    d1.number();
    
}