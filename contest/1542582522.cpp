#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <climits>
#include <cstring>
#include <string>
#include <set>
#include <bitset>
#include <map>
#include <queue>
#include <stack>
#include <vector>
#include <cassert>
#include <ctime>
#define rep(i,m,n) for(i=m;i<=(int)n;i++)
#define inf 0x3f3f3f3f
#define mod 998244353
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define ll long long
#define pi acos(-1.0)
#define pii pair<long long,int>
#define sys system("pause")
#define ls (rt<<1)
#define rs (rt<<1|1)
#define all(x) x.begin(),x.end()
const int maxn=1e5+10;
const int N=5e4+10;
using namespace std;
ll gcd(ll p,ll q){return q==0?p:gcd(q,p%q);}
ll qmul(ll p,ll q,ll mo){ll f=0;while(q){if(q&1)f=(f+p)%mo;p=(p+p)%mo;q>>=1;}return f;}
ll qpow(ll p,ll q){ll f=1;while(q){if(q&1)f=f*p%mod;p=p*p%mod;q>>=1;}return f;}
int n,m,k,t;
bool vis[1<<4];
int main(){
    int i,j;
    scanf("%d%d",&n,&m);
    rep(i,1,n)
    {
        int cnt=0;
        rep(j,0,m-1){scanf("%d",&k);if(k)cnt|=(1<<j);}
        vis[cnt]=true;
    }
    bool flag=false;
    rep(i,0,(1<<m)-1)rep(j,0,(1<<m)-1)
    {
        if(vis[i]&&vis[j]&&(i+j)==(i^j))flag=true;
    }
    puts(flag?"YES":"NO");
    return 0;
}
