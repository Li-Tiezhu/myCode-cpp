#include <iostream>
#include <fstream>
#include "worker.h"
using namespace std;

#define FILENAME "employFile.txt"

class WorkerManager {
public:
    WorkerManager();

    void show_Menu();  // 显示菜单

    void exit_System();  // 退出系统

    void add_Employee();  // 增加员工数量

    void save();  // 保存到文件

    int get_EmployNum();  // 统计人数

    void init_Employ();  // 初始化员工

    void show_Employ();  // 显示员工

    int IsExist(int id);  // 查看员工是否存在

    void delete_Employ();  // 删除员工

    void mod_Employ();  // 修改员工

    void find_Employ();  // 查找员工

    void sort_Employ();  // 排序员工

    void clean_File();  // 清空员工

    ~WorkerManager();

    int m_EmployNum;
    Worker ** m_EmployArray;
    bool m_FileIsEmpty;

};