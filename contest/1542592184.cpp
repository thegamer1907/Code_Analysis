#include<bits/stdc++.h>
#pragma GCC optimize("O3")

using namespace std;

typedef pair<int,int>   II;
typedef vector< II >      VII;
typedef vector<int>     VI;
typedef vector< VI > 	VVI;
typedef long long int 	LL;

#define PB push_back
#define MP make_pair
#define F first
#define S second
#define SZ(a) (int)(a.size())
#define ALL(a) a.begin(),a.end()
#define SET(a,b) memset(a,b,sizeof(a))
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

#define si(n) scanf("%d",&n)
#define dout(n) printf("%d\n",n)
#define sll(n) scanf("%lld",&n)
#define lldout(n) printf("%lld\n",n)
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

#define TRACE

#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1){
	cerr << name << " : " << arg1 << std::endl;
}template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args){
	const char* comma = strchr(names + 1, ',');cerr.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);
}
#else
#define trace(...)
#endif

//FILE *fin = freopen("in","r",stdin);
//FILE *fout = freopen("out","w",stdout);

int main(){
    string pw;
    vector <string> wds;
    int n;
    cin >> pw;
    si(n);
    wds.resize(n);
    REP(i, n){
	cin >> wds[i];
    }
    int fl1=0, fl2=0;
    REP(i, n){
	if(pw[0] == wds[i][0] && pw[1] == wds[i][1]){
	    printf("YES\n");
	    return 0;
	}
	if(pw[0] == wds[i][1]){
	    fl1=1;
	}
	if(pw[1] == wds[i][0]){
	    fl2 = 1;
	}
    }
    if(fl1 && fl2){
	printf("YES\n");
	return 0;
    }
    printf("NO\n");
    return 0;
}
