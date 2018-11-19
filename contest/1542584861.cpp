#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>
#include <queue>
#define D(x) cout << #x << "=" << x << " "
#define E puts("")
// #define MP(x, y) make_pair((x), (y))
using namespace std;
inline int getint() {
	int a = 0, f = 1; char c = getchar();
	while (c > '9' || c < '0') {if (c == '-') f = -1; c = getchar();}
	while (c >= '0' && c <= '9') {a = a * 10 + c - '0'; c = getchar();}
	return a * f;
}
const int MAXN = 100 + 3;
int len[MAXN], pat[MAXN][MAXN];

int main(int argc, char const *argv[]) {
	// freopen("in.in", "r", stdin);
	// freopen("out.out", "w", stdout);
	static string str, s[MAXN];
	cin >> str;
	int strlen = str.length();
	int n = getint();
	for (int i = 1; i <= n; i++) {
		cin >> s[i]; len[i] = s[i].length();
		for (int j = 0; j < strlen; j++) {
			bool flag = 0; int t = j;
			for (int k = 0; k < len[i] && t < strlen && !flag; k++, t++) {
				if (s[i][k] != str[t]) flag = 1;
			}
			if (flag == 0) pat[j][t] = 1;
		}
		for (int j = 0; j < len[i]; j++) {
			bool flag = 0; int t = 0;
			for (int k = j; k < len[i] && t < strlen && !flag; k++, t++) {
				if (s[i][k] != str[t]) flag = 1;
			}
			if (flag == 0) pat[0][t] = 1;
		}
	}
	/*
	for (int i = 0; i <= strlen; i++) {
		for (int j = 0; j <= strlen; j++)
			cout << pat[i][j] << " ";
		E;
	}
	E;
	*/
	for (int k = 0; k <= strlen; k++)
		for (int i = 0; i <= strlen; i++)
			for (int j = 0; j <= strlen; j++)
				if (pat[i][k] && pat[k][j]) pat[i][j] = 1;
	puts(pat[0][strlen] == 1 ? "YES" : "NO");

/*
	queue<pair<string, int>> q;
	q.push(MP("", 0));
	while (!q.empty()) {
		string ss = q.front().first;
		int poi = q.front().second;
		if (poi >= n) {
			puts("YES"); return 0;
		}
		q.pop();
		for (int i = 1; i <= n; i++) {
			if (s[i][0] == str[poi]) {
				int flag = 0, t = poi;
				for (int j = 0; t < strlen && j < len[i] && !flag; j++, t++) {
					if (s[i][j] != str[t]) flag = 1;
				}
				if (!flag) q.push(MP(ss + s[i], poi + len[i]));
			}
		}
	}
	puts("NO");
*/
	return 0;
}