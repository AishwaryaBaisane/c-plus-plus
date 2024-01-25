//Q.1 Write a Program to find all even elements from a given 1D array.

#include<iostream>
using namespace std;
main()
{
  int n;
  cout << "Enter array size:";
  cin >> n;
  int a[n];
  int i;
  cout << "Enter array elements :";
  cout << '\n';
  for(i=0; i<n; i++)
  {
  	cout << "a["<<i<<"]";
  	cin >> a[i];
  }
  cout << "Elements of array :";
  for(i=0; i<n; i++)
  {
  	cout << a[i] << ' ';
  }
  cout << '\n' << "Even elements of an Array:" ;
  for(i=0; i<n; i++)
  {
  	if(a[i]%2==0)
  	{
  		cout << a[i] << ' ';
	}
  }		
  
}
