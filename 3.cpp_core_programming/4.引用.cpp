#include <iostream>
using namespace std;

//返回静态变量引用
class Animal {
public:
	void speak() {
		cout << "动物在说话" << endl;
	}
	~Animal() {
		cout << "Animal析构" ;
	}
};

class Dog :public Animal {
public:
	void speak() {
		cout << "狗在说话" << endl;
	}
	~Dog() {
		cout << "Dog析构";
	}
};

int main() {

	Dog dog;

	system("pause");

	return 0;
}