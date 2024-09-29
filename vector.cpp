#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(1);//for keeping data v[0];
    v.push_back(2);//v[1];
     v.push_back(3);//v[2];
      v.push_back(4);//v[3];
       v.push_back(5);//v[4];
       ///how to print vector value
       cout<<v[0]<<endl;
       cout<<v[1]<<endl;
       cout<<v[6]<<endl; ///0 print
    //other way to print
    cout<<v.at(0)<<endl;
   /// cout<<v.at(6)<<endl;///out of range print
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    cout<<endl;
    //front size or 1st value
    cout<<v.front()<<endl;
    //back function last value
    cout<<v.back()<<endl;
    ///
    cout<<v.size()<<endl;
   ///v.clear();
    cout<<v.size()<<endl;//after clear it will be 0
    //empty or not
    ///if(v.empty())cout<<"empty"<<endl;
    ///else cout<<"not empty"<<endl;
    v.pop_back();// last value dlt
    for(int i =0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    //erase 1 value will delete
   ///v.erase(v.begin()+0);
v.erase(v.begin()+2,v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

}
