#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define pii pair<int,int> 
#define vi vector<int> 
#define vii vector<pii>
#define srt(a) sort(a.begin(),a.end());
#define se second
#define fi first
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define ford(i, n) for (int i = (int)(n)-1; i >= 0; --i)
#define fore(i, a, b) for (int i = (int)(a); i <= (int)(b); ++i)
template <class T> bool uin(T &a, T b){	return a > b ? (a = b, true) : false; }
template <class T> bool uax(T &a, T b) { return a < b ? (a = b, true) : false; }
 
int  main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
        cout.tie(nullptr);
	cout.precision(10);
	cout << fixed;
#ifdef LOCAL_DEFINE
	freopen("input.txt", "rt", stdin);
#endif

int n; cin>>n;
string x;
vector< string> v;
int f=0;
forn(i,n){
	cin>>x;
	if(!f && x[0]=='O' && x[1]=='O'){
		f=1; x[0]=x[1]='+';}
	else if(!f &&  x[3]=='O' && x[4]=='O'){
	       f=1; x[3]=x[4]='+';}
 v.pb(x);
}
if(f==0) cout<<"NO\n";
else{
	cout<<"YES\n";
	for(auto i:v) cout<<i<<endl;
}

#ifdef LOCAL_DEFINE
	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
 
	return 0;
}
 

