#include<iostream>
using namespace std;

class Area{
	int l, b;
	public:
	void setDim(int x, int y){
	l = x;
	b = y;
	}
	int getArea(){
	return l*b;
	}
};

int main(){
	Area rect;
	int x, y;
	cout << "Enter the Length, Breadth" << endl;
	cin >> x >> y;
	cout << endl;
	rect.setDim (x,y);
	cout << "Area:" << rect.getArea() << endl;
	return 0;
}
