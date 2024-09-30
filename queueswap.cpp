#include<bits/stdc++.h>
using namespace std;
int  main()

{
    queue<int>q,q1;
    q.push(1);
    q.push(2);

    q1.push(3);
    q1.push(4);
    q.swap(q1);
    while(q.size()>0){
        cout<<q.front()<<" ";
        q.pop();
    }
}
