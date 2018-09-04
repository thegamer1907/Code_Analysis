//15:06 14-08-2018
//15:19 14-08-2018
//15:56 14-08-2018
//16:09 14-08-2018

#include<iostream>
#include<algorithm>
#include<utility>

using namespace std;

#define RE(a, b, c) for(int a=(b); a<(c); a++)
#define MAX 200001

#ifdef DBG
	#define PAP(a, i, n) cerr << #a ":\n"; RE(i, 0, n) cerr << ' ' << a[i].first; cerr << '\n'; RE(i, 0, n) cerr << ' ' << a[i].second; cerr << '\n';
	#define PI(a) cerr << #a ": " << a << '\n';
#endif
#ifndef DBG
	#define PAP(a, i, n)
	#define PI(a)
#endif

int n, m, k, x, s;
pair<int, int> f[MAX], se[MAX];
long long time, mn;

main(){
	cin >> n >> m >> k >> x >> s;
	m++; k++;
	f[0] = {0, x};
	se[0] = {0, 0};
	RE(i, 1, m) cin >> f[i].second;
	RE(i, 1, m) cin >> f[i].first;
	RE(i, 1, k) cin >> se[i].second;
	RE(i, 1, k) cin >> se[i].first;
	mn = n*((long long)(x));
	RE(i, 0, m){
		int cs = f[i].first;
		pair<int, int> cap = {s-cs+1, 0};
		pair<int, int>* pt = lower_bound(se, se+k, cap);
		int j = pt-se;
		if(j==0) continue;
		j--;
		int potr = max(n-(se[j].second), 0);
		time = potr*((long long)(f[i].second));
		mn = min(time, mn);
	}

	PI(n); PI(m); PI(k); PI(x); PI(s);
	PAP(f, i, m);
	PAP(se, i, k);
	
	cout << mn << '\n';
}

//15:54 14-08-2018
//15:59 14-08-2018
//16:26 14-08-2018
