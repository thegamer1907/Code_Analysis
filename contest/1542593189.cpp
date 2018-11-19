#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s0;
    bool flag,flag1,flag2;
    int n;
    cin>>s;flag=false;
    flag1=flag2=false;
    cin>>n;
    while(n--)
    {
        cin>>s0;
        if (s0==s) flag=true;
        if (s0[1]==s[0]) flag1=true;
        if (s0[0]==s[1]) flag2=true;
    }
    if (flag1 && flag2) flag=true;
    if (flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
