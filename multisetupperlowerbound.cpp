#include<bits/stdc++.h>
using namespace std;
int main()
{
    ///duplicate value will be shown,sorted
    multiset<int>ms,ms2;///for decending multiset<int,greater<int>>ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);
    ms.insert(2);
    ms.insert(5);
    ms2=ms;
    for(auto it:ms2)cout<<it<<" ";
    cout<<endl;

//auto it=ms.lower_bound(3);//if not present print 3s grater value
    //cout<<*it<<endl;
   // auto it=ms.lower_bound(10);
   /// for(auto it1=it;it1!=ms.end();it1++){
    //    cout<<*it1<<" ";
   // }
    ///upper_bound will be greater then this value;
//     auto it=ms.upper_bound(5);
   // for(auto it1=it;it1!=ms.end();it1++){
     //   cout<<*it1<<" ";
    //}

}
