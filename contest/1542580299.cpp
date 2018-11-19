#include<bits/stdc++.h>
using namespace std;
set<string> st[400][25];
string a[400][2];
int n, x, y, Q;
char s[401];

int main() {
	scanf("%d", &n);
	for(int i = 1; i <= n; i++) {
		scanf("%s", s);
		int m = strlen(s);
		a[i][0] = "";
		for(int j = 0; j < m; j++) {
			string now = "";
			int len = 0;
			if(a[i][0].length() < 21) a[i][0] = a[i][0] + s[j]; 
			for(int k = j; k < m; k++) {
				len++;
				now = now + s[k];
				st[i][len].insert(now);
				if(len > 20) break;
			} 
		}
		for(int j = max(0, m - 21); j < m; j++) 
			a[i][1] = a[i][1] + s[j];
		//cout << a[i][0] << " " << a[i][1] << " " << endl;
	}
	scanf("%d", &Q);
	for(int i = n + 1; i <= n + Q; i++) {
		scanf("%d%d", &x, &y);
		for(int j = 1; j <= 21; j++)
		st[i][j] = st[x][j];
		for(int j = 0; j < a[x][1].length(); j++) 
			for(int k = 0 ; k < a[y][0].length(); k++) {
				string now = "";
				now = now + a[x][1].substr(j, a[x][1].length() - j);
				now = now + a[y][0].substr(0, k + 1);
				st[i][now.length()].insert(now);
				
				if(now.length() > 20) break;
			}
		for(int len = 1; len <= 21; len++) 
			for(set<string>:: iterator it = st[y][len].begin(); it != st[y][len].end(); it++)
				st[i][len].insert(*it);
		int ans = 0;
		for(int len = 1; len <= 21; len++) {
			//if(st[i][len].size()) printf("%d %d\n", st[i][len].size(), len);
			if(st[i][len].size() == (1 << len)) ans = len;
		}
		printf("%d\n", ans);
		a[i][0] = a[x][0];
		a[i][1] = a[y][1];
		if(a[i][0].length() < 21) {
			for(int j = 0; j < a[y][0].length(); j++) {
				a[i][0] += a[y][0][j];
				if(a[i][0].length() > 20) break;
			}
		}
		string now = "";
		if(a[i][1].length() < 21) {
			for(int j = a[x][1].length() - 1; j >= 0; j--) {
				now += a[x][1][j];
				if(now.length() + a[i][1].length() > 20) break;
			}
		}
		reverse(now.begin(), now.end());
		a[i][1] = now + a[i][1];
	//	cout << a[i][0] << " " << a[i][1] << " " << endl;
	}
	return 0;
}