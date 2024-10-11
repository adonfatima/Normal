#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>mp;///key or index 1st int,next will be value
    mp.insert({1,10});
    mp.insert({2,20});
    mp.insert({3,30});
    mp.insert({4,40});

//mp[1]=10;
   // cout<<mp[1]<<endl;
   // cout<<mp.size()<<endl;
  // cout<<mp.max_size()<<endl;
  mp.clear();
  if(mp.empty())cout<<"emp"<<endl;
  else cout<<"not emp"<<endl;
   for(auto it:mp){
    cout<<it.first<<" "<<it.second<<endl;
   }

   ///map<int,int>::iterator it;
   //for(it=mp.begin();it!=mp.end();it++){
   // cout<<it->first<<" "<<it->second<<endl;
   //}



}
