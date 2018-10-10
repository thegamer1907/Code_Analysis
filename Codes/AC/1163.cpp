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

bool primes[1000005];
void seive(){
	memset(primes,true,sizeof(primes));
	primes[0]=primes[1]=false;
	for(ll i = 0; i < 1000005; i++){
		if(primes[i]){
			for(ll j = i+i; j < 1000005; j+=i){
				primes[j] = false;
			}
		}
	}
}

void run(){
	ll n,m;
	cin >> n >> m;

	string a[n],b[m];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < m; i++){
		cin >> b[i];
	}

	sort(a,a+n);
	int c=0;
	for(int i = 0; i < m; i++){
		if(bs(a,a+n,b[i])){
			c++;
		}
	}

	n-=c;m-=c;
	if(n>m){
		ret("YES");
	}
	else if(n==m){
		if(c%2){
			ret("YES");
		}
		ret("NO");
	}
	ret("NO");
}

int main(){
    ios;
    int tests = 1;
//    cin >> tests;
    for(int i = 1; i <= tests; i++)	run();
    return 0;
}

