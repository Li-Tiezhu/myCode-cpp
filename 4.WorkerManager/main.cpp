#include <iostream>
#include "WorkerManager.h"
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

int main() {
    WorkerManager wm;
    int choice = 0;
    while (true) {
        wm.show_Menu();
        cout << "请输入您的选择：";
        cin >> choice;

        switch (choice)
        {
            case 0: //退出系统
                wm.exit_System();
                break;
            case 1: //添加职工
                wm.add_Employee();
                break;
            case 2: //显示职工
                wm.show_Employ();
                break;
            case 3: //删除职工
                wm.delete_Employ();
                break;
            case 4: //修改职工
                wm.mod_Employ();
                break;
            case 5: //查找职工
                wm.find_Employ();
                break;
            case 6: //排序职工
                wm.sort_Employ();
                break;
            case 7: //清空文件
                wm.clean_File();
                break;
            default:
                system("cls");
                break;
        }
    }

    system("pause");
    return 0;
}