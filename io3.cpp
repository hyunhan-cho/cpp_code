#include <sstream>
#include <string>
#include <iostream>

using namespace std;

struct Record{
    int id;
    double value;
    string label;
};

int main(){
    string line = "42,3.14,hi";
    stringstream ss(line);

    Record rec;
    char comma;

    ss >> rec.id >> comma 
       >> rec.value >> comma 
       >> rec.label;

    cout << "ID: " << rec.id << endl;
    cout << "Value: " << rec.value << endl;
    cout << "Label: " << rec.label << endl;

    return 0;
}


