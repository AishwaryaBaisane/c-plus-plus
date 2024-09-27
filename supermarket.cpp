#include<iostream>
#include<cstring>
using namespace std;
//- Item Number
//- Item Name
//- Quantity
//- Price
//- Discount
class market{
    protected:
    int item_number[100],quantity[20],price[100];
    string name[100];
    public:

    virtual void user_input(int i)=0;


};
class UserInput:public market
{
    public:
    void user_input(int i)
    {
        cout<<"----------enter user input-------------"<<endl;

        cout<<"enter the id:";
        cin>>item_number[i];

       cin.ignore();
       cout<<"enter the name:";
       getline(cin,name[i]);


       cout<<"enter the quantity:";
        cin>>quantity[i];
        cout<<"enter the price:";
        cin>>price[i];


    }

    void get(int i)
    {
                cout<<"----------enter user output-------------"<<endl;

        cout<<item_number[i]<<endl;
        cout<<name[i]<<endl;
        cout<<quantity[i]<<endl;
        cout<<price[i]<<endl;
    }

    void serach()
    {
        int x;
        int y;
                cout<<"----------enter user output-------------"<<endl;

       cout<<" Searching Item Number"<<endl;
cin>>x;
for(int i=0;i<2;i++)
{

    if(item_number[i]==x)
    {

        y=i;
    }
}

cout <<" Item Name is :"<< name[y]<<endl;
cout <<"Quantity is :"<< quantity[y]<<endl;
        cout <<" Priceis :"<< price[y]<<endl;

    }
};



main()
{
UserInput useconds;
int i=0,n=0;
int choice=0;
do{
cout<<"enter press 1 for user input:"<<endl;
cout<<"enter press 2 for user output:"<<endl;
cout<<"enter press 3 for user serach:"<<endl;
cout<<"enter press 4 for user q:"<<endl;
cout<<"enter the your choies:";
cin>>choice;
   switch(choice)
   {
       case 1:
             useconds.user_input(i);
             i++;
             n++;





            break;
            case 2:
          for(i=0;i<n;i++)
          {
                 useconds.get(i);

          }

            break;

             case 3 :useconds.serach();


            break;
            case 4:cout<<"thank you "<<endl;
            break;


   }
}while(choice!=4);
}

