#include <iostream>
#include "workerManager.h"

void main() {
	WorkerManager wm;
	int choice = 0;

	while (true) {
		wm.Show_Menu();
		cout << "����������ѡ��";
		cin >> choice;

		switch (choice)
		{
			case 0: //�˳�ϵͳ
				wm.exitSystem();
				break;
			case 1: //���ְ��
				break;
			case 2: //��ʾְ��
				break;
			case 3: //ɾ��ְ��
				break;
			case 4: //�޸�ְ��
				break;
			case 5: //����ְ��
				break;
			case 6: //����ְ��
				break;
			case 7: //����ļ�
				break;
			default:
				system("cls");
				break;
		}
	}

	system("pause");
}