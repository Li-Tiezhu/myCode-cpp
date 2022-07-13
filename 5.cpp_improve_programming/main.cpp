#include <iostream>
#include <string>
#include "person.hpp"

using namespace std;

int main() {
    Person <string, int> p("Maike", 23);
    p.showPerson();
    return 0;
}
