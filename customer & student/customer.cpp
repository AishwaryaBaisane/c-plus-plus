//Q.2 Write a Program to create a Customer Record System for 5 customers using Encapsulation. 
//Consider the below-mentioned attributes in the Customer structure:
//- cust_id
//- cust_name
//- cust_age
//- cust_city
//- cust_mobile_number
//- cust_simcard_validity (in years)
//- cust_telecom_brand_name (like Jio, Airtel, Vi, etc.)

#include<iostream>
using namespace std;
class Student_Record
{
	int id,age,simcard_validity;
	double mobile_no;
	string city;
	string name;
	string telecom_brand_name;
	
	public:
		
	void set(int i)
	{
		cout << endl <<"Enter  "<<i<< " Customer detail's " << endl << endl;
		
		cout << "Enter Customer id :";
		cin >> id;
		
		cin.ignore();
        cout << "Enter Customer name :";
        getline(cin,name);
        
		cout << "Enter Customer city :";
		cin >> city;
		
		cout << "Enter Customer mobile number :";
		cin >> mobile_no;
		
		cout << "Enter Customer simcard_validity :";
	    cin >> simcard_validity;
		
		cout << "Enter Customer telecom_brand_name :";
	    cin >> telecom_brand_name;
		
			
	}
	void get(int i)
	{
		cout << endl <<" "<<i<< " Customer's detail's :- " << endl << endl;
			
		cout << " Customer id is : " << id << endl;
		cout << " Customer name is : " << name << endl;
		cout << " Customer age is : " << age << endl;
		cout << " Customer city is : " << city << endl;
		cout << " Customer mobile number is : " << mobile_no << endl;
		cout << " Customer simcard validity is : " << simcard_validity << endl;
		cout << " Customer telecom brand name is : " << telecom_brand_name << endl;
	}
		
};
int main()
{
     Student_Record s;
	int i;
	for(i=1; i<=5; i++)
	{
	 s.set(i);
	 s.get(i);	
	}

	return 0;
}