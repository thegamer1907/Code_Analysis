#include <bits/stdc++.h>
#define int long long
#define pii pair <int,int>
#define piii pair < pair<int,int> ,int>
#define f first
#define s second
#define pb push_back
#define N 100005
#define mod 1000000007
#define inf 1000000000000000000

using namespace std;

int a[N][4],n,k;
map <string,int> m;

bool solve(string s,int pos)
{
    if(m[s]==0)
        return 0;
    int l=s.length();
    if(l==k)
        return 1;
    if(a[pos][l]==1)
    {
        return solve(s+'0',pos);
    }
    else
    {
        return solve(s+'0',pos) | solve(s+'1',pos);
    }
}

main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int i,j;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        string s;
        for(j=0;j<k;j++)
        {
            cin>>a[i][j];
            s+=(char)(a[i][j]+'0');
            m[s]++;
        }
    }
    if(m["0000"]==1)
    {
        cout<<"YES";
        return 0;
    }
    int ans=0;
    for(i=0;i<n;i++)
    {
        if(a[i][0]==0)
            ans=solve("0",i) | solve("1",i);
        else
            ans=solve("0",i);
        if(ans==1)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
