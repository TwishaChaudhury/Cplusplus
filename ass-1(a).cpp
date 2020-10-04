#include<bits/stdc++.h>
using namespace std;
int main()//sum of 2 array devided by 3??
{
    int i,j,n,counter=0;

    scanf("%d",&n);

    int array[n];

    for(i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=0; (j<n && i!=j); j++)
        {
            if((array[i]+array[j])%3==0)
                counter++;
        }


    }
    printf("%d",counter);

    return 0;
}

