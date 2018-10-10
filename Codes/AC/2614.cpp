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
const int MAX = 10001000;

bool v[MAX];
int len, sp[MAX];
int ans[MAX];

void Sieve(){
	for (int i = 2; i < MAX; i += 2)	sp[i] = 2;//even numbers have smallest prime factor 2
	for (LL i = 3; i < MAX; i += 2){
		if (!v[i]){
			sp[i] = i;
			for (LL j = i; (j*i) < MAX; j += 2){
				if (!v[j*i])	v[j*i] = true, sp[j*i] = i;
			}
		}
	}
}

int main(){
	Sieve();
	din(n);
	VI v;
	for (int i = 0; i < n; ++i)
	{
		din(var);
		v.PB(var);
	/* code */
	}
	ans[1] = 0;
	set<int> s;
	for (int i = 0; i < n; ++i)
	{
		int x = v[i];
		s.clear();
		// trace(x,i);
		while(x>1){
			if(s.count(sp[x])==0){
				ans[sp[x]]++;
				s.insert(sp[x]);
			}
			// trace(sp[x]);
			x = x/sp[x];
		}
		/* code */
	}
	for (int i = 2; i < 10000000; ++i)
	{
		ans[i+1] = ans[i+1]+ans[i];
		// if(ans[i]==958) break;
		// trace(i,ans[i]);
		/* code */
	}
	// trace
	din(q);
	VI l,r;
	for (int i = 0; i < q; ++i)
	{
		din(x);din(y);
		l.PB(x);
		r.PB(y);
		/* code */
	}
	for (int i = 0; i < q; ++i)
	{
		// din(l[i]);din(r[i]);
		LL anss;
		if(r[i]>=10000000) r[i] = 10000000;
		if(l[i]>=10000000) anss = 0;
		else anss = ans[r[i]] - ans[l[i]-1];
		llout(anss);
		/* code */
	}
	// for (int i = 0; i < 10000000; i++)	{trace(i,sp[i]);}
	// acout<<"lol";
    return 0;
}
