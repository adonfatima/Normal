#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>li;
    li.push_back(1);///last
    li.push_back(2);
    li.push_back(3);
    li.push_back(4);
    //li.pop_front();///1st value will be pop or delete
    //li.pop_back();///last value will be delete
    ///clear
////li.clear();

     for(auto it:li){ ///same work as 1st loop
        cout<<it<<" ";
    }
    cout<<endl;
    if(li.empty())cout<<"empty"<<endl;
    else cout<<"not"<<endl;
    cout<<li.size()<<endl;//list size

    ///cout<<li.front()<<endl;///1
///cout<<li.back()<<endl;///4

}
