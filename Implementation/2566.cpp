#include<bits/stdc++.h>
#define int long long
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
#define pb push_back
#define fi first
#define se second
typedef long long ll;
typedef long long LL;
typedef unsigned long long ull;
typedef unsigned long long uLL;
using namespace std;
const int maxn=1e5+10;
const int INF=0x3f3f3f3f;
int gcd(int a,int b){return b ? gcd(b, a%b): a;  }
int lowbit(int x) {return x&-x; }
int32_t main()
{
    int n,m; cin>>n>>m;
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        int a; cin>>a;
        if(a>m) ans+=2;
        else ans+=1;
    }
    cout<<ans<<endl;
}