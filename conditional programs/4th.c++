/*#include <iostream>
using namespace std;
 bool isEven(int num){
    if(num%2==0){
        return 1;
    } 
    else {
    return 0;
 }
 }
int main(){
int num;
cout<<"Enter any integer:";
cin>>num;
 if (isEven(num)){
cout<<"even";
 }
 else{
    cout<<"odd";
 }

return 0;
}*/
#include <iostream>
using namespace std;

bool isEven(int n) { 
    return (n % 2 == 0);
 }
 
int main()
{
    int n;
    cout<<"ENter any positive number:";
    cin>>n;
    isEven(n) ? cout << "Even" : cout << "Odd";
 
    return 0;
}