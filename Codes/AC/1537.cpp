#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < int(n); i++)
#define FOR(i, a, b) for (int i = a; i < int(b); i++)
#define FOREACH(i, v) for (__typeof((v).begin()) i = (v).begin(); i != (v).end(); i++)
#define SIZE(v) ((int)(v).size())
#define pb push_back
#define mp make_pair
#define st first
#define nd second
#define ll long long
#define pii pair<int, int>

const int MAX = 100100;

int n;
ll S;
ll a[MAX];
int id[MAX];
ll K;


bool compare(int i, int j) {
	return a[i] + ((ll)(i + 1))*K < a[j] + ((ll)(j + 1))*K;
}


ll possible(int k) {
	if(k == 0) return 0;
	else {
		K = k;
		sort(id, id + n, compare);
		ll ans = 0;
		REP(i, k) {
			//printf("i = %d, id = %d\n", i, id[i]); 
			ans += a[id[i]] + ((ll)(id[i] + 1))*K;
			if(ans > S) {
				ans = -1;
				break;
			}
		}
		return ans;
	}
}

int main() {
	scanf("%d %lld", &n, &S);
	REP(i, n) scanf("%lld", a + i);
	REP(i, n) id[i] = i;
	int l = 0, m, r = n;
	while(l != r) {
		m = (l + r + 1)/2;
		if(possible(m) >= 0) l = m;
		else r = m - 1;
	}
	printf("%d %lld\n", l, possible(l));
	
	//printf("\n");
	//K = 3;
	//sort(id, id + n);
	//REP(i, n) printf("(%lld %lld) ", a[id[i]], a[id[i]] + ((ll)(id[i] + 1))*K);
	//printf("\n");
}