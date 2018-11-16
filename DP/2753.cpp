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


int main(){
	int n; scanf("%d", &n);
	
	int bill[] = {100, 20, 10, 5, 1};
	int ans = 0;
	REP(i, 5){
		ans += n/bill[i];
		n %= bill[i];
	}
	printf("%d\n", ans);
}