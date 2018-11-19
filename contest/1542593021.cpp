#include<bits/stdc++.h>
using namespace std;

char s[10009][5];
char t[5];
int n;

int main(){
	scanf("%s", &t);
	scanf("%d", &n);
	for (int i=1; i<=n; i++){
		scanf("%s", &s[i]);
		if (s[i][0] == t[0] && s[i][1] == t[1]){
			puts("YES"); return 0;
		}
	}
	for (int i=1; i<=n; i++)
		for (int j=1; j<=n; j++)
			if (s[i][1] == t[0] && s[j][0] == t[1]){
				puts("YES"); return 0;
			}
	puts("NO");
	return 0;
}
