#include<iostream>
#include<cmath>
using namespace std;
class sum{
	public:
	int number,n1,n2,count;
   int decimal(int n){
       int dec = 0, base = 1;
       int last, temp;
      temp = n;
      while(temp > 0){
        last = temp % 10;
          dec = dec + last * base;
          base = base * 2;
          temp = temp / 10;
      }
      return dec;
  }
  int binary(int num){
      int base = 1,sum = 0,rem;
      while(num > 0){
      	rem = num % 2;
      	num = num/2;
      	sum = sum + rem * base;
      	base = base * 10;
	  }
	  return sum;
      
  }
};
int main(){
     sum A;
     int x;
      cout<<"1.Decimal to binary"<<endl<<"2.Binary to decimal"<<endl;
      cin>>x;
      switch(x){
      	case 1:{
      		cout<<"Enter a Decimal number"<<endl;
      		cin>>A.number;
			cout<<A.binary(A.number);
			break;
		  }
		case 2:{
			cout<<"Enter a Binary number"<<endl;
			cin>>A.number;
      		cout<<A.decimal(A.number);
			break;
		}
		default:{
			cout<<"Invalid";
			break;
		}
	  }
      return 0;
}
