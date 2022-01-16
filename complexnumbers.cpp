#include<iostream>
using namespace std;

class Complex{
	int r1, r2, i1, i2;
	public:
	Complex(int r1, int r2, int i1, int i2){
		this -> r1 = r1;
		this -> r2 = r2;
		this -> i1 = i1;
		this -> i2 = i2;
	}
	int add(){
		cout << "The sum of complex numbers:" << r1+r2 << "+i(" << i1+i2 << ")" << endl;
	}
	int subtract(){
		cout << "The difference of complex numbers:" << r1-r2 << "+i(" << i1-i2 << ")" << endl;	
	}
	int multiply(){
		cout << "The product of complex numbers:" << (r1*r2)-(i1*i2) << "+i(" << (r2*i1)+(i2*r1) << ")" << endl;
	}
};
int main(){
	int w, x, y, z;
	cout << " enter the real and imaginary part of 1st complex number:" << endl;
	cin >> w >> x;
	cout << " enter the real and imaginary part of 2nd complex number:" << endl;
	cin >> y >> z ;
	Complex comp(w, x, y, z);
	comp.add();
	comp.subtract();
	comp.multiply();
	return 0;
}
