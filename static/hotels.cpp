//Q.1 Write a Program to get and display Hotels and static information using Encapsulation with an array of objects member by including the below-mentioned attributes:
//- hotel_id
//- hotel_name -static
//- hotel_type (like hotel or motel)
//- hotel_rating (like 1 Star, 2 Start, ..., 7 Star)
//- hotel_location (city name)
//- hotel_establish_year - static
//- hotel_staff_quantity
//- hotel_room_quantity
#include<iostream>
using namespace std;
class Hotels
{
	int id,rating,staff_quantity,room_quantity;	
	static int establish_year;
	string hotel_type,location;
	static string name;

	
	public:
		
	void input()
	{
		cout << endl << "Enter hotel detail below :- "<< endl;
		cout << "Enter hotel id : ";
		cin >> id;
		
		cin.ignore();
		cout << "Enter hotel type : " << endl << "   hotel or motel" << endl;
		getline(cin,hotel_type);
		
		cout << "Enter hotel rating : ";
		cin >> rating;
		
		cin.ignore();
		cout << "Enter hotel location : ";
	    getline(cin,location);
		
		cout << "Enter hotel staff quantity : ";
		cin >> staff_quantity;
		
		cout << "Enter hotel room quantity : ";
		cin >> room_quantity;
		
	}
	
	void output()
	{
		cout << endl << endl <<"Hotel detail's"<< endl;
		cout << "Hotel id is :" << id<< endl;
		cout << "Hotel name is :" << name<< endl;
		cout << "Hotel hotel type is :" << hotel_type<< endl;
		cout << "Hotel rating is :" << rating<< endl;
		cout << "Hotel location is : since :" << location<< endl;
		cout << "Hotel establish year is :" << establish_year<< endl;
		cout << "Hotel staff quantity is :" << staff_quantity<< endl;
		cout << "Hotel room quantity is :" << room_quantity<< endl << endl;
	}
	
	
};
int Hotels::establish_year = 1995;
string Hotels::name = " Royal hotel "; 

int main()
{
	Hotels h[50];
	for(int i=0; i<3; i++)
	{
		h[i].input();
	}
	for(int i=0; i<3; i++)
	{
		h[i].output();
	}
}