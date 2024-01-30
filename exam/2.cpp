//Q.2 Write a Program to create a class to read time in seconds and convert it into time in (HH:MM: SS) format.
//For example,
//Input:
//Enter seconds: 4520
//
//Output:
//1:15:20
#include<iostream>
using namespace std;

class time
{
	public:
    int h,m,s;
    void input()
    {
       cout << "enter second :";
	   cin >> s;	
	}
	void output()
	{
		h = s / 3600;
		m = s % 60;
		s = s % 60;
		
		cout << h  << ':'<< m << ':'<< s;
	}

 	
};
int main()
{
	time m1;
	m1.input();
	m1.output();
	
		
	
}

//inch /12
//feet ++;