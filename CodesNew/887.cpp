#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define mxn 1005
#define sf scanf
#define pf printf
#define inf 0x3f3f3f3f

using namespace std;

map<string ,int>mp;

int main()
{
    string a;
    int n,m,total,same=0;
    cin>>n>>m;
    total = n+m;

    for(int i=1;i<=total;i++)
    {
        cin>>a;
        if(mp[a])
        {
            same++;
        }
        mp[a]=1;
    }

    if(n>m)
    {
        cout<<"YES";
    }
    else if(n<m)
    {
        cout<<"NO";
    }
    else
    {
        if(same&1)
            cout<<"YES";
        else
        {
            cout<<"NO";
        }
    }
}
