//Insertion in an array
#include <iostream>
using namespace std;
void display(int arr[],int n)
{
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
}
int insertion(int arr[],int size,int element,int index,int capacity){
    if(size>=capacity){
        return -1;
    }
    for(int i = size-1;i>=index;i--){
     arr[i+1]=arr[i];
    }
    arr[index]=element;
    return 1;
}
int main(){
    int arr[100]={5,6,2,8,7};
    int size=5,element=4, index=0;
    display(arr,size);
    insertion(arr,size,element,index,100);
    size +=1;
    display(arr,size);

return 0;
}