// A C++ program to find a peak element
#include <bits/stdc++.h>
using namespace std;

// Find the peak element in the array
void findPeak(int arr[], int n)
{
	// first or last element is peak element

	if (arr[0] >= arr[1])
		cout<< arr[0];
	if (arr[n - 1] >= arr[n - 2])
		cout<< arr[n - 1];

	// check for every other element
	for (int i = 1; i < n - 1; i++) {

		// check if the neighbors are smaller
		if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1])
			cout<< arr[i];
	}
}

// Driver Code
int main()
{
    int n;
    cin>>n;
	int arr[n];
  	for (int i=0;i<n;i++)
      cin>>arr[i];
	findPeak(arr, n);
	return 0;
}

// This code is contributed by Arnab Kundu

