#include <iostream>
#include <string>
using namespace std;

class Car {
public:
	Car(string brand1, string model1, int year1);
	string brand;
	string model;
	int year;

	void display() {
		cout << "汽车品牌：" << brand << endl;
		cout << "汽车模型：" << model << endl;
		cout << "汽车年份：" << year << endl;
	}
};
Car::Car(string brand1, string model1, int year1) :
	brand(brand1), model(model1), year(year1)
{
	cout << "该汽车的信息是：" << endl;
}
int main() {
	Car car("比亚迪", "SUV", 2020);
	car.display();
	return 0;
}
