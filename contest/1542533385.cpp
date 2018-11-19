#include <bits/stdc++.h>
using namespace std;
const int mod = 43200;
int main(){
	int h, m, s, t1, t2;
	scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2);
	h = (h*3600 + m*60 + s)%mod;
	m = (m*60 + s)*12%mod;
	s = s*720%mod;
	t1 = t1*3600%mod;
	t2 = t2*3600%mod;

	int t = t1;
	bool ok = 0;
	while(1){
		if(t == t2){
			ok = 1;
			break;
		}
		else if(t == h || t == m || t == s) break;
		t = (t+1)%mod;
		if(t == t1) break;
	}
	if(ok){
		printf("YES\n");
		return 0;
	}
	t = t2;
	while(1){
		if(t == t1){
			ok = 1;
			break;
		}
		else if(t == h || t == m || t == s) break;
		t = (t+1)%mod;
		if(t == t2) break;
	}
	if(ok) printf("YES\n");
	else printf("NO\n");
}