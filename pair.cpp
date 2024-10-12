#include<bits/stdc++.h>
using namespace std;
int main()
{
   // pair<int,int>p;//1st element 2nd element
    //p.first=10;
    //p.second=20;
    //cout<<p.first<<" "<<p.second<<endl;
    //pair<int,char>p1;//1st element 2nd element
    //p1.first=10;
    //p1.second='a';
    //cout<<p1.first<<" "<<p1.second<<endl;
    //pair<int,int>p2,p3;
    //p2.first=30;
    //p3.second=40;
    //p3=p2;
    //cout<<p2.first<<" "<<p3.second<<endl;
   // pair<int,int>p(10,20);
   // pair<int,int>p2(p);
   // cout<<p2.first<<" "<<p2.second<<endl;
   //pair<int,int>p;
   //pair<int,int>p2;
///p2=make_pair(10,20);
   // cout<<p2.first<<" "<<p2.second<<endl;
       pair<int,int>p(10,20);
   pair<int,int>p2(30,40);
   p.swap(p2);
   cout<<p2.first<<" "<<p2.second<<endl;
   if(p==p2)cout<<"YES"<<endl;
   else cout<<"no"<<endl;
    if(p!=p2)cout<<"YES"<<endl;
   else cout<<"no"<<endl;
   if(p>=p2)cout<<"YES"<<endl;
   else cout<<"no"<<endl;
   if(p<=p2)cout<<"YES"<<endl;
   else cout<<"no"<<endl;



}
