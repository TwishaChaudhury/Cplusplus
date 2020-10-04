#include <bits/stdc++.h>
using namespace std;

int main()
{

   // Get the vector
   vector<int> a = {5, 5, 4,6, 7, 3,2 }; //for example

   int count=0; //declare the count variable
   int N=a.size(); //find the size of vector
   for (int i = 0; i <N; i++)
   {
   for (int j=i+1;j<N;j++)
   if(a[i]+a[j]==10) //check that pairs who have 10 as sum
   {
   count++;
   }
   }
       cout <<"number of pairs: "<<count; //print the number of pairs that have 10 as sum
}




