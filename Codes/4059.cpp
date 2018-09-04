/*input
5 4
1 2 3 5
3 1 3 2
4 5 2 3
5 5 3 2
4 4 3 4
6
1 1
2 5
4 5
3 5
1 3
1 5
*/
#include <bits/stdc++.h>
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
string z[2]={"No","Yes"};
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
    int t=1;//in(t);
    string s;
    while(t--)
    {
        int i,j,n,m;
        in(n>>m);
        int a[n][m];
        f(i,0,n)f(j,0,m)in(a[i][j]);
        vector<vi> info(n,vi(m));
        f(j,0,m)
        {
            for(i=0;i<n;)
            {
                int pos=i;
                info[i][j]=1;
                ++i;
                while(a[i-1][j]<=a[i][j] && i<n)
                    info[i][j]=i-pos+1,++i;
            }
        }
        vector<set<int> > p(n);
        f(i,0,n)
        {
            f(j,0,m)
                p[i].insert(info[i][j]);
        }
        in(m);
        while(m--)
        {
            int l,r;in(l>>r);
            --l;--r;
            out(z[(*(--p[r].end())>=r-l+1)]);
        }
    }
    rt 0;
}