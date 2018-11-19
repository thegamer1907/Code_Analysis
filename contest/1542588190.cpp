#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define rep(i,n) for(ll i=0;i<n;i++)
#define repp(i,a,b) for(ll i=a;i<=b;i++)
#define reff(i,a,b) for(ll i=a;i>=b;i--)
#define ll long long int
#define pll pair<ll,ll>
#define fill(a,x) memset(a,x,sizeof(a))
#define mb make_pair
#define pb push_back
#define F first
#define S second
#define M 1000000007
#define sc(x) scanf("%lld",&x)
#define scc(x1,x2) scanf("%d%d",&x1,&x2)
#define sccc(x1,x2,x3) scanf("%d%d%d",&x1,&x2,&x3)
#define pr(x) printf("%lld ",x)
#define dbg(a)         std::cerr<<#a<<"="<<(a)<<"\n"
#define dbg1(a,b)       std::cerr<<#a<<"="<<(a)<<", "<<#b<<"="<<(b)<<"\n"
#define dbg2(a,b,c)     std::cerr<<#a<<"="<<(a)<<", "<<#b<<"="<<(b)<<", "<<#c<<"="<<(c)<<"\n"
#define dbg3(a,b,c,d)   std::cerr<<#a<<"="<<(a)<<", "<<#b<<"="<<(b)<<", "<<#c<<"="<<(c)<<", "<<#d<<"="<<(d)<<"\n"
#define co cout<<"fuck"<<endl;
const int INF = 2034567891;
const ll INF64 = 4234567890123456789ll;
ll gcd(ll a, ll b) { return (b == 0 ? a : gcd(b, a % b)); }
ll lcm(ll a, ll b) { return (a * (b / gcd(a, b))); }
ll st[26],en[26];
int main()
{
    ll n;
    string s,s1;
    cin>>s;
    cin>>n;
    bool ans=0;
    rep(i,n)
    {
       cin>>s1;
       if(s1==s)
       ans++;
       st[s1[1]-'a']++;
       en[s1[0]-'a']++;
	}
	if(ans || (st[s[0]-'a'] && en[s[1]-'a']))
	cout<<"YES";
	else
	cout<<"NO";
}