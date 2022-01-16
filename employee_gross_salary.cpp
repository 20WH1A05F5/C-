#include<iostream>
using namespace std;
class Salary{
	int da,it,gross,net;
	public:
		int basic,id;
			string name;
		void readData(){
		 	cin>>name>>id>>basic;;
			da = 0.52 * basic;
			gross = da + basic;
			it = gross * 0.3;
			net = gross -it;
		}
		void displaySalary(){
			cout<<"Name: "<<name<<endl;
			cout<<"id: "<<id<<endl;
			cout<<"Basic: "<<basic<<endl;
			cout<<"DA: "<<da<<endl;
			cout<<"Gross Salary: "<<gross<<endl;
			cout<<"IT: "<<it<<endl;
			cout<<"Net Salary: "<<endl;
		}
};
int main(){
	int num,i,Id;
	string Name;
	float Basic;
	Salary S[10];
	cout<<"Number of employees: "<<endl;
	cin>>num;
	for(i = 0; i < num; i++){
		cout<<"Enter name,id,basic of "<<i + 1<<" employee: "<<endl;
		S[i].readData();
	}
	for(i = 0; i < num; i++){
		S[i].displaySalary();
	}
	
	return 0;
}
