#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>mp;///key will be unique always
    mp[1]=10;
    mp[2]=20;
    mp[3]=30;
    mp[4]=40;

    ///mp.erase(3);
    ///int cnt=mp.count(1);
    ///cout<<cnt<<endl;
    //auto it=mp.find(2);
    //if(it!=mp.end())cout<<"f"<<endl;
    //else cout<<"N F"<<endl;

    //for(auto it:mp)
      ///  cout<<it.first<<" "<<it.second<<endl;
    //  auto it=mp.lower_bound(1);
     // cout<<(*it).first<<" "<<(*it).second<<endl;
      auto it=mp.upper_bound(1);
      cout<<(*it).first<<" "<<(*it).second<<endl;
}
