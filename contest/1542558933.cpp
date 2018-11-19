#include<bits/stdc++.h>

using namespace std;

#define ll long long

#define all(x) x.begin(), x.end()

int main(){

	cin.tie(0);
	cin.sync_with_stdio(0);

	#ifdef Cyborg101
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

		
	int n, k;
	cin >> n >> k;

	int cnt[32] = {};

	for(int i = 0; i < n; ++i){
		int state = 0;
		for(int j = 0; j < k; ++j){
			int x;
			cin >> x;
			state = state * 2 + x;
		}
		cnt[state]++;
	}

	bool ok = false;

	int states = 1 << k;

	for(int i = 0; i < states; ++i){
		if(ok) break;
		for(int j = 0; j < states; ++j){
			if(i & j) continue; //need non intersecting subsets
			if(cnt[i] && cnt[j]){
				ok = true;
				break;
			}
		}
	}

	puts(ok ? "YES" : "NO");

	return 0;
	
}