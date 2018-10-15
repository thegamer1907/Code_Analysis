 #include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <bitset>
using namespace std;

#define pb push_back
#define ull unsigned long long
#define ll long long
#define F first
#define S second
#define PI acos(-1)
#define EPS 1e-9
#define ld double
#define MAX 1000000000
#define NIL 0
#define INF 1e15
#define infi 1000000000
#define rd(a) scanf("%d",&a)
#define rd2(a,b) scanf("%d %d",&a,&b)
#define rd3(a,b,c) scanf("%d %d %d",&a,&b,&c)
#define rdll(a) scanf("%I64d",&a)
#define sz(a) (int) a.size()
#define lp(i,a,n) for(int i=(a); i<=(n) ; ++i)
#define lpd(i,n,a) for(int i=(n); i>=(a) ; --i)
#define pi acos(-1)
#define lc (x << 1)
#define rc (x << 1 | 1)
#define cp(a,b)                 ( (conj(a)*(b)).imag() )	// a*b sin(T), if zero -> parllel
#define dp(a,b)                 ( (conj(a)*(b)).real() )	// a*b cos(T), if zero -> prep
#define angle(a)                (atan2((a).imag(), (a).real()))
#define X real()
#define Y imag()
#define vec(a,b)                ((b)-(a))
#define vvi vector<vector<int>>
#define f first
#define s second
#define clr(a,b) memset(a,b,sizeof a)

#define mod1 1000500001ll
#define mod2 1000300001ll
#define base1 137ll
#define base2 31ll

typedef complex<double>CX;
typedef pair<int,int>ii;
typedef pair<ii,ll>tri;
typedef pair<vector<int>,int>vii;
typedef pair<int, int> pii;
typedef pair<ii,ii> line;
typedef pair<double,double>point;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef pair<int,pair<int,int>>edge;


const int N=100005;
const int M=22;

ll mod=998244353;

ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }
bool is_vowel(char c){if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')return 1;return 0;}
ll extended_euclidean(ll a,ll b,ll &x,ll &y){if(b==0){x=1;y=0;return a;}ll g = extended_euclidean(b,a%b,y,x);y -= (a/b)*x;return g;}
ll power(ll base,ll p,ll mod){if(p==1)return base;if(!p)return 1ll;ll ret=power(base,p/2,mod);ret*=ret;ret%=mod;if(p&1)ret*=base;return ret%mod;}
float Trianglearea(int x1, int y1, int x2, int y2, int x3, int y3) {return abs((x1 * (y2 - y3) + x2 * (y3 - y1) +  x3 * (y1 - y2)) / 2.0);}





int main(){
    //freopen("test.in","r",stdin);
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int n,m;
    rd2(n,m);
    vector<int>v(n);
    vector<int>cnt(101,0);

    lp(i,0,n-1)
       rd(v[i]),cnt[v[i]]++;

    sort(v.begin(),v.end());

    int total = 0, sum=0 ,mn = v.back();
    lp(i,1,100){
         int extra = total*i - sum;
         sum += cnt[i]*i;
         total += cnt[i];
         if(total == n){
            int fadl = m - (n*i - sum);
            mn = i + (fadl+n-1) / n;
            break;
         }
         if(extra >= m){
              break;
         }
    }
    cout<<mn<<' '<<v.back()+m;
   return 0;

}
