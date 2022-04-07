#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Staff {
	friend class Engineer;
private:
	int id;
	string name;
public:
	Staff(int id1, string name1);
	void input();
};
Staff::Staff(int id1, string name1) {
	id = id1;
	name = name1;
}

void Staff::input()
{
	cout << "请输入" << setw(10) << "id:" << id << endl;
	cout << "请输入" << setw(10) << "name:" << name << endl;
}
class Engineer:virtual public Staff{
private:
	float salary;
public:
	Engineer(int id1, string name1, float salary) :Staff(id1, name1) {
		this->salary = salary;
	}

	void input();
	
	void display() {
		cout << endl;
		cout << endl;
		cout << "Engineer 的成员变量为：" << endl;
		cout << setw(15) << "id:" << Staff::id << endl;
		cout << setw(15) << "name:" << Staff::name << endl;
		cout << setw(15) << "salary:" << salary << endl;
	}
};

void Engineer::input(void) {
	Staff::input();
	cout << "请输入" << setw(10) << "salary:" << salary << endl;
}
int main() {
	Engineer engineer(1234, "张三", 10000);
	engineer.input();
	engineer.display();
	system("pause");
	return 0;


}
