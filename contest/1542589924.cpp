#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);cin.tie(0);
    string s1,s2,s;
    int n,a=0,b=0,c=0,d=0;
    s2="";
    cin>>s1>>n;
    while(n--)
    {
        cin>>s;
        if(s==s1)
            return cout<<"YES",0;
        if(s[0] == s1[1])
            a=1;
        if(s[1] == s1[0])
            b=1;
    }
    if(a&&b)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}