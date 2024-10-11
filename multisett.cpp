#include<bits/stdc++.h>
using namespace std;
int main()
{
    ///duplicate value will be shown,sorted
    multiset<int>ms;///for decending multiset<int,greater<int>>ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);
    ms.insert(3);
    ms.insert(5);
    ///ms.clear();
    ms.erase(2);//or
    auto it=ms.begin();
    advance(it,3);
    ms.erase(it);



    cout<<ms.size()<<endl;
    cout<<ms.max_size()<<endl;
    for(auto it:ms)cout<<it<<" ";
    cout<<endl;
    if(ms.empty())cout<<"emp"<<endl;
    else cout<<"not emp"<<endl;

}
