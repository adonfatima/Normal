#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>li={1,2,3,4,5,6};
    list<int>::iterator it,it2;
    it=li.begin();
    it2=li.begin();

    advance(it2,3);

    li.erase(it,it2);
    for(auto it:li){
        cout<<it<<" ";
    }
    cout<<endl;
}
