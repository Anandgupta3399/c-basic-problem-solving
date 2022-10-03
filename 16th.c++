#include <iostream>
#include<math.h>
using namespace std;
int main(){
int a,b,result;
cout<<"Enter the base:";
cin>>a;
cout<<"Enter the exponent:";
cin>>b;
result = pow(a,b);
cout<<"The power of number [ "<<a<<" ^ "<<b<<" ]="<<result<<endl;  
return 0;
}