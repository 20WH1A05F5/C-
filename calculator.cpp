#include <iostream>
using namespace std;
class Calculator{
	float a, b;
	public:
		Calculator(float a, float b){
			this -> a = a;
			this -> b = b;
		}
		float add(){
			return a+b;
		}
		float sub(){
			return a-b;
		}
		float mul(){
			return a*b;
		}
		float div(){
			return a/b;
		}
};
int main() {
	float a, b;
	char ch;
	cout << "Enter the numbers" << endl;
	cin >> a >> b;
	cout << "Enter an operation" << endl;
	cin >> ch;
	Calculator cal(a,b);
   switch (ch) {
      case '+': {
         cout << "Sum:" << cal.add() << endl;
         break;
      }
      case '-': {
         cout << "Difference:" << cal.sub() << endl;
         break;
      }
      case '*': {
         cout << "Product:" << cal.mul() << endl;
         break;
      }
      case '/': {
         cout << "Quotient:" << cal.div() << endl;
         break;
      }
      default:
      cout << "Invalid Input" << endl;
   }
   return 0;
}
