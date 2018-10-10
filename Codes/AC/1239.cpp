#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define MAX 2000005

ll n, i, j, ans;
ll curr,start,cnt,m;
ll arr[MAX], pre[MAX], seg[2*MAX];
string str;
map<string, ll> mp;

int main()
{
    ios::sync_with_stdio(false); 
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        string s;
        cin>>s;
        mp[s]=1;
    }
    for(i=0;i<n;i++)
    {
        string s;
        cin>>s;
        mp[s]+=1;
    }
    if(n>m)cout<<"YES\n";
    else if(m>n)cout<<"NO\n";
    else
    {
        ll cnt=0;
        for(map<string , ll>::iterator it = mp.begin();it!=mp.end();it++)
            if( (it->second) > 1)cnt++;
        if(cnt%2)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}