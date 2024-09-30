#include<bits/stdc++.h>
using namespace std;
int main()
{
    ///deque has extra work but vector has not
    deque<int>dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);
    dq.push_back(4);
    //dq.pop_front();//1st value will delete
    ///dq.pop_back();
    ///dq.clear();
    deque<int>::iterator it;
    it=dq.begin()+2;
    //dq.erase(it);
    dq.insert(it,8);

    cout<<dq.size()<<endl;
    for(int i=0;i<dq.size();i++){
        cout<<dq[i]<<endl;
    }
    ///cout<<dq.front()<<endl;
    //cout<<dq.back()<<endl;
   // if(dq.empty())cout<<"emp"<<endl;
   // else cout<<"np"<<endl;
}
