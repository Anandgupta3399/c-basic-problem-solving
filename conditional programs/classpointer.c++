#include <iostream>
using namespace std;
class complex{
    int real,imaginary;
    public:
    void getData(){
        cout<<"The real part is:"<<real<<endl;
        cout<<"The imaginary part is:"<<imaginary<<endl;
    }
    void setData(int a, int b){
        real = a;
        imaginary = b;
    }
};

int main(){
// complex *ptr = new complex;
// (*ptr).setData(3,55);
// (*ptr).getData();
 complex *ptr1 = new complex; 
    ptr1->setData(1, 4); 
    ptr1->getData();
return 0;
}