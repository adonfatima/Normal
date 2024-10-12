#include<bits/stdc++.h>
using namespace std;
int main()
{
    ///unorder map key val, o(n) time lower bucket crated
    //map o(log n)
    unordered_map<int,int>ump;
   // ump.insert({1,10});
    ump[1]=10;
    ump[2]=20;
    ump[3]=30;
    ump[4]=40;
    ump[5]=50;
    //for(auto it:ump)
      //  cout<<it.first<<" "<<it.second<<endl;
 //   for(auto it=ump.begin();it!=ump.end();it++){
   //     cout<<(*it).first<<" "<<(*it).second<<endl;
   // }
   cout<<ump.bucket_count()<<endl;
   cout<<ump.bucket(2)<<endl;
   cout<<ump.bucket_size(3)<<endl;
   cout<<ump.count(1)<<endl;
}
