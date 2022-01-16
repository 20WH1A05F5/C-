#include<iostream>
#include<string>
using namespace std;
class student {
public:
    string phone_no;
    int roll_no;
    string address;
};
int main() {
    student Sam;
    student John;

	
    Sam.phone_no = "9487652927";
    Sam.roll_no = 1;
    Sam.address = "Kukatpally";

    John.phone_no = "9841267921";
    John.roll_no = 2;
    John.address = "Ameerpet";
    

    cout << "Phone: " << Sam.phone_no << endl;
    cout << "roll: " << Sam.roll_no << endl;
    cout << "Address:" << Sam.address << endl;
    cout << "Phone: " << John.phone_no << endl;
    cout << "roll: " << John.roll_no << endl;
    cout << "Address:" << John.address << endl;
}
