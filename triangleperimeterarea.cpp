#include<iostream>
#include<cmath>
using namespace std;

class Triangle{
	public:
	void area(int a,int b,int c){
	float s=((a+b+c)/2.0);
	float A=sqrt(s*(s-a)*(s-b)*(s-c));
	cout<<"Area of a triangle is: "<<A<<" sq. units"<<endl;
}
	void perimeter(int a,int b,int c){
	cout<<"Perimeter of a triangle is: "<<a+b+c<<" units"<<endl;
}
};
int main()
{
	Triangle tr1;
	tr1.area(3,4,5);
	tr1.perimeter(3,4,5);
	return 0;
}
