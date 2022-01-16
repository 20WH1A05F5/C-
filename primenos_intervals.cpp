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
		void prime(int num1,int num2){
			int i,count = 0,t;
			if(num1 > num2){
				t = num1;
				num1 = num2;
				num2 = t;
			}
			cout<<"Prime numbers between "<<num1<<" and "<<num2 << ":" <<endl;
			for(i = num1 + 1;i <= num2; i++){
					if(prime(i) == 2 ){
						cout<<i<<endl;
					}
		}
	}
};
int main(){
	Prime P;
	int a,b;
	cout<<"Enter the intervals:"<<endl;
	cin>>a>>b;
	P.prime(a,b);
	return 0;
}
