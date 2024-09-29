#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>li={1,1,1,2,2,2,3,4,5,11,6};
    li.reverse();///rev
    li.remove(2);
    li.sort();//sort
    li.unique();

     for(auto it:li){
        cout<<it<<" ";
    }
    cout<<endl;
}
