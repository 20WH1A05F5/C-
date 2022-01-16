#include<iostream>
#include<cmath>
using namespace std;

class Rectangle{
	int a, b;
	public:
	Rectangle(int a, int b){
		this -> a = a;
		this -> b = b;
	}
	int Area(){
		return a*b;
	}
};
int main(){
	Rectangle rect1(4,5);
	Rectangle rect2(5,8);
	cout << "area:" << rect1.Area() << "sq units" << endl;
	cout << "area:" << rect2.Area() << "sq units" << endl;
	return 0;
}
