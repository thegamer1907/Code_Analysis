#include<bits/stdc++.h>
using namespace std;
char ch[210][10100];
char pre[210][10101];
char suf[210][10101];
int mx[210], len[1100], len1[210], len2[210];
bool ok[10000];
int calc(char *s, int l){
	int mx = 0;
//	cout <<s + 1 <<endl;
	for (int i = 1; i <= 12; i ++){
		if (i > l) break;
		memset(ok, 0, sizeof(ok));
		int x = 0, tot = 0;
		for (int j = 1; j <= i; j ++)
			x = (x << 1) + s[j] - '0';
			
			if (x < 0 || x > 10000) break;
		ok[x] = 1; tot ++;
		for (int j = i + 1; j <= l; j ++){
			x = ((x - ((s[j - i] - '0') << (i - 1))) << 1);
			x += s[j] - '0';
			if (x < 0 || x > 10000) break;
			if (!ok[x]) tot ++, ok[x] = 1;
		}
		if (tot == (1 << i)) mx = i;
	}
	return mx;
}
int main(){
	int n; scanf("%d", &n);
	for (int i = 1; i <= n; i ++){
		scanf("%s", ch[i] + 1);
		len1[i] = len2[i] = len[i] = strlen(ch[i] + 1);
		for (int j = 1; j <= len[i]; j ++)
			pre[i][j] = suf[i][j + 5000 - len[i]] = ch[i][j];
		mx[i] = calc(ch[i], len1[i]);
//		cout <<mx[i] <<endl;
	}
	int m; scanf("%d", &m);
	for (int i = n + 1; i <= n + m; i ++){
		int a = i - 2, b = i - 1;
		scanf("%d%d", &a, &b);
		mx[i] = max(mx[a], mx[b]);
		for (int j = 1; j <= len1[a]; j ++)
			pre[i][j] = pre[a][j];
		for (int j = len1[a] + 1; j <= 5000; j ++)
			pre[i][j] = pre[b][j - len1[a]];
			
		len1[i] = min(5000, len1[a] + len1[b]);
		
		for (int j = 5000; j > 5000 - len2[b]; j --)
			suf[i][j] = suf[b][j];
			
		for (int j = 5000 - len2[b]; j >= 1 && (j + len2[b] <= 5000); j --)
			suf[i][j] = suf[a][j + len2[b]];
			
		len2[i] = min(5000, len2[a] + len2[b]);
		for (int j = 5000; j > 5000 - len2[a]; j --)	
			ch[i][j] = suf[a][j];
		for (int j = 5001; j < 5001 + len1[b]; j ++)
			ch[i][j] = pre[b][j - 5000];
			
		int st = 1;
		for (int j = 1; j <= 10000; j ++)
			if (ch[i][j] != 0){ st = j; break; }
		int ed = 10000;
		for (int j = 10000; j >= 1; j --)
			if (ch[i][j] != 0){ ed = j; break; }
			
		mx[i] = max(mx[i], calc(ch[i] + st - 1, ed - st + 1));
		
		printf("%d\n", mx[i]);
	}
	return 0;
}