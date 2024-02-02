//Q.2 Write a Program to get and display N numbers of Fast Food cafe information
// using encapsulation and the use of a Default constructor by including the below-mentioned attributes:
//- cafe_id
//- cafe_name
//- cafe_type (like a rooftop or normal)
//- cafe_rating (like 1 Star, 2 Start, ..., 5 Star)
//- cafe_location (city name)
//- cafe_establish_year
//- cafe_staff_quantity
#include<iostream>
using namespace std;
class Food_cafe
{
	int id,rating,establish_year,staff_quantity;
	string name,type,location;
	
	public:
		
		
		
	Food_cafe()
	{
		cout << endl <<"Enter cafe id : ";
		cin >> id;
		
		cin.ignore();
		cout << "Enter cafe name : ";
	    getline(cin,name);
	    
		cout << "Enter cafe type : " << endl << "   rooftype or normal  " << endl;
		cin >> type;
		
		cout << "Enter cafe rating : ";
		cin >> rating;
		
		cin.ignore();
		cout << "Enter cafe location : ";
	    getline(cin,location);
	    
		cout << "Enter cafe establish year : ";
		cin >> establish_year;
		
		cout << "Enter cafe staff quantity : ";
		cin >> staff_quantity;
	
		cout << endl << "cafe detail below :- "<<endl;  
		cout << "cafe id is : " << id << endl ;
		cout << "cafe name is : " << name << endl ;
		cout << "cafe type is : " << type << endl; 
		cout << "cafe rating is : " << rating << endl ;
		cout << "cafe location is : " << location << endl; 
		cout << "cafe establish year is : "<< establish_year << endl ;
		cout << "cafe staff quantity is : "<<staff_quantity << endl ;
		
	}
};
int main()
{

    int N ;
	cout << "Enter number of cafe :";
	cin >> N; 
	
    for(int i=0; i<N; i++)
    {
      Food_cafe d;	
	}
	 
	
}