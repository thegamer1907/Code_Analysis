#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vec vector <int>
#define vecl vector <long long>
#define rep(i,a,b) for (int i=a;i<b;i++)
#define pb push_back
#define pii pair <int,int>
#define pll pair <long long,long long>
#define mp make_pair
#define ff first
#define ss second
#define maa 1000000007

struct cmp
{
    bool operator () (pii a,pii b)
    {
        return a.ss<b.ss;
    }
};

bool visited[100008];
vec adj[100008];
int n;pii succ[100008];


int depth(int so)
{
    visited[so]=true;
    //cout<<so+1<<" ";
    int ans=0;
    for (auto x:adj[so])
    {
        if (!visited[x])
            ans=max(ans,depth(x));
    }
    return 1+ans;
}
void solve()
{
    rep(i,0,100008)visited[i]=false;
    cin>>n;
    rep(i,0,n)
    {
        int x;cin>>x;
        if (x!=-1)
            adj[x-1].pb(i);
        succ[i].ff=i;
        succ[i].ss=x;
        sort(succ,succ+n,cmp());
    }

    /*rep(i,0,n)
    {
        pii te=succ[i];

        if (te.ss!=-1)
        {
            adj[te.ss-1].pb(te.ff);
        }
    }*/

    int ans=INT_MIN;
    rep(i,0,n)
    {
        if (succ[i].ss!=-1)break;
       // if (!visited[i])
        //{
            ans=max(ans,depth(succ[i].ff));
            //cout<<succ[i].ff+1<<" "<<depth(i)<<"\n";
        //}
    }
    cout<<ans<<"\n";

}
int main()
{
    /// Fast I/O
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

    ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);

    int t=1;
    ///cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
