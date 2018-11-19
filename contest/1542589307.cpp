#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n; cin>>n;
    bool flag=0,f1=0,f2=0;
    for(int i=0; i<n; i++)
    {
        string ss;
        cin>>ss;
        if(ss == s) flag=1;
        if(ss[1] == s[0]) f1=1;
        if(ss[0] == s[1]) f2=1;
    }
    if(flag || (f1 && f2)) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}