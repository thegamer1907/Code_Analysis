#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);cin.tie(0);
    int h,m,s,t1,t2,rt1=0,rt2=0;
    cin>>h>>m>>s>>t1>>t2;
    h%=12;
    t1%=12;
    t2%=12;
    h=h*3600 + m*60 +s;
    m=m*720 + s*12;
    s=s*720;
    t1*=3600;
    t2*=3600;
    int t=(t1+1)%43200;
    while(t!=t2)
    {
        if(t == h || t==m || t==s)
            break;
        t=(t+1)%43200;
    }
    if(t==t2) return cout<<"YES",0;
    swap(t1,t2);
    t=(t1+1)%43200;
    while(t!=t2)
    {
        if(t == h || t==m || t==s)
            break;
        t=(t+1)%43200;
    }
    if(t==t2) cout<<"YES";
    else cout<<"NO";
    return 0;
}