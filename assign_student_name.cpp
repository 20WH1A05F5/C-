#include <iostream>
#include<string>
using namespace std;

class student {
public:
    string name;
    int roll_no;
};

int main() {
    student student1;

    student1.name = "John";
    student1.roll_no = 2;

    cout << "Name: " << student1.name << endl;
    cout << "roll: " << student1.roll_no << endl;
}
