#include <bits/stdc++.h>
#define ll long long
using namespace std;
string c[101];
int main()
{
    string s;
    ll f=0,f1=0,f2=0,n,i,j;
    cin>>s>>n;
    for(i=1;i<=n;i++)
    {
        cin>>c[i];
        if (c[i]==s)
            f=1;
        if (c[i][0]==s[1])
            f1++;
        if (c[i][1]==s[0])
            f2++;
    }
    if (f1 && f2) f=1;
    if (f) cout<<"YES";
    else cout<<"NO";
    return 0;
}
