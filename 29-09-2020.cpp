#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    string s;

    scanf("%d%d",&n);

    map<string,int> mapping;
    while(n--)
    {
        cin>>s;

        if(!mapping[s])
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;

        mapping[s]++;
    }

    return 0;
}
