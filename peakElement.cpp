#include<bits/stdc++.h>
using namespace std;
int main()
{
    /* For simple solution (All distinct element) */
    int N;
    cin>>N;
    int Array[N];
    for(int i=0;i<N;i++){
        cin>>Array[i];
    }

    if(Array[0]>Array[1]){ // If The first Element is Peak
        cout<<Array[0]<<" ";
    }

    for(int i=0;i<N-1;i++){
        if(A[i]>A[i-1] && A[i]>A[i+1]){ // If Intermediary elements are peak
            cout<<A[i]<<" ";
        }
    }

    if(Array[N-1]>Array[N-2]){ // If the last element is Peak
        cout<<Array[N-1]<<" ";
    }


}
