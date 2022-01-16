#include<iostream>
#include<cmath>
using namespace std;
class Triangle{
	int a,b,c;
	public:
		Triangle(int a,int b,int c){
			this->a = a;
			this->b = b;
			this->c = c;
		}
		float area(){
			float s,A,cal;
			s = (a+b+c)/2.0;
			cal = (s*(s-a)*(s-b)*(s-c));
			A = sqrt(cal);
		}
		int perimeter(){
			return a+b+c;
		}
};
int main(){
	Triangle Tri(3,4,5);
	cout << "Area: " << Tri.area() << endl << "Perimeter: " << Tri.perimeter();
	return 0;
}
