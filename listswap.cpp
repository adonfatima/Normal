
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>li={1,1,1,2,2,2,3,4,5,11,6};
    list<int>li2={3,4,5,6,7};

li.swap(li2);
      for(auto it:li){
        cout<<it<<" ";
    }
    cout<<endl;
    for(auto it:li2){
        cout<<it<<" ";
    }
    cout<<endl;
}
