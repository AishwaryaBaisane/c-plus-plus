//Q.1 Write a Program to make a Railway Reservation System.
//Requirements:
//(A) User Input: 
//- Train Number
//- Train Name
//- Source
//- Destination
//- Train Time
//(B) Display Records: 
//- All Records
//- By Searching Train Number
//(C) Minimum 3 Input Train Records


#include<iostream>
#include<string>

using namespace std;

class Train
{
	private:
		int train_num;
		string train_name[40];
	    static string source;
		string destination[40];
		int train_time[30];
		
		public:
		
			void input()
			{
				s:
				char k;
				cout << "Enter A for detail's of Railway Reservation System :"<< endl;
		
				cin >> k;
			    if(k=='A')
			    {		  
				     cout << endl << "-------------------Welcome to Railway Reservation System -----------------------"<<endl<<endl;
				     cout << "Enter givin detail :-"<<endl;
			    		for(int j=1; j<4; j++)
				     {
					
				       
				      int i;
			          cout << "Enter given number "<<j<<" :";
				      cin >> i;
				    
		
			         	cout << endl << endl;
				       cout << "enter the "<<i<<" train number : " << endl;
				    cin >> train_num;
				    
				   	cout << "enter the "<<i<<" train time : " << endl;
			       	cin >> train_time[i];
			        cin.ignore();
				        
				    cout << "enter the "<<i<<" train name : " << endl;
				    getline(cin,train_name[i]);
				    
				   cout << "enter the "<<i<<" destination : " << endl;
				   getline(cin,destination[i]);
				   
				   cout << endl <<endl;
			        }
				}
				else
				{
					cout << "Enter valid chareactor :"<<endl<<endl;
					goto s;
				}
			}


			void result()
			{
				int i;
				cout << endl << "enter the train detail no & train number to find detail's =" << endl;
				cout << "Enter :"<< endl << "1" <<endl << "2" <<endl << "3" << endl << "5 for exit"<< endl;
				cout << "Enter your ans :";
				cin >> i;
				
	 
                 if(i==5)
                  {
                  	cout << "Thank you for visitting !";
				  }
				   else if (i!=5)
				    {
				     cout << "Enter train number :";
				   cin >> train_num;
				    cout << " "<<i<<" train detail below :-";
					cout << endl << "train number :" << train_num << endl 
				    << "Train time=" << train_time[i] << endl;
				    	cout << "Train name=" << train_name[i] << endl 
			     	<< "Source=" << source << endl ;
				   cout << "Destination=" << destination[i] << endl ;
				  
                  }
			    
			
			}
			
};

string Train :: source = "surat";
int main()
{
	   
	    Train t1;

    	t1.input();

		t1.result();


}
