#include<iostream>
using namespace std;
int i = 1,j = 2, k = 3;
void function(int x, int y, int z){
	int i,j,k;
	i = x;
	j = y;
	k = z;
	cout<<"local variables: "<<i<<" "<<j<<" "<<k<<" "<<endl;
	cout<<"Different scope: "<<::i<<" "<<::j<<" "<<::k<<" "<<endl;
}
int main(){
	int x,y,z;
	cout<<"Enter the values of i, j, k:"<<endl;
	cin>>x>>y>>z;
	function(x,y,z);
	return 0;
}
