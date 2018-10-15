//01:15 10-10-2018 to 01:28 10-10-2018 - Thought on the problem (offline)
//23:04 10-10-2018

#include<iostream>

using namespace std;

#define RE(a, b, c) for(int a=(b); a<(c); a++)

#define MAXN 300000

main(){
	int n, k, a[MAXN];
	cin >> n >> k;
	RE(i, 0, n) cin >> a[i];
	int l=0, r=0, mx=0, ind=0, sm0=0;
	while(l<n){
		while(r<n){
			if(a[r]==0&&sm0==k)
				break;
			if(a[r]==0&&sm0<k)
				sm0++;
			r++;
		}
		if(mx<(r-l)){
			mx = r-l;
			ind = l;
		}
		if(a[l]==0 && l<r) sm0--;
		l++;
		if(r<l) r = l;
	}
	RE(i, ind, ind+mx) a[i] = 1;
	cout << mx << '\n';
	RE(i, 0, n){
		if(i) cout << ' ';
		cout << a[i];
	}
	cout << '\n';
}

//23:15 10-10-2018
