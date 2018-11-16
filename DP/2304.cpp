#include <bits/stdc++.h>
using namespace std;
#define ll long long    
const int MAXN = (int)(2e6 + 7);

int n, m, l, a[MAXN], f[MAXN], cnt[MAXN];

int main(){                 
	while(cin >> n >> m){
	 	for(int i = 0; i < MAXN; i++) cnt[i] = 0;
	 	for(int i = 1; i <= n; i++) cin >> a[i];
	 	f[n] = 1;
	 	cnt[a[n]]++;
	 	for(int i = n - 1; i >= 1; i--){
	 	 	if(cnt[a[i]] == 0){
	 	 	 	++cnt[a[i]];
	 	 	 	f[i] = f[i + 1] + 1;
	 	 	}else f[i] = f[i + 1];
	 	}
	 	while(m--){
	 	 	cin >> l;
	 	 	cout << f[l] << endl;
	 	}
	}
  return 0;
}