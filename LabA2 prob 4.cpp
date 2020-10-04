#include<iostream>
int main()
{
    int n,total_operations=0,add=0,sub=0;  //variable initialization
    std::cout<<"Enter a number to create array of size n :\n";  //user input to create array of size n
    std::cin>>n;
    int arr[n];
    std::cout<<"Enter array elements:";
    for(int i=0; i<n; i++)
    {
        std::cin>>arr[i];   //reading user input for arr value based on index
    }
    for(int k=0; k<n; k++)
    {
        while(arr[k]!=n)   //while loop execute until the condition arr[k]!=n becomes true
        {
            if(arr[k]<n)       //if condition to check if element in array is than user input n
                // if true it adds 1 to equalize the element to n
            {
                arr[k] = arr[k]+1;
                add++; //addition counter
            }
            else
            {
                arr[k] = arr[k]-1;      // if condition fails then we substract 1 from array element to equalize to n ;
                sub++;  //substraction counter
            }
        }
    }

    total_operations = add + sub;  //total count
    std::cout<<"Minimum operations required to equalize array:"<<total_operations;  //print total operations (add or sub) required to equalize array
    return 0;
}
