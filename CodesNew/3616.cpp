#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>
#include<iostream>
typedef long long ll;
using namespace std;
#define pb push_back
#define F first
#define S second
#define mp make_pair
#define pb push_back
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define f(i,n) for(int i=0;i<n;i++)
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define debug(x) cerr << #x << " " << x << "\n";
#define N 300007
#define M 100000007
#define  A first
#define B second
#define inf 1e18//0x3f3f3f3f3f
inline int read()
{
    int x=0,f=1;
    char ch=getchar();
    while (ch<'0'||ch>'9')
    {
        if(ch=='-')
            f=-1;
        ch=getchar();
    }
    while (ch>='0'&&ch<='9')
    {
        x=x*10+ch-'0';
        ch=getchar();
    }
    return x*f;
}
const int lowbit(int x)
{
    return x&-x;
}
ll gcd(ll a, ll b){ return a == 0 ? b : gcd(b % a, a); }
bool vis[N];
map<ll,int>mp;
ll sum,q1=0,q2=0;
string s,s1;
int a[N]= {0},b[N]= {0},c[N]= {0},set_g[N]= {0},count1=0,i=0,j,ans=0;
int f[200][100007]= {0};
int h,n=0,m,t=1,k,v1,v2,maxx=1,minn=1000000000,cnt=0,type=0;
ll aa,bb,x,y;

int main()
{
    sync;
    cin>>n>>m;h=m;
    for (i = 1; i <=n; ++i){cin>>k;maxx=max(k,maxx);h+=k;minn=min(k,minn);}
   // debug(maxx);debug(m);
    cout<<max((h+n-1)/n,maxx)<<' '<<(maxx+m);
    //for (i = 1; i <=n; ++i)
    return 0;
}
