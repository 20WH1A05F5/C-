#include<iostream>
using namespace std;
struct details{
	string name,branch;
	int roll_no;
};
int main(){
	details S;
	cout<<"Enter details: Name,Branch,Roll"<<endl;
	cin>>S.name>>S.branch>>S.roll_no;
	cout<<"Student details: "<<endl<<S.name<<endl<<S.branch<<endl<<S.roll_no<<endl;
	return 0;
}
