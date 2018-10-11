#include<bits/stdc++.h>
#define ll long long
#define thekingisborn ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ld  long double
#define f first
#define se second
#define pb push_back
#define sz() size()
#define maxn 200005
#define mod 1000000007

using namespace std;

typedef pair<int,int>pii;
typedef pair<ll,ll>pll;

/*ll power(ll a,ll n)
{
    if(n == 1)return a%mod;
    if(n == 0)return 1;
    a = a%mod;
    if(n&1)return ((a%mod)*(power((a*a)%mod,n>>1))%mod)%mod;
    return power((a*a)%mod,n>>1)%mod;
}
ll gcd(int a,int b)
{
    if(a%b == 0)return b;
    return gcd(b,a%b);
}
int root(int x)
{
    while(par[x] != x)
    x = par[x];
    return x;
}
void dsu(int x,int y)
{
  if(root(x) == root(y))return;
  par[root(y)] = root(x);
  return;
}*/
/*bool done[maxn];
vector<int>adj[maxn];

void dfs(int x)
{
    stack<int>s;
    s.push(x);
    done[x]=true;
    while(!s.empty())
    {
        int y = s.top(),i;
        for(i=0;i<(int)adj[y].size();++i)
        if(!done[adj[y][i]])
        {
            done[adj[y][i]] = true;
            s.push(adj[y][i]);
            break;
        }
        if(i == (int)adj[y].size()){s.pop();}
    }
    return ;
}*/
int n,m,cnt;
string s1[1005],s2[1005];
int main()
{
    thekingisborn;
    cin >> n >> m;
    for(int i=0;i<n;++i)
    cin >> s1[i];
    for(int j=0;j<m;++j)
    cin >> s2[j];
    for(int i=0;i<n;++i)
    for(int j=0;j<m;++j)
    if(s1[i] == s2[j])++cnt;
    n -= cnt;
    m -= cnt;
    if(cnt&1)
    {
        if(m > n)cout << "NO";
        else cout << "YES";
    }
    else
    {
        if(n > m)cout << "YES";
        else cout << "NO";
    }
    return 0;
}
