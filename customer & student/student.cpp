//Q.1 Write a Program to create Student Record System for 5 students using Encapsulation. Consider the below-mentioned attributes in the Student class:
//- stu_id
//- stu_name
//- stu_age
//- stu_course
//- stu_city
//- stu_email
//- stu_college
#include<iostream>
using namespace std;
class Student_Record
{
	int id,age;
	string name;
	string course;
	string city;
	string email;
	string college;
	
	public:
		
	void set(int i)
	{
		cout << endl <<"Enter  "<<i<< " student detail's " << endl << endl;
		
		cout << "Enter student id :";
		cin >> id;
		
		cin.ignore();
        cout << "Enter student name :";
        getline(cin,name);
        
		cout << "Enter student age :";
		cin >> age;
		
		cin.ignore();
		cout << "Enter student course :";
		getline(cin,course);
		
		cout << "Enter student city :";
	    cin >> city;
		
		cout << "Enter student email :";
	    cin >> email;
		
		cin.ignore();
		cout << "Enter student college :";
		getline(cin,college);
			
	}
	void get(int i)
	{
		cout << endl <<" "<<i<< " student detail's " << endl << endl;
			
		cout << "student id is : " << id << endl;
		cout << "student name is : " << name << endl;
		cout << "student age is : " << age << endl;
		cout << "student course is : " << course << endl;
		cout << "student city is : " << city << endl;
		cout << "student email is : " << email << endl;
		cout << "student college is : " <<college << endl;
	}
		
};
int main()
{
	int i;
	for(i=1; i<=5; i++)
	{
	 Student_Record s;
	 s.set(i);
	 s.get(i);	
	}

	return 0;
}