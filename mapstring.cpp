#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,string>mp;///key or index 1st int,next will be value
    mp.insert({1,"abab"});
    mp.insert({2,"bbab"});
    mp.insert({3,"cdcd"});
    mp.insert({4,"dada"});
for(auto it:mp){
    cout<<it.first<<" "<<it.second<<endl;
}
}
