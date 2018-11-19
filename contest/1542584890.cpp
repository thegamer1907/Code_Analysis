#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

const int M=1e9+3;

ll powmod(ll a,ll b) {ll res=1;a%=M; assert(b>=0); for(;b;b>>=1){if(b&1)res=res*a%M;a=a*a%M;}return res%M;}/* a^b%M */


int main()
{
    string p;
    cin>>p;
    int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;++i)cin>>s[i];
    bool ok=0;
    int p1f=0,p1s=0,p0f=0,p0s=0;
    for(int i=0;i<n;++i)
    {
        if(s[i]==p)ok=1;
        if(s[i][0]==p[0])p0f=1;
        if(s[i][1]==p[0])p0s=1;
        if(s[i][0]==p[1])p1f=1;
        if(s[i][1]==p[1])p1s=1;
    }
    if(p0s&&p1f || ok)puts("YES");
    else puts("NO");
    return 0;
}
