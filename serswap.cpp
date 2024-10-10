#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s={1,2,3,4,5,6};
    set<int>s1={5,6,7,8};
    s1=s;
    s.swap(s1);
    for(auto it:s)cout<<it<<" "<<endl;
}
