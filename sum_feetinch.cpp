#include<iostream>
using namespace std;
class AddDistance{
	int feet1,feet2,inch1,inch2;
	public:
		void setFeet(int a,int b){
			feet1 = a;
			feet2 = b;
		}
		void setInch(int a,int b){
			inch1 = a;
			inch2 = b;
		}
		int addDistance(int a,int b){
			return a+b;
		}
};
int main(){
	AddDistance A;
	int a1,a2,b1,b2;
	cout<<"Feet ",cin>>a1;
	cout<<"Inch ",cin>>b1;
	cout<<"Feet ",cin>>a2;
	cout<<"Inch ",cin>>b2;
	A.setFeet(a1,a2);
	A.setInch(b1,b2);
	cout<<"Feet: "<<A.addDistance(a1,a2)<<endl;
	cout<<"Inch: "<<A.addDistance(b1,b2);
	return 0;
}
