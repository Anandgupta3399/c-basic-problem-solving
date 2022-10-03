#include <iostream>
using namespace std;
int main(){
    int i,num, first, second, next;

    first=0;
    second=1;

    cout<<"How many terms u want to Display :: ";
    cin>>num;

    cout<<"\nThe Fibonacci series for [ "<<num<<" ] terms are :: \n\n";
    for(i=0; i<num; i++)
    {
        cout<<" "<<first<<" ";
        next = first + second;
        first = second;
        second = next;
    }

    cout<<"\n";

return 0;
}