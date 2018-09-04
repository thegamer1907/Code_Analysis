#include <bits/stdc++.h>
#define FOR(i,s,e) for(int i=(s);i<=(e);i++)
#define FORD(i,s,e) for(int i=(s);i>=(e);i--)
#define ALL(k) (k).begin(),(k).end()
#define e1 first
#define e2 second
#define mp make_pair
#define pb push_back
#define eb emplace_back

using namespace std;
typedef long long LL;
typedef unsigned long long LLU;
typedef long double LD;
typedef pair<int,int> PII;
typedef pair<LL,LL> PLL;
typedef vector<int> VI;
const bool print=false;

const int N=57;
const LL mod=1e9+7;
bool checkPossible(LL m, LL n){
	LL sum = 0;
	LL cur = n;
	while(cur){
		LL taken = min(cur, m);
		cur -= taken;
		sum += taken;
		cur = cur - cur/10;
	}
	return 2*sum >= n;
}


int main(){
	LL n;
	cin>>n;
	LL l=1, r=n, ans=n;
	while(l<=r){
		LL mid = (l+r)/2;
		if(checkPossible(mid, n)){
			ans = min(ans, mid);
			r = mid-1;
		}
		else{
			l = mid+1;
		}
	}
	cout<<ans<<"\n";
}