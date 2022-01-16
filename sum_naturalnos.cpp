#include<iostream>
using namespace std;
class Sum{
	public:
		int sum(int num){
			if(num > 0){
				return num + sum(num - 1);
			}
			else{
				return 0;
			}
		}
};
int main(){
	Sum S;
	int number;
	cout << "Enter the number:" << endl;
	cin >> number;
	cout << "Sum:" << S.sum(number);
	return 0;
}
