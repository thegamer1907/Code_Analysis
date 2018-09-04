#include<bits/stdc++.h>
#define all(v) v.begin(),v.end()
using namespace std;
const int N = 1e6+10;
char s[N];
int pi[N];
vector<int> v;
int main() {
	scanf("%s", s);
	int n = strlen(s), now = -1;
	pi[0] = -1;
	for(int i = 1; i < n; i++) {
		while(now+1 && s[now + 1] != s[i]) 
			now = pi[now];
		if(s[now+1] == s[i]) pi[i] = ++now;
		else pi[i] = now = -1;
		if(i < n-1) v.push_back(now);
	}
	sort(all(v));
	now = pi[n-1];
	while(now+1) {
		if(binary_search(all(v),now)) {
			for(int i = 0; i <= now; i++) printf("%c", s[i]);
			return 0;
		}
		now = pi[now];
	}
	puts("Just a legend");
	return 0;
}
