/*******************************\
   Name:    REAJUL HAQUE REAYZ  |
   School:  COMILLA UNIVERSITY  |
            CSE (5TH BATCH)     |
********************************/
#include<bits/stdc++.h>
#define endl "\n"
#define inf 1<<30
#define pi acos(-1.0)
#define pb push_back
#define mp make_pair
#define ss stringstream
#define all(v) v.begin(), v.end()
#define mem(x,y) memset(x,y,sizeof(x))
#define bit_cnt(mask) __builtin_popcount(mask)
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const int MOD = 1000000007; /// 1e9+7
const int MAX = 100005;     /// 1e5+5
ll bigmod(ll n, ll r)
{
    if(r==0) return 1;
    if(r==1) return n;
    if(r%2==0)
    {
        ll ret = bigmod(n, r/2);
        return ((ret%MOD) * (ret%MOD)) % MOD;
    }
    else return ((n%MOD) * (bigmod(n,r-1)%MOD)) % MOD;
}
ll modinverse(ll a){return bigmod(a,MOD-2)%MOD;}
ll lcm(ll a, ll b) {a=abs(a); b=abs(b); return (a/__gcd(a,b))*b;}
ll gcd(ll a, ll b) {a=abs(a); b=abs(b); if(!b) return a; return __gcd(b,a%b);}

int h, m, s, t1, t2, f1, f2;
bool check(int x){
    if(t1<=x and t2>x) f1=0;
    else f2=0;
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>h>>m>>s>>t1>>t2;
    f1=1; f2=1;
    if(t1>t2) swap(t1,t2);
    if(h==12) h=0;
    check(h);
    check(m/5);
    check(s/5);
    if(f1 or f2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
