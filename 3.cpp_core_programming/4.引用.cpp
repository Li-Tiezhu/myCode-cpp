#include <iostream>
using namespace std;

//���ؾ�̬��������
class Animal {
public:
	void speak() {
		cout << "������˵��" << endl;
	}
	~Animal() {
		cout << "Animal����" ;
	}
};

class Dog :public Animal {
public:
	void speak() {
		cout << "����˵��" << endl;
	}
	~Dog() {
		cout << "Dog����";
	}
};

int main() {

	Dog dog;

	system("pause");

	return 0;
}