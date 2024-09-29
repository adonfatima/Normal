#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>li={1,2,3,4,5};
    list<int>li2={3,4,5,6,7};
    li.merge(li2);
    for(auto it:li){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<li2.size()<<endl;

}

