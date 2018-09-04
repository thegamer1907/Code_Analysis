#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
const int maxn = 1e6 + 10;
char a[maxn];
int n, nxt[maxn];
bool vis[maxn];
int main()
{
	scanf("%s", a + 1);
	n = strlen(a + 1);
	nxt[1] = 0;
	for(int i = 2, j = 0; i <= n; i++) {
		while(j > 0 && a[i] != a[j + 1]) j = nxt[j];
		if(a[i] == a[j + 1]) j++;
		nxt[i] = j;
	}
	for(int i = 1; i < n; i++) vis[nxt[i]] = 1;
	while(nxt[n]) {
		if(vis[nxt[n]]) break;
		nxt[n] = nxt[nxt[n]];
	}
	if(nxt[n] == 0) printf("Just a legend\n");
	else {
		for(int i = 1; i <= nxt[n]; i++) printf("%c", a[i]); 
	}
	return 0;
}
