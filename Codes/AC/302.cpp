#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

const int INF = 0x3c3c3c3c;
const long long INFL = 0x3c3c3c3c3c3c3c3c;

vector<int> pile;

int main(){
	cin.sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	int curr = 0;
	pile.push_back(0);
	for(int i = 0; i < n; i++){
		int v;
		cin >> v;
		curr += v;
		pile.push_back(curr);
	}
	int m;
	cin >> m;
	while(m--){
		int q;
		cin >> q;
		int p = lower_bound(pile.begin(), pile.end(), q) - pile.begin();
		printf("%d\n", p);
	}
}