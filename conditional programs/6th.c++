#include <iostream>
using namespace std;

void printvalue(int n)
{
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    printvalue(n);

return 0;
}