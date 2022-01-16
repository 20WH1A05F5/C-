#include<iostream>
using namespace std;
class GCD{
	public:
		int gcd(int n1,int n2){
			if(n2 != 0){
				return gcd(n2, n1 % n2);
			}
			else{
				return n1;
			}
		}
};
int main(){
	GCD g;
	int num1,num2,x;
	cin>>num1>>num2;
	x = g.gcd(num1,num2);
	cout<<x;
	return 0;
}
