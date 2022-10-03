#include <iostream>
using namespace std;
int main(){
// int a=5;
// int* ptr=&a;
// cout<<*(ptr)<<endl;
// float *p =  float(20.22);
// cout<<"The value of adress p is:"<<*(p);
   int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;
    return 0;
}