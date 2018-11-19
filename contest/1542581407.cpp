#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long long unsigned llu;
typedef long double ld;

const int inf = 0x3c3c3c3c;
const ll infl = 0x3c3c3c3c3c3c3c3c;

set<int> si;

int main(){
	cin.tie(NULL);
	cin.sync_with_stdio(false);
	cout.sync_with_stdio(false);
	int n, k;
	cin >> n >> k;
	for(int i = 0; i < n; i++){
		int w = 0;
		for(int j = 0; j < k; j++){
			int v;
			cin >> v;
			w *= 2;
			w += v;
		}
		si.insert(w);
	}
	bool is = false;
	if(si.find(0) != si.end()) return !printf("YES\n");
	for(int v : si){
		int w = (~v & ((1 << k) - 1));
		for(int i = w; i; i = ((i - 1) & w)){
			if(si.find(i) != si.end()){
				is = true;
				break;
			}
		}
		if(is) break;
	}
	printf("%s", is ? "YES" : "NO");
	return 0;
}