#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < int(n); i++)
#define FOREACH(i, v) for (__typeof((v).begin()) i = (v).begin(); i != (v).end(); i++)
#define SIZE(v) ((int)(v).size())
#define pb push_back
#define mp make_pair
#define st first
#define nd second
#define ll long long
#define pii pair<int, int>

const int MAX = 100100;
int a[MAX], ans[MAX];

int main(){
	int n, m; scanf("%d %d", &n, &m);
	vector<pii> qs;
	REP(i, n) scanf("%d", a + i);
	int l;
	REP(i, m){
		scanf("%d", &l); l--;
		qs.pb(mp(l, i));
	}
	sort(qs.begin(), qs.end());

	int j = n;
	set<int> S;
	for(int i = m - 1; i >= 0; i--){
		while(j > qs[i].st){
			S.insert(a[j - 1]);
			j--;
		}
		ans[qs[i].nd] = (int)S.size();
	}
	for(int i = 0; i < m; i++) printf("%d\n", ans[i]);
}