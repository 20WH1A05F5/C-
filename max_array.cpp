#include<iostream>
using namespace std;
class Array{
	public:
		int maximum(int array[],int n){
			int i = 0,max = 0;
			for(i = 0;i < n;i++){
				if(array[i] > array[max]){
					max = i;
				}
			}
			return array[max];
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
	cout<<"Maximum:" << A.maximum(arr,n);
}
