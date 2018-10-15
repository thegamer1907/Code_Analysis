#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
#define PB push_back
#define POB pop_back
#define MP make_pair
#define FI first
#define SE second
#define REPP(i,a,b,c) for(int i=a; i<=b; i+=c)
#define REP(i,a,b) REPP(i,a,b,1)
#define REVV(i,a,b,c) for(int i=a; i>=b; i-=c)
#define REV(i,a,b) REVV(i,a,b,1)
#define FOR(i,a) REP(i,0,a-1)
#define FORD(i,a) REV(i,a-1,0)
typedef pair < int , int > ii;
typedef pair < int , ii > iii;
typedef vector < int > vi;
typedef vector < ii > vii;

const int N = 100005;

int a[5*N];

int main(){
	int n;
	cin >> n;
	int x;
	FOR(i,n){
		cin >> a[i];
	}
	sort(a,a+n);
	int ans = (n+1)/2;
	int idx = ans;
	FOR(i,(n+1)/2){
		while(idx < n && a[idx] < 2*a[i]){
			idx++;
			ans++;
		}
		idx++;
	}
	cout << ans << endl;
	return 0;
}
