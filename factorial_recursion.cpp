#include<iostream>
using namespace std;
class Factorial{
	public:
		int fact(int num){
			if(num != 1){
				return num * fact(num - 1);
			}
			else{
				return 1;
			}
		}
};
int main(){
	Factorial F;
	int number,x;
	cout << "Enter the number" << endl;
	cin >> number;
	x = F.fact(number);
	cout << "Factorial:" <<x;
	return 0;
}
