#include <iostream>

using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r)
    {
        int m = l + (r - l) / 2;

// Check if x is present at mid
        if (arr[m] == x)
            return m;

// If x greater, ignore left half
        if (arr[m] < x)
            l = m + 1;

// If x is smaller, ignore right half
        else
            r = m - 1;
    }

// if we reach here, then element was not present
    return -1;
}

int search(int arr[], int n)
{
//searching the missing value
    for(int i = 0; i<n; i++)
//if value is not present in the array then it will return that value
        if(binarySearch(arr,0, n-1, i) == -1)
            return(i);

// we reach here if all the vslue is present in the array
//we return the next element, i.e. size of array
    return n;
}

int main()
{
    int n;

//input size of array
    cin>>n;

    int arr[n];

//Taking input sorted array
    for(int i=0; i < n; i++)
        cin>>arr[i];

//printing the smallest missing value
    cout<<search(arr, n);

    return 0;
}
