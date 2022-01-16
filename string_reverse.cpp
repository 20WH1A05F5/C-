#include<iostream>
#include<string>
using namespace std;
void reverse(string &str,int i = 0){
	int n = str.size();
	char t;
	if(i == n/2){
		return;
	}
	t = str[i];
	str[i] = str[n-i-1];
	str[n-i-1] = t;
	reverse(str,i+1);
}
int main(){
	string str;
	cout << "Enter the string:" << endl;
	getline(cin,str);
	reverse(str);
	cout<<"The reversed string is :"<<str;
	return 0;
}
