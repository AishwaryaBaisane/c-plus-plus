//- a person cannot be able to vote if his/her age is less than 18
#include<iostream>
using namespace std;

int main()
{
	int age,i;
	cout << "Enter age : ";
	cin >> age;
	
	try
	{
		if(age>=18 && age<=100)
		{
			cout << "You eligible for voting !";
		}
		else
		{
			throw age;
		}
	} 
	catch(...)
	{
		cout << "You can not eligible for voting !";
	}
}