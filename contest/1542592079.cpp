#include <bits/stdc++.h>
#define sz(a) int((a).size()) 
#define all(c) (c).begin(),(c).end() 
#define allr(c) (c).rbegin(),(c).rend() 
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++) 
#define printarr(a,n) rep(i,n) cout << a[i] << " "; cout <<endl;
#define REP(i,a,b) for(int i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
#define mp make_pair
#define pb push_back 
#define SET(a,b) memset(a,b,sizeof(a))
#define LET(x,a) __typeof(a) x(a)
#define sd(n) scanf("%d",&n)
#define dout(n) printf("%d\n",n)
#define sl(n) scanf("%lld",&n)
#define lldout(n) printf("%lld\n",n)
#define sortv(a) sort(a.begin(),a.end())
#define test()  int t; cin>>t; while(t--)
#define fi first
#define se second
#define el endl
#define ll long long
#define ull unsigned ll
#define yes() cout << "yes\n"
#define no() cout << "no\n";
#define YES() cout << "YES\n"
#define NO() cout << "NO\n"
#define Yes() cout << "Yes\n"
#define No() cout << "No\n"
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;
 
#ifndef ONLINE_JUDGE
//FILE *fin = freopen("input.txt","r",stdin);
//FILE *fout = freopen("output.txt","w",stdout);
#endif
 
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

 
typedef pair<int,int> PII;
typedef vector<int> VI;
typedef vector< PII > VPII;

const ll mod = 1e9+7;
 
#define N 100005

int main()
{
    fast_io;
    string a;
    cin>>a;
    int n;
    cin>>n;
    string s[n];
    rep(i,n)
    	cin>>s[i];
    rep(i,n)
    	if(s[i]==a)
    	{
    		YES();
    		return 0;
    	}
    rep(i,n)
    {
    	rep(j,n)
    	{
    		if(s[i][1]==a[0] && s[j][0]==a[1])
    		{
    			YES();
    			return 0;
    		}
    		 
    	}
    }
    NO();
    return 0;
} 