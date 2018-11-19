#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <map>
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
typedef long long LL;

const int MaxN = 200, MaxK = 17;
bool flag[MaxK + 2][(1 << MaxK) + 5];
int n, Q, top[MaxN + 5], Length[MaxN + 5];
pair <string, string> s[MaxN * 2];
vector <int> v[202][MaxK + 2];

void Get(string s, int x)
{
	memset(flag, 0, sizeof(flag));
	int m = s.length();
	for (int l = 0; l < m; l++) {
		int len = 0; int now = 0;
		for (int r = l; r < m; r++) {
			len++;
			if (len > MaxK) break;
			now = (now << 1) + (s[r] - '0');
			if (!flag[len][now]) {
				flag[len][now] = true;
				v[x][len].push_back(now);
			}
		}
	}
	for (int len = 1; len <= MaxK; len++) 
		if (v[x][len].size() == (1 << len)) top[x] = len;
} 

string GetPred(string t)
{
	int m = t.length();
	string res = "";
	for (int i = 0; i < min(m, MaxK); i++) res += t[i];
	return res;
}

string GetSuff(string t)
{
	int m = t.length();
	string res = "";
	for (int i = max(m - MaxK, 0); i < m; i++) res += t[i];
	return res;
}


void Init()
{
	for (int i = 1; i <= n; i++) {
		string t;
		cin >> t;
		Get(t, i);
		s[i].first = GetPred(t);
		s[i].second = GetSuff(t);
		Length[i] = t.length();
		//printf("%d\n", top[i]);
	}
}

void Merge(int a, int b, int x)
{
	memset(flag, 0, sizeof(flag));
	for (int len = max(top[a], top[b]) + 1; len <= MaxK; len++) {
		for (int i = 0; i < v[a][len].size(); i++) {
			int t = v[a][len][i];
			if (!flag[len][t]) flag[len][t] = true, v[x][len].push_back(t);
		}
		for (int i = 0; i < v[b][len].size(); i++) {
			int t = v[b][len][i];
			if (!flag[len][t]) flag[len][t] = true, v[x][len].push_back(t);
		}
	}
	string sa = s[a].second;
	string sb = s[b].first;
	s[x].first = s[a].first;
	s[x].second = s[b].second;
	if (Length[a] < MaxK) {
		for (int i = 0; i < min(Length[b], MaxK - Length[a]); i++)
			s[x].first += s[b].first[i];
	}
	if (Length[b] < MaxK) {
		int cnt = Length[b];
		for (int i = s[a].second.length() - 1; i >= 0; i--) {
			s[x].second = s[a].second[i] + s[x].second; cnt++;
			if (cnt == MaxK) break;
		}
	}
	Length[x] = min(100, Length[a] + Length[b]);
	//cout << s[x].first << " " << s[x].second << endl;
	string nowS = sa + sb;
	int m = nowS.length();
	//cout << nowS << endl;
	for (int l = 0; l < m; l++) {
		int len = 0; int now = 0;
		for (int r = l; r < m; r++) {
			len++;
			if (len > MaxK) break;
			now = (now << 1) + (nowS[r] - '0');
			if (len <= max(top[a], top[b])) continue;
			if (!flag[len][now]) {
				flag[len][now] = true;
				v[x][len].push_back(now);
			}
		}
	}
	for (int len = max(top[a], top[b]) + 1; len <= MaxK; len++) 
		if (v[x][len].size() == (1 << len)) {
			top[x] = len;
		}
	top[x] = max(top[x], max(top[a], top[b]));
}

void Solve()
{
	scanf("%d", &Q);
	for (int i = n + 1; i <= n + Q; i++) {
		int a, b; scanf("%d%d", &a, &b);
		Merge(a, b, i);
		printf("%d\n", top[i]);
	}
}

int main()
{
	while (~scanf("%d", &n)) {
		Init();
		Solve();
	}
	return 0;
}