//Q.3 Write a Program to read and print Employee information with the use of Multilevel inheritance. (as same the attached image)
#include<iostream>
#include<string.h>
using namespace std;
class A
{
	protected :
		int id,salary,expiriance;
		long contact;
		string name;
		string role;
		string email;
		string add;
		string comp_name;
		
		public :
			void setter1()
			{
				cout << "Enter information of employee :-" << endl<< endl;
				
				cout << "Enter id  : ";
		   	    cin >> id;
			   	    
				cin.ignore();
                cout << "Enter employee name :";
                getline(cin,name);
                   
                cout << "Enter employee role :";
                getline(cin,role);
				
			
			}
};
class B : public A
{
		public :
			void setter2()
			{

				cout << "Enter Salary : ";
				cin >> salary;
				cout << "expiriance : ";
				cin >> expiriance;
			    
			}
};
class C : public B
{
	public :
		void setter3()
		{  
                 cout << "Enter company_name :";
                 getline(cin,comp_name);

				 cout << "Enter company add :";
                 getline(cin,add);
	
		}
			
			
};
class D : public C
{

	public :
		void setter4()
		{
			    cout << "Enter email  : ";
			   	cin >> email;
				cout << "contact : ";
				cin >> contact;
		}
			void getter2()
			{
				setter1();
				setter3();
				setter2();
				setter4();
				
				cout << endl << "Employee detail's are below :-" << endl << endl;
				cout << "id is : " << id << endl ;
				cout << "name is : " <<name << endl ;
				cout <<"role is : " << role << endl;
				cout << "salary is : " << salary << endl;
				cout << "expiriance : " << expiriance << endl ;
				cout <<"company is : " << comp_name << endl ;
				cout <<"add is : " << add << endl ;
				cout <<"email is : " << email << endl;
				cout <<"contact is : "<< contact;
			}
			
};
int main()
{

	D d;
	d.getter2();
}