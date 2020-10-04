
#include<bits/stdc++.h>
using namespace std;

/*
    STL
    1) String, 2) Vector
    3) Stack, 4) Queue, 5)Priority Queue, 6) Pair, 7) Set , 8)Map
*/
int main()
{
    /* Stack */
    // stack<int> st;

    // int M,N;
    // cin>>N;
    // for(int i=1;i<=N;i++){
    //     cin>>M;
    //     st.push(M);
    // }

    // cout<<"Top Element is - "<<st.top()<<endl;
    // st.pop();
    // cout<<"Top Element is - "<<st.top()<<endl;
    // cout<<"Current Stack Size "<<st.size()<<endl;



    /* Queue */

    // queue<int> q;

    // q.push(10);
    // q.push(20);
    // q.push(30);
    // q.push(40);

    // q.pop();

    // cout<<"Front value of Queue is - "<<q.front()<<endl;
    // cout<<"Size of the queue is - "<<q.size()<<endl;





    /* Priority Queue */

    // priority_queue <int> pq;

    // pq.push(10);
    // pq.push(5);
    // pq.push(50);
    // pq.push(34);
    // pq.push(15);

    // pq.pop();
    // // 10 5 50 34 15
    // // 50 34 15 10 5
    // cout<<"Front Element is - "<<pq.top()<<endl;
    // cout<<" Is Queue Empty ? "<<pq.empty()<<endl;



    /* Pair */
    // pair<int,string> pair_1;

    // pair_1 = make_pair(100,"UAP");
    // // pair_1.first = 100;
    // // pair_1.second = "UAP";

    // cout<<"First Value - "<<pair_1.first<<" Second Value -"<< pair_1.second<<endl;





    /* Set */

    // 1) All the datas will be sorted automatically in ascending order
    // 2) Set will contain only distinct elements

    // set<int> s;

    // s.insert(10);
    // s.insert(54);
    // s.insert(6);
    // s.insert(12);
    // s.insert(54);
    // s.insert(10);
    // s.insert(54);
    // s.insert(7);

    // s.erase(50);

    // for(auto i: s){
    //     cout<<i<<" ";
    // }



    /* Map */

    map<string, int> Marks;

    Marks["Shopon"] = 10;

    Marks["XYZ"] = 20;

    Marks["XYZ"] = 40;

    Marks["Shopon"] += 20;

    cout<<"Value of XYZ is "<< Marks["XYZ"];

}
