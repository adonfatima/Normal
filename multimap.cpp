#include<bits/stdc++.h>
using namespace std;
int main()
{
    multimap<int,int>mp;///key ,keys value
    mp.insert({1,10});
    mp.insert({2,20});
    mp.insert({3,30});
    mp.insert({4,40});
    mp.insert({5,50});
    mp.insert({1,60});
    mp.erase(1);///1 keys val will be finished
    auto it=mp.begin();
    advance(it,5);
    mp.erase(it);
    ///mp.clear();
//    auto it=mp.find(100);
    if(it!=mp.end())cout<<"find"<<endl;
    else cout<<"not"<<endl;
//    auto it=mp.lower_bound(2);
    cout<<(*it).first<<" "<<(*it).second<<endl;
    cout<<mp.count(1)<<endl;

    cout<<mp.size()<<endl;
    cout<<mp.max_size()<<endl;
   /// multimap<int,int>::iterator it;

    ///for(it=mp.begin();it!=mp.end();it++)
    //{

      //  cout<<(*it).first<<"  "<<(*it).second<<endl;
    //}
    if(mp.empty())cout<<"EMP"<<endl;
    else cout<<"NO"<<endl;
    for (auto it:mp){ ///1 way for output
        cout<<it.first<<" "<<it.second<<endl;
    }

}
