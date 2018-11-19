// Naman Shukla


#include <bits/stdc++.h>
using namespace std;
 
#define ms(s, n) memset(s, n, sizeof(s))
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define FORd(i, a, b) for (int i = (a) - 1; i >= (b); i--)
#define FORall(it, a) for (__typeof((a).begin()) it = (a).begin(); it != (a).end(); it++)
#define sz(a) int((a).size())
#define all(a) (a).begin(), (a).end()
#define uni(a) (a).erase(unique(all(a)), (a).end())
#define pb push_back
#define pf push_front
#define mp make_pair
#define fi first
#define se second
#define prec(n) fixed<<setprecision(n)
#define bit(n, i) (((n) >> (i)) & 1)
#define bitcount(n) __builtin_popcount(n)
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
const int MOD = (int) 1e9 + 7;
const int INF = (int) 1e9;
const ll LINF = (ll) 1e18;
const ld PI = acos((ld) -1);
const ld EPS = 1e-9;
ll gcd(ll a, ll b) {ll r; while (b) {r = a % b; a = b; b = r;} return a;}
ll lcm(ll a, ll b) {return a / gcd(a, b) * b;}
ll fpow(ll n, ll k, int p = MOD) {ll r = 1; for (; k; k >>= 1) {if (k & 1) r = r * n % p; n = n * n % p;} return r;}
template<class T> void setmin(T& a, T val) {if (a > val) a = val;}
template<class T> void setmax(T& a, T val) {if (a < val) a = val;}
void addmod(int& a, int val, int p = MOD) {if ((a = (a + val)) >= p) a -= p;}
void submod(int& a, int val, int p = MOD) {if ((a = (a - val)) < 0) a += p;}
int mult(int a, int b, int p = MOD) {return (ll) a * b % p;}
int inv(int a, int p = MOD) {return fpow(a, p - 2, p);}

int n,k,flag;
string s[100001];
map<string,int>Map;

void chk(int cur,string s1,string s2 )
{
    if(cur==k)
    {
        if(Map[s1])
        flag = 1;
        return;
    }
    
    if(s2[cur]=='1')
    {
        s1+='0';
        chk(cur+1,s1,s2);
    }
    else
    {
        s1+='0';
        chk(cur+1,s1,s2);
        s1[cur] = '1';
        chk(cur+1,s1,s2);
    }
    
}

 
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	cin>>n>>k;
	
	
	FOR(i,0,n)
	{
	    string str = "";   
	    FOR(j,0,k)
	    {
	        char num;cin>>num;
	        str+=num;
	    }
	    
	    s[i] = str;
	    Map[str] = 1;
	 }
	 
	 FOR(i,0,n)
	 {
	     string str;
	     chk(0,str,s[i]);
	 }
	 if(flag)
	 cout<<"YES";
	 else
	 cout<<"NO";
	return 0;
}