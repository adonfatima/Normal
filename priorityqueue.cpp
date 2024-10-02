#include<bits/stdc++.h>
using namespace std;
int main()
{
    //large value will be in top pq;
    priority_queue<int>pq,pq1;
    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.push(4);

     pq1.push(5);
    pq1.push(6);
    pq1.push(7);
    pq.push(8);
    pq1.swap(pq1);

    //pq.pop();//top ke delete krbe
   // cout<<pq.top()<<endl;
   // cout<<pq.top()<<endl;
    //cout<<pq.size()<<endl;
    if(pq.empty())
        cout<<"emp"<<endl;
    else
        cout<<"no"<<endl;
        while(!pq.empty()){
            cout<<pq.top()<<endl;
            pq.pop();
        }
}
