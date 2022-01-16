#include<iostream>
using namespace std;
class Array{
	public:
		float average(int array[],int n){
			int i = 0;
			float sum = 0;
			for(i = 0;i < n;i++){
				sum = sum + array[i];
				}
			return sum/n;
		}
};
int main(){
	Array A;
	int arr[10],i,n;
	cout<<"No.of elements:" << endl;
	cin>>n;
	cout<<"Enter the elements:" << endl;
	for(i = 0; i < n; i++){
		cin>>arr[i];
	}
	cout<< "Average:" <<A.average(arr,n);
}
