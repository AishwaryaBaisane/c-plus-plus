//Q.2 Write a Program to create a Car Record System using the Class and object of any 4 Cars. Consider the below-mentioned attributes in the Car class:
//- car_id
//- car_company_name
//- car_color
//- car_model
//- car_release_year
#include<iostream>
using namespace std;

class Car_Record
{
	public:
	int id,release_year;
    string name;
	char color[20],model[20];
    
    void input(int i)
    {
    	cout << endl<<"Enter "<<i+1<<" car detail : "<< endl << endl;
    	
    	cout << "Enter car id : ";
    	cin >> id;
    	 
        cin.ignore();
        cout << "Enter compny name :";
        getline(cin,name);
    	
    	cout << "Enter car color : ";
    	cin >> color;
    	
    	cout << "Enter car model : ";
    	cin >> model;
    	
    	cout << "Enter car release_year : ";
    	cin >> release_year;
	}
	void output(int i)
	{
		cout << endl <<" "<<i+1<<" car detail below: "<< endl << endl;
		
		cout << "car id is : " << id << endl;
		cout << "car name is : " << name << endl;
		cout << "car color is : " << color << endl;
		cout << "car model is : " << model << endl;
		cout << "car release year is :" << release_year << endl;
	}
    
};
int main()
{
	int i;
	for(i=0; i<4; i++)
	{
		Car_Record car;
	    car.input(i);
	    car.output(i);	
	}

}