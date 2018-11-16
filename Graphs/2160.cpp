#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long int
#define fp(i,k) for(i=0;i<k;i++)
#define fm(i,k) for(i=k;i>=0;i--)
#define fr(i,j,k) for(i=j;i<k;i++)
#define pb push_back
#define vll vector<ll>
#define vst vector<string>
#define vch vector<char>
#define pii pair<ll,ll>
#define psi pair<string,ll>
#define pis pair<ll,string>
#define pci pair<char,ll>
#define pic pair<ll,char>
#define msi map<string,ll>
#define mci map<char,ll>
#define mis map<ll,string>
#define mic map<ll,char>
#define mss map<string,string>
#define mii map<ll,ll>
#define mp make_pair
#define ld double
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.begin(),v.end(),greater<ll>())
#define stp(x) cout<<setprecision(x)<<fixed
#define aa first
#define bb second
#define be begin()
#define en end()
#define si size()
#define le length()
#define imin LONG_LONG_MIN
#define imax LONG_LONG_MAX
#define all(v) v.begin(),v.end()
typedef tree<ll, null_type, less<ll>, rb_tree_tag,tree_order_statistics_node_update> ost;
ll mod=1000000007;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    ll n,m,p,q,t,i,j,k,a,b,c,d,x,y,cnt=0,sum=0,f=0,mn=imax,mx=imin;
    cin>>n>>m;
    if(n==m){
        cout<<0;
        return 0;
    }
    ll vis[(ll)1e5]={0};
    queue<pii> qq;
    qq.push({n,0});
    vis[n]=1;
    while(!qq.empty()){
        a=qq.front().aa;
        b=qq.front().bb;
        qq.pop();
        c=2*a;
        d=a-1;
        if(c==m || d==m){
            cout<<b+1;
            return 0;
        }
        if(!vis[c] && c<=2*m)qq.push({c,b+1}),vis[c]=1;
        if(!vis[d] && d>=1)qq.push({d,b+1}),vis[d]=1;
    }
    return 0;
}
