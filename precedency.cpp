#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=5,b=3,c=4;
    cout<<a+b*c<<endl;//4*3+5=17 multiplication has higher precedence than addition output:17
    cout<<(a+b)*c<<endl;//5+3thn *c parentheses enforce addition first,then multiplication output:32
    cout<<a-b+c<<endl;//subtraction and addition have same precedence so left associatively output:6
    cout<<(a<<b+c)<<endl;//addition has higher precedence than bitwise shift output:640
    cout<<(a*b/c)<<endl;//left associatively  output:3
    cout<<(a/b*c)<<endl;//left "  output:4
    cout<<(a|b&c)<<endl;//bitwise and has higher precedence than bitwise or output:5
    cout<<(a^b |c)<<endl;//bitwise xor has higher precedence than bitwise or output:6
    cout<<(a^b&c)<<endl;//bitwise and has higher precedence than bitwise xor output:5
    cout<<(a+b==c)<<endl;//addition has higher precedence than comparision output:0
    cout<<(a&b==3)<<endl;//  comparision  has higher precedence than and output:1
    return 0;
}