#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    cout<< "Enter element number :";
    int n,number,sum=0;
    cin>>n;
    cout<< "Enter your element :"<<endl;
    for(int i=0;i<n;i++) {
        cin>>number;
        v.push_back(number);
    }
    for(int i=0;i<v.size();i++) {
        sum=sum+v[i];
    }
    cout<<"Sum is :"<<sum<<endl;
    return 0;
}
