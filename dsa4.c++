//BinarySEARCH
#include <iostream>
using namespace std;
 
int binarySearch(int arr[], int size, int element){
    int low, mid, high;
    low = 0;
    high = size-1;
    // Keep searching until low <= high
    while(low<=high){
        mid = (low + high)/2;
        if(arr[mid] == element){
            return mid;
        }
        if(arr[mid]<element){
            low = mid+1;
        }
        else{
            high = mid -1;
        }
    } 
    return -1;
    
}
 
int main(){
    int arr[] = {1,3,5,56,64,73,123,225,444};
    int size = sizeof(arr)/sizeof(int);
    int element = 444;
    int searchIndex = binarySearch(arr, size, element);
    cout<<"The element was found at index::"<<searchIndex;
    return 0;
}
