#include<iostream>
#include<string>

using namespace std;
int main()
{ int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        int m,count1=0,count2=0;
        char S1;
        cin>>m;
        for(int j=0; j<m; j++)
        {
            cin>>S1;
            if(S1== 'a'|| S1== 'A'|| S1== 'o'||S1=='O'||S1=='e'|| S1== 'E'|| S1== 'i'||S1=='I'||S1=='u'||S1=='U')
            {
                count1++;
            }



        }

        char S2;
        for(int j=0; j<m; j++)
        {
            cin>>S2;
            if(S2== 'a'|| S2== 'A'|| S2== 'o'||S2=='O'||S2=='e'|| S2== 'E'|| S2== 'i'||S2=='I'||S2=='u'||S2=='U')
            {
                count2++;
            }



        }
        if(count1>count2)
            cout<<"First String"<<endl;
        else if(count2>count1)
            cout<<"Second String"<<endl;
        else cout<<"Equal"<<endl;

    }
    return 0;

}
