#include <iostream>
#include <string.h>

using namespace std;

#define PERSONMAX 1000
/*
 *系统中需要实现的功能如下：
 * 添加联系人：向通讯录中添加新人，信息包括（姓名、性别、年龄、联系电话、家庭住址）最多记录1000人
 * 显示联系人：显示通讯录中所有联系人信息
 * 删除联系人：按照姓名进行删除指定联系人
 * 查找联系人：按照姓名查看指定联系人信息
 * 修改联系人：按照姓名重新修改指定联系人
 * 清空联系人：清空通讯录中所有信息
 * 退出通讯录：退出当前使用的通讯录
 */


struct Person {
	string m_Name; //姓名
	int m_Sex; //性别：1男 2女
	int m_Age; //年龄
	string m_Phone; //电话
	string m_Addr; //住址
};

struct MailList {
	struct Person personArray[PERSONMAX]; // 通讯录结构体数组
	int m_Size; // 通讯录中当前的人数
};

void showMenu()
{
	cout << "*************************************" << endl;
	cout << "**********  1、添加联系人  **********" << endl;
	cout << "**********  2、显示联系人  **********" << endl;
	cout << "**********  3、删除联系人  **********" << endl;
	cout << "**********  4、查找联系人  **********" << endl;
	cout << "**********  5、修改联系人  **********" << endl;
	cout << "**********  6、清空联系人  **********" << endl;
	cout << "**********  0、退出通讯录  **********" << endl;
	cout << "*************************************" << endl;
}

void addPerson(MailList *mailList)
{
	if (mailList->m_Size == PERSONMAX)
		cout << "联系人已满，无法继续添加！" << endl;
	else
	{
		// 姓名
		string name;
		cout << "请输入你要添加的联系人姓名" << endl;
		cin >> name;
		mailList->personArray[mailList->m_Size].m_Name = name;

		// 性别
		cout << "请输入性别：" << endl;
		cout << "1 -- 男" << endl;
		cout << "2 -- 女" << endl;

		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				mailList->personArray[mailList->m_Size].m_Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入";
		}

		//年龄
		cout << "请输入年龄：" << endl;
		int age = 0;
		cin >> age;
		mailList->personArray[mailList->m_Size].m_Age = age;

		//联系电话
		cout << "请输入联系电话：" << endl;
		string phone = "";
		cin >> phone;
		mailList->personArray[mailList->m_Size].m_Phone = phone;

		//家庭住址
		cout << "请输入家庭住址：" << endl;
		string address;
		cin >> address;
		mailList->personArray[mailList->m_Size].m_Addr = address;

		//更新通讯录人数
		mailList->m_Size++;

		cout << "添加成功" << endl;
		system("pause");
		system("cls"); // 清除屏幕
	}
	
}

void main()
{
	int CMD = 0;
	MailList mailList;
	mailList.m_Size = 0;
	while (true)
	{
		showMenu();
		cout << "请输入你要操作的命令:" << endl;
		cin >> CMD;
		switch (CMD)
		{
			case 1: // 1、添加联系人
				addPerson(&mailList);
				break;
			case 2: // 2、显示联系人

				break;
			case 3: // 3、删除联系人
				break;
			case 4: // 4、查找联系人
				break;
			case 5: // 5、修改联系人
				break;
			case 6: // 6、清空联系人
				break;
			case 0: //0、退出通讯录
				break;
			default:
				cout << "输入有误，已退出系统！" << endl;
				break;
		}
	}
	system("pause");
}