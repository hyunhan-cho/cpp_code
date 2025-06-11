#include "StudentID.h"
#include <iostream>
using namespace std;

int main(){
     StudentID student1 = StudentID("Alice", 12345);
     StudentID student2("Bob", -1); // Invalid ID, should trigger error message
     cout << student1.getName() << " has ID: " << student1.getID() << std::endl;
     cout << student2.getName() << " has ID: " << student2.getID() << std::endl;
     return 0;
}