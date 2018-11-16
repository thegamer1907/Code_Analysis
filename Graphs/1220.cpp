#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define loop(i,a,b) for(ll i=a;i<b;i++)
#define loope(i,a,b) for(ll i=a;i<=b;i++)
#define test() ull t;cin>>t;while(t--)
#define puu pair<ull,ull>
#define f first
#define s second
#define pb push_back
#define mkp make_pair
#define ins insert
#define Vint vector<int>
#define Vull vector<ull>
#define nl cout<<endl
#define sp cout<<" "
#define MOD 1000000007
#define all(x) x.begin(),x.end()

int main() 
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    fastio();
    ll n,t;
    cin>>n>>t;
    int go[n+5]={};
    int v[n+5]={};
    loop(i,1,n)
    {
        cin>>v[i];
        go[i] = i + v[i];
        // cout<<go[i]<<" ";
    }
    int start = 1;
    int now = 1;
    int vis[n+5]={};
    int f = 0;
    while( now != t )
    {
        if( vis[now] )
            break;
        vis[now]=1;
        now = go[now];
        if( now == t )
        {
            f = 1;
        }
    }
    if( f )
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}