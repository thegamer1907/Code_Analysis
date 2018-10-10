#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
#define REPP(i,a,b,c) for(int i=a; i<=b; i+=c)
#define REP(i,a,b) REPP(i,a,b,1)
#define REVV(i,a,b,c) for(int i=a; i>=b; i-=c)
#define REV(i,a,b) REVV(i,a,b,1)
#define FOR(i,a) REP(i,0,a-1)
#define FORD(i,a) REV(i,a-1,0)
#define PB push_back
#define POB pop_back
#define MP make_pair
#define FI first
#define SE second
typedef pair < int , int > ii;
typedef pair < int , ii > iii;


ll n,m,k;

bool check(ll x){
	ll cnt = 0;
	REP(i,1,n){
		cnt += min(m,x / i);
	}
	
	return cnt >= k;
}

int main(){
	cin >> n >> m >> k;
	ll l = 1, r = n*m, mid, ans;
	while(l <= r){
		mid = (l+r)/2;
		if(check(mid)){
			r = mid - 1;
			ans = mid;
		}
		else{
			l = mid + 1;
			
		}
	}
	cout << ans << endl;
	return 0;
}
