#include <iostream>
using namespace std;

class Average{
    public:
    static float aver(float a, float b, float c){
        return (a + b + c) / 3;
    }
};
int main(){
	float a, b, c;
    cout << "Enter three numbers:" << endl;
    cin >> a >> b >> c;
    cout << "Average:" << Average::aver(a,b,c)<<endl;
    return 0;
}
