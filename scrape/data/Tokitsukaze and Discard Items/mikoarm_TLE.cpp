#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
const int inf = 1e9+7;
const ll INF = 4e18+5;

int n, m, k, x;
int res; 
int range;


int main() {
	scanf("%d%d%d", &n, &m, &k);
	vector<int> p;
	for(int i = 0; i < m; ++i) {
		scanf("%d", &x);
		p.push_back(x); 
	}
	int us = 0;
	range = k;
	for(int i = 0; i < (int)p.size(); ++i) {
		x = p[i];
		if(x <= range) {
			if(us == 0) res++;
			us++;
			continue;
		}
		range += us;
		us = 0;
		if(x > range) {
			int ile = (x-range+k-1) / k; 
			range += ile*k;
		}
		i--;
		continue;
	}
	printf("%d\n", res);
}