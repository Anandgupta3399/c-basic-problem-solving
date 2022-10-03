#include <iostream>
using namespace std;
int main(){
    int a,b,temp;
    cout<<"Enter the value of a is:";
    cin>>a;
    cout<<"Enter the value of b is:";
    cin>>b;
    cout<<"Before swaping"<<endl<<" the value of a is:"<<a<<endl<<"the value of b is:"<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"After swaping"<<endl<<" the value of a is:"<<a<<endl<<"the value of b is:"<<b<<endl;
return 0;
}