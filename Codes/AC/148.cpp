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
#define vll         vector<ll>
#define F			first
#define S			second
#define hell        1000000007
#define INF         INT_MAX
#define MINF        INT_MIN
#define INFL        LONG_LONG_MAX
#define MINFL       LONG_LONG_MIN
#define rep(i,a,b)  for(ll int i=a;i<b;i++)
#define repd(i,a,b) for(ll int i=a;i>=b;i--)
#define pb          push_back
#define bs          binary_search
#define mp          make_pair
#define all(x)		x.begin(),x.end()
#define out(x)      cout << setprecision(30) << x << " ";
#define outln(x)    cout << setprecision(30) << x << endl;
#define ret(x)      cout << setprecision(30) << x << endl; return;
#define mset(x)     memset(x, 0, sizeof(x));
#define ios         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define print(x,y)  for(int ii=0;ii<y;ii++){out(x[ii])} outln("");
#define printv(x)   for(int ii=0;ii<(int)x.size();ii++){out(x[ii])} outln("");

ll n,m;
void run(){
	cin >> n;
	ll a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
		if(i!=0){
			a[i] += a[i-1];
		}
	}
	cin >> m;
	while(m--){
		ll q; cin >> q;
		int in = lower_bound(a,a+n,q)-a;
		in++;
		outln(in);
	}
}

int main(){
    ios;
    int tests = 1;
//    cin >> tests;
    for(int i = 1; i <= tests; i++)	run();
    return 0;
}
