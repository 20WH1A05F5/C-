#include<iostream>
using namespace std;
class Power{
	public:
		int power(int num,int pow){
			if(pow != 0 && pow != 1){
				return (num*power(num,pow-1));
			}
			else if(pow == 1){
				return num;
			}
			else if(pow == 0){
				return 1;
			}
		}
};
int main(){
	Power p;
	int num,power,x;
	cout << " Enter the number and exponent" << endl;
	cin>>num>>power;
	x = p.power(num,power);
	cout<< "Answer:" << x;
	return 0;
}
