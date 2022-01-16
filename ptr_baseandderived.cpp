#include<iostream>
using namespace std;

class base{
	public:
		display(){
			cout << "This is base class"<< endl;
		}
};
class derived:public base{
	public:
		display1(){
			cout << "This is derived class"<< endl;
		}
};
int main(){
	derived *d;
	d -> display();
	d -> display1();
	return 0;
}
