/*Rajeev Ranjan
  CSE @MNNIT */

#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
#define mem(a,b) memset(a,b,sizeof(a))
#define pb push_back
#define mp(a,b) make_pair(a,b)
#define S second
#define F first
#define boost ios_base::sync_with_stdio(false);cin.tie(0); cout.tie(0)
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

const int N = 2e3 + 5;
int a[N];
vector<int> adj[N];
int ans=0;

void fun(int x,int cnt)
{
    int sz= adj[x].size();
    if(sz==0)
    {
        ans= max(ans,cnt);
        return ;
    }
    for(int i=0;i<sz;i++)
        fun(adj[x][i],cnt+1);
}

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]!=-1)
            adj[ a[i] ].push_back(i);
    }
    for(int i=1;i<=n;i++)
    {
        if(a[i]==-1)
            fun(i,1);
    }
    cout<<ans<<endl;
    return 0;
}
