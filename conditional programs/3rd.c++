#include <iostream>
using namespace std;
int power(){
    int a,  b;
    cout<<"Enter the base and exponent:";
    cin>>a >>b;
    int ans=1;
    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    return ans;
}
int main(){
/*
int a,b;
cout<<"Enter two values:";
cin>>a >>b;
int answer = power(a,b);
cout<<"The answer is:"<<answer; */
int ans = power();
cout<<"The answer is:"<<ans<<endl;
ans = power();
cout<<"The answer is:"<<ans;


return 0;
}