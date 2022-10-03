// CPP program to find the only repeating
// element in an array where elements are
// from 1 to N-1.
#include <bits/stdc++.h>
using namespace std;

int findRepeating(int arr[], int N)
{

	// res is going to store value of
	// 1 ^ 2 ^ 3 .. ^ (N-1) ^ arr[0] ^
	// arr[1] ^ .... arr[N-1]
	int res = 0;
	for (int i = 0; i < N - 1; i++)
		res = res ^ (i + 1) ^ arr[i];
	res = res ^ arr[N - 1];
	return res;
}

// Driver code
int main()
{
	int arr[] = { 9, 8, 2, 6, 1, 8, 5, 3, 4, 7 };
	int N = sizeof(arr) / sizeof(arr[0]);
    int found=findRepeating(arr,N);
    cout<<found;
	// Function call
	//cout << findRepeating(arr, N);
	return 0;
}
