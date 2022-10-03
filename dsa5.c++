// find single element in an array
#include <iostream>
using namespace std;
int findsingle(int arr[],int n){
    int res = arr[0];
    for (int i =1; i<n; i++){
        res = res^arr[i];
        return res;
    }
}
int main(){
int arr[]={2,4,5,4,5};
int size = sizeof(arr)/sizeof(arr[0]);
 int found = findsingle(arr,size);
cout<<"Element occuring once is:"<<found;
return 0;
}