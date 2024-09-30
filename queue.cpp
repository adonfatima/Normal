#include<bits/stdc++.h>
using namespace std;
int main()
{
   ///1st in 1st out Queue push 1st then 1st pop FIFO
   queue<int>q;
   q.push(1);
   q.push(2);
   q.push(3);
   while(!q.empty())
   {
       cout<<q.front()<<" ";
       q.pop();
   }

   cout<<q.size()<<endl;
   q.pop();
   cout<<q.front()<<endl;
   if(q.empty())cout<<"emp"<<endl;
   else cout<<"not emp"<<endl;

}
