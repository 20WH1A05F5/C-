#include<iostream>
using namespace std;
class Volume{
	float l,b,h;
	public:
		Volume(float x,float y,float z):l{x},b{y},h{z}
		{
		
		}
		float volume(float l,float b,float h){
			return l*b*h;
		}
};
int main(){
	float l,b,h;
	cout << "Enter l, b, h" << endl;
	cin >> l >> b >> h;
	Volume V(l,b,h);
	cout << "Volume: " << V.volume(l,b,h);
}
