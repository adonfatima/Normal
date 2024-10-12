#include<bits/stdc++.h>
using  namespace std;
int  main()
{
    unordered_multimap<int,int>umm;
    umm.insert({1,10});
     umm.insert({2,20});
      umm.insert({1,30});
      umm.insert({2,40});
       umm.insert({3,50});
        umm.insert({4,60});
        for(auto it:umm){
            cout<<it.first <<" "<<it.second<<endl;
        }
        cout<<umm.count(1)<<endl;

}
