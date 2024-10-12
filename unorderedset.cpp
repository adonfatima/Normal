#include<bits/stdc++.h>
using namespace std;
int main()
{
    //set
    //1.unique 2.ordered
    //unordered set
    //1.unique 2.not in ordered bucket
    unordered_set<int>us,us2;
    us.insert(2);
      us.insert(1);
        us.insert(5);
          us.insert(3);
            us.insert(4);
             us.insert(2);
           // us2.insert(100);
           // us.swap(us2);
          // us2=us;

           // int cnt=us.count(1);
            //cout<<cnt<<endl;
           // unordered_set<int>::iterator it;
           // for(it=us.begin();it!=us.end();it++){
           //     cout<<*it<<" ";//1st bucket printed 4
           // }
           //us.erase(1);
           //for(auto it:us)cout<<it<<endl;

           //auto it=us.find(10);
           //if(it!=us.end())cout<<"find"<<endl;
           //else cout<<"not find"<<endl;
           //us.clear();
         //  cout<<us.size()<<endl;
         //if(us.empty())cout<<"emp"<<endl;
         //else cout<<"not"<<endl;
         cout<<us.bucket_count()<<endl;
         cout<<us.bucket(4)<<endl;
         cout<<us.bucket_size(1)<<endl;


}
