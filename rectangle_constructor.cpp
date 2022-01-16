#include<iostream>
using namespace std;

class Area{
	int l, b;
	public:
	Area(int x, int y){
	l = x;
	b = y;
	}
	int returnArea(){
	return l*b;
	}
};

int main(){
	int x, y;
	cout << "Enter the Length, Breadth" << endl;
	cin >> x >> y;
	Area rect(x,y);
	cout << "Area:" << rect.returnArea() << endl;
	return 0;
}
