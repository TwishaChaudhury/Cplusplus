#include <iostream>
#include<string>
using namespace std;

int main()
{
    int n;//number of array value
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m;//number of condition check
    cin>>m;
    for(int i=1;i<=m;i++){

          int sum=0,x;
          cin>>x;
          for(int j=0;j<n;j++){
              int count=0;
                 for(int k=1;k<=a[j]/2;k++){
                     if(a[j]%k==0){
                        count+=1;
                        if(count>x)
                            break;
                    }
                }
                if(count+1 <=x)
                    sum +=a[j];
            }
        cout<<sum<<endl;
    }

    return 0;
}
