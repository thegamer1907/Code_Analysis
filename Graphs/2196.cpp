/* ****The-Snape**** */

#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define    endl        '\n'
#define pii         pair<ll int,ll int>
#define vi          vector<ll int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (ll int)x.size()
#define hell        1000000007
#define rep(i,a,b)    for(ll int i=a;i<b;i++)
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define mp          make_pair
using namespace std;

#define N  100005
ll n,m=1,c=0;
//vector<pair<ll ,ll>>v;
vi a[2005];
bool vis[2005]={0};
vi dis(2005,1);
vi v;
void dfs(ll node)
{
    vis[node]=1;
    for(auto i:a[node])
    {if(!vis[i])
        {dis[i]=dis[node]+1;
    dfs(i);}}
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int TESTS=1;
//    cin>>TESTS;
    //cout<<dis[1];
    while(TESTS--)
    {
        cin>>n;
        //ll g=0
        rep(i,1,n+1)
        {
            ll x;
            cin>>x;
            if(x!=-1)
            {
                a[i].pb(x);
                a[x].pb(i);
            }
            else{
                v.pb(i);
                //dis[i]=1;
            }
            
        }
 
        for(auto i:v)
        {
            dfs(i);
        }
        
        sort(all(dis));

        cout<<dis[2004]<<endl;


    }
    return 0;
}