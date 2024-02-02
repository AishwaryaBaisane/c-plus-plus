//Q.1 Write a Program to get and display N numbers of Diamond companies 
//information using encapsulation and use of Parameterised Constructor by including below
//mentioned attributes:
//- comp_id
//- comp_name
//- comp_staff_quantity
//- comp_revenue (per year)
//- comp_import_raw_diamonds (no. of raw diamonds
//imported per year)
//- comp_export_diamonds (no. of diamonds per year)
//- comp_ceo (name of CEO of the company)
#include<iostream>
using namespace std;

class companies
{
	int id,staff_quantity,revenue;
	float import_raw_diamonds,export_diamonds;
	string name,ceo,s;
	
	public :
		
	
	companies(int id,string name,int staff_quantity,int revenue,float import_raw_diamonds,float export_diamonds,string ceo,int i)
	{
		 
		this->id = id ;
		this->ceo = ceo;
		this->export_diamonds = export_diamonds;
		this->import_raw_diamonds = import_raw_diamonds;
		this->name = name;
		this->revenue = revenue;
		this->staff_quantity = staff_quantity;

		
		cout << endl <<""<<i+1<<"company id is : "<< this->id ;
		cout << endl;
		cout << "company name is :" << this->name << endl;
		cout << "company staff quantity is : " << this->staff_quantity << endl;
		cout << "company revenue is : "<< this->revenue<<"cr."<< endl;
		cout << "company import raw diamonds : " << this->import_raw_diamonds << endl;
		cout << "company export_diamonds : " << this->export_diamonds << endl;
		cout << "compny ceo is : " << this->ceo << endl << endl;
	}
	
	
};
int main()
{
//    companies d;	
   	int n;
   	cout << "Enter number of compny : ";
   	cin >> n;

for(int i=0; i<n; i++)
{

			  
   		int id;
		string name;
		int staff_quantity;
		int revenue;
		float import_raw_diamonds;
		float export_diamonds;
		string ceo;
		
		cout << "Enter "<<i+1<<" company id : ";
		cin >> id;
		
		cin.ignore();
		cout << "Enter company name : ";
		getline(cin,name);
		
		cout << "Enter company staff quantity : ";
		cin >> staff_quantity;
		
		cout << "Enter company revenue : ";
		cin >> revenue;
		
		cout << "Enter company import_raw_diamonds : ";
		cin >> import_raw_diamonds;
		
		cout << "Enter company export_diamonds : ";
		cin >>export_diamonds;
		
		cout << "Enter ceo name of company : ";
		cin >> ceo;
		
   	   	companies(id,name,staff_quantity,revenue,import_raw_diamonds,export_diamonds,ceo,i);
	     
		
}
    
   	
}
