#include <iostream>  
using namespace std;  
int main()  
{  
    int arr[5];   
    int *ptr[5]; 
    cout << "Enter five numbers :" << endl;  
    for(int i=0;i<5;i++){  
        cin >> arr[i];  
    }  
    for(int i=0;i<5;i++){  
        ptr[i]=&arr[i];   
    } 
    cout << "The values are" << endl;  
    for(int i=0;i<5;i++){  
        cout << *ptr[i] << endl;  
    }  
    return 0;
}
