//Q.2 Write a Program to throw 0 if the age of the user is less than 18, otherwise print that you are eligible to vote. 
//Also, handle that thrown exception and print you are not eligible to vote.
#include<iostream>
using namespace std;

class Votting
{
   	int age;
   	
   	public :
   		void vote()
   		{
   			cout << "Enter age : ";
   			cin >> age;
   			
   			try
   			{
   			   if(age>=18 && age<=100)
				{
				  	cout << "You are eligible to vote.";
				}	
				else
				{
					throw 0;
				}
			}
			catch(...)
			{
				cout << "you are not eligible to vote.";
			}
		}
}; 

int main()
{
 	Votting v1;
 	v1.vote();
}