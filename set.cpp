#include<bits/stdc++.h>
using namespace std;
int main()
{
    //same value multiple times not valid
    //sorted value
    set<int>s;///set<int,greater<int> >s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(2);//2 will not print
    s.erase(2);
    int c=s.count(2);
    cout<<c<<endl;

   // s.clear();//emp

    set<int>::iterator it;
    it=s.find(3);
    if(it!=s.end())cout<<"find"<<endl;
    else cout<<"not find"<<endl;
    for(it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<s.size()<<endl;
    cout<<s.max_size()<<endl;

    for(auto it:s)cout<<it<<" ";
    cout<<endl;
    if(s.empty())cout<<"emp"<<endl;
    else cout<<"not emp"<<endl;
}
