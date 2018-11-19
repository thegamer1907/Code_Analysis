#include<cstdio>
bool fir[50], sec[50], ok;
char s[5], s1[5];
int n;
int main() {
	scanf("%s", s);
	scanf("%d", &n);
	for(int i = 1; i <= n; i++) {
		scanf("%s", s1);
		fir[s1[0]-'a'] = true;
		sec[s1[1]-'a'] = true;
		if(s[0] == s1[0] && s[1] == s1[1]) ok = true;
	}
	if((fir[s[1]-'a'] && sec[s[0]-'a']) || ok) printf("YES\n");
	else printf("NO\n");
	return 0;
}
