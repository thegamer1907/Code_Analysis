#include <bits/stdc++.h>
using namespace std;
char s[105], t[105];
int f[26], l[26];
int main(){
	scanf("%s", s);
	int n;
	scanf("%d", &n);
	bool ok = 0;
	for(int i=0;i<n;i++){
		scanf("%s", t);
		f[t[1]-'a'] = 1;
		l[t[0]-'a'] = 1;
		if(t[0] == s[0] && t[1] == s[1]) ok = 1;
	}
	if(ok || (f[s[0]-'a'] && l[s[1]-'a'])) printf("YES\n");
	else printf("NO\n");
}