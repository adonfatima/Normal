#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s={1,2,4,5,6};
    for(auto it:s)cout<<it<<" ";
    cout<<endl;
    //lower_bound
    set<int>::iterator it;
    //it=s.lower_bound(2);///if 2 is not present 2 will print greater val
    //it=s.lower_bound(8);
    it=s.upper_bound(5);///5 greater value
    if(it==s.end()){
        cout<<"The element is larger "<<endl;
    }
    else {
        cout<<"the lower is 8"<<*it<<endl;
    }

}
