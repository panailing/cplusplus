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
		cout << "����Ʒ�ƣ�" << brand << endl;
		cout << "����ģ�ͣ�" << model << endl;
		cout << "������ݣ�" << year << endl;
	}
};
Car::Car(string brand1, string model1, int year1) :
	brand(brand1), model(model1), year(year1)
{
	cout << "����������Ϣ�ǣ�" << endl;
}
int main() {
	Car car("���ǵ�", "SUV", 2020);
	car.display();
	return 0;
}
