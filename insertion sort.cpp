#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,index,counter=0;
    scanf("%d",&n); int ary[n];
    for(int i=0;i<n;i++) scanf("%d",&ary[i]);

    for(int i=1;i<n;i++){
        if(ary[i]<ary[i-1]){
            for(int j=i;j>0;j--){
                if(ary[j]<ary[j-1])
                swap(ary[j],ary[j-1]);
                else break;
            }
        }
    }


    for(int i=0;i<n;i++) printf("%d ",ary[i]);
    return 0;
}
