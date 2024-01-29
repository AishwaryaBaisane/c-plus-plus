//Q.1 Write a Program to create an Employee Record System using the Class and object of any 5 employees. Consider the below-mentioned attributes in the Employee class:
//- emp_id
//- emp_name
//- emp_age
//- emp_role
//- emp_salary
//- emp_city
//- emp_experience
//- emp_company_name
#include<iostream>
#include<string.h>
using namespace std;
class Employe_Record
{
	public:
	int id,age,salary,experience;
	char role[40],city[20],company_name[30],name[30];

    void data(int i)
    {
       cout << endl <<"Enter employ's detail :" << endl << endl;
       
    	cout << "Enter employe id :";
    	cin >> id ;
      
        cout << "Enter employe name :";
    	cin >> name ;
    	
		cout << "Enter employe age :";
    	cin >> age ;
    	
    	cout << "Enter employe role :";
    	cin >> role ;
    	
    	cout << "Enter employe salary :";
    	cin >> salary ;
    	
    	cout << "Enter employe city :";
    	cin >> city ;
    	
    	cout << "Enter employe experience :";
    	cin >> experience ;
    	
    	cout << "Enter employe company_name :";
    	cin >> company_name ;
    	
    
    	
	}
	void output(int i)
	{
		cout << endl <<"Employe Record below :" << endl << endl;
		cout << "employe's id is : " << id << endl;
		cout << "employ's name is : " << name << endl;
		cout << "employe's age is : " << age << endl;
		cout << "employe's role is : " << role << endl;
		cout << "employe's salary is : " << salary << endl;
		cout << "employe's city is : " << city << endl;
		cout << "employe's experience is : " << experience << " year's " << endl;
		cout << "employe's company_name is : " << company_name << endl;
		
	}
   
};
int main()
{
	Employe_Record m1;
	int i;
	
	for(i=0; i<5; i++)
	{
	Employe_Record m1;
	m1.data(i);
	m1.output(i);
    
    }
}