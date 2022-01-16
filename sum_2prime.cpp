#include<iostream>
using namespace std;
class Prime{
	public:
		int prime(int num){
			int i,found = 0,count = 0;
			if(num == 0 || num == 1){
				found == 1;
			}
			else{
				for(i = 2;i < num; i++){
				if(num % i == 0){
					count++;
					found = 1;
				}
			}
		}
		return found;
	}
	void sumPrime(int num){
		int i;
		for(i = 0;i < (num + 2)/2; i++){
				if(prime(i) == 0 && prime(num - i) == 0){
					cout<<num<<" = "<<i<<" + "<<num - i<<endl;
				}
		}
	}
};
int main(){
	int num;
	cout << "Enter the number:" << endl;
	cin>>num;
	Prime P;
	P.sumPrime(num);
	return 0;
}
