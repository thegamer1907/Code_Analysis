/*i am not gonna
lose this time*/

#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define ll long long

#define mp make_pair
#define pb push_back
#define st(x) x.begin(),x.end()
#define sz(x) (int)(x).size()
vector<ll>v[30005];
bool visit[30005];
void dfs(int p)
{
   // int p=1;
    visit[p]=1;
   for(int i=0;i<v[p].size();i++)
   {
       if(!visit[v[p][i]])
       dfs(v[p][i]);
   }
}

int main()
{
    fast;
    ll n,a,t;
    cin>>n>>t;
    for(int i=1;i<n;i++)
    {
        cin>>a;
        v[i].pb(a+i);
    }
    dfs(1);
    if(visit[t])
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
