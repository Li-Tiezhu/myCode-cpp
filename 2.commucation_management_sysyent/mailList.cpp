#include <iostream>
#include <string.h>

using namespace std;

#define PERSONMAX 1000
/*
 *ϵͳ����Ҫʵ�ֵĹ������£�
 * �����ϵ�ˣ���ͨѶ¼��������ˣ���Ϣ�������������Ա����䡢��ϵ�绰����ͥסַ������¼1000��
 * ��ʾ��ϵ�ˣ���ʾͨѶ¼��������ϵ����Ϣ
 * ɾ����ϵ�ˣ�������������ɾ��ָ����ϵ��
 * ������ϵ�ˣ����������鿴ָ����ϵ����Ϣ
 * �޸���ϵ�ˣ��������������޸�ָ����ϵ��
 * �����ϵ�ˣ����ͨѶ¼��������Ϣ
 * �˳�ͨѶ¼���˳���ǰʹ�õ�ͨѶ¼
 */


struct Person {
	string m_Name; //����
	int m_Sex; //�Ա�1�� 2Ů
	int m_Age; //����
	string m_Phone; //�绰
	string m_Addr; //סַ
};

struct MailList {
	struct Person personArray[PERSONMAX]; // ͨѶ¼�ṹ������
	int m_Size; // ͨѶ¼�е�ǰ������
};

void showMenu()
{
	cout << "*************************************" << endl;
	cout << "**********  1�������ϵ��  **********" << endl;
	cout << "**********  2����ʾ��ϵ��  **********" << endl;
	cout << "**********  3��ɾ����ϵ��  **********" << endl;
	cout << "**********  4��������ϵ��  **********" << endl;
	cout << "**********  5���޸���ϵ��  **********" << endl;
	cout << "**********  6�������ϵ��  **********" << endl;
	cout << "**********  0���˳�ͨѶ¼  **********" << endl;
	cout << "*************************************" << endl;
}

void addPerson(MailList *mailList)
{
	if (mailList->m_Size == PERSONMAX)
		cout << "��ϵ���������޷�������ӣ�" << endl;
	else
	{
		// ����
		string name;
		cout << "��������Ҫ��ӵ���ϵ������" << endl;
		cin >> name;
		mailList->personArray[mailList->m_Size].m_Name = name;

		// �Ա�
		cout << "�������Ա�" << endl;
		cout << "1 -- ��" << endl;
		cout << "2 -- Ů" << endl;

		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				mailList->personArray[mailList->m_Size].m_Sex = sex;
				break;
			}
			cout << "������������������";
		}

		//����
		cout << "���������䣺" << endl;
		int age = 0;
		cin >> age;
		mailList->personArray[mailList->m_Size].m_Age = age;

		//��ϵ�绰
		cout << "��������ϵ�绰��" << endl;
		string phone = "";
		cin >> phone;
		mailList->personArray[mailList->m_Size].m_Phone = phone;

		//��ͥסַ
		cout << "�������ͥסַ��" << endl;
		string address;
		cin >> address;
		mailList->personArray[mailList->m_Size].m_Addr = address;

		//����ͨѶ¼����
		mailList->m_Size++;

		cout << "��ӳɹ�" << endl;
		system("pause");
		system("cls"); // �����Ļ
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
		cout << "��������Ҫ����������:" << endl;
		cin >> CMD;
		switch (CMD)
		{
			case 1: // 1�������ϵ��
				addPerson(&mailList);
				break;
			case 2: // 2����ʾ��ϵ��

				break;
			case 3: // 3��ɾ����ϵ��
				break;
			case 4: // 4��������ϵ��
				break;
			case 5: // 5���޸���ϵ��
				break;
			case 6: // 6�������ϵ��
				break;
			case 0: //0���˳�ͨѶ¼
				break;
			default:
				cout << "�����������˳�ϵͳ��" << endl;
				break;
		}
	}
	system("pause");
}