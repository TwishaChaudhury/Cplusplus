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
    // 9,9,10,7,8,8,8,8,8
    int first_Check;
    int First = 0;
    int Peak = -1;

    while(Array[First]==Array[First+1] && First<N){
        First++;
    }
    if(Array[First]>Array[First+1] || First==N-1){
        Peak = 1;
    }

    for(int i=0;i<N;i++){
        if(i==0){
            if(Peak == 1){
                cout<<Array[i]<<" ";
            }
        }else if(i==N-1){
            if(Array[i]>Array[i-1] || (Peak==1 && !(Array[i-1]>Array[i]))){
                cout<<Array[i]<<" ";
            }
        }else if(Array[i]>Array[i-1] && Array[i]>Array[i+1]){
            cout<<Array[i]<<" ";
            Peak = 1;
        }else if(Array[i]==Array[i-1] && Array[i]>Array[i+1] && Peak == 1){
            cout<<Array[i]<<" ";
            Peak = 1;
        }else if(Array[i]>Array[i-1] && Array[i]==Array[i+1]){
            cout<<Array[i]<<" ";
            Peak = 1;
        }else if(Array[i]==Array[i-1] && Array[i]==Array[i+1]){
            if(Peak==1){
                cout<<Array[i]<<" ";
            }
        }else{
            Peak = -1;
        }
    }



}

