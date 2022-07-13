#ifndef INC_4__MANAGER_H
#define INC_4__MANAGER_H

#include <iostream>
#include "worker.h"
using namespace std;

class Manager : public Worker {
public:

    Manager(int id, string name, int deptId);

    void showInfo();

    string getDeptName();
};

#endif //INC_4__MANAGER_H
