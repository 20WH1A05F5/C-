#include<iostream>
#include<string>
using namespace std;

class Employee{
	public:
	string name;
	int yr_joining;
	string address;
	void output(){
		cout << name << "			" << yr_joining << "				" << address << endl;
	}
};
int main(){
	Employee emp[3];
	cout << "Name" << "			" << "Year of joining" << "			" << "Address" << endl;
	emp[0].name = "Robert";
	emp[0].yr_joining = 1994;
	emp[0].address = "64C- WallsStreat";

	emp[1].name = "Sam";
	emp[1].yr_joining = 2000;
	emp[1].address = "68D- WallsStreat";
	
	emp[2].name = "John";
	emp[2].yr_joining = 1999;
	emp[2].address = "26B- WallsStreat";
	
	int i;
	for(i=0; i<3; i++){
		emp[i].output();
	}
	return 0;
}
