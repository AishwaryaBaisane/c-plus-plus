//Questions:
//Q.1 Write a Program to implement exception handling mechanism for different types of scenarios:
//- a number cannot be divided by zero
//- a person cannot be able to vote if his/her age is less than 18
//- a password cannot be validated if it doesn’t contains an uppercase letter
#include<iostream>
using namespace std;

int main()
{
	char password[32];
	int x=0 , i ;
	
	s:
	cout << "Enter password : ";
	cin  >> password;
	
	int l = strlen(password);
	for(i=0; i<l; i++)
	{
		if(password[i]>=65 && password[i]<=90)
		{
			x = 1;
		}
	}
	try
	{
		if(x==1)
		{
			cout << "Your password is vlid ! ";
		}
		else
		{
			throw password;
		}
	}
	catch(...)
	{
		cout << "Eneter valid password with upercase ! " << endl << endl;
		goto s;
	}
	
}