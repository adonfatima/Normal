#include<bits/stdc++.h>
using namespace std;
int main()
{
    ///lifo for example plate
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.pop();///will delete 1st top value
    while(st.size()>0){
    cout<<st.top()<<endl;
    st.pop();
    }

    cout<<st.size()<<endl;
    if(st.empty())
        cout<<"emp"<<endl;
    else
        cout<<"not"<<endl;



}
