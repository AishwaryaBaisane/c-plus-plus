//Q.2 Write a Program to make a Supermarket Billing System.
//Requirements:
//(A) User Input:
//- Item Number
//- Item Name
//- Quantity
//- Price
//- Discount
//(B) Verify User Id And Password
//(C) Display Records:
//- All Records
//- By Searching Item Number
#include<iostream>
using namespace std;
class Supermarket_Billing
{
	int Item_Number[100];
	int Quantity[20];
	int Price[1000];
	string Item_Name[30];
    string User_Id;
	static string User_Id1; 
	int Password;
	static int Password1;
	int Discount[100];
	
    public :
    
    void input()
    { 
         s:
    	cout << "Enter User id & password : "<<endl;
    	cout << "User id : "<<endl;
    	cin >> User_Id;
    	cout << "Password : "<<endl;
    	cin >> Password;
    	 
    	  if(User_Id1==User_Id && Password==Password1)
    	  {
    	  	for(int i=1; i<4; i++)
         {
    	  	cout << "Enter givan number "<<i<<": ";
    	  	cin >> i;
    	  	
    	    cout << "Enter Item number : ";
    	    cin >> Item_Number[i];
    	  
    	    cin.ignore();
    	    cout << "Enter Item Name : ";
    	    getline(cin,Item_Name[i]);
    	  
    	    cout << "Enter Quantity : ";
    	    cin >> Quantity[i];
    	  
    	    cout << "Enter Price : ";
    	    cin >> Price[i];
    	  
    	    cout << "Enter Discount : ";
    	    cin >> Discount[i];
    	    
    	    cout << endl << endl ;
         }
       }
         else
		{
			cout << "Enter valid id & password ! " << endl<<endl;
			goto s;
		}
         
     

		
	}
	void output()
	{
		int i;
		cout << "Enter detail no to find detail's :- "<< endl << "1" <<endl << "2" <<endl <<"3"<<endl<< "5 for exit : "<< endl << "Enter your choice :- ";
		cin >> i;
		if(i==5)
		{
			cout << "Thank you for visit !";
		}
		else
		{
			cout << ""<<i<<" detail below :-"<<endl ; 
		  cout << "Item Number "<<Item_Number[i] <<endl << "Item name : " << Item_Name[i] << endl << "Item quantity : " << Quantity[i] 
		  << endl << "Item price : " << Price[i] << endl << "Item discount : "<< Discount[i] << endl ;
	   }
	}
	
};

string Supermarket_Billing::User_Id1 = "Md_mart_6076"; 
int Supermarket_Billing::Password1 = 12345678;

int main()
{
	Supermarket_Billing S;
    S.input();
    S.output();
}