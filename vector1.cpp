#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    vector<int>v2;
    v2.push_back(1);
    v2.push_back(2);
    v2.push_back(3);
    cout<<"before swaping"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<v2.size();i++){
            cout<<v2[i]<<" ";
    }
    cout<<endl;
    cout<<"after swaping "<<endl;
    swap(v,v2);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<v2.size();i++){
            cout<<v2[i]<<" ";
    }
    cout<<endl;

   /// for(int i=0;i<v.size();i++){
     ///   cout<<v[i]<<" ";
    ///}
    ///cout<<endl;
///insert add
///v.insert(v.begin()+1,1);
///v.insert(v.begin()+2,3,1);
 //for(int i=0;i<v.size();i++){
  ///      cout<<v[i]<<" ";
  ///  }

}
