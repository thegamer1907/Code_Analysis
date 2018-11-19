#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k1,k2;
    string s, ss;
    cin>>s;
    cin>>n;
    k1=0;
    k2=0;
    while(n--)
    {
        cin>>ss;
        if(ss==s){cout<<"YES";exit(0);}
        if(ss[1]==s[0])k1=1;
        if(ss[0]==s[1])k2=1;
    }
    if(k1==1&&k2==1)cout<<"YES";
    else cout<<"NO";
}
