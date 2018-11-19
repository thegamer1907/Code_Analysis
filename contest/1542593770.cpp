#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define pb push_back
#define mp make_pair
typedef long long ll;
const ll inf = 1e12;

int main()
{
    ios_base::sync_with_stdio(false);
    ll n;
    string s[110],t;
    cin>>t>>n;
    ll flag=0;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        if(s[i]==t)flag=1;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            string k = s[i]+s[j];
            if(k[1]==t[0]&&k[2]==t[1])flag=1;
            k = s[j]+s[i];
            if(k[1]==t[0]&&k[2]==t[1])flag=1;
        }
    }
    if(flag)cout<<"YES";
    else cout<<"NO";
}

