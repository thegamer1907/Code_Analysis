/*input
ya
4
ah
oy
to
ha
*/


#include <bits/stdc++.h>
using namespace std;
#define fio				std::ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ff 				first
#define ss 				second
#define all(a) 			a.begin(), a.end()
#define allr(a) 		a.rbegin(), a.rend()
#define pb 				push_back 
#define eb 				emblace_back 
#define mp 				make_pair
#define ini(n) 			scanf("%d",&n)
#define inl(n) 			scanf("%lld",&n)
#define ins(n) 	    	scanf("%s",n)
#define outi(n) 		printf("%d",n)
#define outl(n) 		printf("%lld",n)
#define outs(n)     	printf("%s",n)
#define fog(x,y,z)		for(x=y;x<z;x++)
#define fol(x,y,z)		for(x=y;x>=z;x--)
#define foi(it,s)		for(it=s.begin();it!=s.end();it++)
#define newl			cout<<endl
#define Endl 			endl
typedef long long ll ;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef vector<double> vd;
typedef vector<string> vs;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
const ll mod = 1e9+7;
const ll N = 2e5+5;
const ll MAX = 1e18;
template <typename T>T gcd(T x,T y){return y==0?x:gcd(y,x%y);}
template <typename T>T lcm(const T &a,const T &b){return (a*b)/gcd(a,b);}
void vlcout(vector<ll> & v){ll i ;fog(i,0,v.size()){cout<<v[i]<<" ";}newl;}
void vicout(vector<int> & v){ll i ;fog(i,0,v.size()){cout<<v[i]<<" ";}newl;}
void vpcout(vector<pair<ll,ll> > &v){ll i;fog(i,0,v.size()){cout<<v[i].ff<<" "<<v[i].ss<<endl;}}
void acout(ll *a,ll n){ll i ;fog(i,0,n){cout<<a[i]<<" ";}newl;}
ll kpow(ll a , ll b) {ll ct = 0;ll k =1 ;while(ct<b){k*=a;ct++;}return k ; }
int pows(int a,int b,int mod){int ans=1;while(b){if(b&1){ans=(1LL*(ans)*a)%mod;}a=(1LL*a*a)%mod;b>>=1;}return ans;}
ll klog(ll x , ll b ) {ll ct = 0;ll k = 1;while (k <= x) {k *= b; ct++;}return ct-1;}

void freq(ll *a , ll n,vll&fre){ll i;fog(i,0,n){fre[a[i]]++;}}
// vll fre(N,0);freq(a,n,fre);vcout(fre);


// int fact[N],ifact[N] ;
// void fac(){fact[0] = 1;for(int i = 1 ; i < N ; ++i){fact[i] = (1LL * fact[i - 1] * i) % mod;}for(int i=0;i<N;i++){ifact[i]=pows(fact[i],mod-2,mod);}}
// int ncr(int n , int r){return (1LL * ((1LL * fact[n] * ifact[r]) % mod) * ifact[n - r]) % mod;}
// int npr(int n , int r){return (1LL * (1LL * fact[n] * ifact[r])%mod )%mod;}

template <typename T>void pfact(vector<pair<T,T> > &v , T k)
{
	T i ;
	for (i = 2; i <= sqrt(k);i++)
	if (k%i == 0)
	{
		T x = 0;
		while (k%i == 0){k /= i;x++;}
		v.pb(mp(i,x));
	}
	if (k != 1){v.pb(mp(k,1));}
}//vector<pair<ll,ll> > v ;pfact<ll>(v,k);

void sieve(ll *spf)
{
    spf[1] = 1;
    for (int i=2; i<N; i++)spf[i] = i;
    for (int i=4; i<N; i+=2)spf[i] = 2;
    for (int i=3; i*i<N; i++){if (spf[i] == i) {for (int j=i*i; j<N; j+=i)if (spf[j]==j) spf[j] = i;}}
}
//ll spf[N];sieve(spf);

vector<ll> getfactorization(ll x, vector<ll> spf)
{
    vector<ll> ret;
    while (x != 1)
    {
    	ret.push_back(spf[x]);
    	x = x / spf[x];
    }
    return ret;
}//vector <int> p = getFactorization(x,spf);

bool sortcol( const vector<ll>& v1,const vector<ll>& v2 ) 
{
 return v1[0] < v2[0];
}




int main()
{	
	//int t;ini(t);while(t--){
	ll i , j , n;
	string s ;
	cin>>s;
	cin>>n;
	int fl1=0,fl2=0,fl=0;
	string st;
	fog(i,0,n)
	{
		string t;
		cin>>t;
		if(t[0]==s[1])
		{
			fl1=1;
		}
		if(t[1]==s[0])
		{
			fl2=1;
		}
		if(t[1]==s[1] && t[0]==s[0] )
		{
			fl=1;
		}
	}
	if((fl2 && fl1 )|| fl)
	{
		cout<<"YES"<<endl;
			return 0;
	}
	
	cout<<"NO"<<endl;
	return 0;
	//br:;}
}