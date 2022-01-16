#include<iostream>
using namespace std;

class base{
	public:
		display(){
			cout << "We have used pointer"<< endl;
		}
};
int main(){
	base *b;
	b -> display();
	return 0;
}
