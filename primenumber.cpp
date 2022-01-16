#include<iostream>
using namespace std;
class Prime{
	public:
		int prime(int num){
			int i,found = 0,count = 0;
			if(num == 1){
				count = 1;
			}
			else{
				for(i = 1; i <= num; i++){
					if(num % i == 0){
						count++;
					}
				}
			}
			return count;
		}
};
int main(){
	Prime P;
	int num,x;
	cout << "Enter a number:" << endl;
	cin >> num;
	x = P.prime(num);
	if(x == 2){
		cout<<"Prime number";
	}
	else if(x == 1){
		if(num == 1){
			cout<<"neither a prime number nor compsite";
		}
		else{
			cout<<"Prime number";
		}
	}
	else{
		cout<<"Not a prime number";
	}
	return 0;
}
