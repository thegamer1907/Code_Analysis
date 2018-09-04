#include<bits/stdc++.h>
#define MST(a,b) memset(a,b,sizeof(a))
using namespace std;

template<class T> void get(T &x) {x = 0;char c = getchar();for( ; c < '0' || c > '9' ; c = getchar());for( ; c >= '0' && c <= '9' ; c = getchar()) x = x*10+c-'0';}

typedef long long LL;

LL n;
bool check(LL k,LL n) {
	LL sum = 0,t = n;
	while(n > 0) {
		if(n < k) {sum += n;n = 0;}
		else {sum += k;n -= k;}
		n -= n/10;
	}
//cout << k << ' ' << sum << endl;
	if(sum >= t/2+t%2) return 1;
	else return 0;
}

int main() {
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin >> n;
	LL l = 0 , r = n;
	for(LL mid = l+r>>1 ; l < r-1 ; mid = l+r>>1) 
		if(check(mid,n)) r = mid;
		else l = mid;
	cout << r << endl;
	return 0;
}

