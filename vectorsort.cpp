#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(100);
     v.push_back(20);
      v.push_back(300);
       v.push_back(5);
        v.push_back(10);
    cout<<"before sorting"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end());
     cout<<"after sorting"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;


}
