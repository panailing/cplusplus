#include <iostream>
using namespace std;
#define PI 3.14
class Shape {
public:
	virtual double perimeter() const = 0;
};
class Circle :public Shape 
{
public:
	Circle(double r) :radius(r) {};
	virtual double perimeter() const
	{
		return 2 * PI * radius; 
	}
protected:
	double radius;
};
class Rectangle :public Shape
{
public:
	Rectangle(double h, double w) :height(h), width(w) {};
	virtual double perimeter() const
	{
		return 2 * height + 2 * width;
	}
protected:
	double height, width;
};
int main() {
	Circle c1(1.0), c2(2.0);
	Rectangle r1(2.0, 3.0), r2(2.0, 3.0);
	Shape* pe[4] = { &c1, &c2, &r1, &r2 };
	double perimeter = 0.0;
	for (int i = 0; i < 4; i++)
	{
		perimeter = perimeter + pe[i]->perimeter();
	}
	cout << "四个形状的总周长为：" << perimeter << endl;

	system("pause");
	return 0;
}