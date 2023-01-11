#include<iostream>
#include<cmath>
using namespace std;
class point
{
public:

	double X;
	double Y;
	point()
	{
		X = 0.0;

		Y = 0.0;

	}
	point(double x, double y)
	{
		X = x;
		Y = y;
	}
	double getX()
	{
		return X;
	}
	double getY()
	{
		return Y;
	}
	void setX(double x)
	{
		X = x;
	}
	void setY(double y)
	{
		Y = y;
	}
	double distanceTo(const point& other)
	{
		double dx = other.X - X;
		double dy = other.Y - Y;
		return(pow((other.X - X), 2) + pow((other.Y - Y), 2));


	}
	point operator+(const point& other)
	{
		point other2;
		other2.X = other.X + X;
		other2.Y = other.Y + Y;
		return other2;
	}
	point operator-(const point& other)
	{
		point other2;
		other2.X = other.X - X;
		other2.Y = other.Y - Y;
		return other2;
	}


};
int main()
{
	point po1(1, 2);
	cout << "p1 =" << po1.getX() << " ' " << po1.getY() << endl;
	point po2(3, 4);
	cout << "p2 =" << po2.getX() << " ' " << po2.getY() << endl;
	double d = po1.distanceTo(po2);
	cout << "distance= " << d << endl;
	point po3 = po1 + po2;
	cout << "p3 =" << po3.getX() << " ' " << po3.getY() << endl;
	point po4 = po1 - po2;
	cout << "p4 =" << po4.getX() << " ' " << po4.getY() << endl;
};