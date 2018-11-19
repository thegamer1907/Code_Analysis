#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    string s;
    cin>>s;
    ll n,i,j,k;
    cin>>n;
    string p[n];
    for(i=0;i<n;i++)
    {
        cin>>p[i];
    }
    ll f=0;
    for(i=0;i<n;i++)
    {
        if((p[i][0]==s[0] && p[i][1]==s[1])||(p[i][0]==s[1] && p[i][1]==s[0]))
        {
            f=1;
            break;
        }
    }
    if(f)
    {
        cout<<"YES\n";
        return 0;
    }
    ll c1=0,c2=0;
    for(i=0;i<n;i++)
    {
        if(p[i][1]==s[0])
        {
            c1=1;
            break;
        }
    }
    if(!c1)
    {
        cout<<"NO\n";
        return 0;
    }
    for(i=0;i<n;i++)
    {
        if(p[i][0]==s[1])
        {
            c2=1;
            break;
        }
    }
    if(!c2)
    {
        cout<<"NO\n";
        return 0;
    }
    cout<<"YES\n";
}
