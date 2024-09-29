#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>li;
    li.push_back(1);
      li.push_back(2);
        li.push_back(3);
         li.push_back(4);

    ///li.insert(li.begin(),5);
    list<int>::iterator it;
    it=li.begin();
    advance(it,3);
    li.insert(it,2,5);

    for(auto it:li){
        cout<<it<<" ";
    }
    cout<<endl;
}
