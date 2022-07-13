#pragma once
#include <iostream>
#include <string>
using namespace std;

class Worker {
public:
	virtual void showInfo() = 0;

	virtual void getPostName() = 0;

	int m_Id;  // Ö°¹¤±àºÅ
	string m_name;  // ÐÕÃû
};
