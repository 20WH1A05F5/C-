#include<iostream>
using namespace std;

class Matrix{
	public:
		void sum(){
		int arr1[10][10],arr2[10][10],sum[10][10];
		int i,j,n1,m1,n2,m2;
		cout<<"Enter number of columns and rows:"<< endl;
		cin>>n1>>m1;
		cout << "Enter the elements" << endl;
		for(i = 0; i < n1;i++){
			for(j = 0; j < m1;j++){
				cin>>arr1[i][j];
			}
		}
		cout<<"Enter number of columns and rows:"<< endl;
		cin>>n2>>m2;
		cout << "Enter the elements" << endl;
		for(i = 0; i < n2;i++){
			for(j = 0; j < m2;j++){
				cin>>arr2[i][j];
			}
		}
		cout<<"Sum"<<endl;
		for(i = 0; i < n1;i++){
			for(j = 0; j < m1;j++){
				sum[i][j] = arr1[i][j] + arr2[i][j];
			}
		}
		for(i = 0; i < n1;i++){
			for(j = 0; j < m1;j++){
				cout<<sum[i][j]<<" ";
			}
			cout<<endl;
		}	
	}
};
int main(){
	Matrix M;
	M.sum();
}
