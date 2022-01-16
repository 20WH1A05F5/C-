#include<iostream>
using namespace std;
class A{
	public:
		int x;
};
class B:public A{
	public:
		int y;
};
class C:public B{
	public:
		int z;
};
int main(){
	C c;
	c.x = 10;
	c.y = 11;
	c.z = 12;
	cout<<"x="<<c.x<<endl;
	cout<<"y="<<c.y<<endl;
	cout<<"z="<<c.z<<endl;
	return 0;
}
