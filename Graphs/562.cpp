//=============================================
// Author   :   NAVPUN31
// Name     :   Naveen Punjabi
//=============================================

#include <bits/stdc++.h>
using namespace std;
#define ll          long long
#define ld          long double
#define pii         pair<int ,int>
#define pll         pair<ll ,ll>
#define pld         pair<ld ,ld>
#define vi          vector<int>
#define vll         vector<ll>
#define F           first
#define S           second
#define hell        1000000007
#define INF         INT_MAX
#define MINF        INT_MIN
#define INFL        LONG_LONG_MAX
#define MINFL       LONG_LONG_MIN
#define rep(i,a,b)  for(ll i=a;i<b;i++)
#define repd(i,a,b) for(ll i=a;i>=b;i--)
#define pb          push_back
#define bs          binary_search
#define mp          make_pair
#define all(x)      x.begin(),x.end()
#define out(x)      cout << setprecision(20) << x << " ";
#define outln(x)    cout << setprecision(20) << x << endl;
#define ret(x)      cout << setprecision(20) << x << endl; return;
#define mset(x)     memset(x, 0, sizeof(x));
#define ios         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define print(x,y)  for(int ii=0;ii<y;ii++){cout << x[ii] << " ";} outln("");
#define printv(x)   for(int ii=0;ii<(int)x.size();ii++){out(x[ii])} outln("");



string f(string s){
	for(int i = 0; i < s.length()-1; i++){
		if(s[i]=='B' && s[i+1]=='G'){
			swap(s[i],s[i+1]);
			i++;
		}
	}
	return s;
}

void run(){
	int n, t;
	cin >> n >> t;
	string s;
	cin >> s;

	for(int i = 0; i < t; i++){
		s = f(s);
	}

	cout << s << endl;
}



void pre(){
	ios;
    #ifndef ONLINE_JUDGE
	freopen("input", "r", stdin);
	freopen("output", "w", stdout);
	#endif
}

signed main(){
    pre();
    int tests = 1;
    // cin >> tests;
    for(int i = 1; i <= tests; i++) run();
    return 0;
}
