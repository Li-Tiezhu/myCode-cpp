#include <iostream>
using namespace std;

int* test_01() {
	int* arr_01 = new int[10];
	for (int i = 0; i < 10; i++) {
		arr_01[i] = i;
	}
	for (int i = 0; i < 10; i++) {
		cout << arr_01[i] << "-----------" << endl;
	}
	return arr_01;
}


int main_01() {
	int* p = test_01();
	for (int i = 0; i < 10; i++) {
		cout << p[i] << endl;
	}
	delete[] p;

	system("pause");
	return 0;
}