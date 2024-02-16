//Questions:
//Q.1 Write a Program to abstract some attributes of class Admin to prevent them to be inherited by its child classes.
//- Class Admin -> Class Manager
//- Class Manager -> Class Employee
//- Class Admin has the following members:
//company_name
//manager_salary
//employee_salary
//total_staff
//total_annual_revenue
//can_terminate
//- use all attributes accessibility in the parent class and child class properly.
//- override a method myAccess() in both child classes to display all parent class members' values accordingly.
#include<iostream>
using namespace std;

class Admin
{
	protected :
	string company_name =  "MAHAJAN EMPIRE ";
    int manager_salary = 100000,employee_salary = 20000, total_staff = 1000,total_annual_revenue = 3,can_terminate = 3;
    
    public :

		 void myAccess()
		 {
		 	cout << "ADMIN :- " << endl << endl ;
		 	cout << "      --MY Access--  "<<endl <<endl ;
		 	cout << "Company name : " << company_name << endl ;
			cout << "Manager salary : " << manager_salary << endl ;
			cout << "Employee salary : " << employee_salary << endl ;
			cout << "Total staff : " << total_staff <<endl ;
		 	cout << "Total annual is : " << total_annual_revenue <<"cr" <<endl;
			cout << "Employ and manager can_terminate : " << can_terminate <<endl <<endl;
		 }
    	
};

class Manager :  virtual public Admin 
{
	public :
		void  myAccess()
		{
			cout << "MANAGER :- " << endl << endl ;
			cout << "      --MY Access--  "<<endl <<endl ;
			cout << "Company name : " << company_name << endl ;
			cout << "Manager salary : " << manager_salary << endl ;
			cout << "Employee salary : " << employee_salary << endl ;
			cout << "Total staff : " << total_staff <<endl <<endl;
		
		}
};

class Employee : virtual public Manager  
{
	
	public :
		void  myAccess()
		{
			cout << "EMPLOYEE :- " << endl<<endl;
		    cout << "      --MY Access--  "<<endl <<endl ;
			cout << "Company name : " << company_name << endl ;
			cout << "Employee salary : " << employee_salary << endl ;
			cout << "Total staff : " << total_staff <<endl ;
		}
};

int main()
{
	 Admin a1;
	 Manager m1;
	 Employee e1;
	   
//     a1.set();
	 a1.myAccess();
	
	 
	 m1.myAccess();
	 
	 e1.myAccess();
	
}