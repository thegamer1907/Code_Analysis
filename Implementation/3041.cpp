#include <cstdio>
#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <cstring>
#include <queue>
#include <stack>
#include <ctime>
using namespace std;
#define rep(i,a,n) for (int i=a;i<n;i++)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
#define forn(i,n) for(int i = 0;i<n;i++)
#define for1(i,n) for(int i = 1;i<=n;i++)
#define pb push_back
//#define mp make_pair
#define all(x) (x).begin(),(x).end()
//#define fi first
#define se second
#define SZ(x) ((int)(x).size())
typedef vector<int> VI;
typedef long long ll;
typedef pair<int,int> PII;
typedef pair<ll,ll> PLL;
typedef unsigned us;
typedef unsigned long long ull;
const ll mod=1e9+7;
const int inf = 1000000000;
const int maxn = 1000005;
const int maxa = 300005;
ll gcd(ll a,ll b) { return b?gcd(b,a%b):a;}
ll powmod(ll a,ll b) {ll res=1;a%=mod; if(b<0) return -1; for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}
int INF = 10000000;
ll fac(ll a) {ll ans = 1;for(int i = 1;i<=a;i++) ans*=i;return a==0?1:ans;};
//start = clock();
//finish = clock();
//cout<<double(finish - start) / CLOCKS_PER_SEC<<" seconds"<<endl;
//rep(i,2,100002) inv[i] = inv[mod%i]*(mod-mod/i)%mod; //
clock_t start,finish;
double duration;
//head

int main(){
	ios::sync_with_stdio(0);
    int a,b;
    cin>>a>>b;
    int t = min(a,b);
    cout<<fac(t);







}