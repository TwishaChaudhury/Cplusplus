#include<bits./stdc++.h>
using namespace std;
int main()
{
    int i,j,array_size,key;
    int count=0;
    scanf("%d",&array_size);
    int array[array_size];
    for(i=0; i<array_size; i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=1; i<array_size; i++)
    {
        key=array[i];
        j=i-1;

        while(j>=0&&array[j]>key)
        {
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=key;

    }


    for(i=0; i<array_size; i++)
    {
        printf("%d",array[i]);
    }

}
