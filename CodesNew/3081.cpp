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


const int MAX = 1001000;
char s[MAX];

int main(){
	int k; scanf("%d", &k);
	scanf("%s", s);
	int len = strlen(s);
	
	
	if(k == 0){
		int last = -1;
		ll ans = 0;
		REP(i, len){
			if(s[i] == '0') ans += i - last;
			if(s[i] == '1') last = i;
		}
		
		printf("%lld\n", ans);
		return 0;
	}
	
	int c[] = {0, 0};
	int l[] = {0, 0};
	ll ans = 0;
	REP(i, len){
		if(s[i] == '1') c[0]++, c[1]++;
		bool p;
		p = false;
		while(c[0] >= k){
			if(s[l[0]] == '1') c[0]--;
			l[0]++;
			p = true;
		}
		if(p) c[0]++, l[0]--;
		
		p = false;
		while(c[1] >= k + 1){
			if(s[l[1]] == '1') c[1]--;
			l[1]++;
			p = true;
		}
		if(p) c[1]++, l[1]--;
		//printf("i = %d, %d %d\n", i, l[0], l[1]);
		ans += l[0] - l[1] + (c[0] == k && c[1] == k ? 1 : 0);
	}
	printf("%lld\n", ans);
}