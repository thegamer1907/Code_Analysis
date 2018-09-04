//18:32 03-07-2018
//18:38 03-07-2018

#include<iostream>
#include<algorithm>

using namespace std;

#define MAX 100000
#define RE(a, b, c) for(int a=(b); a<(c); a++)

int n, s;
long long a[MAX], c[MAX];

long long chk(long long k){
	RE(i, 0, n) c[i] = a[i] + k*(i+1);
	sort(c, c+n);
	long long sm = 0LL;
	RE(i, 0, k) sm += c[i];
	return sm;
}

void b_search(){
	int l=0, h=n+1, m;
	long long ans = 0LL;
	while(l!=(h-1)){
		m = l + (h-l)/2;
		long long sm = chk(m);
		if(sm<=s){
			l = m;
			ans = sm;
		}else h = m;
	}
	cout << l << ' ' << ans << '\n';
}

main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> s;
	RE(i, 0, n) cin >> a[i];
	b_search();
}

//18:52 03-07-2018
