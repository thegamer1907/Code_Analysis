#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int>   II;
typedef vector< II >      VII;
typedef vector<int>     VI;
typedef vector< VI >    VVI;
typedef long long int   LL;

#define PB push_back
#define MP make_pair
#define F first
#define S second
#define SZ(a) (int)(a.size())
#define ALL(a) a.begin(),a.end()
#define SET(a,b) memset(a,b,sizeof(a))


#define din(n) int n; scanf("%d",&n)
#define dout(n) printf("%d\n",n)
#define llin(n) long long n; scanf("%lld",&n)
#define llout(n) printf("%lld\n",n)
#define strin(s,l) char s[l]; scanf("%s",s)
#define strout(n) printf("%s\n",n)
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define nl '\n'

#define TRACE

#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1){
        cerr << name << " : " << arg1 << std::endl;
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args){
        const char* comma = strchr(names + 1, ',');cerr.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);
}
#else
#define trace(...)
#endif
bool cmpManh(const std::pair<long long,long long>& l, const std::pair<long long,long long>& r)
{
  return ((llabs(l.F) + llabs(l.S)) < (llabs(r.F) + llabs(r.S)));
}

int main(void)
{
	string str; cin>>str;
	LL reqb = count(ALL(str),'B');
	LL reqs = count(ALL(str),'S');
	LL reqc = count(ALL(str),'C');
	// trace(reqb);
	LL b,s,c;
	LL pb,ps,pc;
	cin>>b>>s>>c;
	cin>>pb>>ps>>pc;
	LL money;
	cin>>money;
	LL l = 0,h = 1e13,m;
	LL ab,ac,as,reqmon,reqmon2;
	LL abs,acs,ass,ans = 0;
	while(l<=h){
		m = (l+h)/2;
		ab = (reqb*m - b)*pb;
		as = (reqs*m - s)*ps;
		ac = (reqc*m - c)*pc;
		abs = (reqb*(m+1) - b)*pb;
		ass = (reqs*(m+1) - s)*ps;
		acs = (reqc*(m+1) - c)*pc;

		reqmon = max(0LL,ab) + max(0LL,ac) + max(0LL,as);
		reqmon2 = max(0LL,abs) + max(0LL,acs) + max(0LL,ass);
		if(reqmon <= money && reqmon2>money){
			ans = m;
			break;
		}
		else if(reqmon <= money){
			l = m + 1;
		}
		else h = m - 1;

		// ab = reqb*m - b;
	}
	int cc = 0;
	for (int i = 0; i < 1000000000; ++i)
	{
		// cc++;
		if(cc>0) cc++;
		else cc--;
		/* code */
	}
	cout<<ans<<nl;
    return(0);
}