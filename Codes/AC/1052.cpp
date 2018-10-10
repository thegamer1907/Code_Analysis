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
#define INF 1123456789
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

ll modexp(ll a,ll b, ll m)
{
	if(b==0) return 1;
	if(b==1) return a%m;
	ll temp = modexp(a,(b>>1),m);
	temp = (temp*temp)%m;
	return (temp*modexp(a,b&1,m))%m;
}

ll modinv(ll a, ll p)
{
	return modexp(a,p-2,p);
}

bool comp(const std::pair<int,int>& lhs, const std::pair<int,int>& rhs)
{
	if(lhs.ff == rhs.ff) return lhs.ss < rhs.ss;
    return lhs.ff < rhs.ff;
}

pii ar[UL+5];
ll pre[UL+5];

int main()
{
	int n,d;s2d(n,d);
	int x,y; fo(i,0,n) {s2d(x,y); ar[i] = mp(x,y); }
	sort(ar, ar+n, comp);
	int lo = 0, hi = n-1;
	pre[0] = ar[0].ss;
	fo(i,1,n) pre[i] = pre[i-1] + ar[i].ss;
	ll res = 0, ans = 0;
	fo(i,0,n)
	{
		int lo = i;
		int hi = n-1;
		int hia;
		if(ar[hi].ff - ar[lo].ff < d) hia = hi;
		else
		{
			int lox = lo;
			int mid;
			while(lox<=hi)
			{
				mid = (lox+hi)/2;
				if((ar[mid].ff - ar[lo].ff < d) && (ar[mid+1].ff - ar[lo].ff >= d)) 
				{
					hia = mid;
					break;
				}
				else if(ar[mid].ff - ar[lo].ff < d) lox = mid+1;
				else hi = mid-1;
			}
			hia = mid;
		}
		res = pre[hia] - pre[lo] + ar[lo].ss;
		ans = max(ans, res);
	}
	pl(ans);
}