//Q.1 Write a Program to find the sum of all three number’s cubes by implementing single-level inheritance: Class X->Class Y
//- Class X has the following members: a, b & c attributes in integer data type
//- Class Y has the following members: setData() and getData() methods
#include<iostream>
using namespace std;
class x
{
	protected :
		int a,b,c,ans;
			
			
};
class y : public x
{
	public :
		void setData()
		{
		  cout << "Enter value of a : ";
		  cin >> a;
		  cout << "Enter value of b : ";
		  cin >> b;
		  cout << "Enter value of c : ";
		  cin >> c;
		  
		}
		void getData()
		{
			ans = a + b + c;
			ans = ans*ans*ans;
			cout << "cube is : " << ans;
		}
	
};
int main()
{
   	y t1;
   	t1.setData();
   	t1.getData();
}