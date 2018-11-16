#include <bits/stdc++.h>
using namespace std;

#define sd(mark) scanf("%d",&mark)
#define s2d(mark,marx) scanf("%d%d",&mark,&marx)
#define s3d(mark,marx,marz) scanf("%d%d%d",&mark,&marx,&marz)
#define sf(mark) scanf("%f",&mark)
#define slf(mark) scanf("%lf",&mark)
#define sst(mark) scanf("%s",&mark)
#define sld(mark) scanf("%lld",&mark)
#define s2ld(mark,marx) scanf("%lld%lld",&mark,&marx)
#define s3ld(mark,marx,marz) scanf("%lld%lld%lld",&mark,&marx,&marz)
#define sline(mline) scanf("%[^\n]%*c",&mline)

#define pi(n) printf("%d\n",n)
#define pf(n) printf("%f\n",n)
#define plf(n) printf("%lf\n",n)
#define pst(n) printf("%s\n",n)
#define pl(n) printf("%lld\n",n)

#define pis(n) printf("%d ",n)
#define pfs(n) printf("%f ",n)
#define plfs(n) printf("%lf ",n)
#define pss(n) printf("%s ",n)
#define pls(n) printf("%lld ",n)

#define sff fflush(stdout)
#define decimal(n) cout.precision(n)
#define fix cout<<fixed
#define debug(mark) printf("check%d\n",mark)
#define in(a) cin>>a
#define out(a) cout<<a<<'\n'
#define clr(mark) memset(mark,0,sizeof(mark))
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define ll long long int
#define mod 1000000007ll
#define llu unsigned long long int
#define endl '\n'
#define INF 1023456789
#define eps 1e-9
#define fo(i,a,b) for(int i=a;i<b;++i)
#define foll(i,a,b) for(ll i=a;i<b;++i)
#define tr(container,it) for(typeof(container.begin()) it=container.begin();it!=container.end();it++)

#define UL 100000		//5
#define MAXN 1000000	//6
#define MAXL 10000000	//7

typedef vector< vector<int> > vvi;
typedef vector< vector<ll> > vvl;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector< pair<ll,ll> > vll;
typedef pair<char,char> pcc;
typedef vector< pair<int, int> > vii;

// bool mark[MAXN+5];

// int sieve()
// {
// 	int ULL = MAXN;
// 	for(int i=0;i<=ULL;i++) mark[i]=true;
// 	for(int i=2;i*i<=ULL;i++) if(mark[i]) for(int j=i*i;j<=ULL;j+=i) mark[j]=false;
// 	for(int i=2;i<=ULL;i++) if(mark[i]) p.pb(i);
// 	return p.size();
// }

ll gcd(ll a, ll b) {if(!b) return a; return gcd(b,a%b);}
ll lcm(ll a, ll b) { return (a/gcd(a,b))*b; }

ll modexp(ll a,ll b)
{
	if(b==0) return 1;
	if(b==1) return a;
	ll temp = modexp(a,(b>>1));
	temp = (temp*temp);
	return (temp*modexp(a,b&1));
}

ll modexp(ll a,ll b, ll m)
{
	if(b==0) return 1;
	if(b==1) return a%m;
	ll temp = modexp(a,(b>>1),m);
	temp = (temp*temp)%m;
	return (temp*modexp(a,b&1,m))%m;
}

ll mult(ll a,ll b,ll m)
{
	ll res = 0;
	a%=m;
	while(b)
	{
		if (b&1ll) res = (res+a)%m;
		a = (a*2ll)%m;
		b/=2ll;
	}
	return (res%m);
}

ll modinv(ll a, ll p)
{
	return modexp(a,p-2,p);
}

pair<int, pii > dp[105][8];

int main()
{
	string x; cin>>x;
	int n = x.size();
	fo(i,0,n) fo(j,0,8) { dp[i][j] = mp(0,mp(-1,-1)); }
	fo(i,0,n) { dp[i][(int)(x[i]-'0')%8] = mp(1,mp(-1,-1)); }
	fo(i,0,n) fo(j,i+1,n)
	{
		fo(k,0,8)
		{
			int ii = 10*k+(int)(x[j]-'0');
			ii%=8;
			if(dp[i][k].ff==1)
			{
				dp[j][ii] = mp(1,mp(i,k)); 
			}
		}
	}
	// fo(i,0,8)
	// {
	// 	fo(j,0,n)
	// 	{
	// 		pis(dp[j][i].ff);
	// 	pis(dp[j][i].ss.ff);
	// 	pis(dp[j][i].ss.ss);
	// 	cout<<'\t';
	// 	}
	// 	cout<<'\n';
	// }
	int pos=-1;
	fo(i,0,n)
	{
		if(dp[i][0].ff==1) {pos = i;break;}
	}
	// pi(dp[0])
	if(pos==-1) cout<<"NO\n";
	else
	{
		cout<<"YES\n";
		string a = "";
		a += x[pos];
		// pi(dp[pos][0].ff);
		// pi(dp[pos][0].ss.ff);
		// pi(dp[pos][0].ss.ss);
		int jj = 0,posn,jjn;

		while(dp[pos][jj].ss.ff!=-1)
		{
			// pi(pos);
			// pi(jj);
			a = x[dp[pos][jj].ss.ff]+a;
			jjn = dp[pos][jj].ss.ss;
			posn = dp[pos][jj].ss.ff;
			pos = posn;
			jj = jjn;
			// cout<<"d";pi(pos);
			// cout<<"d";pi(jj);
		}
		cout<<a<<'\n';
	}
}