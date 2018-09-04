#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long long unsigned llu;
typedef long double ld;

const int inf = 0x3c3c3c3c;
const ll infl = 0x3c3c3c3c3c3c3c3c;
const int MAX_V = 1e7 + 9;

vector<int> prime;
int cnt[MAX_V];
ll partialSum[MAX_V];
bool np[MAX_V];

int main(){
	cin.tie(NULL);
	cin.sync_with_stdio(false); 
	cout.sync_with_stdio(false);
	for(int i = 4; i < MAX_V; i += 2) np[i] = true;
	for(ll i = 3; i * i < MAX_V; i += 2){
		if(np[i]) continue;
		for(ll j = i * i; j < MAX_V; j += i) np[j] = true;
	}
	for(int i = 2; i < MAX_V; i++){
		if(np[i]) continue;
		prime.push_back(i);
	}
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		int v;
		cin >> v;
		cnt[v]++;
	}
	int sz = prime.size();
	for(int i = 0; i < sz; i++){
		int p = prime[i];
		int sum = 0;
		for(int j = p; j < MAX_V; j += p) sum += cnt[j];
		partialSum[p] = sum;
	}
	for(int i = 1; i < MAX_V; i++) partialSum[i] = partialSum[i] + partialSum[i - 1];
	int m;
	cin >> m;
	for(int i = 0; i < m; i++){
		int l, r;
		cin >> l >> r;
		if(l >= MAX_V) l = MAX_V - 1;
		if(r >= MAX_V) r = MAX_V - 1;
		printf("%lld\n", partialSum[r] - partialSum[l - 1]);
	}
	return 0;
}