/*input
3 1
1 1 1
*/
#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <string>
#include <queue>
#define pb push_back
#define epb emplace_back
#define mp make_pair
#define pr pair<int,int>
#define all(x) x.begin(),x.end()
#define rt return
#define f(x,y,z) for(x=y;x<z;++x)
#define rev(x,y,z) for(x=z-1;x>=y;--x)
#define pf(x) printf("%d\n",x)
#define pfs(s) printf("%s\n",s)
#define out(s) cout<<s<<"\n"
#define in(s) cin>>s
#define st string
#define X first
#define Y second
using namespace std;
typedef long long ll;typedef vector<int> vi;typedef vector<ll> vl;typedef vector<bool> vb;
ll modpow(ll x, ll y, ll m){ll z=1;while(y){if(y&1)z=(z*x)%m;x=(x*x)%m;y>>=1;}return z;}
int egcd(int a, int b, int& x, int& y){if(a == 0){x= 0;y= 1;return b;}int x1, y1;int gcd= egcd(b%a, a, x1, y1);x= y1 - (b/a) * x1;y= x1;return gcd;}
string z[2]={"NO","YES"};
ll mod=1e9+7;
// vector<vi> adj;vb v(1e5);
// void dfs(int s)
// {
//     v[s]=1;
//     int i;
//     f(i,0,adj[s].size())
//     {
//         if(!v[adj[s][i]])
//         {
//             dfs(adj[s][i]);
//         }
//     }
// }
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t=1;
    string s;
    while(t--)
    {
        ll i,j,k,n,s=0;
        in(n>>k);
        map<ll,vl> p;
        while(n--)
        {
            in(j);
            if(!p[j].size())p[j].resize(3);
            p[j][0]++;
            if(j%k || k==1)continue;
            if(p.find(j/k)==p.end())continue;
            p[j][1]+=p[j/k][0];
            i=j/k;
            if(i%k || k==1)continue;
            p[j][2]+=p[i][1];
        }
        for(auto x:p)
        {
            if(k!=1 && x.X)
                s+=x.Y[2];
            else
                i=x.Y[0],
                s+=(i*(i-1)*(i-2))/6;
        }
        out(s);
    }
    rt 0;
}