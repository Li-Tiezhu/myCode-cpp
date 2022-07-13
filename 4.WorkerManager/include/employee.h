//
// Created by hp-pc on 2022/5/24.
//

#ifndef INC_4__EMPLOYEE_H
#define INC_4__EMPLOYEE_H

#include <iostream>
#include "worker.h"
using namespace std;

class Employee : public Worker{
public:
    Employee(int id, string name, int deptId);

    void showInfo();

    string getDeptName();
};

#endif //INC_4__EMPLOYEE_H
