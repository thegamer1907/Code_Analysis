#include <bits/stdc++.h>
#define rep(i,a,n) for (int i=a;i<=n;i++)
#define per(i,a,n) for (int i=n;i>=a;i--)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define SZ(x) ((int)(x).size())
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef pair<int,int> pii;
const ll mod=1000000007;
ll powmod(ll a,ll b) {ll res=1;a%=mod; assert(b>=0); for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}
const int maxn=1e5+10;
int q[1000],p[1000];
int main()
{
    char ch[10],s[10];
    scanf("%s",ch);
    int n;
    scanf("%d",&n);
    int ok=0;
    rep(i,1,n) {
        scanf("%s",s);
        if(0==strcmp(s,ch)) {
            ok=1;
        }
        q[s[1]]++;
        p[s[0]]++;
    }
    if(q[ch[0]]&&p[ch[1]]) {
        ok=1;
    }
    puts(ok?"YES":"NO");
    return 0;
}
