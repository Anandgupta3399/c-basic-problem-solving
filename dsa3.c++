//Linear search
#include <iostream>
using namespace std;
 
int linearSearch(int arr[], int size, int key){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    //Unsorted array for linear search
    int arr[] = {1,3,5,56,4,3,23,5,4,54634,56,34};
    int size = sizeof(arr)/sizeof(int);
    int key =56;
    int searchindex=linearSearch(arr,size,key);
    cout<<"The element was found at index::"<<searchindex;
    return 0;
}
