//Q.1 Write a Program that defines a shape class with a constructor that gives value to width and height. 
//Then define two sub-classes triangle and rectangle, that calculate the area of the shape area ().
// In the main, define two objects a triangle and a rectangle,
// and then call the area() function using these two objects.
#include<iostream>
using namespace std;

class SHAPE
{
	protected :
		int width,height; 
		public :
	SHAPE()
	{
		cout << "Enter Width & height : ";
		cin >> width ;
		cin >> height;
	}
};
class Triangle : public SHAPE
{
	public :
	void area1()
	{
		cout << "Triangle is :" << ( width * height )  * 1/2  << endl ;
	}
};
class Rectangle : public SHAPE
{
	public :
	void area()
	{
		cout <<  "Rectangle is :" << width * height ;
	}
};
int main()
{
	Triangle t1;
	t1.area1();
	Rectangle r1;
	r1.area();
	return 0;
}