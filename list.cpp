#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>li;
    li.push_back(1);///last
    li.push_back(2);
    li.push_back(3);
    li.push_front(4);//1st
    li.push_front(5);
    ///list can not print without iterator
    list<int>::iterator it;
   // for(it=li.begin();it!=li.end();it++){
    //    cout<<*it<<" ";
    //}
    for(auto it:li){ ///same work as 1st loop
        cout<<it<<" ";
    }
    cout<<endl;

}
