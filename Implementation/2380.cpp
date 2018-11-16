#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define reduce200ms ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define dofloat cout<<fixed<<setprecision(6)
#define pb push_back
#define mp make_pair
#define x first
#define y second
#define bitcount _builtin_popcount
#define fill(var,val) memset(var,val, sizeof var)
#define rep(i,a,b) for(auto i=a;i<b;++i)
#define per(i,a,b) for(auto i=a;i>b;--i)
#define elif else if
#define all(vec) vec.begin(),vec.end()
#define rall(vec) vec.rbegin(),vec.rend()
/*
    #ifdef DEBUG
         #define debug(args...)            {dbg,args; cerr<<endl;}
    #else
        #define debug(args...)
    #endif
    struct debugger
    {
        template<typename T> debugger& operator , (const T& v)
        {
            cerr<<v<<" ";
            return *this;
        }
    } dbg;
*/
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<long long> vl;
typedef pair<long long,long long> pll;
typedef vector<pair<long long,long long> > vll;
typedef vector<pair<int,int> > vii;
typedef vector<int> vi;
typedef pair<int,int> ii;


const long long MOD=1000000007;
const long long MAX=100005;
const long double PI=3.14159265359;
const long double G=9.807;
const long long INF=1e18;
const long double EPS=1e-6;

long long gcd(long long a,long long b){return b?gcd(b,a%b):a;}
long double dist(long long a,long long b,long long c,long long d){return sqrt( ((a)-(c))*((a)-(c))+((b)-(d))*((b)-(d)) );}
long long min(long long a,long long b,long long c){return min(c,min(a,b));}
long long max(long long a,long long b,long long c){return max(c,max(a,b));}
bool isprime(long long a){
if(a==2)return 1;
if(!(a&1))return 0;
for(ll i=3;i*i<=a;i+=2){
	if(a%i==0)return 0;
}
return 1;
}
long long mpow(long long base,long long exponent,long long modulus){
if(modulus==1)return 0;
long long result = 1;
base=base%modulus;
while(exponent){
		if(exponent%2 == 1)
			result=(result*base)%modulus;
		exponent=exponent>>1;
		base=(base*base)%modulus;
	}
return result;
}
ll minv(ll a,ll mod){
	ll _gcd=gcd(a,mod);
	if(_gcd!=1)cerr<<"WA";
	else return mpow(a,mod-2,mod);
}
/*template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;*/

//int dc[]={1,0,-1,0,1,1,-1,-1};
//int dr[]={0,-1,0,1,1,-1,-1,1};

/*void sieve(int N){
	for(int i=0;i<=N;i++){
		spf[i]=i;
	}
	for(int i=2;i*i<=N;i++){
		if(spf[i]==i){
			for(int j=i*i;j<=N;j+=i){
				spf[j]=min(spf[j],i);
			}
		}
	}
	return;
}*/

/*
void nCr(ll n,ll k){
	ll i,j;
	for(i=0;i<=n;i++){
		for(j=0;j<=min(i,k);j++){

			if(j==0 or j==i)C[i][j]=1LL;
			else  C[i][j]=(C[i-1][j-1]+C[i-1][j])%MOD;

		}
	}
	return;
*/
ll n,k;
int main(){reduce200ms;
cin>>n>>k;
ll sum=0;
ll timeleft=240-k;
ll ans=0;
for(ll i=1;i<=n;i++){
	if(sum+5*i<=timeleft)ans++;
	else break;
	sum+=5*i;
}
cout<<ans;
return 0;
}


