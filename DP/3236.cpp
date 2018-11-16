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

const int MAX = 1001;

int a[MAX];

int main(){
	int n, B; scanf("%d %d", &n, &B);
	REP(i, n) scanf("%d", a + i + 1);
	int cnt[2] = {0, 0};
	
	int last = 0;
	priority_queue<int, vector<int>, greater<int> > pq;
	for(int i = 1; i < n; i++){
		cnt[a[i]%2]++;
		if(cnt[0] == cnt[1]){
			pq.push(abs(a[i] - a[i + 1]));
		}
	}
	
	int ans = 0;
	while(!pq.empty() && pq.top() <= B){
		ans++;
		B -= pq.top();
		pq.pop();
	}
	printf("%d\n", ans);
}