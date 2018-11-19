#include <bits/stdc++.h>
using namespace std;

int main()
{
    string ps;
    int n;
    cin>>ps>>n;
    string s[111];
    int ok=0;
    for(int i=1;i<=n;i++)
        cin>>s[i];

    int f1=0,f2=0;

    for(int i=1;i<=n;i++)
    {
        if(s[i]==ps)
            ok=1;
        if(s[i][0]==ps[1])
            f1=1;
        if(s[i][1]==ps[0])
            f2=1;
    }
    if(f1&&f2)
        ok=1;
    return cout<<((ok)?"YES":"NO"),0;

}
